using UnityEngine;
using UnityEngine.UI;

public class UI_文本_版本号 : MonoBehaviour
{
    private 游戏版本 _游戏版本;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        _游戏版本 = FindAnyObjectByType<游戏版本>();
        GetComponent<Text>().text = _游戏版本.版本号;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
