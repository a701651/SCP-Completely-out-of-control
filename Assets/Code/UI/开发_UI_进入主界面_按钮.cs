using System.Collections;
using kcp2k;
using Mirror;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using YooAsset;

public class 开发_UI_进入主界面_按钮 : MonoBehaviour
{
    private 多人游戏管理器 _多人游戏管理器;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        Button but = GetComponent<Button>();
        but.onClick.AddListener(OnClick);
    }
    void OnClick()
    {
        // 创建多人游戏控制器
        // _多人游戏管理器 = FindAnyObjectByType<多人游戏管理器>();
        if (_多人游戏管理器 == null)
        {
            var 多人游戏管理器_GameObject = new GameObject("多人游戏管理器");
            // 添加组件
            多人游戏管理器_GameObject.AddComponent<KcpTransport>();
            多人游戏管理器_GameObject.AddComponent<多人游戏管理器>();
            _多人游戏管理器 = 多人游戏管理器_GameObject.GetComponent<多人游戏管理器>();
            // 加入后台
            DontDestroyOnLoad(多人游戏管理器_GameObject);
        }
        // 加载热更新内容包
        // 初始化资源系统
        YooAssets.Initialize();
        
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
            初始化热更新();
        }
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
            var package = YooAssets.GetPackage("多人模式包");
            var operation = package.LoadPackageManifestAsync(new LoadPackageManifestOptions(packageVersion, 60));
            yield return operation;

            if (operation.Status == EOperationStatus.Succeeded)
            {
                //更新成功
                yield return 加载玩家预制体();
                SceneManager.LoadScene("Scenes/主场景");
            }
            else
            {
                //更新失败
                Debug.LogError(operation.Error);
            }
        }
        IEnumerator 加载玩家预制体()
        {
            var package = YooAssets.GetPackage("多人模式包");
            AssetHandle handle = package.LoadAssetAsync<GameObject>("Assets/HotUpdata/多人模式/预制体/玩家.prefab");
            yield return handle;
            /*GameObject go = handle.InstantiateSync();*/
            _多人游戏管理器.playerPrefab = handle.AssetObject as GameObject;
        }
}
