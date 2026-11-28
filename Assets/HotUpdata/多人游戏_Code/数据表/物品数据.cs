using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class 物品数据Entity
{
    /// <summary>
    /// ID
    /// </summary>
    public long id;
    /// <summary>
    /// 物品名称
    /// </summary>
    public string name;
    /// <summary>
    /// 物品名介绍
    /// </summary>
    public string introduction;
    /// <summary>
    /// 物品标签列表
    /// </summary>
    public string[] obj_type;
}


[ExcelAsset]
public class 物品数据 : ScriptableObject
{
    public List<物品数据Entity> Main;
}
