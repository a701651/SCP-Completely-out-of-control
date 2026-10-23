using UnityEngine;
using UnityEngine.UI;

public class UI_按钮_退出游戏_主界面用_二级取消 : MonoBehaviour
{
    public GameObject 退出确认界面;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        Button but = GetComponent<Button>();
        but.onClick.AddListener(OnClick);
    }
    void OnClick()
    {
        // 销毁退出确认界面
        Destroy(退出确认界面);
    }
}
