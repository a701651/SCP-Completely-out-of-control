using System;
using System.IO;
using UnityEngine;

public class 游戏版本 : MonoBehaviour
{
    public enum 版本Type
    {
        发布版本,
        测试版本,
        开发版本
    }
    public 版本Type 版本类型 = 版本Type.发布版本;
    public string 版本号 = "1.0.0";
    public Int64 更新版本号 = 1;

    public void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }

    public void OnEnable()
    {
        更新本地版本号();
    }

    public void 更新本地版本号()
    {
        // 定义路径
        var path = Path.Combine(Application.persistentDataPath, "Save", "Version.json");
        // 创建数据
        var version = new 版本文件()
        {
            UpdateVersion = 更新版本号,
            StringVersion = 版本号
        };
        // 写入数据
        File.WriteAllText(path, JsonUtility.ToJson(version));
    }
    // 定义文件
    [System.Serializable]
    public class 版本文件
    {
        public Int64 UpdateVersion;
        public string StringVersion;
    }
}
