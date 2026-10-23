using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class 开发_设置_服务器地址_按钮 : MonoBehaviour
{
    public InputField 服务器地址输入框;
    public GameObject 服务器地址修改面板;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        Button but = GetComponent<Button>();
        but.onClick.AddListener(OnClick);
    }
    void OnClick()
    {
        通行证_获取_服务器地址.更新IP(服务器地址输入框.text);
        服务器地址修改面板.SetActive(false);
    }
}
