using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using YooAsset;

public class get_版本号 : MonoBehaviour
{
    public GameObject 启动页面ui;
    public GameObject 版本号ui;
    public static bool is_init = false;

    // 版本类型枚举
    [Header("版本类型")]
    public VersionType versionType;

    public enum VersionType
    {
        内测版,
        公测版,
        正式版,
    }

    // Start is called before the first frame update
    void Start()
    {
        启动页面ui.gameObject.SetActive(true);
        // 等待初始化完成
        StartCoroutine(WaitForInitializationAndLoadAsset());
    }

    public IEnumerator WaitForInitializationAndLoadAsset()
    {
        #region 设置版本号
        string version = "";
        switch (versionType)
        {
            case VersionType.内测版:
                version = "Beta";
                break;
            case VersionType.公测版:
                version = "Pubilc";
                break;
            case VersionType.正式版:
                version = "Release";
                break;
        }
        // 开发构建
        if (Application.isEditor || Debug.isDebugBuild)
        {
            version = "Dev";
        }
        if (!PlayerPrefs.HasKey("version"))
        {
            Debug.Log("未获取到版本信息，将使用默认版本号");
            PlayerPrefs.SetString("version", Application.version);
        }
        版本号ui.GetComponentInChildren<Text>().text =
            $"当前版本：CN_{version}_{PlayerPrefs.GetString("version")}";
        #endregion
        #region 启动画面
        // 编辑器模式不显示启动画面
        if (Application.isEditor)
        {
            启动页面ui.gameObject.SetActive(false);
            is_init = true;
            yield break;
        }
        yield return new WaitForSeconds(3f);
        for (int i = 60; i >= 0; i--)
        {
            启动页面ui.GetComponent<CanvasGroup>().alpha = i / 60f;
            yield return new WaitForSeconds(1 / 60f);
        }
        启动页面ui.gameObject.SetActive(false);
        is_init = true;
        #endregion
    }
}
