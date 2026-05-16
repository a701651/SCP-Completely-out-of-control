using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class 设备类型
{
    [RuntimeInitializeOnLoadMethod]
    private static void init()
    {
        // 判断当前设备
        // 手机
        if (
            Application.platform == RuntimePlatform.Android
            || Application.platform == RuntimePlatform.IPhonePlayer
        )
        {
            设备type = 设备Type.手机;
        }
        // 电脑
        else if (Application.platform == RuntimePlatform.WindowsPlayer)
        {
            设备type = 设备Type.电脑;
        }
        Debug.Log($"设备类型设置为{设备type}");
    }

    // 未初始化自动生成一个物体挂载当前代码
    public enum 设备Type
    {
        手机,
        电脑,
    }

    public static 设备Type 设备type = 设备Type.电脑;
}
