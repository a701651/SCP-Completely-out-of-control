using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class 通行证_获取_服务器名称_UI_绑定文字 : MonoBehaviour
{
    private Text _text;
    private string DefaultText = "Get Server Name Error";
    private void OnEnable()
    {
        _text = GetComponent<Text>();
        StartCoroutine(获取服务器名称());
        通行证_获取_服务器地址.OnIPUpdated += () => StartCoroutine(获取服务器名称());
    }

    private void OnDisable()
    {
        StopAllCoroutines();
        通行证_获取_服务器地址.OnIPUpdated -= () => StartCoroutine(获取服务器名称());
    }

    // 协程
    IEnumerator 获取服务器名称()
    {
        var url = $"http://{通行证_获取_服务器地址.IP}/server/name";
        UnityWebRequest www = UnityWebRequest.Get(url);
        yield return www.SendWebRequest();
        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log($"获取服务器名称失败:{www.error}");
            _text.text = DefaultText;
        }
        else
        {
            string row = www.downloadHandler.text;
            var json = JsonUtility.FromJson<Json通用格式.Json>(row);
            if (json.code == 0)
            {
                var json_ok = JsonUtility.FromJson<Json_ok>(row);
                _text.text = json_ok.data.name;
            }
        }
    }
    [Serializable]
    public class Json_ok
    {
        public Json_Data data;
    }
    [Serializable]
    public class Json_Data
    {
        public string name;
    }
}
