/*
using System;
using System.Collections.Generic;
using UnityEngine;

public class 多人游戏_演奏_钢琴_初始化按钮 : MonoBehaviour
{
    public List<Color> 颜色列表;
    public Transform 按钮父物体;
    public GameObject 按钮预制体;
    private 多人游戏_演奏_钢琴_定义音符 _音符定义;
    private void Awake()
    {
        // 清空
        for (int j = 按钮父物体.childCount - 1; j >= 0; j--)
        {
            Destroy(按钮父物体.GetChild(j).gameObject);
        }
        _音符定义 = GetComponent<多人游戏_演奏_钢琴_定义音符>();
        int i = 1;
        // 反转
        foreach (var item in _音符定义.音符列表)
        {
            var 按钮 = Instantiate(按钮预制体, 按钮父物体);
            按钮.name = item.名称;
            var 按钮组件 = 按钮.GetComponentInChildren<多人游戏_演奏_钢琴_按钮>();
            按钮组件.音符名称 = item.名称;
            int 颜色索引 = (i - 1) / 7;
            按钮组件.当前颜色 = 颜色列表[颜色索引 % 颜色列表.Count];
            按钮组件.更新UI();
            i++;
        }
    }
}
*/
