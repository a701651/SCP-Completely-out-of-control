using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class 位置列表Entity
{
    /// <summary>
    /// ID
    /// </summary>
    public int id;
    /// <summary>
    /// 场景ID
    /// </summary>
    public int scene_id;
}


[ExcelAsset]
public class 位置列表 : ScriptableObject
{
    public List<位置列表Entity> 位置;
}
