using UnityEngine;

public class 多人游戏_创建_对局 : MonoBehaviour
{
    private 多人游戏管理器 _多人游戏管理器;
    void OnEnable()
    {
        _多人游戏管理器 = FindAnyObjectByType<多人游戏管理器>();
        if (_多人游戏管理器 == null)
        {
            return;
        }

        switch (_多人游戏管理器.启动模式)
        {
            case 多人游戏管理器.启动模式_Type.客户端:
                _多人游戏管理器.StartClient();
                break;
            case 多人游戏管理器.启动模式_Type.服务器:
                _多人游戏管理器.StartServer();
                break;
            case 多人游戏管理器.启动模式_Type.主机:
                _多人游戏管理器.StartServer();
                break;
            default:
                break;
        }
    }
}
