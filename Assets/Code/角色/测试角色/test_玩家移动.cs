using System.Collections;
using System.Collections.Generic;
using Mirror;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.InputSystem;

public class test_玩家移动 : NetworkBehaviour
{
    public 输入系统 InputControls;
    public CharacterController characterController;

    [Header("移动设置")]
    public float moveSpeed = 5f;
    public float jumpSpeed = 10f;
    public float jumpTime = 0.5f;

    [Header("旋转设置")]
    public float mouseSensitivity = 100f; // 鼠标灵敏度
    public Transform cameraTransform; // 摄像机变换（用于第一人称/第三人称）

    [Header("重力相关")]
    public float gravity = 9.81f;
    public float maxFallSpeed = 50f;

    [Header("玩家模型设置")]
    public GameObject 第一人称模型;
    public GameObject 第三人称模型;

    private bool isJumping;
    private float jumpTimer;
    private Vector2 currentMovement;
    private bool isMoving;
    private float verticalVelocity;

    // 存储旋转值
    private float xRotation = 0f; // 上下看的角度
    private float yRotation = 0f; // 左右转的角度

    void OnEnable()
    {
        InputControls = new 输入系统();

        // 移动输入
        InputControls.Player.移动.started += On移动开始;
        InputControls.Player.移动.canceled += On移动结束;
        InputControls.Player.移动.performed += On移动持续;

        // 跳跃输入
        InputControls.Player.跳跃.started += On跳跃开始;
        InputControls.Player.跳跃.canceled += On跳跃结束;

        // 鼠标输入
        InputControls.Player.视角.performed += On视角移动;

        InputControls.Enable();
    }

    // 移动相关方法（保持不变）
    private void On移动开始(InputAction.CallbackContext Obj)
    {
        currentMovement = Obj.ReadValue<Vector2>();
        isMoving = true;
    }

    private void On移动持续(InputAction.CallbackContext Obj)
    {
        currentMovement = Obj.ReadValue<Vector2>();
    }

    private void On移动结束(InputAction.CallbackContext Obj)
    {
        currentMovement = Vector2.zero;
        isMoving = false;
    }

    // 跳跃相关方法（保持不变）
    private void On跳跃开始(InputAction.CallbackContext Obj)
    {
        if (characterController.isGrounded)
        {
            isJumping = true;
            jumpTimer = 0;
            verticalVelocity = jumpSpeed;
        }
    }

    private void On跳跃结束(InputAction.CallbackContext Obj) { }

    // ========== 新增：鼠标视角控制 ==========
    private void On视角移动(InputAction.CallbackContext context)
    {
        // 显示鼠标时不移动
        if (!鼠标控制.is_鼠标)
        {
            Vector2 mouseDelta = context.ReadValue<Vector2>();

            // 水平旋转（左右转）- 旋转整个玩家对象
            yRotation += mouseDelta.x * mouseSensitivity * Time.deltaTime;

            // 垂直旋转（上下看）- 只旋转摄像机
            xRotation -= mouseDelta.y * mouseSensitivity * Time.deltaTime;

            // 限制上下看的幅度（防止脖子断掉）
            xRotation = Mathf.Clamp(xRotation, -90f, 80f);

            // 应用旋转
            transform.localRotation = Quaternion.Euler(0f, yRotation, 0f);

            if (cameraTransform != null)
            {
                cameraTransform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
            }
        }
    }

    void Update()
    {
        if (!isLocalPlayer)
        {
            第一人称模型.SetActive(false);
            第三人称模型.SetActive(true);
            cameraTransform.gameObject.SetActive(false);
            return;
        }
        else
        {
            第一人称模型.SetActive(true);
            第三人称模型.SetActive(false);
            cameraTransform.gameObject.SetActive(true);
        }
        Vector3 moveDirection = Vector3.zero;

        // 跳跃处理（保持不变）
        if (isJumping)
        {
            jumpTimer += Time.deltaTime;
            if (jumpTimer > jumpTime)
            {
                isJumping = false;
                jumpTimer = 0;
                verticalVelocity = 0;
            }
            else
            {
                moveDirection.y = verticalVelocity * Time.deltaTime;
            }
        }

        // 重力处理（保持不变）
        if (!characterController.isGrounded)
        {
            verticalVelocity -= gravity * Time.deltaTime;
            if (verticalVelocity < -maxFallSpeed)
            {
                verticalVelocity = -maxFallSpeed;
            }
            moveDirection.y = verticalVelocity * Time.deltaTime;
        }
        else
        {
            if (verticalVelocity < 0)
            {
                verticalVelocity = 0;
            }
            if (characterController.velocity.y < 0.5f && !isJumping)
            {
                moveDirection.y = -0.5f;
            }
        }

        // 移动处理（修改为相对于摄像机方向）
        if (isMoving && currentMovement != Vector2.zero)
        {
            // 获取摄像机的前方向和右方向（忽略Y轴）
            Vector3 camForward = cameraTransform.forward;
            Vector3 camRight = cameraTransform.right;
            camForward.y = 0;
            camRight.y = 0;
            camForward.Normalize();
            camRight.Normalize();

            // 基于摄像机方向计算移动方向
            Vector3 move = (
                camForward * currentMovement.y + camRight * currentMovement.x
            ).normalized;

            moveDirection.x = move.x * moveSpeed * Time.deltaTime;
            moveDirection.z = move.z * moveSpeed * Time.deltaTime;
        }

        characterController.Move(moveDirection);
    }

    void OnDisable()
    {
        InputControls.Player.移动.started -= On移动开始;
        InputControls.Player.移动.performed -= On移动持续;
        InputControls.Player.移动.canceled -= On移动结束;
        InputControls.Player.跳跃.started -= On跳跃开始;
        InputControls.Player.跳跃.canceled -= On跳跃结束;
        InputControls.Player.视角.performed -= On视角移动;
        InputControls.Disable();
    }
}
