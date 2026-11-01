using System;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

public class 多人_状态机_玩家_Root : NetworkBehaviour
{
    public GameObject 摄像机;
    public bool 是否本地玩家 => isLocalPlayer;
    public bool 是否能移动 = true;
    public float 移动速度 = 10f;
    [SyncVar]
    public Vector2 移动输入;

    public override void OnStartClient()
    {
        if (!isLocalPlayer)
        {
            摄像机.SetActive(false);
        }
    }
    public void OnEnable()
    {
        var 虚拟遥感 = FindAnyObjectByType<虚拟遥感_UI_遥感绑定>();
        if (虚拟遥感 != null)
        {
            虚拟遥感._root = this;
        }
    }
    public void 更新移动输入(Vector2 _移动输入)
    {
        if (!isLocalPlayer) return;
        Comm更新移动输入(_移动输入);
    }
    [Command]
    public void Comm更新移动输入(Vector2 _移动输入)
    {
        if (_移动输入.sqrMagnitude > 1f)
        {
            移动输入 = _移动输入.normalized;
        }
        else
        {
            移动输入 = _移动输入;
        }
    }
}
