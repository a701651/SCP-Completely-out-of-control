using System;
using System.IO;
using UnityEngine;

public class 设置_设置文件 : MonoBehaviour
{
    // 单例模式
    public static 设置_设置文件 实例
    {
        get
        {
            if (_实例 == null)
            {
                _实例 = FindAnyObjectByType<设置_设置文件>();
                if (_实例 == null)
                {
                    var obj = new GameObject("设置_设置文件");
                    _实例 = obj.AddComponent<设置_设置文件>();
                    DontDestroyOnLoad(obj);
                }
            }
            return _实例;
        }
    }
    private static 设置_设置文件 _实例;

    private void OnEnable()
    {
        初始化();
    }

    public 设置_设置文件_数据 数据 = new 设置_设置文件_数据();
    private string _path;

    private void 初始化()
    {
        _path = Path.Combine(Application.persistentDataPath, "Save", "Settings.json");
        try
        {
            // 读取数据
            if (File.Exists(_path))
            {
                var json = File.ReadAllText(_path);
                数据 = JsonUtility.FromJson<设置_设置文件_数据>(json);
            }
            else
            {
                保存数据();
            }
        }
        catch (Exception e)
        {
            Debug.LogError(e);
        }
    }

    public void 保存数据()
    {
        // 写入
        File.WriteAllText(_path, JsonUtility.ToJson(数据));
    }
    [System.Serializable]
    public class 设置_设置文件_数据
    {
        public 设置_设置文件_数据_显示语言 显示语言 = new 设置_设置文件_数据_显示语言();
        public 设置_设置文件_数据_音频 音频 = new 设置_设置文件_数据_音频();
    }
    [System.Serializable]
    public class 设置_设置文件_数据_显示语言
    {
        public 多语言_支持语言列表.Language 文本语言 = 多语言_支持语言列表.Language.中文简体;
    }
    [System.Serializable]
    public class 设置_设置文件_数据_音频
    {
        public float 总音量 = 1f;
    }
}
