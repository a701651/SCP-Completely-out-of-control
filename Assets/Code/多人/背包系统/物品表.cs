using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "物品表", menuName = "创建表/物品表")]
public class 物品表 : ScriptableObject
{
    public List<物品表_行> 物品 = new List<物品表_行>();
}

[System.Serializable]
public class 物品表_行
{
    public int 物品ID;
    public string 物品名称;
    public string 物品图标;
    public string 物品描述;
    public string 物品类型;
    public float 物品质量;
}
