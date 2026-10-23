using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class 玩家身份表Entity
{
    /// <summary>
    /// ID
    /// </summary>
    public int id;
    /// <summary>
    /// 翻译Key
    /// </summary>
    public string key;
    /// <summary>
    /// 颜色16代码
    /// </summary>
    public string color;
    /// <summary>
    /// 是否官方图标
    /// </summary>
    public bool is_official;
}


[ExcelAsset]
public class 玩家身份表 : ScriptableObject
{
    public List<玩家身份表Entity> sf;
}
