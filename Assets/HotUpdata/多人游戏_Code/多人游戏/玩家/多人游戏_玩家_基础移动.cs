using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.EnhancedTouch;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;

public class 多人游戏_玩家_基础移动 : MonoBehaviour
{
    // ---------- 引用 ----------
    private 多人_状态机_玩家_Root _root;
    private CharacterController _controller;
    private InputSystem_Actions _inputActions;

    // ---------- 输入 ----------
    private Vector2 输入;

    [Header("相机")]
    [Tooltip("相机俯仰节点，Player 的子物体")]
    public Transform 视角节点;

    [Header("视角设置")]
    [Tooltip("鼠标灵敏度")]
    public float 鼠标灵敏度 = 0.15f;
    [Tooltip("触屏灵敏度（每像素）")]
    public float 触屏灵敏度 = 0.08f;
    [Tooltip("上下俯仰角限制")]
    public float 俯仰上限 = 85f;
    public float 俯仰下限 = -85f;

    private float 俯仰角 = 0f;

    // ---------- 触屏状态 ----------
    private int 视角手指ID = -1;
    private Vector2 上一帧触屏位置;

    // UI 命中检测缓存
    private static readonly List<RaycastResult> _ui命中结果 = new List<RaycastResult>();
    private PointerEventData _事件数据;

    // ============================================================
    //  生命周期
    // ============================================================

    private void OnEnable()
    {
        _root = GetComponent<多人_状态机_玩家_Root>();
        _controller = GetComponent<CharacterController>();
        
        if (_root == null)
            Debug.LogError("[基础移动] 状态机根节点未指定！");
        if (_controller == null)
            Debug.LogError("[基础移动] CharacterController 未指定！");
        if (视角节点 == null)
            Debug.LogError("[基础移动] 视角节点未指定！");
        StartCoroutine(Init());
    }

    private void OnDisable()
    {
        _inputActions.Player.Move.performed -= OnMove;
        _inputActions.Player.Move.canceled -= OnMove;
        _inputActions.Player.Move.Disable();
        if (_inputActions.Player.Look != null)
        {
            _inputActions.Player.Look.performed -= OnLook;
            _inputActions.Player.Look.canceled -= OnLook;
            _inputActions.Player.Look.Disable();
        }

        _root.虚拟摇杆.OnMove -= 移动;

        EnhancedTouchSupport.Disable();

        视角手指ID = -1;
    }

    private void Update()
    {
        处理触屏视角();
    }

    private void LateUpdate()
    {
        移动逻辑();
    }

    IEnumerator Init()
    {
        // 等待1秒
        yield return new WaitForSeconds(1f);
        
        _inputActions = new InputSystem_Actions();

        // 移动
        _inputActions.Player.Move.Enable();
        _inputActions.Player.Move.performed += OnMove;
        _inputActions.Player.Move.canceled += OnMove;

        // 视角（鼠标/手柄）
        if (_inputActions.Player.Look != null)
        {
            _inputActions.Player.Look.Enable();
            _inputActions.Player.Look.performed += OnLook;
            _inputActions.Player.Look.canceled += OnLook;
        }

        // 虚拟摇杆
        _root.虚拟摇杆.OnMove += 移动;

        // 增强触屏
        EnhancedTouchSupport.Enable();

        // UI 命中检测的 PointerEventData 复用
        if (EventSystem.current != null)
            _事件数据 = new PointerEventData(EventSystem.current);
        
        // 非本地
        if (!_root.是否本地玩家)
        {
            // 删除代码
            Destroy(this);
        }
    }

    // ============================================================
    //  输入回调
    // ============================================================

    private void OnMove(InputAction.CallbackContext context)
    {
        输入 = context.ReadValue<Vector2>();
    }

    private void OnLook(InputAction.CallbackContext context)
    {
        Vector2 delta = context.ReadValue<Vector2>();
        旋转视角(delta, 鼠标灵敏度);
    }

    void 移动(Vector2 方向)
    {
        输入 = 方向;
    }

    // ============================================================
    //  触屏视角
    // ============================================================

    void 处理触屏视角()
    {
        // 1. 已有视角手指：处理移动 / 抬起
        if (视角手指ID != -1)
        {
            var 手指 = 查找触摸(视角手指ID);
            if (手指 == null
                || 手指.Value.phase == UnityEngine.InputSystem.TouchPhase.Ended
                || 手指.Value.phase == UnityEngine.InputSystem.TouchPhase.Canceled)
            {
                视角手指ID = -1;
            }
            else if (手指.Value.phase == UnityEngine.InputSystem.TouchPhase.Moved)
            {
                Vector2 当前 = 手指.Value.screenPosition;
                Vector2 delta = 当前 - 上一帧触屏位置;
                上一帧触屏位置 = 当前;
                旋转视角(delta, 触屏灵敏度);
            }
            return;
        }

        // 2. 没有视角手指：找一根按下的、且未命中 UI 的手指
        foreach (var t in Touch.activeTouches)
        {
            if (t.phase != UnityEngine.InputSystem.TouchPhase.Began) continue;
            if (命中UI(t.screenPosition)) continue;

            视角手指ID = t.touchId;
            上一帧触屏位置 = t.screenPosition;
            break;
        }
    }

    Touch? 查找触摸(int id)
    {
        foreach (var t in Touch.activeTouches)
        {
            if (t.touchId == id) return t;
        }
        return null;
    }

    // ============================================================
    //  UI 命中检测
    // ============================================================

    bool 命中UI(Vector2 屏幕坐标)
    {
        if (EventSystem.current == null) return false;

        if (_事件数据 == null)
            _事件数据 = new PointerEventData(EventSystem.current);

        _事件数据.position = 屏幕坐标;

        _ui命中结果.Clear();
        EventSystem.current.RaycastAll(_事件数据, _ui命中结果);
        return _ui命中结果.Count > 0;
    }

    // ============================================================
    //  视角旋转
    // ============================================================

    /// <summary>
    /// 左右：转 Player 本体（视线方向）
    /// 上下：转相机 pivot，限制俯仰
    /// </summary>
    void 旋转视角(Vector2 delta, float 灵敏度)
    {
        if (视角节点 == null) return;

        // 左右偏航
        transform.Rotate(Vector3.up, delta.x * 灵敏度, Space.Self);

        // 上下俯仰
        俯仰角 -= delta.y * 灵敏度;
        俯仰角 = Mathf.Clamp(俯仰角, 俯仰下限, 俯仰上限);
        视角节点.localRotation = Quaternion.Euler(俯仰角, 0f, 0f);
    }

    // ============================================================
    //  移动
    // ============================================================

    void 移动逻辑()
    {
        if (输入 == Vector2.zero) return;
        if (输入.sqrMagnitude > 1f) 输入 = 输入.normalized;

        // 相对角色自身（FPS：视线方向就是移动前方）
        Vector3 方向 = transform.TransformDirection(new Vector3(输入.x, 0f, 输入.y));
        方向.y = 0f;

        _controller.Move(方向 * _root.移动速度 * Time.deltaTime);
    }
}