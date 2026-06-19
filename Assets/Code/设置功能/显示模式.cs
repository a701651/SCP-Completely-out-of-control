using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 显示模式 : MonoBehaviour
{
    public Dropdown 显示模式ui;
    public bool 非UI模式 = false;
    // 支持模式枚举
    public enum 显示模式_Type
    {
        全屏,
        窗口化,
        无边框窗口化
    }
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        if (非UI模式)
        {
            // 读取本地配置
            if (PlayerPrefs.HasKey("显示模式"))
            {
                int ms = PlayerPrefs.GetInt("显示模式");
                SetDisplayMode(ms);
            }
            else
            {
                Debug.LogWarning("非UI模式下，没有找到显示模式配置，将使用默认全屏模式");
                SetDisplayMode((int)显示模式_Type.全屏); // 设置默认全屏模式
            }
            return; // 非UI模式下，直接返回
        }
        // 清空
        显示模式ui.ClearOptions();
        // 设置Dropdown的选项
        显示模式ui.AddOptions(new List<string>
        {
            显示模式_Type.全屏.ToString(),
            显示模式_Type.窗口化.ToString(),
            显示模式_Type.无边框窗口化.ToString()
        });
        // 读取本地配置
        if (PlayerPrefs.HasKey("显示模式"))
        {
            int ms = PlayerPrefs.GetInt("显示模式");
            SetDisplayMode(ms);
            显示模式ui.value = ms;
        }
        // 注册选项更改事件
        显示模式ui.onValueChanged.AddListener(OnValueChanged);
    }
    // 选项更改事件处理函数
    private void OnValueChanged(int index)
    {
        // 设置本地配置
        PlayerPrefs.SetInt("显示模式", index);
        // 根据选项更改显示模式
        SetDisplayMode(index); // 调用设置显示模式函数
    }
    public static void SetDisplayMode(int index)
    {
        显示模式_Type mode = (显示模式_Type)index;
        switch (mode)
        {
            case 显示模式_Type.全屏:
                Screen.fullScreenMode = FullScreenMode.ExclusiveFullScreen;
                break;
            case 显示模式_Type.窗口化:
                Screen.fullScreenMode = FullScreenMode.Windowed;
                break;
            case 显示模式_Type.无边框窗口化:
                Screen.fullScreenMode = FullScreenMode.FullScreenWindow;
                break;
        }
    }
}
