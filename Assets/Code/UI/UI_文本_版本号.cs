using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class UI_文本_版本号 : MonoBehaviour
{
    private 游戏版本 _游戏版本;
    private Text _text;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        _text = GetComponent<Text>();
        _text.text = null;
        StartCoroutine(更新文本());
    }
    IEnumerator 更新文本()
    {
        while (_游戏版本 is null)
        {
            _游戏版本 = FindAnyObjectByType<游戏版本>();
            yield return null;
        }
        _text.text = $"{_游戏版本.版本号}";
    }
}
