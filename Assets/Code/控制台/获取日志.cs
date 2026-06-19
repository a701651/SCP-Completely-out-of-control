using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class 获取日志 : MonoBehaviour
{
    public GameObject 日志列表;
    public GameObject 滚动视图;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    private void Awake()
    {
        // 注册日志回调
        Application.logMessageReceived += 处理日志;
    }
    // 日志处理函数
    private void 处理日志(string condition, string stackTrace, LogType type)
    {
        var is_last = false;
        // 如果滚动视图在底部
        if (滚动视图.GetComponent<RectTransform>().rect.y < 0.01f)
        {
            is_last = true;
        }
        // 添加文本到日志列表
        GameObject item = 日志列表.transform.GetChild(0).gameObject;
        GameObject newItem = Instantiate(item, 日志列表.transform);
        var type_name = "";
        if (type == LogType.Error || type == LogType.Exception)
        {
            newItem.GetComponent<TMP_Text>().color = Color.red;
            type_name = "ERROR";
        }
        else if (type == LogType.Warning)
        {
            newItem.GetComponent<TMP_Text>().color = Color.yellow;
            type_name = "WARNING";
        }
        else
        {
             newItem.GetComponent<TMP_Text>().color = Color.green;
            type_name = "INFO";
        }
        newItem.GetComponent<TMP_Text>().text = $"[{type_name}] [{DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff")}] : {condition}";
        if (is_last)
        {
            滚动视图.GetComponent<ScrollRect>().verticalNormalizedPosition = 0;
        }
    }
}
