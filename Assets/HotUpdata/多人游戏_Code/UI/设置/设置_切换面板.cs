using System;
using System.Collections.Generic;
using UnityEngine;

public class 设置_切换面板 : MonoBehaviour
{
    private 设置_状态机 _状态机;
    private List<GameObject> _面板列表 = new List<GameObject>();
    void Awake()
    {
        // 将全部子物体添加
        for (int i = 0; i < transform.childCount; i++)
        {
            Transform child = transform.GetChild(i);
            GameObject childObject = child.gameObject;
            // 对 childObject 进行操作...
            _面板列表.Add(childObject);
        }
        foreach (var 面板 in _面板列表)
        {
            面板.SetActive(false);
        }
        _状态机 = transform.parent.GetComponentInParent<设置_状态机>();
    }

    private void OnEnable()
    {
        _状态机.On切换按钮ID += 切换页面;
        切换页面(_状态机.当前页面ID);
    }

    private void OnDestroy()
    {
        _状态机.On切换按钮ID -= 切换页面;
    }

    void 切换页面(string id)
    {
        // 判断列表里面的物体名称是否包含
        foreach (var 面板 in _面板列表)
        {
            if (面板.name == id)
            {
                面板.SetActive(true);
            }
            else
            {
                面板.SetActive(false);
            }
        }
    }
}
