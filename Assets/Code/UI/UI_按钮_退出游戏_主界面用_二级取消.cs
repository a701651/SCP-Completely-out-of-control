using UnityEngine;
using UnityEngine.UI;

public class UI_按钮_退出游戏_主界面用_二级取消 : MonoBehaviour
{
    private UI_覆盖界面_管理器 _ui覆盖界面管理器;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        _ui覆盖界面管理器 = FindAnyObjectByType<UI_覆盖界面_管理器>();
    }
    public void OnClick()
    {
        _ui覆盖界面管理器.关闭最后一项();
    }
}
