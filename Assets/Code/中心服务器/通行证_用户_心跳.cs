using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class 通行证_用户_心跳 : MonoBehaviour
{
    private string token;
    void OnEnable()
    {
        Init();
    }
    void 发送心跳()
    {
        StartCoroutine(发送心跳协程());
    }

    void Init()
    {
        DontDestroyOnLoad(this);
        token = 通行证_用户_token.实例.获取用户token();
        // 每隔10秒发送一次心跳
        InvokeRepeating(nameof(发送心跳), 0, 10);
    }
    // 协程发送
    IEnumerator 发送心跳协程()
    {
        var url = $"http://{通行证_获取_服务器地址.IP}/user/ping?token={token}";
        UnityWebRequest www = UnityWebRequest.PostWwwForm(url, null);
        yield return www.SendWebRequest();
        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log($"心跳失败:{www.error}");
        }
        /*else
        {
            Debug.Log($"心跳成功:{www.responseCode},返回内容:{www.downloadHandler.text}");
        }*/
    }
}
