using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using YooAsset;

public class 获取资源 : MonoBehaviour
{
    public string 资源名称;
    // Start is called before the first frame update
    IEnumerator Start()
    {
        while (!LoadDll.is_init)
        {
            // 等待0.1秒
            yield return new WaitForSeconds(0.1f);
        }

        var package = YooAssets.GetPackage("DefaultPackage");
        var handle = package.LoadAssetAsync<GameObject>(资源名称);
        handle.Completed += (AssetHandle asset) =>
        {
            // 替换当前物体为实例化的物体
            GameObject obj = asset.InstantiateSync();
            obj.transform.SetParent(transform.parent, false);
            // 将位移添加到实例化物体上
            obj.transform.localPosition = transform.localPosition;
            // 将旋转添加到物体上
            obj.transform.localRotation = transform.localRotation;
            // 将缩放添加到物体上
            obj.transform.localScale = transform.localScale;
            // 销毁当前物体
            Destroy(gameObject);
        };
    }
}
