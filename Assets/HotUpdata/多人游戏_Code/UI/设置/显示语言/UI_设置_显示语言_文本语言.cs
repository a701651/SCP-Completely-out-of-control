using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Localization.Settings;
using Language = 多语言_支持语言列表.Language;
using UnityEngine.UI;

public class UI_设置_显示语言_文本语言 : MonoBehaviour
{
    private 多语言_切换语言 _多语言_切换语言;
    public TMP_Dropdown 文本语言;
    private 设置_设置文件.设置_设置文件_数据 _data => 设置_设置文件.实例.数据;
    public void OnEnable()
    {
        更新UI();
    }
    private void 更新UI()
    {
        var list = new List<TMP_Dropdown.OptionData>();
        foreach (var item in Enum.GetValues(typeof(Language)))
        {
            list.Add(new TMP_Dropdown.OptionData(item.ToString()));
        }
        文本语言.options = list;
        文本语言.value = (int) _data.显示语言.文本语言;
    }
    public void OnClick()
    {
        _多语言_切换语言 = FindAnyObjectByType<多语言_切换语言>();
        _data.显示语言.文本语言 = (Language) 文本语言.value;
        设置_设置文件.实例.保存数据();
        _多语言_切换语言.设置多语言语言();
    }
}
