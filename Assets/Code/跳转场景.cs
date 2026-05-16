using UnityEngine;
using UnityEngine.UI;
using YooAsset;

public class 跳转场景 : MonoBehaviour
{
    public string 场景名称;

    // Start is called before the first frame update
    void Start()
    {
        Button button = GetComponent<Button>();
        button.onClick.AddListener(OnClick);
    }

    void OnClick()
    {
        var package = YooAssets.GetPackage("DefaultPackage");
        var handle = package.LoadSceneAsync(场景名称);

        handle.Completed += (operationHandle) =>
        {
            if (operationHandle.Status != EOperationStatus.Succeed)
            {
                Debug.LogError($"场景“{场景名称}”加载失败: {operationHandle.LastError}");
            }
            else
            {
                Debug.Log($"场景“{场景名称}”加载成功！");
            }
        };
    }
}
