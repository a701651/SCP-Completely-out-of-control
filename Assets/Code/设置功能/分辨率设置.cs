using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 分辨率设置 : MonoBehaviour
{
    public Dropdown 分辨率ui;
    public bool 非UI模式 = false;
    private static int width = 0;
    private static int height = 0;

    /// <summary>
    /// 常见分辨率枚举（涵盖 16:9 / 16:10 / 21:9 / 4:3 / 5:4 / 3:2 / 32:9）
    /// </summary>
    public enum 分辨率_Type
    {
        屏幕分辨率大小, // 0 - 特殊项：保持当前分辨率

        // === 16:9（标准宽屏） ===
        W854xH480, // 1
        W960xH540, // 2  (新增)
        W1024xH576, // 3  (新增)
        W1280xH720, // 4
        W1360xH768, // 5  (新增)
        W1366xH768, // 6  (新增)
        W1600xH900, // 7
        W1920xH1080, // 8
        W2048xH1152, // 9  (新增)
        W2560xH1440, // 10
        W2880xH1620, // 11 (新增)
        W3200xH1800, // 12
        W3840xH2160, // 13

        // === 16:10（宽屏） ===
        W1280xH800, // 14
        W1440xH900, // 15
        W1680xH1050, // 16
        W1920xH1200, // 17
        W2560xH1600, // 18
        W3840xH2400, // 19

        // === 21:9（超宽屏） ===
        W1280xH536, // 20
        W1720xH720, // 21
        W2560xH1080, // 22
        W3440xH1440, // 23
        W3840xH1600, // 24
        W5120xH2160, // 25

        // === 4:3（传统比例） ===
        W640xH480, // 26 (新增)
        W800xH600, // 27 (新增)
        W1024xH768, // 28 (新增)
        W1152xH864, // 29 (新增)
        W1280xH960, // 30 (新增)
        W1400xH1050, // 31 (新增)
        W1600xH1200, // 32 (新增)
        W1920xH1440, // 33 (新增)
        W2048xH1536, // 34 (新增)
        W2560xH1920, // 35 (新增)

        // === 5:4（正屏） ===
        W1280xH1024, // 36 (新增)
        W2560xH2048, // 37 (新增)

        // === 3:2（经典比例） ===
        W720xH480, // 38 (新增)
        W960xH640, // 39 (新增)
        W1200xH800, // 40 (新增)
        W1440xH960, // 41 (新增)
        W1920xH1280, // 42 (新增)

        // === 32:9（超超宽屏） ===
        W1280xH360, // 43 (新增)
        W2560xH720, // 44 (新增)
        W3840xH1080, // 45 (新增)
        W5120xH1440, // 46 (新增)

        // === 其他常用比例 ===
        W1024xH600, // 47 (新增) ~17:10
        W1280xH768, // 48 (新增) ~5:3
    }

    private static readonly Dictionary<分辨率_Type, (int w, int h)> 分辨率映射 = new()
    {
        // === 16:9 ===
        { 分辨率_Type.W854xH480, (854, 480) },
        { 分辨率_Type.W960xH540, (960, 540) },
        { 分辨率_Type.W1024xH576, (1024, 576) },
        { 分辨率_Type.W1280xH720, (1280, 720) },
        { 分辨率_Type.W1360xH768, (1360, 768) },
        { 分辨率_Type.W1366xH768, (1366, 768) },
        { 分辨率_Type.W1600xH900, (1600, 900) },
        { 分辨率_Type.W1920xH1080, (1920, 1080) },
        { 分辨率_Type.W2048xH1152, (2048, 1152) },
        { 分辨率_Type.W2560xH1440, (2560, 1440) },
        { 分辨率_Type.W2880xH1620, (2880, 1620) },
        { 分辨率_Type.W3200xH1800, (3200, 1800) },
        { 分辨率_Type.W3840xH2160, (3840, 2160) },
        // === 16:10 ===
        { 分辨率_Type.W1280xH800, (1280, 800) },
        { 分辨率_Type.W1440xH900, (1440, 900) },
        { 分辨率_Type.W1680xH1050, (1680, 1050) },
        { 分辨率_Type.W1920xH1200, (1920, 1200) },
        { 分辨率_Type.W2560xH1600, (2560, 1600) },
        { 分辨率_Type.W3840xH2400, (3840, 2400) },
        // === 21:9 ===
        { 分辨率_Type.W1280xH536, (1280, 536) },
        { 分辨率_Type.W1720xH720, (1720, 720) },
        { 分辨率_Type.W2560xH1080, (2560, 1080) },
        { 分辨率_Type.W3440xH1440, (3440, 1440) },
        { 分辨率_Type.W3840xH1600, (3840, 1600) },
        { 分辨率_Type.W5120xH2160, (5120, 2160) },
        // === 4:3 ===
        { 分辨率_Type.W640xH480, (640, 480) },
        { 分辨率_Type.W800xH600, (800, 600) },
        { 分辨率_Type.W1024xH768, (1024, 768) },
        { 分辨率_Type.W1152xH864, (1152, 864) },
        { 分辨率_Type.W1280xH960, (1280, 960) },
        { 分辨率_Type.W1400xH1050, (1400, 1050) },
        { 分辨率_Type.W1600xH1200, (1600, 1200) },
        { 分辨率_Type.W1920xH1440, (1920, 1440) },
        { 分辨率_Type.W2048xH1536, (2048, 1536) },
        { 分辨率_Type.W2560xH1920, (2560, 1920) },
        // === 5:4 ===
        { 分辨率_Type.W1280xH1024, (1280, 1024) },
        { 分辨率_Type.W2560xH2048, (2560, 2048) },
        // === 3:2 ===
        { 分辨率_Type.W720xH480, (720, 480) },
        { 分辨率_Type.W960xH640, (960, 640) },
        { 分辨率_Type.W1200xH800, (1200, 800) },
        { 分辨率_Type.W1440xH960, (1440, 960) },
        { 分辨率_Type.W1920xH1280, (1920, 1280) },
        // === 32:9 ===
        { 分辨率_Type.W1280xH360, (1280, 360) },
        { 分辨率_Type.W2560xH720, (2560, 720) },
        { 分辨率_Type.W3840xH1080, (3840, 1080) },
        { 分辨率_Type.W5120xH1440, (5120, 1440) },
        // === 其他 ===
        { 分辨率_Type.W1024xH600, (1024, 600) },
        { 分辨率_Type.W1280xH768, (1280, 768) },
    };

    // ✅ 关键：过滤后的 Dropdown 索引 → 枚举值 映射
    // 因为隐藏了部分选项，Dropdown.index ≠ 枚举int值
    private List<分辨率_Type> _可用分辨率列表 = new List<分辨率_Type>();

    // ======================== 显示文本工具方法 ========================

    private static string GetDisplayName(分辨率_Type type)
    {
        width = Screen.currentResolution.width;
        height = Screen.currentResolution.height;
        if (type == 分辨率_Type.屏幕分辨率大小)
        {
            return $"{width}x{height}(默认)";
        }

        if (!分辨率映射.TryGetValue(type, out var res))
            return type.ToString();

        string ratio = GetAspectRatioLabel(res.w, res.h);
        return $"{res.w} x {res.h}  ({ratio})";
    }

    private static string GetAspectRatioLabel(int w, int h)
    {
        float ratio = (float)w / h;

        // 精确匹配常见比例
        if (Math.Abs(ratio - 16f / 9f) < 0.02f)
            return "16:9";
        if (Math.Abs(ratio - 16f / 10f) < 0.02f)
            return "16:10";
        if (Math.Abs(ratio - 21f / 9f) < 0.02f)
            return "21:9";
        if (Math.Abs(ratio - 4f / 3f) < 0.02f)
            return "4:3";
        if (Math.Abs(ratio - 5f / 4f) < 0.02f)
            return "5:4";
        if (Math.Abs(ratio - 3f / 2f) < 0.02f)
            return "3:2";
        if (Math.Abs(ratio - 32f / 9f) < 0.02f)
            return "32:9";

        long gcd = GCD(w, h);
        return $"{w / gcd}:{h / gcd}";
    }

    private static long GCD(long a, long b)
    {
        while (b != 0)
        {
            long t = b;
            b = a % b;
            a = t;
        }
        return a;
    }

    // ======================== 核心逻辑 ========================

    void Start()
    {
        if (非UI模式)
        {
            if (PlayerPrefs.HasKey("分辨率设置"))
            {
                int savedEnum = PlayerPrefs.GetInt("分辨率设置");
                SetDisplayMode(savedEnum);
            }
            else
            {
                Debug.LogWarning("非UI模式下未找到分辨率配置，使用默认分辨率");
                SetDisplayMode((int)分辨率_Type.屏幕分辨率大小);
            }
            return;
        }

        // ✅ 构建过滤后的可用分辨率列表
        BuildAvailableResolutions();

        // ✅ 用过滤后的列表填充 Dropdown
        分辨率ui.ClearOptions();
        List<string> options = new List<string>(_可用分辨率列表.Count);
        foreach (var type in _可用分辨率列表)
        {
            options.Add(GetDisplayName(type));
        }
        分辨率ui.AddOptions(options);

        // ✅ 读取存档并还原选中项（通过枚举值反查 Dropdown 索引）
        if (PlayerPrefs.HasKey("分辨率设置"))
        {
            int savedEnum = PlayerPrefs.GetInt("分辨率设置");
            int dropdownIndex = _可用分辨率列表.IndexOf((分辨率_Type)savedEnum);

            if (dropdownIndex >= 0)
            {
                分辨率ui.SetValueWithoutNotify(dropdownIndex);
                SetDisplayMode(savedEnum);
            }
            else
            {
                // 存档中的分辨率已被过滤（超出当前屏幕），回退到第一项
                Debug.LogWarning(
                    $"存档中的分辨率 {(分辨率_Type)savedEnum} 超出当前屏幕范围，已重置"
                );
                分辨率ui.SetValueWithoutNotify(0);
                SetDisplayMode((int)_可用分辨率列表[0]);
            }
        }

        // ✅ 注册监听（使用 Dropdown 索引 → 枚举值的转换）
        分辨率ui.onValueChanged.AddListener(OnDropdownChanged);
    }

    /// <summary>
    /// 构建可用分辨率列表：始终包含"当前屏幕分辨率"+ 所有不超过屏幕物理分辨率的选项
    /// </summary>
    private void BuildAvailableResolutions()
    {
        _可用分辨率列表.Clear();

        // 第一项永远是"当前屏幕分辨率"
        _可用分辨率列表.Add(分辨率_Type.屏幕分辨率大小);

        int screenW = Screen.currentResolution.width;
        int screenH = Screen.currentResolution.height;

        foreach (var kvp in 分辨率映射)
        {
            // ✅ 核心过滤条件：宽和高都不超过屏幕物理分辨率
            if (kvp.Value.w <= screenW && kvp.Value.h <= screenH)
            {
                _可用分辨率列表.Add(kvp.Key);
            }
        }

        // 按像素总量升序排列（跳过第一项"当前屏幕分辨率"）
        _可用分辨率列表.Sort(
            (a, b) =>
            {
                if (a == 分辨率_Type.屏幕分辨率大小)
                    return -1;
                if (b == 分辨率_Type.屏幕分辨率大小)
                    return 1;

                var ra = 分辨率映射[a];
                var rb = 分辨率映射[b];
                return (ra.w * ra.h).CompareTo(rb.w * rb.h);
            }
        );

        Debug.Log($"可用分辨率数量: {_可用分辨率列表.Count} (屏幕: {screenW}x{screenH})");
    }

    /// <summary>
    /// Dropdown 回调：将 Dropdown 索引转换为枚举值再存储/应用
    /// </summary>
    private void OnDropdownChanged(int dropdownIndex)
    {
        if (dropdownIndex < 0 || dropdownIndex >= _可用分辨率列表.Count)
        {
            Debug.LogError($"Dropdown 索引越界: {dropdownIndex}");
            return;
        }

        分辨率_Type actualType = _可用分辨率列表[dropdownIndex];
        int enumValue = (int)actualType;

        PlayerPrefs.SetInt("分辨率设置", enumValue);
        SetDisplayMode(enumValue);
    }

    /// <summary>
    /// 应用分辨率（仍然接收枚举int值，与 UI 解耦）
    /// </summary>
    public static void SetDisplayMode(int enumValue)
    {
        if (!Enum.IsDefined(typeof(分辨率_Type), enumValue))
        {
            Debug.LogError($"无效的分辨率枚举值: {enumValue}");
            return;
        }

        分辨率_Type mode = (分辨率_Type)enumValue;

        if (mode == 分辨率_Type.屏幕分辨率大小)
        {
            int w = Screen.currentResolution.width;
            int h = Screen.currentResolution.height;
            // 保存当前全屏模式，临时切换到 ExclusiveFullscreen 以改变分辨率
            var prevMode = Screen.fullScreenMode;
            Screen.fullScreenMode = FullScreenMode.ExclusiveFullScreen;
            Screen.SetResolution(w, h, true);
            Screen.fullScreenMode = prevMode;
            Debug.Log($"已设置为桌面分辨率: {w}x{h}");
            return;
        }

        if (分辨率映射.TryGetValue(mode, out var res))
        {
            var prevMode = Screen.fullScreenMode;
            // 临时切换到 ExclusiveFullscreen 模式以改变实际分辨率
            Screen.fullScreenMode = FullScreenMode.ExclusiveFullScreen;
            Screen.SetResolution(res.w, res.h, true);
            Screen.fullScreenMode = prevMode;
            Debug.Log($"已设置分辨率: {res.w}x{res.h}");
        }
        else
        {
            Debug.LogError($"未找到分辨率映射: {mode}");
        }
        // 强制重新渲染UI
        
    }
}
