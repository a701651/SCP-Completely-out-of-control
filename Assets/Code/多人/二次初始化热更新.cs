using System.Collections;
using UnityEngine;
using YooAsset;

public class 二次初始化热更新 : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        if (!YooAssets.Initialized)
        {
            StartCoroutine(Init());
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    IEnumerator Init()
    {
        Debug.Log("初始化资源包");
        YooAssets.Initialize();
        // 创建默认的资源包
        var package =
            YooAssets.TryGetPackage("DefaultPackage") ?? YooAssets.CreatePackage("DefaultPackage");
        YooAssets.SetDefaultPackage(package);
        // 编辑器
        if (Application.isEditor)
        {
            Debug.Log("模拟构建资源包");
            var buildResult = EditorSimulateModeHelper.SimulateBuild("DefaultPackage");
            var packageRoot = buildResult.PackageRootDirectory;
            var fileSystemParams = FileSystemParameters.CreateDefaultEditorFileSystemParameters(
                packageRoot
            );

            var createParameters = new EditorSimulateModeParameters();
            createParameters.EditorFileSystemParameters = fileSystemParams;

            var initOperation = package.InitializeAsync(createParameters);
            yield return initOperation;

            if (initOperation.Status == EOperationStatus.Succeed)
                Debug.Log("资源包初始化成功！");
            else
                Debug.LogError($"资源包初始化失败：{initOperation.Error}");
        }
        else
        {
            Debug.Log("初始化资源包");
            // 离线模式
            var fileSystemParams1 = FileSystemParameters.CreateDefaultBuildinFileSystemParameters();

            var createParameters1 = new OfflinePlayModeParameters();
            createParameters1.BuildinFileSystemParameters = fileSystemParams1;

            var initOperation1 = package.InitializeAsync(createParameters1);
            yield return initOperation1;

            if (initOperation1.Status == EOperationStatus.Succeed)
                Debug.Log("资源包初始化成功！");
            else
                Debug.LogError($"资源包初始化失败：{initOperation1.Error}");
            Debug.Log("获取资源版本");
        }
        var operation = package.RequestPackageVersionAsync();
        yield return operation;
        string packageVersion;

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
            yield break;
        }
        Debug.Log("更新资源清单");
        var operation1 = package.UpdatePackageManifestAsync(packageVersion);

        yield return operation1;

        if (operation1.Status == EOperationStatus.Succeed)
        {
            //更新成功
            Debug.Log("资源包更新成功！");
        }
        else
        {
            //更新失败
            Debug.LogError(operation1.Error);
            yield break;
        }
    }
}
