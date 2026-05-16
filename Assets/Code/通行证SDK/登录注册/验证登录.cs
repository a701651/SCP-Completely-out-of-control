using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class 验证登录 : MonoBehaviour
{
    public GameObject 登录失效提示框;
    public GameObject 登录失败提示框;

    [Header("界面绑定")]
    public GameObject 登录界面;
    public GameObject 加载界面;
    public GameObject 主界面;

    // Start is called before the first frame update
    void Start()
    {
        if (PlayerPrefs.HasKey("Login_Token"))
        {
            verifyLogin();
        }
    }

    // 验证登录
    public void verifyLogin()
    {
        Debug.Log(
            $"[棱泽SDK]正在验证当前Login_Token{PlayerPrefs.GetString("Login_Token")}的状态..."
        );
        StartCoroutine(verifyRequest());
    }

    // 验证请求
    IEnumerator verifyRequest()
    {
        UnityWebRequest www = UnityWebRequest.Get(
            $"{PlayerPrefs.GetString("ServerUrl")}/user/verify?login_token={PlayerPrefs.GetString("Login_Token")}"
        );
        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log($"[棱泽SDK]验证登录失败(请求时出错)，原因{www.error}");
            登录失败提示框.SetActive(true);
            yield break;
        }
        else
        {
            Debug.Log($"[棱泽SDK]验证登录获取数据成功，返回数据{www.downloadHandler.text}");
            JsonData jsonData = JsonUtility.FromJson<JsonData>(www.downloadHandler.text);
            // 格式错误
            if (jsonData == null)
            {
                Debug.Log("[棱泽SDK]验证登录失败(返回数据格式错误)");
                登录失败提示框.SetActive(true);
                yield break;
            }
            if (jsonData.code == 200)
            {
                JsonData_200 jsonData_200 = JsonUtility.FromJson<JsonData_200>(
                    www.downloadHandler.text
                );
                // 格式错误
                if (jsonData_200 == null)
                {
                    Debug.Log("[棱泽SDK]验证登录失败(返回数据格式错误)");
                    登录失败提示框.SetActive(true);
                    yield break;
                }
                // 更新token
                PlayerPrefs.SetString("Token", jsonData_200.data.token);
                Debug.Log($"[棱泽SDK]验证登录成功，token已更新为{jsonData_200.data.token}");
                // 显示主界面
                登录界面.SetActive(false);
                主界面.SetActive(true);
                加载界面.SetActive(true);
            }
            else
            {
                Debug.Log($"[棱泽SDK]验证登录失败（返回时），原因{jsonData.message}");
                // 删除token
                PlayerPrefs.DeleteKey("Login_Token");
                // 显示登录失效提示框
                登录失效提示框.SetActive(true);
            }
        }
    }

    #region  Json定义
    [System.Serializable]
    public class JsonData
    {
        public int code;
        public string message;
    }

    [System.Serializable]
    public class JsonData_200
    {
        public int code;
        public string message;
        public Data data;
    }

    [System.Serializable]
    public class Data
    {
        public string token;
    }
    #endregion
}
