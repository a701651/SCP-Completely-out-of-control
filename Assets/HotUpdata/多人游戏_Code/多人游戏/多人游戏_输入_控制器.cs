using System;
using UnityEngine;
using UnityEngine.InputSystem;

public class 多人游戏_输入_控制器 : MonoBehaviour
{
    public bool 是否启用 = true;
    private bool _是否启用;
    public event Action<Vector2> 移动;
    public event Action<Vector2> 视角;
    public event Action 跳跃;
    public event Action 开始演奏;
    private InputSystem_Actions _inputActions;
    void OnEnable()
    {
        _inputActions = new InputSystem_Actions();
        _inputActions.Enable();
        _是否启用 = 是否启用;
        
        // 注册事件
        _inputActions.Player.Move.performed += OnMove;
        _inputActions.Player.Move.canceled += OnMove;
        _inputActions.Player.Look.performed += OnLook;
        _inputActions.Player.Look.canceled += OnLook;
        _inputActions.Player.Jump.performed += OnJump;
        _inputActions.UI.开始演奏.performed += OnMusicStart;
    }
    
    void OnDisable()
    {
        _inputActions.Disable();
    }

    #region 移动输入

    private void OnMove(InputAction.CallbackContext context)
    {
        更新移动输入(context.ReadValue<Vector2>());
    }
    public void 更新移动输入(Vector2 _移动输入)
    {
        if (!是否启用) return;
        移动?.Invoke(_移动输入);
    }

    #endregion
    #region 视角输入

    void OnLook(InputAction.CallbackContext context)
    { 
        更新视角输入(context.ReadValue<Vector2>());
    }
    public void 更新视角输入(Vector2 _视角输入)
    {
        if (!是否启用) return;
        var _视角输入New = _视角输入 / 100 * 设置_设置文件.实例.数据.控制.鼠标灵敏度;
        视角?.Invoke(_视角输入New);
    }

    #endregion
    #region 跳跃

    void OnJump(InputAction.CallbackContext context)
    {
        更新跳跃();
    }

    public void 更新跳跃()
    {
        if (!是否启用) return;
        跳跃?.Invoke();
    }

    #endregion
    #region 演奏

    void OnMusicStart(InputAction.CallbackContext context)
    {
        开始演奏?.Invoke();
    }

    #endregion

    private void LateUpdate()
    {
        if (_是否启用 != 是否启用)
        {
            // 触发移动向量
            移动?.Invoke(Vector2.zero);
            // 触发视角向量
            视角?.Invoke(Vector2.zero);
            _是否启用 = 是否启用;
        }
    }
}
