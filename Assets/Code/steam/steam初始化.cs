using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
#if is_steam
using Steamworks;
#endif
using UnityEngine;
using UnityEngine.UI;

public class steam初始化 : MonoBehaviour
{
    public GameObject ui;
    public Text[] 玩家名ui;
    public Text[] 玩家steamIDui;
    public GameObject 错误信息ui;
    public RawImage[] 头像ui;

    #region  初始化
    IEnumerator Start()
    {
        ui.SetActive(false);
        // 代码仅限steam平台，其他平台会被预处理器剔除
#if is_steam
        if (PlayerPrefs.HasKey("Login_Token"))
        {
            // 已经登录过，直接进入游戏
            yield break;
        }
        // 延迟加载
        yield return new WaitForSeconds(1f);
        if (SteamAPI.Init())
        {
            // Debug.Log($"[Steam信息]SteamAPI初始化成功，当前以APPID {AppId_t.Invalid} 身份运行。");
            // 为用户添加成就“初次启动”(one_play)
            SteamUserStats.SetAchievement("one_play");
            // 统计次数
            int playCount = 0;
            if (SteamUserStats.GetStat("play_count", out playCount))
            {
                // Debug.Log($"[Steam信息]当前游戏已被玩家启动 {playCount} 次。");
                if (playCount <= 100)
                {
                    playCount++;
                }
                // Debug.Log($"[Steam信息]本次更改为玩家启动 {playCount} 次。");
                SteamUserStats.SetStat("play_count", playCount);
            }
            else
            {
                // 如果没有现有统计，初始化为1
                SteamUserStats.SetStat("play_count", 1);
            }
            // 将统计保存到Steam服务器/客户端
            SteamUserStats.StoreStats();
            Debug.Log(
                $"[Steam信息]当前Steam用户64位ID: {SteamUser.GetSteamID().m_SteamID}, 昵称: {SteamFriends.GetPersonaName()}"
            );
            for (int i = 0; i < 玩家名ui.Length; i++)
            {
                玩家名ui[i].text = SteamFriends.GetPersonaName();
            }
            PlayerPrefs.SetString("Steam_Name", SteamFriends.GetPersonaName());
            for (int i = 0; i < 玩家steamIDui.Length; i++)
            {
                玩家steamIDui[i].text = $"Steam64ID: {SteamUser.GetSteamID().m_SteamID}";
            }
            PlayerPrefs.SetString("Steam_ID", SteamUser.GetSteamID().m_SteamID.ToString());
            StartCoroutine(获取头像(SteamUser.GetSteamID()));
        }
        else
        {
            错误信息ui.SetActive(true);
            错误信息ui.GetComponent<Text>().text =
                "SteamAPI初始化失败，请确保已安装Steam客户端并登录账户。";
            Debug.LogError("[Steam信息]SteamAPI初始化失败");
        }
#endif
        yield return null;
    }
    #endregion
    #region  获取头像
    #if is_steam
    IEnumerator 获取头像(CSteamID steamID)
    {
        WWW wWW = new WWW(
            $"https://uapis.cn/api/v1/game/steam/summary?steamid={steamID.m_SteamID}"
        );
        yield return wWW;
        if (wWW.error == null)
        {
            // 解析json数据
            json数据 data = JsonConvert.DeserializeObject<json数据>(wWW.text);
            Debug.Log($"[Steam信息]Steam用户头像获取成功: {data.avatarfull}");
            PlayerPrefs.SetString("Steam_Avatar", data.avatarfull);
            // 下载头像
            WWW www = new WWW(data.avatarfull);
            yield return www;
            if (www.error == null)
            {
                // 显示头像
                for (int i = 0; i < 头像ui.Length; i++)
                {
                    头像ui[i].texture = www.texture;
                }
            }
            else
            {
                错误信息ui.SetActive(true);
                错误信息ui.GetComponent<Text>().text = "Steam用户头像下载失败，请检查网络连接。";
                Debug.LogError($"[Steam信息]Steam用户头像下载失败: {www.error}");
            }
        }
        else
        {
            错误信息ui.SetActive(true);
            错误信息ui.GetComponent<Text>().text = "Steam用户头像获取失败，请检查网络连接。";
            Debug.LogError($"[Steam信息]Steam用户头像获取失败: {wWW.error}");
        }
        yield return null;
    }
    #endif
    #endregion
    #region  定义json数据类

    public class json数据
    {
        public string avatarfull;
    }
    #endregion
}
