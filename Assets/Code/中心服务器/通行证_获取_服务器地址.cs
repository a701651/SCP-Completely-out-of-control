using System;
using System.IO;
using UnityEngine;

public class 通行证_获取_服务器地址 : MonoBehaviour
{
    /// <summary>
    /// 不能直接更改值！用  更新IP  类更改值
    /// </summary>
    public static string IP = "127.0.0.1:7891";
    public static event Action OnIPUpdated;
    public static void 更新IP(string ip)
    {
        IP = ip;
        OnIPUpdated?.Invoke();
    }
}
