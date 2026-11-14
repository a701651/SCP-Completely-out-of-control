using System;
using TMPro;
using UnityEngine;
using UnityEngine.Localization;

public class 通行证_获取最新版本 : MonoBehaviour
{
    public GameObject 更新提示物体GameObject;
    public GameObject 版本过时提示GameObject;
    public TMP_Text 更新提示文本;
    private string _ip => 通行证_获取_服务器地址.IP;
    private LocalizedString myText = new LocalizedString("默认", "远程更新提示文本");
     void 更新UI(string 文本)
    {
        版本过时提示GameObject.SetActive(true);
        更新提示物体GameObject.SetActive(true);
        更新提示文本.text = myText.GetLocalizedString("0.0.0.a1.20261114.1");
    }
    void OnEnable()
    {
        // 订阅事件
        myText.StringChanged += 更新UI;
    }

    void OnDisable()
    {
        // 务必取消订阅，防止内存泄漏
        myText.StringChanged -= 更新UI;
    }
    public void 关闭更新提示()
    {
        更新提示物体GameObject.SetActive(false);
    }

    public void 前往更新()
    {
        Application.OpenURL("https://scpcooc.cn");
    }

    public void 打开更新提示()
    {
        更新提示物体GameObject.SetActive(true);
    }
}
