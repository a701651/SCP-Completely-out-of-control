using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class 非steam登录 : MonoBehaviour
{
    [Header("UI绑定")]
    public GameObject 登录注册界面;
#if is_steam
#else
    // Start is called before the first frame update
    void Start() { 
        Debug.Log("当前模式为非steam登录,将使用官网渠道");
        登录注册界面.SetActive(true);
    }

    // Update is called once per frame
    void Update() { }
#endif
}
