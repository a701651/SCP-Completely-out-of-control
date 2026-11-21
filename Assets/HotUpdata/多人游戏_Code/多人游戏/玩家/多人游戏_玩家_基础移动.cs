using Mirror;
using UnityEngine;

public class 多人游戏_玩家_基础移动 : NetworkBehaviour
{
    // ---------- 引用 ----------
    private 多人_状态机_玩家_Root _root;
    private CharacterController _controller;

    // ---------- 输入（由 Root 写入） ----------
    private Vector2 输入
    {
        get
        {
            if (_root == null)
                return Vector2.zero;

            _输入 = _root.移动输入;
            return _输入;
        }
        set
        {
            _输入 = value;
        }
    }

    private Vector2 _输入;
    private Vector2 视角输入
    {
        get
        {
            if (_root == null)
                return Vector2.zero;

            _视角输入 = _root.视角输入;
            return _视角输入;
        }
        set
        {
            _视角输入 = value;
        }
    }

    private Vector2 _视角输入;

    [Header("视角")]
    [Tooltip("视角节点，用于旋转视角")]
    public Transform 视角节点;

    [Header("视角设置")]
    [Tooltip("上下俯仰角限制")]
    public float 俯仰上限 = 85f;
    public float 俯仰下限 = -85f;

    private float 俯仰角 = 0f;

    // ---------- 重力设置 ----------
    [Header("重力设置")]
    [Tooltip("重力加速度")]
    public float 重力 = -25f;

    [Tooltip("最大下落速度")]
    public float 最大下落速度 = -50f;

    [Tooltip("贴地时向下的速度，防止角色离开地面")]
    public float 贴地速度 = -2f;

    [Tooltip("当前垂直速度")]
    private float 垂直速度 = 0f;
    [Header("跳跃设置")]
    [Tooltip("跳跃速度")]
    public float 跳跃速度 = 5f;

    // ============================================================
    // 生命周期
    // ============================================================

    private void OnEnable()
    {
        _root = GetComponentInParent<多人_状态机_玩家_Root>();
        _controller = GetComponent<CharacterController>();

        if (_root == null)
            Debug.LogError("[基础移动] 状态机根节点未指定！");

        if (_controller == null)
            Debug.LogError("[基础移动] CharacterController 未指定！");

        if (视角节点 == null)
            Debug.LogError("[基础移动] 视角节点未指定！");
        
        _root.跳跃 += 跳跃;
    }

    private void LateUpdate()
    {
        // 仅服务器执行物理移动
        if (isServer)
        {
            移动逻辑();
            处理视角旋转();
        }
    }

    // ============================================================
    // 旋转视角
    // ============================================================

    public void 旋转视角(Vector2 delta, float 灵敏度)
    {
        if (视角节点 == null) return;

        // 左右偏航
        transform.Rotate(
            Vector3.up,
            delta.x * 灵敏度,
            Space.Self
        );

        // 上下俯仰
        俯仰角 -= delta.y * 灵敏度;

        俯仰角 = Mathf.Clamp(
            俯仰角,
            俯仰下限,
            俯仰上限
        );

        视角节点.localRotation =
            Quaternion.Euler(俯仰角, 0f, 0f);
    }

    // ============================================================
    // 移动 + 重力
    // ============================================================

    private void 移动逻辑()
    {
        if (_controller == null || !_controller.enabled)
            return;

        float deltaTime = Time.deltaTime;

        // ---------- 地面检测 ----------
        if (_controller.isGrounded)
        {
            // 保持角色贴地
            if (垂直速度 < 0f)
            {
                垂直速度 = 贴地速度;
            }
        }
        else
        {
            // 应用重力
            垂直速度 += 重力 * deltaTime;

            // 限制最大下落速度
            垂直速度 = Mathf.Max(
                垂直速度,
                最大下落速度
            );
        }

        // ---------- 水平移动 ----------
        Vector2 当前输入 = 输入;

        if (当前输入.sqrMagnitude > 1f)
            当前输入.Normalize();

        Vector3 方向 = transform.TransformDirection(
            new Vector3(当前输入.x, 0f, 当前输入.y)
        );

        方向.y = 0f;

        // ---------- 合并水平移动与垂直移动 ----------
        Vector3 移动向量 =
            方向 * _root.移动速度 +
            Vector3.up * 垂直速度;

        _controller.Move(移动向量 * deltaTime);
    }
    
    private void 处理视角旋转()
    {
        Vector2 delta = 视角输入;

        if (delta.sqrMagnitude <= 0.000001f)
            return;

        // 左右旋转玩家身体
        transform.Rotate(
            Vector3.up,
            delta.x,
            Space.Self
        );

        // 上下旋转相机节点
        俯仰角 -= delta.y;

        俯仰角 = Mathf.Clamp(
            俯仰角,
            俯仰下限,
            俯仰上限
        );

        if (视角节点 != null)
        {
            视角节点.localRotation =
                Quaternion.Euler(俯仰角, 0f, 0f);
        }
    }

    // ============================================================
    // 跳跃接口（可由 Root 或其他系统调用）
    // ============================================================

    public void 跳跃()
    {
        if (!isServer) return;

        if (_controller == null || !_controller.isGrounded)
            return;

        垂直速度 = 跳跃速度;
    }
}