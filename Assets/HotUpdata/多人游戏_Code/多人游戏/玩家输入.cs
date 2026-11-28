using System;
using UnityEngine;
using UnityEngine.InputSystem;

public enum 输入上下文
{
    游戏,
    界面,
    演奏
}

/// <summary>
/// 一帧的输入快照。
/// 用 readonly struct：外部只能整体读取，不能对属性返回的副本改成员（CS1612）。
/// </summary>
public readonly struct 输入帧
{
    public readonly Vector2 移动;   // -1..1，未归一化
    public readonly Vector2 视角;   // 已乘灵敏度的 delta
    public readonly bool 冲刺;

    public 输入帧(Vector2 移动, Vector2 视角, bool 冲刺 = false)
    {
        this.移动 = 移动;
        this.视角 = 视角;
        this.冲刺 = 冲刺;
    }
}

public sealed class 玩家输入 : MonoBehaviour
{
    public static 玩家输入 I { get; private set; }

    [SerializeField] private InputActionAsset 资产;

    private InputActionMap _游戏;
    private InputActionMap _界面;
    private InputAction _移动;
    private InputAction _视角;
    private InputAction _跳跃;

    /// <summary>当前帧输入。只能整体赋值：本帧 = new 输入帧(...)，不能 本帧.移动 = ...</summary>
    public 输入帧 本帧 { get; private set; }

    public 输入上下文 当前上下文 { get; private set; } = 输入上下文.游戏;

    /// <summary>跳跃是边沿量，用事件；连续量请读 本帧。</summary>
    public event Action 跳跃按下;

    private void Awake()
    {
        if (I != null && I != this)
        {
            Destroy(gameObject);
            return;
        }

        I = this;
        DontDestroyOnLoad(gameObject);

        if (资产 == null)
        {
            Debug.LogError("[玩家输入] 未指定 InputActionAsset，输入系统已停用");
            enabled = false;
            return;
        }

        _游戏 = 资产.FindActionMap("Player");
        _界面 = 资产.FindActionMap("UI");

        if (_游戏 == null || _界面 == null)
        {
            Debug.LogError("[玩家输入] InputActionAsset 缺少 Player 或 UI 动作表");
            enabled = false;
            return;
        }

        _移动 = _游戏.FindAction("Move");
        _视角 = _游戏.FindAction("Look");
        _跳跃 = _游戏.FindAction("Jump");

        if (_跳跃 != null)
            _跳跃.performed += On跳跃;

        切换(输入上下文.游戏);
    }

    private void OnDestroy()
    {
        if (_跳跃 != null)
            _跳跃.performed -= On跳跃;

        if (I == this)
            I = null;
    }

    private void Update()
    {
        // 界面 / 演奏上下文下不产生游戏输入
        if (当前上下文 != 输入上下文.游戏)
            return;

        Vector2 移动 = _移动 != null ? _移动.ReadValue<Vector2>() : Vector2.zero;
        Vector2 视角 = _视角 != null ? _视角.ReadValue<Vector2>() : Vector2.zero;

        // 结构体必须整体赋值，不能分别改成员
        本帧 = new 输入帧(移动, 视角 * 灵敏度());
    }

    private static float 灵敏度()
    {
        // 与原 多人游戏_输入_控制器 保持一致：delta / 100 * 灵敏度
        return 设置_设置文件.实例.数据.控制.鼠标灵敏度 / 100f;
    }

    private void On跳跃(InputAction.CallbackContext context)
    {
        跳跃按下?.Invoke();
    }

    public void 切换(输入上下文 ctx)
    {
        _游戏?.Disable();
        _界面?.Disable();

        // 切换时清空，避免松手 / 暂停 / 打开界面后残留旧值
        本帧 = default;
        当前上下文 = ctx;

        switch (ctx)
        {
            case 输入上下文.游戏:
                _游戏?.Enable();
                break;

            case 输入上下文.界面:
            case 输入上下文.演奏:
                // 演奏页目前复用 UI 动作表（开始演奏 / 退出都在 UI 里）
                _界面?.Enable();
                break;
        }
    }
}
