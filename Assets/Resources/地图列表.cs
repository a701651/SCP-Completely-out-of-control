using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class 地图列表Entity
{
    /// <summary>
    /// ID
    /// </summary>
    public int id;
    /// <summary>
    /// 场景路径
    /// </summary>
    public string scene_path;
    /// <summary>
    /// 名称
    /// </summary>
    public string name;
}


[ExcelAsset]
public class 地图列表 : ScriptableObject
{
    public List<地图列表Entity> 地图;
}
