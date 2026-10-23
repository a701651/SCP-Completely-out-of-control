using System;
using System.IO;
using UnityEngine;

public class 通行证_用户_token : MonoBehaviour
{
    // 单例模式
    public static 通行证_用户_token 实例
    {
        get
        {
            if (_实例 == null)
            {
                GameObject go = new GameObject("通行证_用户_token");
                go.AddComponent<通行证_用户_token>();
                DontDestroyOnLoad(go);
            }
            return _实例;
        }
    }
    private static 通行证_用户_token _实例;
    private void Awake()
    {
        _实例 = this;
    }
    
    public void 更新用户token(string token)
    {
        var 加密后 = 通行证_本地加密.实例.加密(token);
        var path = Path.Combine(Application.persistentDataPath,"Save","User", "token.txt");
        if (!Directory.Exists(Path.GetDirectoryName(path)))
            Directory.CreateDirectory(Path.GetDirectoryName(path));
        File.WriteAllText(path, 加密后);
    }
    
    public string 获取用户token()
    {
        var path = Path.Combine(Application.persistentDataPath,"Save","User", "token.txt");
        Debug.Log($"获取用户token:{path}");
        if (File.Exists(path))
        {
            var 加密后 = File.ReadAllText(path);
            return 通行证_本地加密.实例.解密(加密后);
        }
        return null;
    }
}
