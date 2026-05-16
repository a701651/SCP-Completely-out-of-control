using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class 打开麦克风ui : MonoBehaviour
{
    public 输入系统 InputControls;
    public GameObject ui;

    // Start is called before the first frame update
    void Start()
    {
        // 初始化输入系统
        InputControls = new 输入系统();
        ui.SetActive(false);
        InputControls.Player.语音.started += On开始说话;
        InputControls.Player.语音.canceled += On结束说话;
        InputControls.Player.语音.Enable();
    }

    void On开始说话(InputAction.CallbackContext obj)
    {
        ui.SetActive(true);
    }

    void On结束说话(InputAction.CallbackContext obj)
    {
        ui.SetActive(false);
    }

    // Update is called once per frame
    void Update() { }
}
