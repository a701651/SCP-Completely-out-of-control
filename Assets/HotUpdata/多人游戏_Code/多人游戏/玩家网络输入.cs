using Mirror;
using UnityEngine;

/// <summary>
/// 玩家输入上行：客户端按固定频率把「移动 + 朝向 + 跳跃」发给服务器。
/// 只负责采集 / 限流 / 发送 / 在服务器保存，不做移动模拟。
/// 挂在带 NetworkIdentity 的玩家根节点上。
/// </summary>
public class 玩家网络输入 : NetworkBehaviour
{
    [Header("上行")]
    [Tooltip("发送频率。30Hz 足够，不要跟着 InputSystem 回调逐条发。")]
    public float 发送频率 = 30f;

    [Tooltip("服务器超过这个时间没收到输入就把移动清零，防止丢包或切后台后角色一直往前走。")]
    public float 输入超时 = 0.5f;

    [Tooltip("跳跃按下后，在这个时间内落地仍然生效（跳跃缓冲）。")]
    public float 跳跃缓冲 = 0.15f;

    /// <summary>服务器保存的最新移动输入（已归一化）。</summary>
    public Vector2 服务器移动输入 { get; private set; }

    /// <summary>服务器保存的最新朝向（度，仅水平）。</summary>
    public float 服务器偏航角 { get; private set; }

    float _发送计时;
    float _最近输入时间 = -999f;

    bool _跳跃请求;
    float _跳跃请求时间 = -999f;

    bool _已订阅跳跃;

    /// <summary>真正被 CharacterController 移动 / 旋转的节点（当前是「测试角色」）。</summary>
    private Transform _角色节点;

    [Tooltip("留空会自动查找。移动方向以它的视角偏航角为准。")]
    [SerializeField] private 玩家视角 视角;

    /// <summary>
    /// 服务器要旋转的节点，必须和 玩家视角 转的是同一个节点。
    /// 否则服务器转 A、客户端读 B，偏航角每包再叠加一次，角色会绕圈漂移。
    /// </summary>
    private Transform 角色节点
    {
        get
        {
            if (_角色节点 != null) return _角色节点;

            if (视角 == null) 视角 = GetComponent<玩家视角>();

            if (视角 != null && 视角.角色节点 != null)
                return _角色节点 = 视角.角色节点;

            var cc = GetComponentInChildren<CharacterController>(true);
            return _角色节点 = cc != null ? cc.transform : transform;
        }
    }

    private void Awake()
    {
        if (视角 == null) 视角 = GetComponent<玩家视角>();
    }

    // ============================================================
    // 客户端：采集 + 限流发送
    // ============================================================

    private void Update()
    {
        if (!isOwned) return;   // 只有本地控制者上行

        订阅跳跃();

        _发送计时 += Time.deltaTime;

        float 间隔 = 1f / Mathf.Max(1f, 发送频率);
        if (_发送计时 < 间隔) return;

        // 卡顿后不要连发一堆补帧，最多补一帧，避免瞬间刷屏
        _发送计时 = Mathf.Min(_发送计时 - 间隔, 间隔);

        输入帧 帧 = 玩家输入.I != null ? 玩家输入.I.本帧 : default;

        // 发「视角」的偏航角，而不是角色模型当前的偏航角：
        // 服务器据此决定移动方向，保证 W 永远是朝相机看的方向走。
        float 偏航角 = 视角 != null ? 视角.视角偏航角 : 角色节点.eulerAngles.y;

        Cmd输入(帧.移动, 偏航角);
    }

    private void 订阅跳跃()
    {
        if (_已订阅跳跃 || 玩家输入.I == null) return;

        玩家输入.I.跳跃按下 += 发送跳跃;
        _已订阅跳跃 = true;
    }

    private void 发送跳跃()
    {
        if (!isOwned) return;
        Cmd跳跃();
    }

    [Command(channel = Channels.Unreliable)]
    private void Cmd输入(Vector2 移动, float 偏航角)
    {
        // 注意：这里不要写 isLocalPlayer 判断。
        // Command 在服务器执行，远程玩家的 isLocalPlayer 恒为 false，会直接失效。
        // Mirror 的 requiresAuthority 已经保证只有拥有者能调用这个 Command。

        服务器移动输入 = 移动.sqrMagnitude > 1f ? 移动.normalized : 移动;
        服务器偏航角 = 偏航角;

        // 服务器用这个朝向驱动移动（玩家移动用 服务器偏航角 算方向）。
        // Host 模式下本地玩家的朝向已经由 玩家视角 每帧转动，
        // 这里再覆盖会把这一帧的鼠标增量抹掉，导致镜头卡住/回弹。
        if (!isOwned)
            角色节点.rotation = Quaternion.Euler(0f, 偏航角, 0f);

        _最近输入时间 = Time.time;
    }

    [Command]   // 跳跃是边沿事件，必须走可靠通道，不能和移动一起丢
    private void Cmd跳跃()
    {
        _跳跃请求 = true;
        _跳跃请求时间 = Time.time;
    }

    // ============================================================
    // 服务器：对外提供状态
    // ============================================================

    /// <summary>
    /// 取出一次跳跃请求，取出后清零；超过缓冲时间自动作废。
    /// 只在服务器调用。
    /// </summary>
    public bool 取出跳跃请求()
    {
        if (!_跳跃请求) return false;

        if (Time.time - _跳跃请求时间 > 跳跃缓冲)
        {
            _跳跃请求 = false;
            return false;
        }

        _跳跃请求 = false;
        return true;
    }

    private void LateUpdate()
    {
        if (!isServer) return;

        // 超时清零：丢包 / 切后台 / 客户端卡死时，服务器不会让角色一直走
        if (Time.time - _最近输入时间 > 输入超时)
        {
            服务器移动输入 = Vector2.zero;
            _跳跃请求 = false;
        }
    }

    public override void OnStartServer()
    {
        服务器移动输入 = Vector2.zero;
        服务器偏航角 = 角色节点.eulerAngles.y;
        _最近输入时间 = Time.time;
    }

    public override void OnStopClient()
    {
        if (_已订阅跳跃 && 玩家输入.I != null)
            玩家输入.I.跳跃按下 -= 发送跳跃;

        _已订阅跳跃 = false;
        服务器移动输入 = Vector2.zero;
        _跳跃请求 = false;
    }
}
