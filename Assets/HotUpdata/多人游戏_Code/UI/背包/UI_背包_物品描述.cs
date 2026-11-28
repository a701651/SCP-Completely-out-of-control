using System.Collections;
using TMPro;
using UnityEngine;
using YooAsset;

public class UI_背包_物品描述 : MonoBehaviour
{
    [Header("UI")]
    public TMP_Text itemNameText;// 物品名称
    public TMP_Text itemDescriptionText;// 物品描述
    public GameObject itemTypeList;// 物品类型列表
    public GameObject itemTypePrefab;// 物品类型预制体
    public 物品数据 _物品数据;// 物品数据
    
    
    public static UI_背包_物品描述 singleton;
    void Awake()
    {
        singleton = this;
        // Test
        SetItemInfo(10000);
    }
    // 设置物品信息
    public void SetItemInfo(long itemID)
    {
        if (_物品数据 is null)
        {
            Debug.LogError("物品数据为空");
            return;
        }
        // 查找数据
        var itemData = _物品数据.Main.Find(x => x.id == itemID);
        if (itemData == null)
        {
            Debug.LogError("物品数据不存在");
            return;
        }
        
        // 设置UI
        itemNameText.text = itemData.name;
        itemDescriptionText.text = itemData.introduction;
        var itemTypeListForTable = itemData.obj_type;
        // 清空列表
        for (int i = itemTypeList.transform.childCount - 1; i >= 0; i--)
        {
            Destroy(itemTypeList.transform.GetChild(i).gameObject);
        }
        // 添加列表
        foreach (var itemType in itemTypeListForTable)
        {
            var itemTypeGO = Instantiate(itemTypePrefab, itemTypeList.transform);
            itemTypeGO.GetComponentInChildren<TMP_Text>().text = itemType;
        }
    }
}
