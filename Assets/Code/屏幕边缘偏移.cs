using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 屏幕边缘偏移组件，用于在Android平台上对UI进行左右边缘偏移适配
/// </summary>
public class 屏幕边缘偏移 : MonoBehaviour
{
    /// <summary>
    /// 偏移比例（0-1之间），表示从屏幕边缘向内偏移的比例
    /// </summary>
    public float 偏移比例 = 0.7f;

    /// <summary>
    /// 需要应用偏移的UI组件列表
    /// </summary>
    public List<GameObject> 偏移组件 = new List<GameObject>();

    /// <summary>
    /// 初始化时应用屏幕边缘偏移
    /// </summary>
    void Start()
    {
#if UNITY_ANDROID
        foreach (var item in 偏移组件)
        {
            if (item != null)
            {
                // ui铺满屏幕，左右边偏移
                RectTransform rectTransform = item.GetComponent<RectTransform>();
                if (rectTransform != null)
                {
                    // 获取屏幕宽度
                    float screenWidth = Screen.width;

                    // 计算左右偏移量
                    float offset = screenWidth * (1 - 偏移比例) / 2;

                    // 设置锚点为拉伸模式（铺满屏幕）
                    rectTransform.anchorMin = new Vector2(0, rectTransform.anchorMin.y);
                    rectTransform.anchorMax = new Vector2(1, rectTransform.anchorMax.y);

                    // 应用左右偏移
                    rectTransform.offsetMin = new Vector2(offset, rectTransform.offsetMin.y);
                    rectTransform.offsetMax = new Vector2(-offset, rectTransform.offsetMax.y);
                }
                else
                {
                    Debug.LogWarning($"屏幕边缘偏移: 对象 '{item.name}' 没有RectTransform组件");
                }
            }
            else
            {
                Debug.LogWarning("屏幕边缘偏移: 偏移组件列表中存在空对象");
            }
        }
#endif
    }

    // Update is called once per frame
    void Update() { }
}
