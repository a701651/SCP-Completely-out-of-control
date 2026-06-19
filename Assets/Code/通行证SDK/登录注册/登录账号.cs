using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using YooAsset;

public class 登录账号 : MonoBehaviour
{
    public InputField 账号名;
    public InputField 密码;
    public Toggle 记住密码;
    public Text 错误提示;

    [Header("UI配置")]
    public GameObject 注册登录页面;
    public GameObject steam绑定页面;
    [Header("其他配置")]
    public string 场景名称;

    // Start is called before the first frame update
    void Start()
    {
        Button button = GetComponent<Button>();
        button.onClick.AddListener(() =>
        {
            #region 注册前提
            if (账号名 == null || 账号名.text.Length == 0)
            {
                错误提示.text = "账号名不能为空";
                return;
            }
            // 账号名不得任何特殊字符
            if (
                !账号名.text.Equals(
                    账号名.text.Replace(" ", "")
                        .Replace(".", "")
                        .Replace(",", "")
                        .Replace("\t", "")
                        .Replace("\r", "")
                        .Replace("\n", "")
                )
            )
            {
                错误提示.text = "账号名不得包含特殊字符";
            }
            if (密码 == null || 密码.text.Length == 0)
            {
                错误提示.text = "密码不能为空";
                return;
            }
            if (密码.text.Length < 6)
            {
                错误提示.text = "密码长度不能小于6位";
                return;
            }
            if (记住密码 == null)
            {
                错误提示.text = "请勾选记住密码";
                return;
            }
            #endregion
            StartCoroutine(登录());
        });
    }

    IEnumerator 登录()
    {
        UnityWebRequest www = UnityWebRequest.Get(
            $"{PlayerPrefs.GetString("ServerUrl")}/api/user/login.php?username="
                + 账号名.text
                + "&password="
                + 密码.text
                + "&device_name="
                + SystemInfo.deviceName
        );
        yield return www.SendWebRequest();
        if (www.result == UnityWebRequest.Result.Success)
        {
            Debug.Log($"返回原始数据:{www.downloadHandler.text}");
            string response = www.downloadHandler.text;
            JsonData jsonData = JsonUtility.FromJson<JsonData>(response);
            if (jsonData.code == 200)
            {
                JsonData_code_200 jsonData_code_200 = JsonUtility.FromJson<JsonData_code_200>(
                    response
                );
                PlayerPrefs.SetString("Login_Token", jsonData_code_200.data.login_token);
                PlayerPrefs.SetString("Token", jsonData_code_200.data.token);
                注册登录页面.SetActive(false);
#if is_steam
                steam绑定页面.SetActive(true);
#else
                var package = YooAssets.GetPackage("DefaultPackage");
                var handle = package.LoadSceneAsync(场景名称);

                handle.Completed += (operationHandle) =>
                {
                    if (operationHandle.Status != EOperationStatus.Succeed)
                    {
                        Debug.LogError($"场景“{场景名称}”加载失败: {operationHandle.LastError}");
                    }
                    else
                    {
                        Debug.Log($"场景“{场景名称}”加载成功！");
                    }
                };
#endif
            }
            else
            {
                错误提示.text = jsonData.message;
            }
        }
        else
        {
            错误提示.text = $"登录失败:{www.error}";
        }
    }

    #region Json数据格式定义
    [System.Serializable]
    public class JsonData
    {
        public int code;
        public string message;
    }

    [System.Serializable]
    public class JsonData_code_200
    {
        public int code;
        public string message;
        public Data data;
    }

    [System.Serializable]
    public class Data
    {
        public string login_token;
        public string token;
    }
    #endregion
}
