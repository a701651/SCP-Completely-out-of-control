using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class UI_覆盖界面_管理器 : MonoBehaviour
{
    private InputSystem_Actions _input;
    [SerializeField]
    private List<GameObject> _覆盖界面列表 = new List<GameObject>();
    public void 添加覆盖界面(GameObject 覆盖界面)
    {
        _覆盖界面列表.Add(覆盖界面);
    }
    private void OnEnable()
    {
        _input = new InputSystem_Actions();
        _input.UI.退出.Enable();
        
        // 监听退出按键
        _input.UI.退出.performed += 按钮退出;
    }
    public void 关闭所有覆盖界面()
    {
        foreach (var 覆盖界面 in _覆盖界面列表)
        {
            OnExit();
        }
    }

    public void 关闭最后一项()
    {
        OnExit();
    }

    private void OnDestroy()
    {
        _input.UI.退出.performed -= 按钮退出;
    }

    private void 按钮退出(InputAction.CallbackContext obj)
    {
        OnExit();
    }

    private void OnExit()
    {
        移除空引用();
        if (_覆盖界面列表.Count > 0)
        {
            var last_obj = _覆盖界面列表[_覆盖界面列表.Count - 1];
            Destroy(last_obj);
            _覆盖界面列表.RemoveAt(_覆盖界面列表.Count - 1);
        }
    }

    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }

    void 移除空引用()
    {
        _覆盖界面列表.RemoveAll(x => x == null);
    }
}
