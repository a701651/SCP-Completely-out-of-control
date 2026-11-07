using System;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

public class 多人_状态机_玩家_Root : NetworkBehaviour
{
    public GameObject 摄像机;
    public Transform 角色挂载点;
    public bool 是否本地玩家 => isLocalPlayer;
    public bool 是否能移动 = true;
    public float 移动速度 = 10f;
    [SyncVar]
    public Vector2 移动输入;
    [SyncVar]
    public Vector3 玩家位置;

    public override void OnStartClient()
    {
        if (!isLocalPlayer)
        {
            摄像机.SetActive(false);
            return;
        }
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

    private void Update()
    {
        if (isServer)
        {
            玩家位置 = 角色挂载点.GetChild(0).position;
        }
        else
        {
            角色挂载点.GetChild(0).position = 玩家位置;
        }

        if (isLocalPlayer)
        {
            摄像机.transform.position = 角色挂载点.GetChild(0).Find("Camera").position;
        }
    }
}
