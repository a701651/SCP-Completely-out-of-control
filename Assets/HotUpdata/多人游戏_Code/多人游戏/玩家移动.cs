using UnityEngine;

/// <summary>
/// 玩家移动模拟。只在服务器执行。
/// 挂在玩家根节点上，cc 指向带 CharacterController 的角色节点。
/// 输入由 玩家网络输入 提供，位置由 玩家同步 下发。
/// </summary>
public class 玩家移动 : MonoBehaviour
{
    [SerializeField] private CharacterController cc;
    [SerializeField] private 玩家网络输入 网络输入;

    [Header("水平移动")]
    public float 速度 = 5f;

    [Header("重力")]
    public float 重力 = -25f;
    public float 最大下落速度 = -50f;
    [Tooltip("贴地时给一个向下的速度，防止角色离地。")]
    public float 贴地速度 = -2f;

    [Header("跳跃")]
    public float 跳跃速度 = 5f;

    [Header("出生")]
    [Tooltip("出生时把胶囊底部对齐到脚下地面，避免卡进地板后又被物理挤出去。")]
    public bool 出生贴地 = true;

    [Tooltip("只有离地面这么近才做贴地校正（米）；悬空出生交给重力。")]
    public float 贴地容差 = 0.5f;

    private float 垂直速度;
    private bool 已贴地;

    private void Awake()
    {
        // 脚本在根节点上，CharacterController 在子节点「测试角色」上
        if (cc == null) cc = GetComponentInChildren<CharacterController>(true);
        if (网络输入 == null) 网络输入 = GetComponentInParent<玩家网络输入>();

        if (网络输入 == null)
            Debug.LogError("[玩家移动] 找不到 玩家网络输入（应在父节点上）", this);

        // 防御：预制体/场景里如果残留了第二个 CharacterController，
        // 两个胶囊重叠会在出生瞬间把角色挤开，表现就是进入时位移一段。
        禁用多余控制器();
    }

    private void 禁用多余控制器()
    {
        foreach (var 控制器 in GetComponentsInChildren<CharacterController>(true))
        {
            if (控制器 != cc) 控制器.enabled = false;
        }
    }

    private void Start()
    {
        if (网络输入 == null || !网络输入.isServer) return;

        if (出生贴地) 出生贴地校正();
    }

    public void 出生贴地校正()
    {
        if (已贴地 || cc == null) return;
        已贴地 = true;

        // 胶囊在世界空间的中心 / 底部（只考虑水平旋转，y 方向 center 不变）
        Vector3 中心 = cc.transform.position + cc.center;
        float 半高 = cc.height * 0.5f;

        // 从胶囊顶部稍内侧往下打，避免射线在头顶上方先打中天花板/屋顶
        Vector3 起点 = 中心 + Vector3.up * (半高 - 0.05f);
        var 命中 = Physics.RaycastAll(起点, Vector3.down, cc.height + 2f, ~0, QueryTriggerInteraction.Ignore);

        float 地面Y = float.NegativeInfinity;
        foreach (var 点 in 命中)
        {
            if (点.collider.transform.IsChildOf(transform)) continue;   // 跳过自己身上的碰撞体
            if (点.point.y > 地面Y) 地面Y = 点.point.y;                  // RaycastAll 无序，取最高的地面
        }

        if (float.IsNegativeInfinity(地面Y))
        {
            Debug.Log("[玩家移动] 出生贴地：脚下没有找到地面，交给重力", this);
            return;
        }

        float 胶囊底部Y = 中心.y - 半高;

        // 悬空出生就不管，避免把玩家硬拉到很远的楼下
        if (地面Y < 胶囊底部Y - 贴地容差)
        {
            Debug.Log($"[玩家移动] 出生贴地：悬空 {胶囊底部Y - 地面Y:F2}m，交给重力", this);
            return;
        }

        float 目标Y = 地面Y + 半高 - cc.center.y + 0.02f;

        Vector3 目标 = cc.transform.position;
        目标.y = 目标Y;

        cc.enabled = false;
        cc.transform.position = 目标;
        cc.enabled = true;
        Physics.SyncTransforms();

        垂直速度 = 贴地速度;

        Debug.Log($"[玩家移动] 出生贴地：{cc.transform.position} -> {目标}，地面 {地面Y:F2}", this);
    }

    private void Update()
    {
        // 客户端不做物理：位置由 玩家同步 插值，避免两套系统同时改 transform
        if (网络输入 == null || !网络输入.isServer) return;
        if (cc == null || !cc.enabled) return;

        float dt = Time.deltaTime;

        // ---------- 垂直 ----------
        if (cc.isGrounded)
        {
            if (垂直速度 < 0f) 垂直速度 = 贴地速度;
        }
        else
        {
            垂直速度 = Mathf.Max(垂直速度 + 重力 * dt, 最大下落速度);
        }

        // ---------- 水平 ----------
        Vector2 输入 = 网络输入.服务器移动输入;

        // 移动方向由「视角偏航角」决定，而不是角色当前朝向：
        // 即使模型 / 动画 / 网络回包让角色转了个角度，W 也永远朝着相机看的方向走。
        Quaternion 视角旋转 = Quaternion.Euler(0f, 网络输入.服务器偏航角, 0f);
        Vector3 方向 = 视角旋转 * new Vector3(输入.x, 0f, 输入.y);
        方向.y = 0f;
        if (方向.sqrMagnitude > 1f) 方向.Normalize();

        cc.Move((方向 * 速度 + Vector3.up * 垂直速度) * dt);

        // ---------- 跳跃 ----------
        // 落地才起跳，但请求可以提前一点点按下（跳跃缓冲）
        if (cc.isGrounded && 网络输入.取出跳跃请求())
        {
            垂直速度 = 跳跃速度;
        }
    }
}
