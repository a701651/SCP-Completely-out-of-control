using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 文本水平适配 : MonoBehaviour
{
    public Text 文本;
    private string old_txt;
    public RectTransform content;

    void Start()
    {
        文本 = GetComponent<Text>();
    }

    public void Update()
    {
        if (文本.text != old_txt)
        {
            old_txt = 文本.text;
            SetText();
        }
    }

    // 设置超长文本
    public void SetText()
    {
        Canvas.ForceUpdateCanvases();
        // 自动适配文本高度
        RectTransform rect = GetComponent<RectTransform>();
        rect.sizeDelta = new Vector2(文本.preferredWidth, rect.sizeDelta.y);
    }
}
