
using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class 多人游戏_演奏_钢琴_按钮 : MonoBehaviour,
    IPointerDownHandler, IPointerUpHandler
{
    private 多人游戏_演奏_钢琴_定义音符 _音符定义;

    private AudioSource _音频源;
    private AudioClip _音频;

    private Vector3 _原始缩放;
    private Coroutine _缩放协程;

    private bool _鼠标按住;
    private bool _键盘按住;
    private bool _触摸按住;
    private bool _按下状态;

    private KeyCode _键码;
    private bool _有键码;

    private string 当前触发按钮;

    [Header("音符")]
    public string 音符名称;

    [Header("UI")]
    public TMP_Text 显示Text;
    public GameObject UpDot;
    public GameObject DownDot;
    public Color 当前颜色;
    public TMP_Text 按钮提示文本;

    [Header("按下动画")]
    [Range(0.5f, 1f)]
    public float 按下缩放 = 0.9f;

    public float 缩放时长 = 0.06f;

    [Header("声音")]
    [Range(0f, 1f)]
    public float 音量 = 1f;

    private void Awake()
    {
        _原始缩放 = transform.localScale;
        _音符定义 = GetComponentInParent<多人游戏_演奏_钢琴_定义音符>();

        _音频源 = GetComponent<AudioSource>();

        if (_音频源 == null)
            _音频源 = gameObject.AddComponent<AudioSource>();

        _音频源.playOnAwake = false;
        _音频源.spatialBlend = 0f;
        _音频源.loop = false;
        _音频源.volume = 音量;

        _音频 = 查找音频();
    }

    private void Update()
    {
        // 键盘按下检测
        bool 键盘当前状态 = _有键码 &&
            Input.GetKey(_键码);

        if (_键盘按住 != 键盘当前状态)
        {
            _键盘按住 = 键盘当前状态;
            刷新按下状态();
        }

        // 鼠标物理松开检测
        if (_鼠标按住 && !Input.GetMouseButton(0))
        {
            _鼠标按住 = false;
            刷新按下状态();
        }
    }

    // =========================
    // 鼠标 / 触摸
    // =========================

    public void OnPointerDown(PointerEventData eventData)
    {
        if (eventData.pointerId == -1)
            _鼠标按住 = true;
        else
            _触摸按住 = true;

        刷新按下状态();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (eventData.pointerId == -1)
            _鼠标按住 = false;
        else
            _触摸按住 = false;

        刷新按下状态();
    }

    // =========================
    // 统一按下状态
    // =========================

    private void 刷新按下状态()
    {
        bool 当前状态 =
            _鼠标按住 ||
            _触摸按住 ||
            _键盘按住;

        if (_按下状态 == 当前状态)
            return;

        _按下状态 = 当前状态;

        if (_按下状态)
        {
            播放音符();
            播放缩放(_原始缩放 * 按下缩放);
        }
        else
        {
            播放缩放(_原始缩放);
        }
    }

    // =========================
    // 音符播放
    // =========================

    private void 播放音符()
    {
        if (_音频 == null)
            _音频 = 查找音频();

        if (_音频 == null || _音频源 == null)
            return;

        // 再次按下时重新播放
        _音频源.Stop();

        _音频源.clip = _音频;
        _音频源.loop = false;
        _音频源.Play();
        Debug.Log("播放音符");
    }

    public void 播放一次()
    {
        if (_音频 == null)
            _音频 = 查找音频();

        if (_音频 != null && _音频源 != null)
        {
            _音频源.PlayOneShot(_音频);
        }
    }

    private AudioClip 查找音频()
    {
        if (_音符定义 == null ||
            string.IsNullOrEmpty(音符名称))
            return null;

        var 音符 = _音符定义.音符列表.Find(
            x => x.名称 == 音符名称);

        return 音符?.音频;
    }

    // =========================
    // 缩放动画
    // =========================

    private void 播放缩放(Vector3 目标)
    {
        if (_缩放协程 != null)
            StopCoroutine(_缩放协程);

        if (缩放时长 <= 0f)
        {
            transform.localScale = 目标;
            return;
        }

        _缩放协程 = StartCoroutine(缩放动画(目标));
    }

    private IEnumerator 缩放动画(Vector3 目标)
    {
        Vector3 起始 = transform.localScale;
        float 时间 = 0f;

        while (时间 < 缩放时长)
        {
            时间 += Time.unscaledDeltaTime;

            float t = Mathf.Clamp01(时间 / 缩放时长);
            t = Mathf.SmoothStep(0f, 1f, t);

            transform.localScale =
                Vector3.Lerp(起始, 目标, t);

            yield return null;
        }

        transform.localScale = 目标;
        _缩放协程 = null;
    }

    // =========================
    // UI更新
    // =========================

    public void 更新UI()
    {
        if (string.IsNullOrEmpty(音符名称))
            return;

        string 名称 = 音符名称
            .Replace("+", "")
            .Replace("-", "");

        if (显示Text != null)
        {
            string[] 音符名称表 =
            {
                "Do", "Re", "Mi", "Fa",
                "So", "La", "Si"
            };

            if (int.TryParse(名称, out int 编号) &&
                编号 >= 1 && 编号 <= 7)
            {
                显示Text.text = 音符名称表[编号 - 1];
            }
            else
            {
                显示Text.text = "???";
            }

            显示Text.color = 当前颜色;
        }

        if (UpDot != null)
        {
            UpDot.SetActive(音符名称.Contains("+"));

            if (UpDot.TryGetComponent(out Image img))
                img.color = 当前颜色;
        }

        if (DownDot != null)
        {
            DownDot.SetActive(音符名称.Contains("-"));

            if (DownDot.TryGetComponent(out Image img))
                img.color = 当前颜色;
        }

        string[] 键位表 =
        {
            "Z", "X", "C", "V", "B", "N", "M",
            "A", "S", "D", "F", "G", "H", "J",
            "Q", "W", "E", "R", "T", "Y", "U"
        };

        if (!int.TryParse(名称, out int 数字) ||
            数字 < 1 || 数字 > 7)
            return;

        int 区偏移 = 音符名称.Contains("-") ? 0 :
                    音符名称.Contains("+") ? 14 : 7;

        int 索引 = 区偏移 + 数字 - 1;

        当前触发按钮 = 键位表[索引];

        if (按钮提示文本 != null)
            按钮提示文本.text = 当前触发按钮;

        _有键码 = Enum.TryParse(
            当前触发按钮, out _键码);
    }
}
