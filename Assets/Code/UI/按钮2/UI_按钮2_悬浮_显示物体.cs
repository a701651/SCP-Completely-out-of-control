using UnityEngine;
using UnityEngine.EventSystems;

public class UI_按钮2_悬浮_显示物体 : MonoBehaviour,IPointerEnterHandler, IPointerExitHandler
{
    public GameObject 显示物体;
    public void OnPointerEnter(PointerEventData eventData)
    {
        显示物体.SetActive(true);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        显示物体.SetActive(false);
    }
}
