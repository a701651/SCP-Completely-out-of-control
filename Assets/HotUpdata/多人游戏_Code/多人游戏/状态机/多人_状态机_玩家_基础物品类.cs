using System;
using UnityEngine;

public class 多人_状态机_玩家_基础物品类 : MonoBehaviour
{
    public event Action<int> 当前物品id_变化;

    public int 当前物品id
    {
        get => _当前物品id;
        set
        {
            _当前物品id = value;
            当前物品id_变化?.Invoke(value);
        }
    }
    private int _当前物品id = 0;
}
