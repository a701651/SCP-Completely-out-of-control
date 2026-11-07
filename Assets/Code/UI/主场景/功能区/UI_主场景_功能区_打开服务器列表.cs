using UnityEngine;
using UnityEngine.UI;

public class UI_主场景_功能区_打开服务器列表 : MonoBehaviour
{
    private UI_覆盖界面_管理器 _ui覆盖界面管理器;
    public GameObject 服务器列表界面;
    public GameObject 服务器列表界面_挂载父级;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        Button but = GetComponent<Button>();
        but.onClick.AddListener(OnClick);
        _ui覆盖界面管理器 = FindAnyObjectByType<UI_覆盖界面_管理器>();
    }
    void OnClick()
    {
        // 创建服务器列表界面
        GameObject serverList = Instantiate(服务器列表界面,服务器列表界面_挂载父级.transform);
        serverList.transform.SetAsLastSibling();
        _ui覆盖界面管理器.添加覆盖界面(serverList);
    }
}
