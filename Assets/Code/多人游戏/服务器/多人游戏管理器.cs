using Mirror;
using UnityEngine;

public class 多人游戏管理器 : NetworkManager
{
    public enum 启动模式_Type
    {
        客户端,
        服务器,
        主机,
    }

    public 启动模式_Type 启动模式;
}
