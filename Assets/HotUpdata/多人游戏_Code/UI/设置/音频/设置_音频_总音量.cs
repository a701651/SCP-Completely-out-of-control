using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class 设置_音频_总音量 : MonoBehaviour
{
    public Slider 总音量;
    public TMP_Text 详情文本;
    private 设置_设置文件.设置_设置文件_数据 _data => 设置_设置文件.实例.数据;

    private void OnEnable()
    {
        Init();
    }

    void Init()
    {
        总音量.value = _data.音频.总音量;
        更新UI();
    }

    void 更新UI()
    {
        string 展示文本;
        展示文本 = _data.音频.总音量.ToString("P0");
        if (总音量.value == 0)
        {
            展示文本 = "静音";
        }

        if (总音量.value == 1)
        {
            展示文本 = "最大";
        }
        详情文本.text = 展示文本;
    }

    public void 值变化()
    {
        _data.音频.总音量 = 总音量.value;
        设置_设置文件.实例.保存数据();
        更新UI();
    }
}
