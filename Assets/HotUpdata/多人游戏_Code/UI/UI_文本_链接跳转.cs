
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections.Generic;

public class UI_文本_链接跳转 : MonoBehaviour, IPointerClickHandler
{
    private TMP_Text _tmp;

    void Awake() => _tmp = GetComponent<TMP_Text>();

    public void OnPointerClick(PointerEventData eventData)
    {
        // Screen Space - Overlay 画布传 null；Camera / World 空间传对应相机
        int linkIndex = TMP_TextUtilities.FindIntersectingLink(
            _tmp,
            eventData.position,
            eventData.pressEventCamera   // Overlay 时可改成 null
        );

        if (linkIndex == -1) return;

        TMP_LinkInfo linkInfo = _tmp.textInfo.linkInfo[linkIndex];
        string linkId = linkInfo.GetLinkID();   // 拿到 "shop" 或 URL
        string linkText = linkInfo.GetLinkText();

        Debug.Log($"点击了链接：{linkId}，显示文字：{linkText}");

        HandleLink(linkId);
    }

    void HandleLink(string id)
    {
        if (!string.IsNullOrEmpty(id))
        {
            Application.OpenURL(id);
        }
    }
}
