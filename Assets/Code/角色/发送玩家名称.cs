using System.Collections;
using System.Collections.Generic;
using Mirror;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;

public class 发送玩家名称 : NetworkBehaviour
{
    public TMP_Text text;
    private Dictionary<uint, string> 客户端玩家名称 = new Dictionary<uint, string>();
    private Dictionary<uint, string> 服务器玩家名称 = new Dictionary<uint, string>();

    // 常量定义
    private const int 最小随机数 = 10000;
    private const int 最大随机数 = 99999;

    void Start()
    {
        if (!isLocalPlayer)
        {
            return;
        }

        // 生成随机玩家名称
        string name = "玩家" + Random.Range(最小随机数, 最大随机数).ToString();
        StartCoroutine(Send_玩家名称(name));
        if (isServer)
        {
            StartCoroutine(获取全部玩家名称());
        }
    }

    IEnumerator Send_玩家名称(string name)
    {
        // 等待网络加载完毕
        yield return new WaitUntil(() => NetworkClient.active);
        // 延迟1秒
        yield return new WaitForSeconds(1);
        Cmd_发送玩家名称(name);
    }

    [Server]
    IEnumerator 获取全部玩家名称()
    {
        while (NetworkClient.active)
        {
            // Debug.Log("获取全部玩家名称...");
            foreach (var item in 服务器玩家名称)
            {
                Tr_接收全部玩家名称(item.Key, item.Value);
            }
            yield return new WaitForSeconds(1);
        }
    }

    [Command]
    public void Cmd_发送玩家名称(string name)
    {
        Debug.Log(name + "加入服务器");
        服务器玩家名称[netId] = name;
    }

    [ClientRpc]
    public void Tr_接收全部玩家名称(uint netId, string name)
    {
        客户端玩家名称[netId] = name;
    }

    void Update()
    {
        // 安全地获取玩家名称，如果不存在则显示默认文本
        if (客户端玩家名称.TryGetValue(netId, out string playerName))
        {
            text.text = playerName;
        }
        else
        {
            text.text = "加载中...";
        }

        // debug调试代码
        // 仅服务端执行
        // if (isServer)
        // {
        //     // 将服务器玩家名称（列表）
        //     Debug.Log("服务器玩家名称：" + JsonConvert.SerializeObject(服务器玩家名称));
        // }
    }

    void OnDestroy()
    {
        // 清理资源，停止所有协程
        StopAllCoroutines();
    }
}
