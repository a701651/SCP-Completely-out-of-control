using System.Collections;
using UnityEngine;

public class 获取中心服务器链接 : MonoBehaviour
{
    [Header("自定义服务器链接(留空则联网获取)")]
    public string 自定义IP;
    void Start()
    {
        if (!string.IsNullOrEmpty(自定义IP))
        {
            PlayerPrefs.SetString("ServerUrl", 自定义IP);
            Debug.Log("已设置自定义服务器链接:" + 自定义IP);
            return;
        }
        StartCoroutine(GetServerUrl());
    }

    IEnumerator GetServerUrl()
    {
        Debug.Log("开始获取服务器链接");
        string url = "https://pastebin.com/raw/8UnpAR8P";
        using (WWW www = new WWW(url))
        {
            yield return www;
            if (string.IsNullOrEmpty(www.error))
            {
                var serverUrl = www.text.Split('|')[0];
                PlayerPrefs.SetString("ServerUrl", serverUrl);
                Debug.Log("服务器链接获取成功:" + serverUrl);
            }
            else
            {
                Debug.Log(www.error);
            }
        }
    }
}