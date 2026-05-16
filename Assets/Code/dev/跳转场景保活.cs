using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class 跳转场景保活 : MonoBehaviour
{
    // Start is called before the first frame update
    void OnEnable()
    {
        // 加入后台
        DontDestroyOnLoad(gameObject);
    }
}
