using System;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

public class 多人_状态机_玩家_Root : NetworkBehaviour
{
    public event Action 跳跃;
    public Transform 角色挂载点;
    public bool 是否本地玩家 => isLocalPlayer;
    public bool 是否能移动 = true;
    public float 移动速度 = 10f;
    
    private 多人游戏_输入_控制器 _输入控制器;
    
    [SyncVar]
    public Vector2 移动输入;
    [SyncVar]
    public Vector2 视角输入;
    [SyncVar]
    public Vector3 玩家位置;

    public override void OnStartClient()
    {
        if (!isLocalPlayer)
        {
            return;
        }
        _输入控制器 = FindAnyObjectByType<多人游戏_输入_控制器>();
        _输入控制器.移动 += 更新移动输入;
        _输入控制器.视角 += 更新视角输入;
        _输入控制器.跳跃 += Comm玩家跳跃;
    }
    public void 更新移动输入(Vector2 _移动输入)
    {
        if (!isLocalPlayer) return;
        Comm更新移动输入(_移动输入);
    }
    public void 更新视角输入(Vector2 _视角输入)
    {
        if (!isLocalPlayer) return;
        Comm更新视角输入(_视角输入);
    }
    [Command]
    public void Comm更新视角输入(Vector2 _视角输入)
    {
        视角输入 = _视角输入;
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

    [Command]
    public void Comm玩家跳跃()
    {
        跳跃?.Invoke();
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
    }
}
