using System;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

public class 多人_状态机_玩家_Root : NetworkBehaviour
{
    public GameObject 摄像机;
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
        else
        {
            摄像机.SetActive(false);
        }
    }
    public void OnEnable()
    {
        虚拟摇杆 = FindAnyObjectByType<虚拟遥感_UI_遥感绑定>();
    }
}
