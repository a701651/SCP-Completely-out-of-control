using UnityEngine;
using UnityEngine.UI;

public class 滚动文本 : MonoBehaviour
{
    public Text 文本;
    private string old_txt;
    public RectTransform content;

    public void Update()
    {
        if (文本.text != old_txt)
        {
            old_txt = 文本.text;
            SetText(文本.text);
        }
    }

    // 设置超长文本
    public void SetText(string str)
    {
        文本.text = str;
        Canvas.ForceUpdateCanvases();
        // 自动适配文本高度
        content.sizeDelta = new Vector2(content.sizeDelta.x, 文本.preferredHeight);
        Debug.Log("已适配文本高度");
    }
}
