using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class 开镜切换镜头 : MonoBehaviour
{
    // 动画播放器
    public Animator animator;
    public 输入系统 InputControls;

    void Start()
    {
        animator.speed = 2;
        InputControls = new 输入系统();
        InputControls.Player.开镜.started += On开镜;
        InputControls.Player.开镜.canceled += On闭镜;
        InputControls.Player.开镜.Enable();
    }

    void On开镜(InputAction.CallbackContext obj)
    {
        Debug.Log("开镜");
        animator.SetBool("is开镜", true);
    }

    void On闭镜(InputAction.CallbackContext obj)
    {
        Debug.Log("闭镜");
        animator.SetBool("is开镜", false);
    }
}
