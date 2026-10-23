using System.Collections;
using kcp2k;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using YooAsset;

public class 开发_UI_进入主界面_按钮 : MonoBehaviour
{
    private 多人游戏管理器 _多人游戏管理器;
    private 热更新_多人模式 _热更新_多人模式;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        Button but = GetComponent<Button>();
        but.onClick.AddListener(OnClick);
    }
    void OnClick()
    {
        _热更新_多人模式 = FindAnyObjectByType<热更新_多人模式>();
        if (!_热更新_多人模式.是否初始化完成)
        {
            return;
        }
        // 创建多人游戏控制器
        // _多人游戏管理器 = FindAnyObjectByType<多人游戏管理器>();
        if (_多人游戏管理器 == null)
        {
            var 多人游戏管理器_GameObject = new GameObject("多人游戏管理器");
            // 添加组件
            多人游戏管理器_GameObject.AddComponent<KcpTransport>();
            多人游戏管理器_GameObject.AddComponent<多人游戏管理器>();
            _多人游戏管理器 = 多人游戏管理器_GameObject.GetComponent<多人游戏管理器>();
            // 加入后台
            DontDestroyOnLoad(多人游戏管理器_GameObject);
        }
        // 加载热更新内容包
        // 初始化资源系统
        if (!YooAssets.IsInitialized)
        {
            YooAssets.Initialize();
        }
        StartCoroutine(加载玩家预制体());
    }
    IEnumerator 加载玩家预制体()
    {
        var package = YooAssets.GetPackage("多人模式包");
        AssetHandle handle = package.LoadAssetAsync<GameObject>("Assets/HotUpdata/多人模式/预制体/玩家.prefab");
        yield return handle;
        /*GameObject go = handle.InstantiateSync();*/
        _多人游戏管理器.playerPrefab = handle.AssetObject as GameObject;
        
        // 跳转场景
        SceneManager.LoadScene("Scenes/主场景");
    }
}
