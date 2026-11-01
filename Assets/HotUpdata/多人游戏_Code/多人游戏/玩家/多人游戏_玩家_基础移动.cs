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
            {
                return Vector2.zero;
            }
            _输入 = _root.移动输入;
            return _输入;
        }
        set
        {
            _输入 = value;
        }
    }
    private Vector2 _输入;

    [Header("相机")]
    [Tooltip("相机俯仰节点，Player 的子物体")]
    public Transform 视角节点;

    [Header("视角设置")]
    [Tooltip("上下俯仰角限制")]
    public float 俯仰上限 = 85f;
    public float 俯仰下限 = -85f;

    private float 俯仰角 = 0f;

    // ============================================================
    //  生命周期
    // ============================================================

    private void OnEnable()
    {
        _root = GetComponent<多人_状态机_玩家_Root>();
        _controller = GetComponent<CharacterController>();

        if (_root == null)
            Debug.LogError("[基础移动] 状态机根节点未指定！");
        if (_controller == null)
            Debug.LogError("[基础移动] CharacterController 未指定！");
        if (视角节点 == null)
            Debug.LogError("[基础移动] 视角节点未指定！");
    }

    private void LateUpdate()
    {
        if (isServer)
        {
            移动逻辑();
        }
    }
    /// <summary>
    /// 旋转视角。delta 为像素/摇杆增量，灵敏度由调用方（Root）决定。
    /// 左右：转 Player 本体（视线方向）
    /// 上下：转相机 pivot，限制俯仰
    /// </summary>
    public void 旋转视角(Vector2 delta, float 灵敏度)
    {
        if (视角节点 == null) return;

        // 左右偏航
        transform.Rotate(Vector3.up, delta.x * 灵敏度, Space.Self);

        // 上下俯仰
        俯仰角 -= delta.y * 灵敏度;
        俯仰角 = Mathf.Clamp(俯仰角, 俯仰下限, 俯仰上限);
        视角节点.localRotation = Quaternion.Euler(俯仰角, 0f, 0f);
    }

    // ============================================================
    //  移动
    // ============================================================

    void 移动逻辑()
    {
        if (_controller == null) return;
        if (输入 == Vector2.zero) return;
        if (输入.sqrMagnitude > 1f) 输入 = 输入.normalized;

        // 相对角色自身（FPS：视线方向就是移动前方）
        Vector3 方向 = transform.TransformDirection(new Vector3(输入.x, 0f, 输入.y));
        方向.y = 0f;

        _controller.Move(方向 * _root.移动速度 * Time.deltaTime);
    }
}