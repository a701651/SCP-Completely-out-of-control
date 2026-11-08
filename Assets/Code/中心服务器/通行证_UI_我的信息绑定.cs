using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class 通行证_UI_我的信息绑定 : MonoBehaviour
{
    private 通行证_获取当前用户信息 _通行证获取当前用户信息;
    public TMP_Text 玩家名称;
    public TMP_Text 玩家ID;
    public TMP_Text 玩家签名;
    public TMP_Text 玩家等级;
    public TMP_Text 玩家经验;
    public Slider 经验进度条;

    private void OnEnable()
    {
        _通行证获取当前用户信息 = FindAnyObjectByType<通行证_获取当前用户信息>();
        if (_通行证获取当前用户信息 == null)   return;
        if (_通行证获取当前用户信息.用户数据 != null)
        {
            更新UI(_通行证获取当前用户信息.用户数据);
        }
        _通行证获取当前用户信息.OnGetUserInfo += 更新UI;
    }

    void 更新UI(通行证_获取当前用户信息.UserData userInfo)
    {
        玩家名称.text = userInfo.nickname;
        玩家ID.text = userInfo.id.ToString();
        玩家签名.text = userInfo.sign;
        玩家等级.text = $"LV.{userInfo.level}";
        var exp = userInfo.experience % 1000;
        玩家经验.text = $"{exp}/1000";
        经验进度条.value = exp / 1000f;
    }
}
