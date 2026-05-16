using System;
using System.Collections;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

/// <summary>
/// 玩家物品同步组件
/// 负责在客户端和服务器之间同步玩家的背包物品信息
/// </summary>
public class 玩家物品同步 : NetworkBehaviour
{
    /// <summary>
    /// 客户端本地的物品信息缓存
    /// </summary>
    public List<物品JSON信息> 客户端物品 = new List<物品JSON信息>();

    /// <summary>
    /// 服务器端维护的所有玩家物品数据(仅服务器有效)
    /// </summary>
    private Dictionary<uint, List<物品JSON信息>> 服务器物品 =
        new Dictionary<uint, List<物品JSON信息>>();

    /// <summary>
    /// 用于跟踪正在运行的协程引用,便于清理
    /// </summary>
    private Coroutine 同步协程引用;

    /// <summary>
    /// 初始化方法,在第一次帧更新前调用
    /// </summary>
    void Start()
    {
        // 仅本地玩家客户端执行同步逻辑
        if (!isLocalPlayer)
        {
            return;
        }

        // 启动定时同步协程
        同步协程引用 = StartCoroutine(定时同步物品());
    }

    /// <summary>
    /// 对象销毁时清理资源,防止内存泄漏
    /// </summary>
    void OnDestroy()
    {
        // 停止正在运行的协程
        if (同步协程引用 != null)
        {
            StopCoroutine(同步协程引用);
            同步协程引用 = null;
        }
    }

    /// <summary>
    /// 定时请求同步物品信息的协程
    /// 包含明确的终止条件,避免无限循环
    /// </summary>
    /// <returns>协程枚举器</returns>
    IEnumerator 定时同步物品()
    {
        while (isLocalPlayer)
        {
            // 请求服务器同步物品数据
            Cmd_请求物品同步();
            yield return new WaitForSeconds(1f);
        }
    }

    /// <summary>
    /// 客户端命令:向服务器请求同步当前玩家的物品信息
    /// 服务器作为数据权威来源,不应由客户端推送数据
    /// </summary>
    [Command]
    void Cmd_请求物品同步()
    {
        // 获取当前玩家的唯一标识
        uint 玩家ID = netId;

        // 服务器从权威数据源获取或创建玩家物品信息
        // 这里应该从实际的背包系统获取数据,而非硬编码
        if (!服务器物品.ContainsKey(玩家ID))
        {
            // 创建一个示例物品信息（实际应从背包系统获取）
            List<物品JSON信息> 新物品信息 = new List<物品JSON信息>();

            // 添加示例物品信息（实际应从背包系统获取）
            物品JSON信息 物品1 = new 物品JSON信息();
            物品1.物品ID = 1;
            物品1.使用次数 = 5;
            物品1.冷却时间 = 10;
            新物品信息.Add(物品1);

            物品JSON信息 物品2 = new 物品JSON信息();
            物品2.物品ID = 2;
            物品2.使用次数 = 3;
            物品2.冷却时间 = 20;
            新物品信息.Add(物品2);

            服务器物品[玩家ID] = 新物品信息;
        }

        // 将物品列表包装为可序列化的容器对象
        物品列表容器 容器 = new 物品列表容器();
        容器.物品列表 = 服务器物品[玩家ID];
        string 序列化数据 = JsonUtility.ToJson(容器);

        // 通过 TargetRpc 将数据返回给请求的客户端
        // TargetRpc 会自动发送给调用 Command 的客户端,无需额外判断
        Trc_返回物品信息(序列化数据);

        // 调试日志(仅服务器端输出)
        if (isServer)
        {
            Debug.Log($"服务器同步玩家 {玩家ID} 的物品信息: {序列化数据}");
        }
    }

    /// <summary>
    /// 目标RPC:服务器向特定客户端返回物品信息
    /// TargetRpc 天然具有目标指向性,无需验证玩家ID
    /// </summary>
    /// <param name="物品信息">服务器返回的物品数据</param>
    [TargetRpc]
    void Trc_返回物品信息(string 物品信息)
    {
        // 将JSON字符串反序列化为物品列表容器并更新客户端本地缓存
        物品列表容器 容器 = JsonUtility.FromJson<物品列表容器>(物品信息);
        客户端物品 = 容器.物品列表 ?? new List<物品JSON信息>();
        背包ui.更新背包UI(客户端物品);

        // 调试日志(仅客户端输出)
        Debug.Log(
            $"客户端收到物品信息: {JsonUtility.ToJson(new 物品列表容器 { 物品列表 = 客户端物品 })}"
        );
    }
}

/// <summary>
/// 物品JSON数据结构
/// 必须标记 Serializable 以支持 Unity JSON 序列化
/// </summary>
[Serializable]
public class 物品JSON信息
{
    /// <summary>
    /// 物品的唯一标识ID
    /// </summary>
    public int 物品ID;

    /// <summary>
    /// 物品的剩余使用次数,默认为0
    /// </summary>
    public int 使用次数 = 0;

    /// <summary>
    /// 物品的冷却时间(秒),默认为0
    /// </summary>
    public int 冷却时间 = 0;
}

/// <summary>
/// 物品列表容器类
/// 用于包装物品列表以支持 JsonUtility 序列化
/// </summary>
[Serializable]
public class 物品列表容器
{
    /// <summary>
    /// 物品信息列表
    /// </summary>
    public List<物品JSON信息> 物品列表;
}
