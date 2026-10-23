using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class 角色Entity
{
    /// <summary>
    /// ID
    /// </summary>
    public int id;
    /// <summary>
    /// 角色名
    /// </summary>
    public string name;
    /// <summary>
    /// 注释
    /// </summary>
    public string zhushi;
    /// <summary>
    /// 颜色代码
    /// </summary>
    public string color;
    /// <summary>
    /// 角色介绍
    /// </summary>
    public string Introduction;
    /// <summary>
    /// 预制体路径
    /// </summary>
    public string prefab;
    /// <summary>
    /// 角色图像
    /// </summary>
    public string img;
}


[ExcelAsset]
public class 角色 : ScriptableObject
{
    public List<角色Entity> Sheet1;
}
