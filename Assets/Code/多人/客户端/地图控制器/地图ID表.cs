using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

[CreateAssetMenu(fileName = "地图ID表", menuName = "创建表/地图ID表")]
public class 地图ID表 : ScriptableObject
{
    public List<地图ID表_行> 物品 = new List<地图ID表_行>();
}

[System.Serializable]
public class 地图ID表_行
{
    public int ID;
    public string name;
    public string 场景绝对路径;
}