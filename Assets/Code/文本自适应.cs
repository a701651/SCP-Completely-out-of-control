using UnityEngine;
using UnityEngine.UI;

public class 文本自适应 : MonoBehaviour
{
    private Text textComponent;
    private RectTransform rectTransform;

    private void Start()
    {
        textComponent = GetComponent<Text>();
        rectTransform = GetComponent<RectTransform>();

        if (textComponent == null || rectTransform == null)
        {
            Debug.LogError("缺少必要的UI组件！", this);
            enabled = false;
            return;
        }

        // 使用事件监听文本变化（更高效）
        textComponent.RegisterDirtyVerticesCallback(OnTextChanged);
        textComponent.RegisterDirtyLayoutCallback(OnTextChanged);

        // 初始调整
        UpdateTextSize();
    }

    private void OnTextChanged()
    {
        UpdateTextSize();
    }

    private void UpdateTextSize()
    {
        if (textComponent != null && rectTransform != null)
        {
            Canvas.ForceUpdateCanvases();
            float newHeight = textComponent.preferredHeight;
            rectTransform.sizeDelta = new Vector2(rectTransform.sizeDelta.x, newHeight);
        }
    }

    private void OnDestroy()
    {
        // 取消注册事件
        if (textComponent != null)
        {
            textComponent.UnregisterDirtyVerticesCallback(OnTextChanged);
            textComponent.UnregisterDirtyLayoutCallback(OnTextChanged);
        }
    }
}