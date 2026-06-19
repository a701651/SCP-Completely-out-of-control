using UnityEngine;
using UnityEngine.EventSystems;

public class UIDrag : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    public RectTransform 移动物体;
    private Canvas canvas;
    private CanvasGroup canvasGroup;

    private RectTransform canvasRect;

    void Awake()
    {
        canvas = 移动物体.GetComponentInParent<Canvas>();
        canvasRect = canvas.GetComponent<RectTransform>();

        canvasGroup = 移动物体.GetComponent<CanvasGroup>();
        if (canvasGroup == null)
            canvasGroup = 移动物体.gameObject.AddComponent<CanvasGroup>();
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        canvasGroup.blocksRaycasts = false;
    }

    public void OnDrag(PointerEventData eventData)
    {
        Vector2 delta = eventData.delta / canvas.scaleFactor;
        移动物体.anchoredPosition += delta;

        // ✅ 限制在画布内
        ClampToCanvas();
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        canvasGroup.blocksRaycasts = true;
    }

    private void ClampToCanvas()
    {
        Vector2 pos = 移动物体.anchoredPosition;

        // Canvas 宽高的一半
        float halfWidth = canvasRect.rect.width * 0.5f;
        float halfHeight = canvasRect.rect.height * 0.5f;

        // UI 自身尺寸
        float objHalfWidth = 移动物体.rect.width * 0.5f;
        float objHalfHeight = 移动物体.rect.height * 0.5f;

        // 限制范围
        pos.x = Mathf.Clamp(pos.x, -halfWidth + objHalfWidth, halfWidth - objHalfWidth);
        pos.y = Mathf.Clamp(pos.y, -halfHeight + objHalfHeight, halfHeight - objHalfHeight);

        移动物体.anchoredPosition = pos;
    }
}