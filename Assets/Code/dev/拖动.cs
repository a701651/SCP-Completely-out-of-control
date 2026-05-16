using UnityEngine;
using UnityEngine.EventSystems;

public class UIDrag : MonoBehaviour, IDragHandler
{
    public RectTransform 移动物体;
    private Canvas canvas;

    void Start()
    {
        canvas = GetComponentInParent<Canvas>();
    }

    public void OnDrag(PointerEventData eventData)
    {
        移动物体.anchoredPosition += eventData.delta / canvas.scaleFactor;
    }
}