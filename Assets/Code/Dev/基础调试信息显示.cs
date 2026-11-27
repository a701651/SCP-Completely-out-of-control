using UnityEngine;
using System;
using System.Text;
using System.Collections.Generic;
using UnityEngine.Profiling;
using UnityEngine.SceneManagement;
#if UNITY_2020_2_OR_NEWER
using Unity.Profiling;
#endif

/// <summary>
/// Unity 全方位调试信息面板
/// 快捷键：F1 切换显示 / F2 清空日志
/// </summary>
public class AdvancedDebugInfo : MonoBehaviour
{
    #region 配置项
    [Header("显示")]
    public bool showDebugInfo = true;
    public int fontSize = 13;
    public Color textColor = Color.white;
    public Color backgroundColor = new Color(0f, 0f, 0f, 0.72f);
    public Color headerColor = new Color(0.4f, 0.85f, 1f);
    public Vector2 margin = new Vector2(10, 10);
    public float maxWidth = 460f;
    [Tooltip("普通数据刷新间隔（秒）")]
    public float refreshInterval = 0.2f;
    [Tooltip("重数据刷新间隔（秒），如 FrameTiming / 屏幕等")]
    public float heavyRefreshInterval = 2f;

    [Header("分组开关")]
    public bool groupPerformance = true;
    public bool groupMemory = true;
    public bool groupObjects = true;
    public bool groupTime = true;
    public bool groupScene = true;
    public bool groupSystem = true;
    public bool groupRendering = true;
    public bool groupScreen = true;
    public bool groupApp = true;
    public bool groupNetwork = true;
    public bool groupAudio = true;
    public bool groupInput = true;
    public bool groupCamera = true;
    public bool groupLogs = true;

    [Header("日志")]
    public int maxLogs = 6;
    #endregion

    #region 内部状态
    private Dictionary<string, bool> _fold = new Dictionary<string, bool>();
    private StringBuilder _sb = new StringBuilder(2048);
    private GUIStyle _labelStyle, _headerStyle;
    private Texture2D _bgTex;
    private float _refreshTimer, _heavyTimer;
    private Vector2 _scroll;

    // FPS
    private float _fpsTimer;
    private int _frameCount;
    private float _fps;
    private float _minFps = float.MaxValue;
    private float _maxFps;
    private double _sumFps;
    private int _avgCount;
    private float _frameTimeMs, _worstFrameMs;

    // 时间
    private float _gameTime, _unscaledTime, _realTime, _dtMs;
    private int _frameCountTotal;

    // 内存
    private long _totalAllocated, _totalReserved, _monoHeap, _monoUsed, _gfxMem, _audioMem;

    // 物体
    private int _totalGO, _activeGO, _inactiveGO;
    private int _renderers, _colliders, _rigidbodies, _audioSources;
    private int _lights, _canvases, _cameras, _animators, _particleSystems, _particles;
    private int _audioListeners;

    // 渲染
    private int _drawCalls, _batches, _triangles, _vertices, _setPassCalls;
    private double _cpuFrameMs, _gpuFrameMs;

    // 系统
    private string _deviceModel, _deviceType, _os, _processorType, _gpuName,
                   _gpuVendor, _gpuVersion, _systemLang, _platform, _unityVersion;
    private int _processorCount, _processorFreq, _systemMemory, _gpuMem, _shaderLevel, _maxTexSize;
    private string _sysSupports;

    // 应用
    private string _appVersion, _productName, _companyName;
    private bool _isEditor, _isMobile;
    private int _targetFrameRate;

    // 屏幕
    private float _dpi;
    private string _safeArea, _resolution;

    // 网络/电池
    private string _network, _batteryState;
    private float _battery;

    // GC
    private int _gc0, _gc1, _gc2;

    // FrameTiming
    private FrameTiming[] _frameTimings = new FrameTiming[1];

    // ProfilerRecorder
#if UNITY_2020_2_OR_NEWER
    private ProfilerRecorder _recDrawCalls, _recBatches, _recTriangles, _recVertices, _recSetPass, _recAudioMem;
#endif

    // 日志
    private struct LogEntry { public string Msg; public LogType Type; public float T; }
    private List<LogEntry> _logs = new List<LogEntry>();

    // 缓存
    private Camera _mainCam;
    #endregion

    #region 生命周期
    void Awake()
    {
        _bgTex = new Texture2D(1, 1);
        _bgTex.SetPixel(0, 0, Color.white);
        _bgTex.Apply();

        // 注意：GUI 样式改为在 OnGUI 中惰性初始化
        // 因为 GUI.skin 只能在 OnGUI 内访问
        InitFolds();
        InitSystemInfo();
        InitRecorders();
    }

    void OnEnable()  { Application.logMessageReceived += HandleLog; }
    void OnDisable() { Application.logMessageReceived -= HandleLog; }

    void OnDestroy()
    {
        if (_bgTex) Destroy(_bgTex);
#if UNITY_2020_2_OR_NEWER
        _recDrawCalls.Dispose(); _recBatches.Dispose();
        _recTriangles.Dispose(); _recVertices.Dispose(); _recSetPass.Dispose();
        _recAudioMem.Dispose();
#endif
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F1)) showDebugInfo = !showDebugInfo;
        if (Input.GetKeyDown(KeyCode.F2)) _logs.Clear();

        UpdateFPS();
        UpdateTime();

        _refreshTimer += Time.unscaledDeltaTime;
        if (_refreshTimer >= refreshInterval)
        {
            _refreshTimer = 0f;
            UpdateMemory();
            UpdateObjects();
            UpdateRenderStats();
        }

        _heavyTimer += Time.unscaledDeltaTime;
        if (_heavyTimer >= heavyRefreshInterval)
        {
            _heavyTimer = 0f;
            UpdateHeavy();
        }
    }

    void OnGUI()
    {
        if (!showDebugInfo) return;
        EnsureStyles();
        if (_labelStyle == null) return;
        DrawPanel();
    }

    void OnValidate()
    {
        // Inspector 中修改字号/颜色后，让样式在下次 OnGUI 重建
        _labelStyle = null;
        _headerStyle = null;
    }
    #endregion

    #region 初始化
    /// <summary>
    /// 惰性初始化 GUI 样式
    /// 必须在 OnGUI 内首次调用，因为 GUI.skin 只能在 OnGUI 访问
    /// </summary>
    private void EnsureStyles()
    {
        if (_labelStyle != null && _headerStyle != null) return;

        _labelStyle = new GUIStyle(GUI.skin.label)
        {
            fontSize = fontSize,
            richText = true,
            wordWrap = false,
            normal = { textColor = textColor },
            alignment = TextAnchor.UpperLeft,
            padding = new RectOffset(6, 6, 0, 0)
        };
        _headerStyle = new GUIStyle(GUI.skin.button)
        {
            fontSize = fontSize + 1,
            richText = true,
            alignment = TextAnchor.MiddleLeft,
            fontStyle = FontStyle.Bold,
            normal = { textColor = headerColor },
            fixedHeight = fontSize + 8,
            margin = new RectOffset(0, 0, 2, 0)
        };
    }

    private void InitFolds()
    {
        string[] keys = { "perf", "mem", "obj", "time", "scene", "sys",
                          "render", "screen", "app", "net", "audio",
                          "input", "cam", "logs" };
        foreach (var k in keys) _fold[k] = true;
    }

    private void InitSystemInfo()
    {
        _deviceModel = SystemInfo.deviceModel;
        _deviceType  = SystemInfo.deviceType.ToString();
        _os          = SystemInfo.operatingSystem;
        _processorType  = SystemInfo.processorType;
        _processorCount = SystemInfo.processorCount;
        _processorFreq  = SystemInfo.processorFrequency;
        _systemMemory   = SystemInfo.systemMemorySize;
        _gpuName        = SystemInfo.graphicsDeviceName;
        _gpuVendor      = SystemInfo.graphicsDeviceVendor;
        _gpuMem         = SystemInfo.graphicsMemorySize;
        _gpuVersion     = SystemInfo.graphicsDeviceVersion;
        _shaderLevel    = SystemInfo.graphicsShaderLevel;
        _maxTexSize     = SystemInfo.maxTextureSize;

        _appVersion      = Application.version;
        _productName     = Application.productName;
        _companyName     = Application.companyName;
        _unityVersion    = Application.unityVersion;
        _platform        = Application.platform.ToString();
        _systemLang      = Application.systemLanguage.ToString();
        _isEditor        = Application.isEditor;
        _isMobile        = Application.isMobilePlatform;
        _targetFrameRate = Application.targetFrameRate;
        _dpi             = Screen.dpi;

        var sbs = new StringBuilder();
        if (SystemInfo.supportsInstancing)     sbs.Append("Instancing ");
        if (SystemInfo.supportsComputeShaders) sbs.Append("Compute ");
        if (SystemInfo.supportsGyroscope)      sbs.Append("Gyro ");
        if (SystemInfo.supportsAccelerometer)  sbs.Append("Accel ");
        if (SystemInfo.supportsVibration)      sbs.Append("Vibrate ");
        _sysSupports = sbs.Length > 0 ? sbs.ToString().TrimEnd() : "-";
    }

    private void InitRecorders()
    {
#if UNITY_2020_2_OR_NEWER
        _recDrawCalls = ProfilerRecorder.StartNew(ProfilerCategory.Render, "Draw Calls Count");
        _recBatches   = ProfilerRecorder.StartNew(ProfilerCategory.Render, "Batches Count");
        _recTriangles = ProfilerRecorder.StartNew(ProfilerCategory.Render, "Triangles Count");
        _recVertices  = ProfilerRecorder.StartNew(ProfilerCategory.Render, "Vertices Count");
        _recSetPass   = ProfilerRecorder.StartNew(ProfilerCategory.Render, "SetPass Calls Count");

        // 音频内存（某些平台/版本不存在该计数器，Valid 判定）
        _recAudioMem  = ProfilerRecorder.StartNew(ProfilerCategory.Audio, "Audio Used Memory");
#endif
    }
    #endregion

    #region 更新
    private void UpdateFPS()
    {
        _frameCount++;
        _frameCountTotal++;
        _fpsTimer += Time.unscaledDeltaTime;
        if (_fpsTimer >= 0.5f)
        {
            _fps = _frameCount / _fpsTimer;
            _frameCount = 0;
            _fpsTimer = 0f;
            if (_fps < _minFps) _minFps = _fps;
            if (_fps > _maxFps) _maxFps = _fps;
            _sumFps += _fps;
            _avgCount++;
        }
        _frameTimeMs = Time.unscaledDeltaTime * 1000f;
        if (_frameTimeMs > _worstFrameMs) _worstFrameMs = _frameTimeMs;
    }

    private void UpdateTime()
    {
        _gameTime     = Time.time;
        _unscaledTime = Time.unscaledTime;
        _dtMs         = Time.deltaTime * 1000f;
        _realTime     = Time.realtimeSinceStartup;
    }

    private void UpdateMemory()
    {
        _totalAllocated = Profiler.GetTotalAllocatedMemoryLong();
        _totalReserved  = Profiler.GetTotalReservedMemoryLong();
        _monoHeap       = Profiler.GetMonoHeapSizeLong();
        _monoUsed       = Profiler.GetMonoUsedSizeLong();
        _gfxMem         = Profiler.GetAllocatedMemoryForGraphicsDriver();

#if UNITY_2020_2_OR_NEWER
        _audioMem = _recAudioMem.Valid ? _recAudioMem.LastValue : 0;
#else
        _audioMem = 0;
#endif

        _gc0 = GC.CollectionCount(0);
        _gc1 = GC.CollectionCount(1);
        _gc2 = GC.CollectionCount(2);
    }

    private void UpdateObjects()
    {
        _totalGO = _activeGO = _inactiveGO = 0;
        _renderers = _colliders = _rigidbodies = _audioSources = 0;
        _lights = _canvases = _cameras = _animators = _particleSystems = 0;
        _audioListeners = 0;
        _particles = 0;

        var comps = Resources.FindObjectsOfTypeAll<Component>();
        HashSet<GameObject> seen = new HashSet<GameObject>();
        foreach (var c in comps)
        {
            if (c == null) continue;
            var go = c.gameObject;
            if (go == null || !go.scene.IsValid()) continue;

            if (seen.Add(go))
            {
                _totalGO++;
                if (go.activeInHierarchy) _activeGO++;
                else _inactiveGO++;
            }

            if (c is Renderer)                _renderers++;
            else if (c is Collider)           _colliders++;
            else if (c is Rigidbody)          _rigidbodies++;
            else if (c is AudioSource)        _audioSources++;
            else if (c is AudioListener)      _audioListeners++;
            else if (c is Light)              _lights++;
            else if (c is Canvas)             _canvases++;
            else if (c is Camera)             _cameras++;
            else if (c is Animator)           _animators++;
            else if (c is ParticleSystem ps)
            {
                _particleSystems++;
                if (ps.isPlaying && go.activeInHierarchy) _particles += ps.particleCount;
            }
        }
    }

    private void UpdateRenderStats()
    {
#if UNITY_2020_2_OR_NEWER
        if (_recDrawCalls.Valid) _drawCalls    = (int)_recDrawCalls.LastValue;
        if (_recBatches.Valid)   _batches      = (int)_recBatches.LastValue;
        if (_recTriangles.Valid) _triangles    = (int)_recTriangles.LastValue;
        if (_recVertices.Valid)  _vertices     = (int)_recVertices.LastValue;
        if (_recSetPass.Valid)   _setPassCalls = (int)_recSetPass.LastValue;
#endif
    }

    private void UpdateHeavy()
    {
        // FrameTiming（需 PlayerSettings > Frame Timing Stats 开启）
        FrameTimingManager.CaptureFrameTimings();
        uint tCount = FrameTimingManager.GetLatestTimings(1, _frameTimings);
        if (tCount > 0)
        {
            _cpuFrameMs = _frameTimings[0].cpuFrameTime;
            _gpuFrameMs = _frameTimings[0].gpuFrameTime;
        }

        _safeArea   = Screen.safeArea.ToString();
        _resolution = Screen.currentResolution.ToString();

        _network      = Application.internetReachability.ToString();
        _battery      = SystemInfo.batteryLevel;
        _batteryState = SystemInfo.batteryStatus.ToString();

        _mainCam = Camera.main;
    }

    private void HandleLog(string msg, string stack, LogType type)
    {
        if (_logs.Count >= maxLogs) _logs.RemoveAt(0);
        _logs.Add(new LogEntry { Msg = msg ?? "", Type = type, T = Time.realtimeSinceStartup });
    }
    #endregion

    #region 绘制
    private void DrawPanel()
    {
        Rect area = new Rect(margin.x, margin.y, maxWidth, Screen.height - margin.y * 2);
        GUI.color = backgroundColor;
        GUI.DrawTexture(area, _bgTex);
        GUI.color = Color.white;

        GUILayout.BeginArea(area);
        _scroll = GUILayout.BeginScrollView(_scroll);
        GUILayout.BeginVertical();

        GUILayout.Label($"<b><color=#FFD700>◆ DEBUG INFO</color></b>  <size=10><color=#999>[F1]切换 [F2]清日志</color></size>", _labelStyle);

        if (groupPerformance && Foldout("perf",   "性能"))      DrawPerformance();
        if (groupMemory      && Foldout("mem",    "内存"))      DrawMemory();
        if (groupObjects     && Foldout("obj",    "物体统计"))  DrawObjects();
        if (groupTime        && Foldout("time",   "时间"))      DrawTime();
        if (groupScene       && Foldout("scene",  "场景"))      DrawScene();
        if (groupSystem      && Foldout("sys",    "系统"))      DrawSystem();
        if (groupRendering   && Foldout("render", "渲染"))      DrawRendering();
        if (groupScreen      && Foldout("screen", "屏幕"))      DrawScreen();
        if (groupApp         && Foldout("app",    "应用"))      DrawApp();
        if (groupNetwork     && Foldout("net",    "网络/电池")) DrawNetwork();
        if (groupAudio       && Foldout("audio",  "音频"))      DrawAudio();
        if (groupInput       && Foldout("input",  "输入"))      DrawInput();
        if (groupCamera      && Foldout("cam",    "摄像机"))    DrawCamera();
        if (groupLogs        && Foldout("logs",   "日志"))      DrawLogs();

        GUILayout.EndVertical();
        GUILayout.EndScrollView();
        GUILayout.EndArea();
    }

    private bool Foldout(string key, string title)
    {
        if (!_fold.TryGetValue(key, out bool expanded)) expanded = true;
        if (GUILayout.Button($"{(expanded ? "▼" : "▶")} {title}", _headerStyle))
            expanded = !expanded;
        _fold[key] = expanded;
        return expanded;
    }

    private void DrawPerformance()
    {
        _sb.Length = 0;
        _sb.AppendLine($"<color={FpsColor(_fps)}>FPS: {_fps:F1}</color>  Min:<color={FpsColor(_minFps)}>{_minFps:F0}</color>  Max:<color={FpsColor(_maxFps)}>{_maxFps:F0}</color>  Avg:<color={FpsColor(AvgFps())}>{AvgFps():F1}</color>");
        _sb.AppendLine($"帧时间: {_frameTimeMs:F2} ms  最差: {_worstFrameMs:F2} ms");
        _sb.AppendLine($"CPU: {_cpuFrameMs:F2} ms  GPU: {_gpuFrameMs:F2} ms  VSync: {QualitySettings.vSyncCount}  目标FPS: {_targetFrameRate}");
        _sb.AppendLine($"DrawCall: {_drawCalls}  批次: {_batches}  SetPass: {_setPassCalls}");
        _sb.AppendLine($"三角面: {FormatNum(_triangles)}  顶点: {FormatNum(_vertices)}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawMemory()
    {
        _sb.Length = 0;
        _sb.AppendLine($"总分配: <color={MemColor(_totalAllocated)}>{ToMB(_totalAllocated)}</color>  总保留: {ToMB(_totalReserved)}");
        _sb.AppendLine($"Mono 堆: {ToMB(_monoHeap)}  已用: <color={MemColor(_monoUsed)}>{ToMB(_monoUsed)}</color>");
        _sb.AppendLine($"GFX 显存: {ToMB(_gfxMem)}  音频: {ToMB(_audioMem)}");
        _sb.AppendLine($"GC: G0:{_gc0}  G1:{_gc1}  G2:{_gc2}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawObjects()
    {
        _sb.Length = 0;
        _sb.AppendLine($"GameObject: {_totalGO}  <color=#5F5>激活:{_activeGO}</color>  <color=#999>未激活:{_inactiveGO}</color>");
        _sb.AppendLine($"Renderer:{_renderers}  Collider:{_colliders}  Rigidbody:{_rigidbodies}");
        _sb.AppendLine($"AudioSource:{_audioSources}  Light:{_lights}  Canvas:{_canvases}");
        _sb.AppendLine($"Camera:{_cameras}  Animator:{_animators}  ParticleSystem:{_particleSystems}");
        _sb.AppendLine($"活跃粒子: {_particles}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawTime()
    {
        _sb.Length = 0;
        _sb.AppendLine($"游戏时间: {_gameTime:F2}s  真实: {_unscaledTime:F2}s  运行: {_realTime:F0}s");
        _sb.AppendLine($"deltaTime: {_dtMs:F2}ms  TimeScale: {Time.timeScale:F2}  Frame: {_frameCountTotal}");
        _sb.AppendLine($"系统时间: {DateTime.Now:yyyy-MM-dd HH:mm:ss}");
        _sb.AppendLine($"时区: {TimeZoneInfo.Local.DisplayName}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawScene()
    {
        _sb.Length = 0;
        var active = SceneManager.GetActiveScene();
        _sb.AppendLine($"当前场景: {active.name}  <color=#999>(build index:{active.buildIndex})</color>");
        _sb.AppendLine($"已加载场景数: {SceneManager.sceneCount}");
        for (int i = 0; i < SceneManager.sceneCount; i++)
        {
            var s = SceneManager.GetSceneAt(i);
            _sb.AppendLine($"  - {s.name}  loaded:{s.isLoaded}");
        }
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawSystem()
    {
        _sb.Length = 0;
        _sb.AppendLine($"设备: {_deviceModel}  ({_deviceType})");
        _sb.AppendLine($"OS: {_os}");
        _sb.AppendLine($"CPU: {_processorType}");
        _sb.AppendLine($"  核心:{_processorCount}  {_processorFreq}MHz  内存:{_systemMemory}MB");
        _sb.AppendLine($"GPU: {_gpuName}  ({_gpuVendor})");
        _sb.AppendLine($"  显存:{_gpuMem}MB  ShaderLevel:{_shaderLevel}  MaxTex:{_maxTexSize}");
        _sb.AppendLine($"  版本: {_gpuVersion}");
        _sb.AppendLine($"支持: {_sysSupports}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawRendering()
    {
        _sb.Length = 0;
        _sb.AppendLine($"DrawCall: {_drawCalls}  Batches: {_batches}  SetPass: {_setPassCalls}");
        _sb.AppendLine($"三角面: {FormatNum(_triangles)}  顶点: {FormatNum(_vertices)}");
        _sb.AppendLine($"CPU 帧: {_cpuFrameMs:F2}ms  GPU 帧: {_gpuFrameMs:F2}ms");
        _sb.AppendLine($"ColorSpace: {QualitySettings.activeColorSpace}  AA: {QualitySettings.antiAliasing}x");
        _sb.AppendLine($"ShadowDistance: {QualitySettings.shadowDistance}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawScreen()
    {
        _sb.Length = 0;
        _sb.AppendLine($"分辨率: {Screen.width}×{Screen.height}  DPI: {_dpi:F0}");
        _sb.AppendLine($"输出: {_resolution}");
        _sb.AppendLine($"全屏: {Screen.fullScreen}  模式: {Screen.fullScreenMode}");
        _sb.AppendLine($"方向: {Screen.orientation}  安全区: {_safeArea}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawApp()
    {
        _sb.Length = 0;
        _sb.AppendLine($"产品: {_productName}  v{_appVersion}");
        _sb.AppendLine($"公司: {_companyName}");
        _sb.AppendLine($"Unity: {_unityVersion}  平台: {_platform}");
        _sb.AppendLine($"编辑器: {_isEditor}  移动端: {_isMobile}  语言: {_systemLang}");
        _sb.AppendLine($"标识: {Application.identifier}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawNetwork()
    {
        _sb.Length = 0;
        _sb.AppendLine($"网络可达: {_network}");
        _sb.AppendLine($"电池: {(_battery >= 0 ? (_battery * 100f).ToString("F0") + "%" : "未知")}  {_batteryState}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawAudio()
    {
        _sb.Length = 0;
        _sb.AppendLine($"AudioListener.Volume: {AudioListener.volume:F2}");
        _sb.AppendLine($"AudioSource 数: {_audioSources}  Listener 数: {_audioListeners}");
        _sb.AppendLine($"音频内存: {ToMB(_audioMem)}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawInput()
    {
        _sb.Length = 0;
        _sb.AppendLine($"鼠标位置: {Input.mousePosition}");
        _sb.AppendLine($"鼠标左/右/中: {Input.GetMouseButton(0)}/{Input.GetMouseButton(1)}/{Input.GetMouseButton(2)}");
        _sb.AppendLine($"Touch 数量: {Input.touchCount}");
        _sb.AppendLine($"加速度计: {Input.acceleration}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawCamera()
    {
        _sb.Length = 0;
        if (_mainCam != null)
        {
            _sb.AppendLine($"主相机: {_mainCam.name}");
            _sb.AppendLine($"  位置: {_mainCam.transform.position}");
            _sb.AppendLine($"  旋转: {_mainCam.transform.eulerAngles}");
            _sb.AppendLine($"  FOV: {_mainCam.fieldOfView:F1}  Near:{_mainCam.nearClipPlane}  Far:{_mainCam.farClipPlane}");
            _sb.AppendLine($"  深度: {_mainCam.depth}  HDR: {_mainCam.allowHDR}");
        }
        else
        {
            _sb.AppendLine("<color=#F55>未找到 MainCamera (tag=MainCamera)</color>");
        }
        _sb.AppendLine($"场景中 Camera 总数: {_cameras}");
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }

    private void DrawLogs()
    {
        _sb.Length = 0;
        if (_logs.Count == 0)
        {
            _sb.AppendLine("<color=#999>暂无日志</color>");
        }
        else
        {
            for (int i = _logs.Count - 1; i >= 0; i--)
            {
                var l = _logs[i];
                string color = (l.Type == LogType.Error || l.Type == LogType.Exception) ? "#F55"
                             : l.Type == LogType.Warning ? "#FF5"
                             : "#DDD";
                string msg = l.Msg.Length > 80 ? l.Msg.Substring(0, 80) + "..." : l.Msg;
                _sb.AppendLine($"<color={color}>[{l.T:F1}s] {msg}</color>");
            }
        }
        GUILayout.Label(_sb.ToString(), _labelStyle);
    }
    #endregion

    #region 工具
    private float AvgFps() => _avgCount > 0 ? (float)(_sumFps / _avgCount) : 0f;
    private string FpsColor(float f) => f >= 55 ? "#5F5" : f >= 30 ? "#FF5" : "#F55";

    private string MemColor(long bytes)
    {
        long mb = bytes / (1024 * 1024);
        return mb < 512 ? "#5F5" : mb < 1024 ? "#FF5" : "#F55";
    }

    private string ToMB(long bytes) => bytes <= 0 ? "N/A" : $"{bytes / (1024f * 1024f):F2} MB";

    private string FormatNum(int n) =>
        n >= 1_000_000 ? $"{n / 1_000_000f:F2}M" :
        n >= 1_000     ? $"{n / 1_000f:F1}K" : n.ToString();
    #endregion
}