using UnityEngine;
using UnityEngine.UI;

public class UI_按钮_显示隐藏UI : MonoBehaviour
{
    public Type 类型 = Type.显示;
    public GameObject 操作物体;
    public enum Type
    {
        显示,
        隐藏
    }
    
    void Start()
    {
        Button but = GetComponent<Button>();
        but.onClick.AddListener(OnClick);
    }
    
    void OnClick()
    {
        if (类型 == Type.显示)
        {
            操作物体.SetActive(true);
        }
        else
        {
            操作物体.SetActive(false);
        }
    }
}
