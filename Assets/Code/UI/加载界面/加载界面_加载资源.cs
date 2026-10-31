using System.Collections;
using UnityEngine;

public class 加载界面_加载资源 : MonoBehaviour
{
    public GameObject 页面1;
    public GameObject 页面2;
    private 热更新_多人模式 _热更新多人模式;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        _热更新多人模式 = FindAnyObjectByType<热更新_多人模式>();
        StartCoroutine(加载资源());
    }
    // 协程
    IEnumerator 加载资源()
    {
        while (!_热更新多人模式.是否初始化完成)
        {
            yield return null;
        }
        页面1.SetActive(false);
        页面2.SetActive(true);
    }
}
