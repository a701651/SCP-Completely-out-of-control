using System;
using UnityEngine;

public class 设置_状态机 : MonoBehaviour
{
    [SerializeField] private string _当前页面ID = null;

    // 对外属性：赋值即触发事件
    public string 当前页面ID
    {
        get => _当前页面ID;
        set
        {
            if (_当前页面ID == value) return; // 值没变不触发
            _当前页面ID = value;
            On切换按钮ID?.Invoke(_当前页面ID);
        }
    }
    public event Action<string> On切换按钮ID;
}
