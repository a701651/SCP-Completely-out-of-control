using System;
using System.Collections;
using Mirror;
using UnityEngine;
using YooAsset;

public class 多人游戏管理器 : NetworkManager
{
    public enum 启动模式_Type
    {
        客户端,
        服务器,
        主机,
    }

    public 启动模式_Type 启动模式;

    public void OnEnable()
    {
        DontDestroyOnLoad(gameObject);
        StartCoroutine(加载玩家预制体());
    }

    IEnumerator 加载玩家预制体()
    {
        var package = YooAssets.GetPackage("多人模式包");
        var handle = package.LoadAssetAsync<GameObject>("Assets/HotUpdata/多人模式/预制体/玩家.prefab");
        yield return handle;
        GameObject 玩家GameObject = handle.AssetObject as GameObject;
        playerPrefab = 玩家GameObject;
    }
}
