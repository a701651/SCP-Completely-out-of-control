using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public static  class 初始化错误提示框
{
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    static void Init_UI()
    {
        Debug.Log($"尝试加载");
        // 加载Assets/Resources/预制体/错误信息.prefab
        GameObject prefab = Resources.Load<GameObject>("预制体/错误信息");
        // 实例化prefab
        GameObject obj = Object.Instantiate(prefab);
        Object.DontDestroyOnLoad(obj);
    }
}