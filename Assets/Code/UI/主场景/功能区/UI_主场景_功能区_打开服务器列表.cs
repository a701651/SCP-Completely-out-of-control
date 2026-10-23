using UnityEngine;
using UnityEngine.UI;

public class UI_主场景_功能区_打开服务器列表 : MonoBehaviour
{
    public GameObject 服务器列表界面;
    public GameObject 服务器列表界面_挂载父级;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        Button but = GetComponent<Button>();
        but.onClick.AddListener(OnClick);
    }
    void OnClick()
    {
        // 创建服务器列表界面
        GameObject serverList = Instantiate(服务器列表界面,服务器列表界面_挂载父级.transform);
        serverList.transform.SetAsLastSibling();
    }
}
