using System;
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
}
