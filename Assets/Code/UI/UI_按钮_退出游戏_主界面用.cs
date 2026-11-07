using UnityEngine;
using UnityEngine.UI;

public class UI_按钮_退出游戏_主界面用 : MonoBehaviour
{
    private UI_覆盖界面_管理器 _ui覆盖界面管理器;
    public GameObject 退出确认界面;
    public GameObject 退出确认界面_挂载父级;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        Button but = GetComponent<Button>();
        but.onClick.AddListener(OnClick);
        _ui覆盖界面管理器 = FindAnyObjectByType<UI_覆盖界面_管理器>();
    }
    
    void OnClick()
    {
        GameObject confirm = Instantiate(退出确认界面,退出确认界面_挂载父级.transform);
        confirm.transform.SetAsLastSibling();
        _ui覆盖界面管理器.添加覆盖界面(confirm);
    }
}
