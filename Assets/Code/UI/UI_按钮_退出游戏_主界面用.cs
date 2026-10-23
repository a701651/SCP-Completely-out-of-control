using UnityEngine;
using UnityEngine.UI;

public class UI_按钮_退出游戏_主界面用 : MonoBehaviour
{
    public GameObject 退出确认界面;
    public GameObject 退出确认界面_挂载父级;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        Button but = GetComponent<Button>();
        but.onClick.AddListener(OnClick);
    }
    
    void OnClick()
    {
        GameObject confirm = Instantiate(退出确认界面,退出确认界面_挂载父级.transform);
        confirm.transform.SetAsLastSibling();
    }
}
