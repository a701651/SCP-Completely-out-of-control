using System;
using System.Collections;
using kcp2k;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using YooAsset;

public class 多人游戏_服务器功能 : MonoBehaviour
{
    public InputField IP输入框;
    private 多人游戏管理器 _多人游戏管理器;
    public string IP = "127.0.0.1";
    public ushort Port = 7777;
    public void 创建服务器()
    {
        if (_多人游戏管理器 == null)
        {
            return;
        }
        _多人游戏管理器.启动模式 = 多人游戏管理器.启动模式_Type.主机;
        // 切换场景
        StartCoroutine(加载游戏场景());
    }
    public void 创建客户端连接()
    {
        if (_多人游戏管理器 == null)
        {
            return;
        }
        _多人游戏管理器.启动模式 = 多人游戏管理器.启动模式_Type.客户端;
        _多人游戏管理器.networkAddress = IP;
        _多人游戏管理器.gameObject.GetComponent<KcpTransport>().port = Port;
        // 切换场景
        StartCoroutine(加载游戏场景());
    }
    public void 设置IP()
    {
        var ip = IP输入框.text;
        if (string.IsNullOrEmpty(ip))
        {
            return;
        }
        try
        {
            var ipPort = ip.Split(':');
            IP = ipPort[0];
            if (ipPort.Length > 1)
            {
                Port = ushort.Parse(ipPort[1]);
            }
            else
            {
                Port = 7777;
            }
        }
        catch (Exception e)
        {
            Debug.LogError(e.Message);
        }
    }

    public void OnEnable()
    {
        _多人游戏管理器 = FindAnyObjectByType<多人游戏管理器>();
    }
    IEnumerator 加载游戏场景()
    {
        var package = YooAssets.GetPackage("多人模式包");
        if (package == null)
        {
            Debug.LogError("[多人游戏_服务器功能] 资源包不存在！");
            yield break;
        }
        string location = "Assets/HotUpdata/多人模式/场景/测试地图.unity";
        var sceneMode = UnityEngine.SceneManagement.LoadSceneMode.Single;
        var physicsMode = LocalPhysicsMode.None;
        bool allowSceneActivation = true;
        SceneHandle handle = package.LoadSceneAsync(location, sceneMode, physicsMode, allowSceneActivation);
        yield return handle;
        Debug.Log($"Scene name is {handle.SceneName}");
    }
}
