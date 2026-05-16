using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UIElements;
using YooAsset;
using Button = UnityEngine.UI.Button;

public class 绑定账号 : MonoBehaviour
{
    public string 场景名称;
    // Start is called before the first frame update
    void Start()
    {
        Button btn = GetComponent<Button>();
        btn.onClick.AddListener(() =>
        {
            StartCoroutine(BindAccount());
        });
    }

    // Update is called once per frame

    IEnumerator BindAccount()
    {
        UnityWebRequest www = UnityWebRequest.Get(
            $"{PlayerPrefs.GetString("ServerUrl")}/user/bind_steam?"
                + $"token={PlayerPrefs.GetString("Token")}"
                + $"&steam_id={PlayerPrefs.GetString("Steam_ID")}"
                + $"&steam_avatar={PlayerPrefs.GetString("Steam_Avatar")}"
                + $"&steam_name={PlayerPrefs.GetString("Steam_Name")}"
        );

        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(www.error);
        }
        else
        {
            JsonData data = JsonUtility.FromJson<JsonData>(www.downloadHandler.text);
            if (data.code == 200)
            {
                Debug.Log("绑定成功");
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
            }
            else
            {
                Debug.Log($"绑定失败:{data.message}");
            }
        }
    }

    [System.Serializable]
    public class JsonData
    {
        public string message;
        public int code;
    }
}
