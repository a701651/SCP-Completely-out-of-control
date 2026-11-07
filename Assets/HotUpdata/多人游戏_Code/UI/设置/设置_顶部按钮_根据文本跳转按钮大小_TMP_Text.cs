using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(RectTransform))]
public class 设置_顶部按钮_根据文本跳转按钮大小_TMP_Text : MonoBehaviour
{
    private 设置_状态机 _状态机;
    private Button _button;
    private RectTransform _rt;

    [SerializeField] private TMP_Text _text;
    [SerializeField] private float _外边距 = 10;
    [SerializeField] private string _目标切换ID = null;
    [SerializeField] private Color _选中颜色 = Color.white;
    [SerializeField] private Color _未选中颜色 = Color.white;

    private void Awake()
    {
        _button = GetComponent<Button>();
        _rt     = GetComponent<RectTransform>();
        // 向上查找第一个 设置_状态机
        _状态机 = transform.parent.GetComponentInParent<设置_状态机>();
    }

    private void OnEnable()
    {
        更新文本宽度();
        _状态机.On切换按钮ID += 切换按钮选中状态;
        切换按钮选中状态(_状态机.当前页面ID);
    }

    private void OnDestroy()
    {
        _状态机.On切换按钮ID -= 切换按钮选中状态;
    }

    public void 更新文本宽度()
    {
        if (_text == null) return;

        // 强制 TMP 立即重算网格，保证 preferredWidth 是最新值
        _text.ForceMeshUpdate();

        float width = _text.preferredWidth;
        _rt.SetSizeWithCurrentAnchors(
            RectTransform.Axis.Horizontal,
            width + 2 * _外边距);
    }

    public void 切换按钮()
    {
        _状态机.当前页面ID = _目标切换ID;
    }

    public void 切换按钮选中状态(string id)
    {
        if (id == _目标切换ID)
        {
            _text.color = _选中颜色;
            // 加粗
            _text.fontStyle = FontStyles.Bold;
        }
        else
        {
            _text.color = _未选中颜色;
            _text.fontStyle = FontStyles.Normal;
        }
    }
}