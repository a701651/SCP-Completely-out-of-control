using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class 物品数据Entity
{
    /// <summary>
    /// id
    /// </summary>
    public int id;
    /// <summary>
    /// 物品名称
    /// </summary>
    public string item_name;
    /// <summary>
    /// 物品类型
    /// </summary>
    public int item_type ;
    /// <summary>
    /// 物品描述
    /// </summary>
    public string item_description;
    /// <summary>
    /// 物品品质
    /// </summary>
    public int item_quality;
    /// <summary>
    /// 图片
    /// </summary>
    public string image;
}


[ExcelAsset]
public class 物品数据 : ScriptableObject
{
    public List<物品数据Entity> Sheet1;
}
