using System;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

public class 多人_状态机_玩家_Root : NetworkBehaviour
{
    private enum 初始化流程
    {
        客户端网络,
        初始化
    }
    private List<初始化流程> _初始化流程 = new List<初始化流程>();
    public bool 是否网络系统初始化完成;
    public bool 是否本地玩家;
    public bool 是否能移动 = true;
    public 虚拟遥感_UI_遥感绑定 虚拟摇杆;
    public float 移动速度 = 10f;

    public override void OnStartClient()
    {
        if (isLocalPlayer)
        {
            是否本地玩家 = true;
        }
        _初始化流程.Add(初始化流程.客户端网络);
    }
    public void OnEnable()
    {
        虚拟摇杆 = FindAnyObjectByType<虚拟遥感_UI_遥感绑定>();
        _初始化流程.Add(初始化流程.初始化);
    }

    public void Update()
    {
        if (!_初始化流程.Contains(初始化流程.客户端网络))
        {
            return;
        }
        if (!_初始化流程.Contains(初始化流程.初始化))
        {
            return;
        }
        是否网络系统初始化完成 = true;
    }
}
