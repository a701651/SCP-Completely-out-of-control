using System.Collections;
using UnityEngine;

public class 加载界面_进度条_测试脚本 : MonoBehaviour
{
    private 加载界面_进度条_状态机 状态机;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        状态机 = FindAnyObjectByType<加载界面_进度条_状态机>();
        StartCoroutine(开启测试());
    }
    // 协程
    IEnumerator 开启测试()
    {
        状态机.设置进度条Show(true);
        for (int i = 0; i <= 100; i++)
        {
            状态机.设置进度(i, "正在加载中...");
            yield return new WaitForSeconds(0.1f);
        }
        状态机.设置进度条Show(false);
    }
}
