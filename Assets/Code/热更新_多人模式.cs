using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using HybridCLR;
using UnityEngine;
using UnityEngine.SceneManagement;
using YooAsset;

public class 热更新_多人模式 : MonoBehaviour
{
    public bool 是否初始化完成 = false;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    private void Awake()
    {
        OnClick();
        DontDestroyOnLoad(gameObject);
    }

    void OnClick()
    {
        // 初始化资源系统
        if (!YooAssets.IsInitialized)
        {
            YooAssets.Initialize();
        }
        
        ResourcePackage package;
        // 获取指定的资源包，如果没有找到不会报错
        if (YooAssets.TryGetPackage("多人模式包", out var _package))
        {
            // 找到资源包
            package = _package;
        }
        else
        {
            package = YooAssets.CreatePackage("多人模式包");
        }
        初始化热更新();
    }

    void 初始化热更新()
    {
        if (Application.isEditor)
        {
            StartCoroutine(InitPackage_开发());
        }
        else
        {
            StartCoroutine(InitPackage_发布());
        }
    }
    private IEnumerator InitPackage_开发()
    {  
        var package = YooAssets.GetPackage("多人模式包");
        var buildResult = EditorSimulateBuildInvoker.Build("多人模式包", (int)EBundleType.VirtualAssetBundle);
        var packageRoot = buildResult.PackageRootDirectory;
        var fileSystemParams = FileSystemParameters.CreateDefaultEditorFileSystemParameters(packageRoot);

        var createParameters = new EditorSimulateModeOptions();
        createParameters.EditorFileSystemParameters = fileSystemParams;

        var initOperation = package.InitializePackageAsync(createParameters);
        yield return initOperation;

        if(initOperation.Status == EOperationStatus.Succeeded)
            Debug.Log("资源包初始化成功！");
        else 
            Debug.LogError($"资源包初始化失败：{initOperation.Error}");

        yield return RequestPackageVersion();
    }
    private IEnumerator InitPackage_发布()
    {
        var package = YooAssets.GetPackage("多人模式包");
        var fileSystemParams = FileSystemParameters.CreateDefaultBuiltinFileSystemParameters();

        var createParameters = new OfflinePlayModeOptions();
        createParameters.BuiltinFileSystemParameters = fileSystemParams;

        var initOperation = package.InitializePackageAsync(createParameters);
        yield return initOperation;

        if(initOperation.Status == EOperationStatus.Succeeded)
            Debug.Log("资源包初始化成功！");
        else 
            Debug.LogError($"资源包初始化失败：{initOperation.Error}");

        yield return RequestPackageVersion();
    }
    private IEnumerator RequestPackageVersion()
    {
        var package = YooAssets.GetPackage("多人模式包");
        var operation = package.RequestPackageVersionAsync();
        yield return operation;

        if (operation.Status == EOperationStatus.Succeeded)
        {
            //请求成功
            string packageVersion = operation.PackageVersion;
            Debug.Log($"Request package Version : {packageVersion}");
            yield return UpdatePackageManifest(packageVersion);
        }
        else
        {
            //请求失败
            Debug.LogError(operation.Error);
        }
    }
    private IEnumerator UpdatePackageManifest(string packageVersion)
    {
        var Code包名称 = "多人游戏_Code";
        var package = YooAssets.GetPackage("多人模式包");
        var operation = package.LoadPackageManifestAsync(new LoadPackageManifestOptions(packageVersion, 60));
        yield return operation;

        if (operation.Status == EOperationStatus.Succeeded)
        {
            //更新成功
            var assets = new List<string> { $"{ Code包名称 }.dll" }.Concat(AOTMetaAssemblyFiles);
            foreach (var asset in assets)
            {
                var handle = package.LoadAssetAsync<TextAsset>(asset);
                yield return handle;
                var assetObj = handle.AssetObject as TextAsset;
                s_assetDatas[asset] = assetObj;
                Debug.Log($"dll:{asset}   {assetObj == null}");
            }
            // 加载AOT dll的元数据
            LoadMetadataForAOTAssemblies();
            // 加载热更dll
            #if !UNITY_EDITOR
                _hotUpdateAss = Assembly.Load(ReadBytesFromStreamingAssets($"{ Code包名称 }.dll"));
            #else
                _hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == Code包名称);
            #endif

            var 游戏版本_handle = package.LoadAssetAsync<GameObject>("Assets/HotUpdata/多人模式/游戏版本控制器.prefab");
            yield return 游戏版本_handle;
            var 游戏版本_assets = 游戏版本_handle.AssetObject as GameObject;
            GameObject 游戏版本_gameObject = Instantiate(游戏版本_assets);
            是否初始化完成 = true;
        }
        else
        {
            //更新失败
            Debug.LogError(operation.Error);
        }
    }
    #region 补充元数据

    //补充元数据dll的列表
    //通过RuntimeApi.LoadMetadataForAOTAssembly()函数来补充AOT泛型的原始元数据
    private static List<string> AOTMetaAssemblyFiles { get; } = new() { "mscorlib.dll", "System.dll", "System.Core.dll", };
    private static Dictionary<string, TextAsset> s_assetDatas = new Dictionary<string, TextAsset>();
    private static Assembly _hotUpdateAss;
    
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
}
