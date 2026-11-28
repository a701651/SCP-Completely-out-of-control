using Mirror;
using UnityEngine;

/// <summary>
/// 临时位置同步：服务器把「移动节点」的位置和玩家朝向同步给客户端，客户端插值。
/// 这是过渡方案，等把 NetworkTransform 接到玩家预制体上之后，整个组件可以删掉。
/// 挂在玩家根节点上。
/// </summary>
public class 玩家同步 : NetworkBehaviour
{
    [Tooltip("实际被 CharacterController 移动的节点。留空会自动查找。")]
    [SerializeField] private Transform 移动节点;

    [Tooltip("留空会自动查找。用来和 玩家视角 保持同一个节点。")]
    [SerializeField] private 玩家视角 视角;

    [Header("插值")]
    [Tooltip("越大跟随越紧，越小越平滑。")]
    public float 插值速度 = 15f;

    [Tooltip("位置差超过这个距离就直接瞬移（出生、传送用）。")]
    public float 瞬移距离 = 5f;

    [SyncVar] private Vector3 同步位置;
    [SyncVar] private float 同步偏航角;

    public override void OnStartServer()
    {
        if (移动节点 == null) 移动节点 = 查找移动节点();

        // 先贴地，再记录初始同步位置，避免客户端按“出生时悬空/卡地”的位置插值一段
        var 移动 = GetComponent<玩家移动>();
        if (移动 != null) 移动.出生贴地校正();

        同步位置 = 移动节点.position;
        同步偏航角 = 移动节点.eulerAngles.y;
    }

    public override void OnStartClient()
    {
        if (移动节点 == null) 移动节点 = 查找移动节点();

        // 客户端不做物理：否则 CharacterController 和这里的位置写入会互相打架
        if (!isServer && 移动节点 != null)
        {
            foreach (var cc in 移动节点.GetComponentsInChildren<CharacterController>(true))
                cc.enabled = false;
        }
    }

    private Transform 查找移动节点()
    {
        if (视角 == null) 视角 = GetComponent<玩家视角>();
        if (视角 != null && 视角.角色节点 != null) return 视角.角色节点;

        var cc = GetComponentInChildren<CharacterController>(true);
        return cc != null ? cc.transform : transform;
    }

    private void LateUpdate()
    {
        if (移动节点 == null) return;

        // ---------- 服务器：写 SyncVar ----------
        if (isServer)
        {
            同步位置 = 移动节点.position;
            同步偏航角 = 移动节点.eulerAngles.y;
            return;
        }

        // ---------- 客户端：插值跟随 ----------
        float t = 1f - Mathf.Exp(-插值速度 * Time.deltaTime);

        if (Vector3.Distance(移动节点.position, 同步位置) > 瞬移距离)
            移动节点.position = 同步位置;
        else
            移动节点.position = Vector3.Lerp(移动节点.position, 同步位置, t);

        // 本地玩家的朝向由 玩家视角 控制，不能被服务器回包覆盖
        if (!isOwned)
            移动节点.rotation = Quaternion.Slerp(
                移动节点.rotation,
                Quaternion.Euler(0f, 同步偏航角, 0f),
                t
            );
    }
}
