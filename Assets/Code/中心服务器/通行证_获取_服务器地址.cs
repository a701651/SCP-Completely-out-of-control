using System;
using System.IO;
using UnityEngine;

public class 通行证_获取_服务器地址 : MonoBehaviour
{
    public static string IP = "127.0.0.1:7891";
    public static event Action OnIPUpdated;
    public static void 更新IP(string ip)
    {
        IP = ip;
        OnIPUpdated?.Invoke();
    }
}
