using UnityEngine;
using UnityEngine.EventSystems;

public class UIDragResize : MonoBehaviour, IDragHandler
{
    public RectTransform targetRect;

    public float resizeSpeed = 1f;

    public float minWidth = 200f;
    public float maxWidth = 1200f;
    public float minHeight = 150f;
    public float maxHeight = 800f;

    public void OnDrag(PointerEventData eventData)
    {
        if (targetRect == null) return;

        // 原始尺寸
        float oldWidth = targetRect.rect.width;
        float oldHeight = targetRect.rect.height;

        // 期望新尺寸
        float targetWidth = oldWidth + eventData.delta.x * resizeSpeed;
        float targetHeight = oldHeight - eventData.delta.y * resizeSpeed;

        // Clamp 尺寸
        targetWidth = Mathf.Clamp(targetWidth, minWidth, maxWidth);
        targetHeight = Mathf.Clamp(targetHeight, minHeight, maxHeight);

        // 应用尺寸
        targetRect.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, targetWidth);
        targetRect.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, targetHeight);

        // ✅ 使用“真实尺寸变化”做位置补偿
        float deltaW = targetWidth - oldWidth;
        float deltaH = targetHeight - oldHeight;

        // 根据你的锚点调整方向
        // 示例：右拉变宽 → 左移一半，防止整体右移
        targetRect.anchoredPosition += new Vector2(deltaW / 2f, -deltaH / 2f);

        // ✅ 可选：进一步限制 anchoredPosition 不超出父级
        ClampPosition();
    }

    private void ClampPosition()
    {
        if (targetRect.parent == null) return;

        Rect parentRect = ((RectTransform)targetRect.parent).rect;
        Rect rect = targetRect.rect;

        Vector2 pos = targetRect.anchoredPosition;

        float minX = -parentRect.width / 2f + rect.width / 2f;
        float maxX = parentRect.width / 2f - rect.width / 2f;
        float minY = -parentRect.height / 2f + rect.height / 2f;
        float maxY = parentRect.height / 2f - rect.height / 2f;

        pos.x = Mathf.Clamp(pos.x, minX, maxX);
        pos.y = Mathf.Clamp(pos.y, minY, maxY);

        targetRect.anchoredPosition = pos;
    }
}