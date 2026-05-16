using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class 注册账号 : MonoBehaviour
{
    public InputField 账号名;
    public InputField 密码;
    public Toggle 确认密码;
    public Toggle 同意协议;
    public Text 错误提示;

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
            if (确认密码 == null)
            {
                错误提示.text = "请勾选确认密码";
                return;
            }
            if (同意协议 == null)
            {
                错误提示.text = "请阅读并勾选同意协议";
                return;
            }
            #endregion
            StartCoroutine(注册());
        });
    }

    IEnumerator 注册()
    {
        Debug.Log($"开始注册{PlayerPrefs.GetString("ServerUrl")}");
        UnityWebRequest www = UnityWebRequest.Get(
            $"{PlayerPrefs.GetString("ServerUrl")}/register?username="
                + 账号名.text
                + "&password="
                + 密码.text
        );
        yield return www.SendWebRequest();
        if (www.result != UnityWebRequest.Result.Success)
        {
            // 网络错误
            错误提示.text = "注册失败：" + www.error;
        }
        else
        {
            // 解析服务器返回的json数据
            JsonData jsonData = JsonUtility.FromJson<JsonData>(www.downloadHandler.text);
            // 如果结构错误
            if (jsonData == null)
            {
                错误提示.text = "注册失败：服务器返回数据格式错误";
                yield break;
            }
            if (jsonData.code == 200)
            {
                错误提示.text = "<color=green>注册成功, 请前往登录</color>";
            }
            else
            {
                错误提示.text = $"注册失败：{jsonData.message}";
            }
        }
    }

    [System.Serializable]
    public class JsonData
    {
        public int code;
        public string message;
    }
}
