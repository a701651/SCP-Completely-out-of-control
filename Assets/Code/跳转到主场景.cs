using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class 跳转到主场景 : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        StartCoroutine(跳转主场景());
    }
    // 协程
    IEnumerator 跳转主场景()
    {
        yield return null;
        SceneManager.LoadScene("登录界面");
    }
}
