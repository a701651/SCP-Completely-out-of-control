using UnityEngine;
using UnityEngine.UI;

public class UI_按钮_退出游戏_主界面用_二级确认 : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        Button but = GetComponent<Button>();
        but.onClick.AddListener(OnClick);
    }
    void OnClick()
    {
        Application.Quit();
        #if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
        #endif
    }
}
