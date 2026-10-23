using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class 虚拟遥感_UI_遥感绑定 : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
{
    [Header("摇杆配置")]
    public float 遥感限制半径 = 40f;   // 摇杆最大偏移半径（像素）

    public GameObject 摇杆;
    public GameObject 摇杆主GameObject;
    public GameObject 摇杆提示;

    private RectTransform _rect;
    private Vector2 _遥感中心;          // 使用 anchoredPosition，避免世界坐标转换问题
    private Canvas _canvas;
    
    public event Action<Vector2> OnMove;

    private void Awake()
    {
        _rect = 摇杆.GetComponent<RectTransform>();
        _canvas = 摇杆.GetComponentInParent<Canvas>();
    }

    private void OnEnable()
    {
        // 初始化中心点（基于 anchoredPosition）
        _遥感中心 = _rect.anchoredPosition;
        OnEndDrag(null);
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        // 不需要特殊逻辑，但保持接口完整
        // 若需要"按下即跟随"，可在此把中心设为按下位置
        摇杆提示.GetComponent<CanvasGroup>().alpha = 1;
        摇杆主GameObject.GetComponent<CanvasGroup>().alpha = 1;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        // 重置到中心
        _rect.anchoredPosition = _遥感中心;
        摇杆提示.GetComponent<CanvasGroup>().alpha = 0;
        摇杆主GameObject.GetComponent<CanvasGroup>().alpha = 0.5f;
        OnMove?.Invoke(Vector2.zero);
    }

    public void OnDrag(PointerEventData eventData)
    {
        // 把屏幕坐标转为 Canvas 本地坐标
        Vector2 本地点;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(
            _rect.parent as RectTransform,
            eventData.position,
            _canvas.renderMode == RenderMode.ScreenSpaceOverlay ? null : _canvas.worldCamera,
            out 本地点
        );

        // 相对于父级的中心点偏移
        Vector2 拖动方向 = 本地点 - _遥感中心;

        // 限制半径
        if (拖动方向.magnitude > 遥感限制半径)
        {
            拖动方向 = 拖动方向.normalized * 遥感限制半径;
        }

        _rect.anchoredPosition = _遥感中心 + 拖动方向;
        摇杆提示.transform.rotation = Quaternion.Euler(0, 0, Vector2.SignedAngle(Vector2.up, 拖动方向));
        OnMove?.Invoke(输出方向);
    }

    /// <summary>当前摇杆的归一化方向（-1~1），供角色移动使用</summary>
    private Vector2 输出方向
    {
        get
        {
            Vector2 偏移 = _rect.anchoredPosition - _遥感中心;
            return 偏移 / 遥感限制半径;
        }
    }
}