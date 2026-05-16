using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.InputSystem;

public class 鼠标控制 : MonoBehaviour
{
    public static bool is_鼠标 = false;
    public 输入系统 InputControls;

    void OnEnable()
    {
#if UNITY_ANDROID
        // 不执行代码
        return;
#endif
        InputControls = new 输入系统();
        InputControls.UI.显示鼠标.performed += on显示鼠标;
        InputControls.UI.显示鼠标.canceled += on取消鼠标;
        InputControls.Enable();
        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.SetCursor(null, Vector2.zero, CursorMode.Auto);
    }

    private void on显示鼠标(InputAction.CallbackContext obj)
    {
        Debug.Log("鼠标显示");
        // 显示鼠标
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
        is_鼠标 = true;
    }

    private void on取消鼠标(InputAction.CallbackContext obj)
    {
        Debug.Log("鼠标隐藏");
        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
        is_鼠标 = false;
    }

    void OnDisable()
    {
#if UNITY_ANDROID
        // 不执行代码
        return;
#endif
        InputControls.UI.显示鼠标.performed -= on显示鼠标;
        InputControls.UI.显示鼠标.canceled -= on取消鼠标;
        InputControls.Disable();
    }
}
