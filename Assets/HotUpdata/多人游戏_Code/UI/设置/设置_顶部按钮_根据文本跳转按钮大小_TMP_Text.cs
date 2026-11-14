
using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
[RequireComponent(typeof(Button))]
public class 设置_顶部按钮_根据文本跳转按钮大小_TMP_Text : MonoBehaviour
{
    [Header("组件引用")]
    [SerializeField] private TMP_Text _text;

    [Header("按钮设置")]
    [SerializeField] private float _外边距 = 10f;
    [SerializeField] private string _目标切换ID;

    [Header("文字颜色")]
    [SerializeField] private Color _选中颜色 = Color.white;
    [SerializeField] private Color _未选中颜色 = Color.white;

    [Header("文字样式")]
    [SerializeField] private FontStyles _选中字体样式 = FontStyles.Bold;
    [SerializeField] private FontStyles _未选中字体样式 = FontStyles.Normal;

    [Header("布局设置")]
    [SerializeField] private bool _自动检测文本变化 = true;
    [SerializeField] private bool _自动刷新布局 = true;
    [SerializeField] private bool _忽略布局系统控制宽度 = true;

    private 设置_状态机 _状态机;
    private Button _button;
    private RectTransform _rt;
    private RectTransform _textRt;

    private string _上次文本;
    private TMP_FontAsset _上次字体;
    private float _上次字体大小;
    private FontStyles _上次字体样式;
    private float _上次外边距;

    private bool _当前选中状态;
    private bool _已经初始化;
    private bool _正在更新;

    private void Awake()
    {
        初始化组件();
    }

    private void OnEnable()
    {
        初始化组件();

        绑定状态机();

        if (_状态机 != null)
        {
            切换按钮选中状态(_状态机.当前页面ID);
        }
        else
        {
            更新文本宽度();
        }
    }

    private void OnDisable()
    {
        解绑状态机();
    }

    private void OnDestroy()
    {
        解绑状态机();
    }

    private void LateUpdate()
    {
        if (!_自动检测文本变化 || !_已经初始化)
            return;

        if (_text == null)
            return;

        // 检测文本、字体、字体大小和外边距变化
        if (需要更新宽度())
        {
            更新文本宽度();
        }
    }

    /// <summary>
    /// 初始化组件。
    /// </summary>
    private void 初始化组件()
    {
        if (_已经初始化)
            return;

        _button = GetComponent<Button>();
        _rt = GetComponent<RectTransform>();

        if (_text == null)
            _text = GetComponentInChildren<TMP_Text>(true);

        if (_text != null)
            _textRt = _text.rectTransform;

        _已经初始化 = true;
    }

    /// <summary>
    /// 重新查找并绑定状态机。
    /// </summary>
    private void 绑定状态机()
    {
        解绑状态机();

        // 从父级开始查找状态机
        _状态机 = GetComponentInParent<设置_状态机>();

        if (_状态机 == null)
            return;

        _状态机.On切换按钮ID += 切换按钮选中状态;
    }

    /// <summary>
    /// 取消状态机事件订阅。
    /// </summary>
    private void 解绑状态机()
    {
        if (_状态机 != null)
        {
            _状态机.On切换按钮ID -= 切换按钮选中状态;
        }

        _状态机 = null;
    }

    /// <summary>
    /// 检测 TMP 参数是否发生变化。
    /// </summary>
    private bool 需要更新宽度()
    {
        if (_text == null)
            return false;

        return
            _上次文本 != _text.text ||
            _上次字体 != _text.font ||
            !Mathf.Approximately(_上次字体大小, _text.fontSize) ||
            _上次字体样式 != _text.fontStyle ||
            !Mathf.Approximately(_上次外边距, _外边距);
    }

    /// <summary>
    /// 保存当前 TMP 参数，避免重复计算。
    /// </summary>
    private void 保存当前参数()
    {
        _上次文本 = _text.text;
        _上次字体 = _text.font;
        _上次字体大小 = _text.fontSize;
        _上次字体样式 = _text.fontStyle;
        _上次外边距 = _外边距;
    }

    /// <summary>
    /// 根据 TMP 实际渲染宽度自动设置按钮宽度。
    /// </summary>
    public void 更新文本宽度()
    {
        if (_text == null || _rt == null || _正在更新)
            return;

        _正在更新 = true;

        try
        {
            // 禁止换行和省略号
            _text.textWrappingMode = TextWrappingModes.NoWrap;
            _text.overflowMode = TextOverflowModes.Overflow;

            // 强制 TMP 重新计算网格
            _text.ForceMeshUpdate(true, true);

            // 获取完整单行文本宽度
            float textWidth = _text.GetPreferredValues(
                _text.text,
                Mathf.Infinity,
                Mathf.Infinity
            ).x;

            if (float.IsNaN(textWidth) || float.IsInfinity(textWidth))
                return;

            // 按钮最终宽度
            float buttonWidth = Mathf.Max(0f, textWidth + Mathf.Max(0f, _外边距) * 2f);

            // 更新按钮宽度
            _rt.SetSizeWithCurrentAnchors(
                RectTransform.Axis.Horizontal,
                buttonWidth
            );

            // 设置文字区域
            if (_textRt != null)
            {
                _textRt.anchorMin = Vector2.zero;
                _textRt.anchorMax = Vector2.one;

                _textRt.offsetMin = new Vector2(
                    Mathf.Max(0f, _外边距),
                    0f
                );

                _textRt.offsetMax = new Vector2(
                    -Mathf.Max(0f, _外边距),
                    0f
                );
            }

            // 文字居中
            _text.alignment = TextAlignmentOptions.Center;

            // 布局系统处理
            if (_忽略布局系统控制宽度)
            {
                LayoutElement layoutElement =
                    GetComponent<LayoutElement>();

                if (layoutElement == null)
                    layoutElement = gameObject.AddComponent<LayoutElement>();

                layoutElement.ignoreLayout = false;
                layoutElement.preferredWidth = buttonWidth;
                layoutElement.flexibleWidth = 0f;
            }

            保存当前参数();

            // 强制刷新布局
            if (_自动刷新布局)
            {
                LayoutRebuilder.MarkLayoutForRebuild(_rt);

                if (_rt.parent is RectTransform parent)
                {
                    LayoutRebuilder.MarkLayoutForRebuild(parent);
                }
            }
        }
        finally
        {
            _正在更新 = false;
        }
    }

    /// <summary>
    /// 点击按钮切换目标页面。
    /// </summary>
    public void 切换按钮()
    {
        if (_状态机 == null)
        {
            绑定状态机();
        }

        if (_状态机 == null)
        {
            Debug.LogWarning(
                $"{nameof(设置_顶部按钮_根据文本跳转按钮大小_TMP_Text)}：未找到设置_状态机。",
                this
            );

            return;
        }

        _状态机.当前页面ID = _目标切换ID;
    }

    /// <summary>
    /// 根据页面 ID 更新按钮选中状态。
    /// </summary>
    public void 切换按钮选中状态(string id)
    {
        if (_text == null)
            return;

        bool selected = string.Equals(
            id,
            _目标切换ID,
            StringComparison.Ordinal
        );

        // 避免无意义重复刷新
        bool styleChanged = _当前选中状态 != selected;

        _当前选中状态 = selected;

        _text.fontStyle = selected
            ? _选中字体样式
            : _未选中字体样式;

        _text.color = selected
            ? _选中颜色
            : _未选中颜色;

        // 字体样式变化会影响文本宽度
        if (styleChanged || 需要更新宽度())
        {
            更新文本宽度();
        }
    }

    /// <summary>
    /// 修改目标页面 ID。
    /// </summary>
    public void 设置目标ID(string id)
    {
        _目标切换ID = id;

        if (_状态机 != null)
        {
            切换按钮选中状态(_状态机.当前页面ID);
        }
    }

    /// <summary>
    /// 手动刷新按钮。
    /// </summary>
    public void 强制刷新()
    {
        if (_text == null)
            return;

        if (_状态机 != null)
        {
            切换按钮选中状态(_状态机.当前页面ID);
        }
        else
        {
            更新文本宽度();
        }
    }
}
