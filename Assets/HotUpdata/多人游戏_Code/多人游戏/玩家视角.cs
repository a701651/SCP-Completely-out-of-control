using Mirror;
using UnityEngine;

/// <summary>
/// 本地视角：只处理本地玩家。
/// 水平旋转「角色节点」（带 CharacterController 的节点，服务器也会收到同样的偏航角），
/// 俯仰只转相机节点。挂在玩家根节点上。
/// </summary>
public class 玩家视角 : NetworkBehaviour
{
    [Header("引用")]
    [Tooltip("水平旋转的节点，一般是带 CharacterController 的「测试角色」。留空会自动查找。")]
    public Transform 角色节点;

    [Tooltip("俯仰用的节点，一般是 Camera 的 Transform。")]
    [SerializeField] private Transform 视角节点;

    [Header("俯仰限制")]
    public float 俯仰上限 = 85f;
    public float 俯仰下限 = -85f;

    private float 俯仰角;

    /// <summary>
    /// 当前视角的水平朝向（度）。返回的是「角色节点」的世界偏航，
    /// 服务器会把这个值写回同一个节点，所以不会再和自己叠加。
    /// </summary>
    public float 视角偏航角
    {
        get
        {
            if (角色节点 != null) return 角色节点.eulerAngles.y;
            return transform.eulerAngles.y;
        }
    }

    private void Awake()
    {
        if (角色节点 == null)
        {
            var cc = GetComponentInChildren<CharacterController>(true);
            角色节点 = cc != null ? cc.transform : transform;
        }
    }

    public override void OnStartClient()
    {
        设置本机渲染组件(isOwned);
    }

    public override void OnStartServer()
    {
        // 专用服务器不需要相机和 AudioListener
        if (isServerOnly) 设置本机渲染组件(false);
    }

    private void 设置本机渲染组件(bool 开启)
    {
        foreach (var 相机 in GetComponentsInChildren<Camera>(true))
            相机.enabled = 开启;

        foreach (var 监听 in GetComponentsInChildren<AudioListener>(true))
            监听.enabled = 开启;
    }

    private void LateUpdate()
    {
        if (!isOwned) return;                  // 远端玩家的朝向由 玩家同步 插值
        if (玩家输入.I == null) return;

        Vector2 视角输入 = 玩家输入.I.本帧.视角;
        if (视角输入.sqrMagnitude <= 0f) return;

        // 水平：转角色节点（不是根节点，否则会绕根节点画圈）
        角色节点.Rotate(Vector3.up, 视角输入.x, Space.Self);

        // 垂直：只转相机节点
        俯仰角 = Mathf.Clamp(俯仰角 - 视角输入.y, 俯仰下限, 俯仰上限);

        if (视角节点 != null)
            视角节点.localRotation = Quaternion.Euler(俯仰角, 0f, 0f);
    }
}
