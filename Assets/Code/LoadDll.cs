using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using HybridCLR;
using UnityEngine;
using UnityEngine.UI;
using YooAsset;

/// <summary>
/// 脚本工作流程：
/// 1.下载资源，用yooAsset资源框架进行下载
///    1.资源文件，ab包
///    2.热更新dll
/// 2.给AOT DLL补充元素据，通过RuntimeApi.LoadMetadataForAOTAssembly
/// 3.通过实例化prefab，运行热更代码
/// </summary>
public class LoadDll : MonoBehaviour
{
    /// <summary>
    /// 资源系统运行模式
    /// </summary>
    public EPlayMode PlayMode = EPlayMode.HostPlayMode;
    public GameObject 更新提示窗;
    public Text 更新提示窗_标题;
    public Text 更新提示窗_文本;
    public GameObject 更新提示窗_按钮_更新区域;
    public GameObject 更新提示窗_按钮_确定区域;
    public Button 更新提示窗_按钮_更新;
    public Button 更新提示窗_按钮_取消;
    public Button 更新提示窗_按钮_确定;
    public GameObject 下载进度条;
    public Text 下载进度条_文本;
    public Text 下载进度条_百分比;
    public Slider 下载进度条_值;
    public GameObject 进入游戏按钮;

    private ResourcePackage _defaultPackage;
    public static bool is_init = false;
    private int max_like = 0;
    public GameObject 版本号更新物体挂载点;

    void Start()
    {
        进入游戏按钮.SetActive(false);
        下载进度条.SetActive(true);
        下载进度条_值.value = 0;
        下载进度条_百分比.text = "0%";
        下载进度条_文本.text = "正在检查资源更新...";
        更新提示窗.SetActive(false);
        更新提示窗_按钮_更新区域.SetActive(false);
        更新提示窗_按钮_确定区域.SetActive(false);
        StartCoroutine(InitYooAssets(StartGame));
    }

    #region YooAsset初始化

    IEnumerator InitYooAssets(Action onDownloadComplete)
    {
        // 等待画面播放完成
        yield return new WaitUntil(() => get_版本号.is_init);
        // 1.初始化资源系统
        YooAssets.Initialize();

        string packageName = "DefaultPackage";
        var package = YooAssets.TryGetPackage(packageName) ?? YooAssets.CreatePackage(packageName);
        YooAssets.SetDefaultPackage(package);
        InitializationOperation initializationOperation = null;
        var is_update = true;
        // 获取启动参数
        string[] args = System.Environment.GetCommandLineArgs();

        foreach (string arg in args)
        {
            //Debug.Log("命令行参数: " + arg);

            // 解析特定参数
            if (arg.StartsWith("-"))
            {
                string[] keyValue = arg.Substring(1).Split('=');
                if (keyValue.Length == 2)
                {
                    string key = keyValue[0];
                    string value = keyValue[1];

                    switch (key.ToLower())
                    {
                        case "is_update":
                            is_update = bool.Parse(value);
                            break;
                    }
                }
            }
        }
        //===================================适应新版本YooAsset插件的修改===================================
        if (PlayMode == EPlayMode.EditorSimulateMode)
        {
            // //编辑器模拟模式
            var buildResult = EditorSimulateModeHelper.SimulateBuild(packageName);
            var packageRoot = buildResult.PackageRootDirectory;
            var editorFileSystemParams =
                FileSystemParameters.CreateDefaultEditorFileSystemParameters(packageRoot);
            var createParameters = new EditorSimulateModeParameters();
            createParameters.EditorFileSystemParameters = editorFileSystemParams;
            initializationOperation = package.InitializeAsync(createParameters);
        }
        else if (PlayMode == EPlayMode.HostPlayMode && is_update)
        {
            //联机运行模式
            string defaultHostServer = "";
            string fallbackHostServer = "";
            WWW wWW = new WWW("https://pastebin.com/raw/nb2WJF2P");
            yield return wWW;
            if (wWW.error == null)
            {
                // windown或者开发模式
                if (
                    Application.platform == RuntimePlatform.WindowsPlayer
                    || Application.platform == RuntimePlatform.WindowsEditor
                )
                {
                    defaultHostServer = wWW.text + "/PC";
                }
                // Android
                else if (Application.platform == RuntimePlatform.Android)
                {
                    defaultHostServer = wWW.text + "/Android";
                }
                fallbackHostServer = defaultHostServer;
            }
            else
            {
                Debug.LogError("获取更新服务器失败");
                yield break;
            }
            IRemoteServices remoteServices = new RemoteServices(
                defaultHostServer,
                fallbackHostServer
            );
            var createParameters = new HostPlayModeParameters
            {
                BuildinFileSystemParameters =
                    FileSystemParameters.CreateDefaultBuildinFileSystemParameters(),
                CacheFileSystemParameters =
                    FileSystemParameters.CreateDefaultCacheFileSystemParameters(remoteServices),
            };
            initializationOperation = package.InitializeAsync(createParameters);
        }
        else if (PlayMode == EPlayMode.OfflinePlayMode || !is_update)
        {
            // 离线模式
            var fileSystemParams = FileSystemParameters.CreateDefaultBuildinFileSystemParameters();

            var createParameters = new OfflinePlayModeParameters();
            createParameters.BuildinFileSystemParameters = fileSystemParams;

            initializationOperation = package.InitializeAsync(createParameters);
        }

        yield return initializationOperation;
        下载进度条_值.value = 0.2f;
        下载进度条_百分比.text = "20%";
        //===================================适应新版本YooAsset插件的修改===================================

        if (initializationOperation.Status == EOperationStatus.Succeed)
        {
            Debug.Log("资源包初始化成功！");
        }
        else
        {
            Debug.LogError($"资源包初始化失败：{initializationOperation.Error}");
        }

        //2.获取资源版本
        var operation = package.RequestPackageVersionAsync();
        yield return operation;
        下载进度条_值.value = 0.4f;
        下载进度条_百分比.text = "40%";

        if (operation.Status != EOperationStatus.Succeed)
        {
            //更新失败
            Debug.LogError(operation.Error);
            for (int i = 0; i < max_like; i++)
            {
                // 重新更新
                operation = package.RequestPackageVersionAsync();
                Debug.LogWarning($"重新请求资源版本 第{i + 1}次");
                yield return operation;
                if (operation.Status != EOperationStatus.Succeed)
                {
                    Debug.LogError($"第{i + 1}次请求失败：{operation.Error}");
                }
                else
                {
                    break;
                }
            }
            if (operation.Status != EOperationStatus.Succeed)
            {
                // 离线模式启动
                更新提示窗_按钮_确定区域.SetActive(true);
                更新提示窗_标题.text = "提示";
                更新提示窗_文本.text = "网络异常，无法更新资源，点击确定将以离线模式启动";
                更新提示窗.SetActive(true);
                var is_qd = false;
                更新提示窗_按钮_确定.onClick.AddListener(() =>
                {
                    is_qd = true;
                });
                yield return new WaitUntil(() => is_qd);
                更新提示窗.SetActive(false);
                StartCoroutine(InitOfflinePlayMode(onDownloadComplete));
                yield break;
            }
        }

        string packageVersion = operation.PackageVersion;
        Debug.Log($"Updated package Version : {packageVersion}");
        PlayerPrefs.SetString("version", packageVersion);
        StartCoroutine(
            版本号更新物体挂载点.GetComponent<get_版本号>().WaitForInitializationAndLoadAsset()
        );

        //3.更新补丁清单
        // 更新成功后自动保存版本号，作为下次初始化的版本。
        // 也可以通过operation.SavePackageVersion()方法保存。
        var operation2 = package.UpdatePackageManifestAsync(packageVersion);
        yield return operation2;
        下载进度条_值.value = 0.6f;
        下载进度条_百分比.text = "60%";
        if (operation2.Status != EOperationStatus.Succeed)
        {
            //更新失败
            Debug.LogError(operation2.Error);
            yield break;
        }

        //4.下载补丁包
        yield return Download();

        //判断是否下载成功
        var assets = new List<string> { "HotUpdate.dll" }.Concat(AOTMetaAssemblyFiles);
        foreach (var asset in assets)
        {
            var handle = package.LoadAssetAsync<TextAsset>(asset);
            yield return handle;
            var assetObj = handle.AssetObject as TextAsset;
            s_assetDatas[asset] = assetObj;
            Debug.Log($"dll:{asset}   {assetObj == null}");
        }

        _defaultPackage = package;
        onDownloadComplete();
    }

    /// <summary>
    /// 远端资源地址查询服务类
    /// </summary>
    private class RemoteServices : IRemoteServices
    {
        private readonly string _defaultHostServer;
        private readonly string _fallbackHostServer;

        public RemoteServices(string defaultHostServer, string fallbackHostServer)
        {
            _defaultHostServer = defaultHostServer;
            _fallbackHostServer = fallbackHostServer;
        }

        string IRemoteServices.GetRemoteMainURL(string fileName)
        {
            return $"{_defaultHostServer}/{fileName}";
        }

        string IRemoteServices.GetRemoteFallbackURL(string fileName)
        {
            return $"{_fallbackHostServer}/{fileName}";
        }
    }

    //===================================适应新版本YooAsset插件的修改===================================
    //     /// <summary>
    //     /// 资源文件查询服务类
    //     /// </summary>
    //     internal class GameQueryServices : IBuildinQueryServices
    //     {
    //         public bool Query(string packageName, string fileName, string fileCRC)
    //         {
    // #if UNITY_IPHONE
    //             throw new Exception("Ios平台需要内置资源");
    //             return false;
    // #else
    //             return false;
    // #endif
    //         }
    //     }
    //===================================适应新版本YooAsset插件的修改===================================

    #endregion
    #region 离线模式启动
    IEnumerator InitOfflinePlayMode(Action onDownloadComplete)
    {
        // 先销毁资源包
        var package1 = YooAssets.GetPackage("DefaultPackage");
        DestroyOperation operation1 = package1.DestroyAsync();
        yield return operation1;

        // 然后移除资源包
        if (YooAssets.RemovePackage(package1))
        {
            Debug.Log("移除成功！");
        }
        // 1.初始化资源系统
        YooAssets.Initialize();
        string packageName = "DefaultPackage";
        var package = YooAssets.CreatePackage(packageName);
        YooAssets.SetDefaultPackage(package);
        InitializationOperation initializationOperation = null;
        下载进度条.SetActive(false);

        // 离线模式
        var fileSystemParams = FileSystemParameters.CreateDefaultBuildinFileSystemParameters();

        var createParameters = new OfflinePlayModeParameters();
        createParameters.BuildinFileSystemParameters = fileSystemParams;

        initializationOperation = package.InitializeAsync(createParameters);
        yield return initializationOperation;

        //===================================适应新版本YooAsset插件的修改===================================

        if (initializationOperation.Status == EOperationStatus.Succeed)
        {
            Debug.Log("资源包初始化成功！");
        }
        else
        {
            Debug.LogError($"资源包初始化失败：{initializationOperation.Error}");
        }
        var operation = package.RequestPackageVersionAsync();
        yield return operation;

        string packageVersion = "";
        if (operation.Status == EOperationStatus.Succeed)
        {
            //更新成功
            packageVersion = operation.PackageVersion;
            Debug.Log($"Request package Version : {packageVersion}");
        }
        else
        {
            //更新失败
            Debug.LogError(operation.Error);
        }

        var operation2 = package.UpdatePackageManifestAsync(packageVersion);
        yield return operation2;

        if (operation2.Status == EOperationStatus.Succeed)
        {
            //更新成功
        }
        else
        {
            //更新失败
            Debug.LogError(operation2.Error);
        }
        _defaultPackage = package;
        onDownloadComplete();
    }
    #endregion

    #region 下载热更资源

    IEnumerator Download()
    {
        Debug.Log("开始下载补丁包...");
        int downloadingMaxNum = 10;
        int failedTryAgain = max_like;
        var package = YooAssets.GetPackage("DefaultPackage");
        var downloader = package.CreateResourceDownloader(downloadingMaxNum, failedTryAgain);

        //没有需要下载的资源
        if (downloader.TotalDownloadCount == 0)
        {
            下载进度条.SetActive(false);
            Debug.Log("没有需要下载的资源");
            yield break;
        }
        var TotalDownloadBytes = downloader.TotalDownloadBytes;
        var TotalDownloadCount = downloader.TotalDownloadCount;
        // 显示更新提示窗
        var is_button_clicked = 0;
        更新提示窗_标题.text = "发现新版本";
        更新提示窗_文本.text =
            $"发现一个新版本\n"
            + $"本次更新大小:{DownloadTextCount(TotalDownloadBytes)}，需要下载{TotalDownloadCount}个文件\n"
            + $"本次更新内容:\n"
            + $"·修复部分已知BUG\n"
            + $"·优化部分功能体验\n"
            + $"·新功能和游戏内容\n"
            + "强烈建议你进行本次更新，就版本可能很快就不在会被我们中心服务器支持！！！";
        更新提示窗_按钮_更新区域.SetActive(true);
        更新提示窗.SetActive(true);
        // 注册按钮事件
        更新提示窗_按钮_更新.onClick.AddListener(() =>
        {
            is_button_clicked = 1;
        });
        更新提示窗_按钮_取消.onClick.AddListener(() =>
        {
            is_button_clicked = 2;
        });
        yield return new WaitUntil(() => is_button_clicked != 0);
        更新提示窗.SetActive(false);
        // 注销按钮事件
        更新提示窗_按钮_更新.onClick.RemoveAllListeners();
        更新提示窗_按钮_取消.onClick.RemoveAllListeners();
        // 取消更新
        if (is_button_clicked == 2)
        {
            下载进度条.SetActive(false);
            Debug.Log("用户取消更新");
            yield break;
        }

        //===================================适应新版本YooAsset插件的修改===================================
        //注册回调方法
        downloader.DownloadErrorCallback = OnDownloadErrorFunction;
        downloader.DownloadUpdateCallback = OnDownloadProgressUpdateFunction;
        downloader.DownloadFinishCallback = OnDownloadOverFunction;
        downloader.DownloadFileBeginCallback = OnStartDownloadFileFunction;
        //===================================适应新版本YooAsset插件的修改===================================

        //开启下载
        downloader.BeginDownload();

        yield return downloader;

        //检测下载结果
        if (downloader.Status == EOperationStatus.Succeed)
        {
            //下载成功
            Debug.Log("更新完成");
            下载进度条.SetActive(false);
        }
        else
        {
            //下载失败
            Debug.Log("更新失败");
        }
    }

    //===================================适应新版本YooAsset插件的修改===================================
    /// <summary>
    /// 开始下载
    /// </summary>
    private void OnStartDownloadFileFunction(DownloadFileData downloadFileData)
    {
        Debug.Log(
            $"开始下载：文件名：{downloadFileData.FileName}，文件大小：{downloadFileData.FileSize}"
        );
    }

    /// <summary>
    /// 下载完成
    /// </summary>
    private void OnDownloadOverFunction(DownloaderFinishData downloaderFinishData)
    {
        Debug.Log("下载" + (downloaderFinishData.Succeed ? "成功" : "失败"));
    }

    /// <summary>
    /// 更新中
    /// </summary>
    private void OnDownloadProgressUpdateFunction(DownloadUpdateData downloadUpdateData)
    {
        Debug.Log(
            $"文件总数：{downloadUpdateData.TotalDownloadCount}，已下载文件数：{downloadUpdateData.CurrentDownloadCount}，下载总大小：{downloadUpdateData.TotalDownloadBytes}，已下载大小{downloadUpdateData.CurrentDownloadBytes}"
        );
        // 更新进度条
        下载进度条_文本.text =
            $"正在下载资源...{DownloadTextCount(downloadUpdateData.CurrentDownloadBytes)}/{DownloadTextCount(downloadUpdateData.TotalDownloadBytes)}";
        下载进度条_百分比.text =
            $"{(float)downloadUpdateData.CurrentDownloadBytes / (float)downloadUpdateData.TotalDownloadBytes * 100:F2}%";
        下载进度条_值.value =
            (float)downloadUpdateData.CurrentDownloadBytes
            / (float)downloadUpdateData.TotalDownloadBytes;
    }

    // 下载文本计数显示
    string DownloadTextCount(long bytes)
    {
        if (bytes < 1024)
        {
            return $"{bytes} B";
        }
        else if (bytes < 1024 * 1024)
        {
            return $"{(float)bytes / 1024f:F2} KB";
        }
        else if (bytes < 1024 * 1024 * 1024)
        {
            return $"{(float)bytes / (1024f * 1024f):F2} MB";
        }
        else
        {
            return $"{(float)bytes / (1024f * 1024f * 1024f):F2} GB";
        }
    }

    /// <summary>
    /// 下载出错
    /// </summary>
    /// <param name="errorData"></param>
    private void OnDownloadErrorFunction(DownloadErrorData errorData)
    {
        Debug.Log(
            $"下载出错：包名:{errorData.PackageName} 文件名：{errorData.FileName}，错误信息：{errorData.ErrorInfo}"
        );
    }
    //===================================适应新版本YooAsset插件的修改===================================

    #endregion

    #region 补充元数据

    //补充元数据dll的列表
    //通过RuntimeApi.LoadMetadataForAOTAssembly()函数来补充AOT泛型的原始元数据
    private static List<string> AOTMetaAssemblyFiles { get; } =
        new() { "mscorlib.dll", "System.dll", "System.Core.dll" };
    private static Dictionary<string, TextAsset> s_assetDatas = new Dictionary<string, TextAsset>();
    private static Assembly _hotUpdateAss;
    private IRemoteServices remoteServices;

    public static byte[] ReadBytesFromStreamingAssets(string dllName)
    {
        if (s_assetDatas.ContainsKey(dllName))
        {
            return s_assetDatas[dllName].bytes;
        }

        return Array.Empty<byte>();
    }

    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    private static void LoadMetadataForAOTAssemblies()
    {
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in AOTMetaAssemblyFiles)
        {
            byte[] dllBytes = ReadBytesFromStreamingAssets(aotDllName);
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }

    #endregion

    #region 运行测试

    void StartGame()
    {
        // 加载AOT dll的元数据
        LoadMetadataForAOTAssemblies();
        // 加载热更dll
#if !UNITY_EDITOR
        _hotUpdateAss = Assembly.Load(ReadBytesFromStreamingAssets("HotUpdate.dll"));
#else
        _hotUpdateAss = System
            .AppDomain.CurrentDomain.GetAssemblies()
            .First(a => a.GetName().Name == "HotUpdate");
#endif
        // 初始化完成
        is_init = true;
        Debug.Log("初始化完成");
        进入游戏按钮.SetActive(true);
    }
    #endregion
}
//PS:版本不同可能有一些类名发生变化，请参照现阶段版本自行修改，官网可能更新不及时。
