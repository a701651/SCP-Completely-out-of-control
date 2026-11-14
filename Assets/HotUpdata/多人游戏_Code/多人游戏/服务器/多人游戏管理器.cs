using System;
using System.Collections;
using Mirror;
using UnityEngine;
using UnityEngine.SceneManagement;
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
    // 断开连接
    public override void OnClientDisconnect()
    {
        // 切回主界面
        StartCoroutine(加载游戏场景());
    }
    IEnumerator 加载游戏场景()
    {
        var package = YooAssets.GetPackage("多人模式包");
        if (package == null)
        {
            Debug.LogError("资源包不存在！");
            yield break;
        }
        string location = "Assets/HotUpdata/多人模式/场景/主场景.unity";
        var sceneMode = UnityEngine.SceneManagement.LoadSceneMode.Single;
        var physicsMode = LocalPhysicsMode.None;
        bool allowSceneActivation = true;
        SceneHandle handle = package.LoadSceneAsync(location, sceneMode, physicsMode, allowSceneActivation);
        yield return handle;
        Debug.Log($"Scene name is {handle.SceneName}");
    }
}
