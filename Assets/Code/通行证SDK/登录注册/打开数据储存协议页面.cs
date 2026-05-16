using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class 打开数据储存协议页面 : MonoBehaviour, IPointerClickHandler
{
    public TMP_Text 文本;
    public Toggle toggle;

    public void OnPointerClick(PointerEventData eventData)
    {
        // 先处理链接点击，再清除选择状态
        int linkIndex = TMP_TextUtilities.FindIntersectingLink(文本, eventData.position, null);
        if (linkIndex != -1)
        {
            TMP_LinkInfo linkInfo = 文本.textInfo.linkInfo[linkIndex];
            string url = linkInfo.GetLinkID();

            // 延迟执行URL打开，避免事件冲突
            StartCoroutine(DelayedOpenURL(url));
            return;
        }

        // 如果没有点击链接，才清除选择状态
        toggle.isOn = !toggle.isOn;
    }

    private IEnumerator DelayedOpenURL(string url)
    {
        // 等待一帧，确保当前事件处理完成
        yield return null;
        Application.OpenURL(url);
    }
}
