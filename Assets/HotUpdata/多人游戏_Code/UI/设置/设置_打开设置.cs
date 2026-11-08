using System;
using UnityEngine;

public class 设置_打开设置 : MonoBehaviour
{
    private 热更新_多人模式 _热更新多人模式;
    private UI_覆盖界面_管理器 _ui覆盖界面管理器;
    public GameObject 预制体;
    public void OnClick()
    {
        if (!_热更新多人模式.是否初始化完成)  return;
        var obj = Instantiate(预制体);
        _ui覆盖界面管理器.添加覆盖界面(obj);
    }

    private void Awake()
    {
        _ui覆盖界面管理器 = FindAnyObjectByType<UI_覆盖界面_管理器>();
        _热更新多人模式 = FindAnyObjectByType<热更新_多人模式>();
    }
}
