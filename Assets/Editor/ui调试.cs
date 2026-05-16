#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;

public class 设备调试面板
{
    [MenuItem("UI调试/切换到 手机")]
    public static void 设为手机()
    {
        设备类型.设备type = 设备类型.设备Type.手机;
    }

    [MenuItem("UI调试/切换到 电脑")]
    public static void 设为电脑()
    {
        设备类型.设备type = 设备类型.设备Type.电脑;
    }
}
#endif
