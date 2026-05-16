using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 错误弹窗列表 : MonoBehaviour
{
    [Header("UI绑定")]
    public GameObject 弹窗;
    public Text text;

    private static List<string> _弹窗列表 = new List<string>();
    public static List<string> 弹窗列表
    {
        get { return _弹窗列表; }
        set
        {
            _弹窗列表 = value;
            Debug.Log($"已添加\"{value}\"到列表");
        }
    }
    void Update()
    {
        if (弹窗列表.Count > 0)
        {
            弹窗.GetComponent<Canvas>().enabled = true;
            text.text = 弹窗列表[0];
        }
        else
        {
            弹窗.GetComponent<Canvas>().enabled = false;
        }
    }
}
