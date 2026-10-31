using UnityEngine;
using UnityEngine.EventSystems;

public class UI_按钮2_悬浮_显示物体 : MonoBehaviour,IPointerEnterHandler, IPointerExitHandler
{
    public Animator 动画器;
    public void OnPointerEnter(PointerEventData eventData)
    {
        动画器.Play("显示");
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        动画器.Play("隐藏");
    }
}
