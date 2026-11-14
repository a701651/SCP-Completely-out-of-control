using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Localization.Settings;

public class 多语言_切换语言 : MonoBehaviour
{
    private 设置_设置文件.设置_设置文件_数据 _data => 设置_设置文件.实例.数据;
    private void OnEnable()
    {
        设置多语言语言();
        DontDestroyOnLoad(gameObject);
    }
    public void 设置多语言语言()
    {
        switch (_data.显示语言.文本语言)
        {
            case 多语言_支持语言列表.Language.中文简体:
                StartCoroutine(切换语言协程("zh-CN"));
                break;
            case 多语言_支持语言列表.Language.中文繁體:
                StartCoroutine(切换语言协程("zh-TW"));
                break;
            case 多语言_支持语言列表.Language.English:
                StartCoroutine(切换语言协程("en"));
                break;
        }
    }
    private IEnumerator 切换语言协程(string 语言代码)
    {
        yield return LocalizationSettings.InitializationOperation;

        var locales = LocalizationSettings.AvailableLocales.Locales;

        foreach (var locale in locales)
        {
            if (locale.Identifier.Code == 语言代码)
            {
                LocalizationSettings.SelectedLocale = locale;
                Debug.Log("当前语言：" + locale.LocaleName);
                yield break;
            }
        }

        Debug.LogWarning("没有找到语言：" + 语言代码);
    }
}
