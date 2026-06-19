using System.Collections.Generic;
using UnityEngine;
using System.IO;
using Newtonsoft.Json;

public class 服务器配置 : MonoBehaviour
{
    // ========== 单例模式（正确的 MonoBehaviour 单例）==========
    private static 服务器配置 _instance;
    public static 服务器配置 Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindObjectOfType<服务器配置>();
                if (_instance == null)
                {
                    Debug.LogError("场景中没有找到 服务器配置 组件！尝试实例化一个");
                    _instance = new GameObject("服务器配置").AddComponent<服务器配置>();  // 实例化一个
                    _instance.name = "服务器配置";  // 设置组件名称
                    DontDestroyOnLoad(_instance);  // 加入后台
                }
            }
            return _instance;
        }
    }

    // ========== 获取配置文件内容 ==========
    public static string 获取配置文件(int port)
    {
        // ✅ 使用 Path.Combine 正确拼接路径
        string configDir = Path.Combine(Application.persistentDataPath, port.ToString());
        string configFilePath = Path.Combine(configDir, "ServerConfig.json");

        if (!File.Exists(configFilePath))
        {
            // ✅ 先确保目录存在，再写入文件
            if (!Directory.Exists(configDir))
            {
                Directory.CreateDirectory(configDir);
            }

            var defaultConfig = new 配置文件
            {
                服务器IP = "127.0.0.1",
                服务器名称 = "默认名称"
            };

            string configContent = JsonConvert.SerializeObject(defaultConfig, Formatting.Indented);
            File.WriteAllText(configFilePath, configContent);

            Debug.Log($"[服务器配置] 已创建默认配置文件: {configFilePath}");
            return configContent;  // 返回的是文件内容
        }
        else
        {
            string configContent = File.ReadAllText(configFilePath);
            Debug.Log($"[服务器配置] 已读取配置文件: {configFilePath}");
            return configContent;  // 返回的是文件内容
        }
    }

    // ========== 配置文件数据类 ==========
    [System.Serializable]
    public class 配置文件
    {
        [JsonProperty("服务器IP")]
        public string 服务器IP;

        [JsonProperty("服务器名称")]
        public string 服务器名称;
    }
}