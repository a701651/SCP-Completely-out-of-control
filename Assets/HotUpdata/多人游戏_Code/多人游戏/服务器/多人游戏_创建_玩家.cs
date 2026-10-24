using UnityEngine;

public class 多人游戏_创建_玩家 : MonoBehaviour
{
    private 多人游戏管理器 _多人游戏管理器;
    void OnEnable()
    {
        _多人游戏管理器 = FindAnyObjectByType<多人游戏管理器>();
    }
    
    // 创建玩家
    public void 创建玩家()
    {
        if (_多人游戏管理器 == null)
        {
            return;
        }

        if (_多人游戏管理器.启动模式 == 多人游戏管理器.启动模式_Type.客户端)
        {
            return;
        }
        
        // 逻辑代码
        
    }
}
