using System;
using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.UI;

public class UI_文本_版本号 : MonoBehaviour
{
    private 游戏版本 _游戏版本;
    private Text _text;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void OnEnable()
    {
        _text = GetComponent<Text>();
        var 版本 = 获取本地缓存版本();
        _text.text = 版本.StringVersion;
        StartCoroutine(更新文本());
    }
    IEnumerator 更新文本()
    {
        while (_游戏版本 is null)
        {
            _游戏版本 = FindAnyObjectByType<游戏版本>();
            yield return null;
        }
        _text.text = $"{_游戏版本.版本号}";
    }
#region 本地缓存版本号
    /// <summary>
    /// 获取本地缓存的版本号，用于热更新包加载前的显示用途
    /// </summary>
    /// <returns></returns>
    public 游戏版本.版本文件 获取本地缓存版本()
    {
        // 定义默认版本
        var package = Application.version;
        // 定义路径
        var path = Path.Combine(Application.persistentDataPath, "Save", "Version.json");
        // 判断是否存在
        if (!File.Exists(path))
        {
            // 不存在，返回
            return new 游戏版本.版本文件()
            {
                StringVersion = package
            };
        }
        try
        {
            // 读取数据
            var json = File.ReadAllText(path);
            return JsonUtility.FromJson<游戏版本.版本文件>(json);
        }
        catch (Exception e)
        {
            Debug.LogError(e);
            return new 游戏版本.版本文件()
            {
                StringVersion = package
            };
        }
    }
#endregion
}
