using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class 通行证_获取当前用户信息 : MonoBehaviour
{
    public event Action<UserData> OnGetUserInfo;
    private string _token;
    public UserData 用户数据;
    private void OnEnable()
    {
        _token = 通行证_用户_token.实例.获取用户token();
        if (_token == null)  return;
        获取用户信息();
    }

    void 获取用户信息()
    {
        var url_root = 通行证_获取_服务器地址.IP;
        var url = $"http://{url_root}/user/myinfo?token={_token}";
        StartCoroutine(获取用户信息Send(url));
    }
    IEnumerator 获取用户信息Send(string url)
    {
        UnityWebRequest www = UnityWebRequest.PostWwwForm(url, null);
        yield return www.SendWebRequest();
        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError($"获取用户信息失败: {www.result},url:{url}");
            yield break;
        }
        var raw = www.downloadHandler.text;
        Json通用格式.Json json = JsonUtility.FromJson<Json通用格式.Json>(raw);
        if (json.code != 0)
        {
            Debug.LogError($"获取用户信息失败: {json.message}");
            yield break;
        }
        Json_OK json_ok = JsonUtility.FromJson<Json_OK>(raw);
        用户数据 = json_ok.data;
        OnGetUserInfo?.Invoke(用户数据);
    }
    [Serializable]
    public class UserData
    {
        public long id;                   // ID
        public string nickname;             // 昵称
        public string avatar;               // 头像
        public string sign;                 // 签名
        public long level;                // 等级
        public long experience;           // 经验
        public long registration_time;    // 注册时间
    }

    private class Json_OK
    {
        public UserData data;
    }
}
