using System;
using System.Collections;
using kcp2k;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using YooAsset;

public class 开发_UI_进入主界面_按钮 : MonoBehaviour
{
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
        StartCoroutine(加载场景());
    }
    IEnumerator 加载场景()
    {
        var package = YooAssets.GetPackage("多人模式包");
        string location = "Assets/HotUpdata/多人模式/场景/主场景.unity";
        var sceneMode = UnityEngine.SceneManagement.LoadSceneMode.Single;
        var physicsMode = LocalPhysicsMode.None;
        bool allowSceneActivation = true;
        SceneHandle handle = package.LoadSceneAsync(location, sceneMode, physicsMode, allowSceneActivation);
        yield return handle;
        Debug.Log($"Scene name is {handle.SceneName}");
    }
}
