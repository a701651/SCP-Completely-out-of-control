#if is_steam
using System;
using System.Collections;
using Steamworks;
using UnityEngine;
using UnityEngine.Networking;
using YooAsset;

public class 一键登录 : MonoBehaviour
{
    #region  绑定组件区
    public GameObject steam登录界面;
    public GameObject 加载页面;
    [Header("场景绑定")]
    public string 场景名称;
    private Callback<GetTicketForWebApiResponse_t> m_TicketCallback;
    #endregion

    void Start()
    {
        if (!PlayerPrefs.HasKey("Login_Token"))
        {
            加载页面.SetActive(true);
            if (!SteamAPI.Init())
            {
                Debug.LogError("Steam 未初始化！");
                return;
            }

            m_TicketCallback = Callback<GetTicketForWebApiResponse_t>.Create(OnGetTicket);

            Login();
        }
    }

    #region Steam回调

    void Update()
    {
        // 必须有
        if (SteamAPI.Init())
        {
            SteamAPI.RunCallbacks();
        }
    }
    #endregion
    #region Steam登录
    public void Login()
    {
        Debug.Log("获取WebAPI Ticket...");
        SteamUser.GetAuthTicketForWebApi("login");
    }

    private void OnGetTicket(GetTicketForWebApiResponse_t callback)
    {
        Debug.Log("收到Steam回调");

        if (callback.m_eResult != EResult.k_EResultOK)
        {
            Debug.LogError("获取WebApi Ticket失败: " + callback.m_eResult);
            return;
        }

        byte[] ticket = callback.m_rgubTicket;
        int size = (int)callback.m_cubTicket;

        string ticketHex = BitConverter.ToString(ticket, 0, size).Replace("-", "");

        Debug.Log("WebAPI Ticket: " + ticketHex);

        StartCoroutine(SendToServer(ticketHex));
    }

    IEnumerator SendToServer(string ticket)
    {
        yield return new WaitForSeconds(1f);
        UnityWebRequest www = UnityWebRequest.Get(
            $"{PlayerPrefs.GetString("ServerUrl")}/user/steam_login?ticket="
                + ticket
                + "&device_name="
                + SystemInfo.deviceName
        );
        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError(www.error);
        }
        else
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
                steam登录界面.SetActive(true);
            }
            加载页面.SetActive(false);
        }
    }
    #endregion
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
#endif