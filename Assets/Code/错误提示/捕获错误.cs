using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class 捕获错误 : MonoBehaviour
{
    private void Start()
    {
        Application.logMessageReceived += HandleUnityLog;
    }

    private void HandleUnityLog(string logText, string stackTrace, LogType type)
    {
        if (type == LogType.Error)
        {
            错误弹窗列表.弹窗列表.Add(logText);
        }
    }
}
