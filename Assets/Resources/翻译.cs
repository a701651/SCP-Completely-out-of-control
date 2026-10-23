using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class 翻译Entity
{
    /// <summary>
    /// 键名
    /// </summary>
    public string key;
    /// <summary>
    /// 简体中文
    /// </summary>
    public string cn;
    /// <summary>
    /// 繁体中文
    /// </summary>
    public string cn_f;
    /// <summary>
    /// 英文
    /// </summary>
    public string en;
}


[ExcelAsset]
public class 翻译 : ScriptableObject
{
    public List<翻译Entity> Sheet1;
}
