using System;
using UnityEngine;
using UnityEngine.InputSystem;

public class UI_物品选中_按键切换 : MonoBehaviour
{
    private InputSystem_Actions _inputSystemActions;
    public 多人_状态机_玩家_基础物品类 物品类;

    private void OnEnable()
    {
        _inputSystemActions = new InputSystem_Actions();
        _inputSystemActions.UI.物品快捷1.Enable();
        _inputSystemActions.UI.物品快捷2.Enable();
        _inputSystemActions.UI.物品快捷3.Enable();
        
        _inputSystemActions.UI.物品快捷1.performed += On物品快捷1;
        _inputSystemActions.UI.物品快捷2.performed += On物品快捷2;
        _inputSystemActions.UI.物品快捷3.performed += On物品快捷3;
    }
    
    private void On物品快捷1(InputAction.CallbackContext context)
    {
        切换物品栏(1);
    }
    
    private void On物品快捷2(InputAction.CallbackContext context)
    {
        切换物品栏(2);
    }
    
    private void On物品快捷3(InputAction.CallbackContext context)
    {
        切换物品栏(3);
    }

    void 切换物品栏(int 目标物品栏ID)
    {
        物品类.当前物品id = 目标物品栏ID;
    }
}
