using System;
using UnityEngine;
using UnityEngine.InputSystem;

public class UI_键盘_关闭界面 : MonoBehaviour
{
    private InputSystem_Actions _input;

    private void OnEnable()
    {
        _input = new InputSystem_Actions();
        _input.UI.退出.Enable();
        
        // 监听退出按键
        _input.UI.退出.performed += OnExit;
    }

    private void OnExit(InputAction.CallbackContext context)
    {
        _input.UI.退出.Disable();
        // 删除
        Destroy(gameObject);
    }
}
