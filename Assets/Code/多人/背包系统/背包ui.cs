using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 背包ui : MonoBehaviour
{
    /// <summary>
    /// 当前背包中的物品信息列表
    /// </summary>
    public static List<物品JSON信息> 物品信息 = new List<物品JSON信息>();
    
    /// <summary>
    /// 物品UI容器,包含所有物品槽位
    /// </summary>
    public GameObject 物品UI;
    
    private 物品表 物品表 = Resources.Load<物品表>("物品表");
    private bool _已初始化 = false;

    /// <summary>
    /// 更新背包UI显示的物品信息
    /// </summary>
    /// <param name="_物品信息">新的物品信息列表</param>
    public static void 更新背包UI(List<物品JSON信息> _物品信息)
    {
        物品信息 = _物品信息 ?? new List<物品JSON信息>();
    }

    void Start()
    {
        // 在Start中进行初始化验证
        if (物品UI == null)
        {
            Debug.LogError("背包ui: 物品UI未赋值,请在Inspector中设置物品UI容器!");
            return;
        }
        
        if (物品表 == null)
        {
            Debug.LogError("背包ui: 无法加载物品表资源!");
            return;
        }
        
        _已初始化 = true;
    }

    void Update()
    {
        // 如果未初始化或必要组件为空,则跳过更新
        if (!_已初始化 || 物品UI == null || 物品表 == null)
            return;
        
        // 如果没有物品信息,清空所有图标
        if (物品信息 == null || 物品信息.Count == 0)
        {
            清空所有图标();
            return;
        }

        // 遍历物品信息并更新对应的UI图标
        for (int i = 0; i < 物品信息.Count; i++)
        {
            var 物品 = 物品信息[i];
            
            // 检查子物体是否存在
            if (i >= 物品UI.transform.childCount)
            {
                Debug.LogWarning($"背包ui: 物品UI子物体数量不足,需要{i + 1}个,实际只有{物品UI.transform.childCount}个");
                break;
            }
            
            Transform 子物体 = 物品UI.transform.GetChild(i);
            if (子物体 == null)
                continue;
            
            Image 图标组件 = 子物体.GetComponent<Image>();
            if (图标组件 == null)
                continue;

            // 查询物品表获取对应物品的图标
            Sprite 图标Sprite = null;
            foreach (var 物品表_物品 in 物品表.物品)
            {
                if (物品表_物品.物品ID == 物品.物品ID)
                {
                    if (!string.IsNullOrEmpty(物品表_物品.物品图标))
                    {
                        图标Sprite = Resources.Load<Sprite>(物品表_物品.物品图标);
                    }
                    break;
                }
            }
            
            // 设置图标,如果找不到则设置为null
            图标组件.sprite = 图标Sprite;
        }
        
        // 清空多余的物品槽位图标
        for (int i = 物品信息.Count; i < 物品UI.transform.childCount; i++)
        {
            Transform 子物体 = 物品UI.transform.GetChild(i);
            if (子物体 != null)
            {
                Image 图标组件 = 子物体.GetComponent<Image>();
                if (图标组件 != null)
                {
                    图标组件.sprite = null;
                }
            }
        }
    }
    
    /// <summary>
    /// 清空所有物品槽位的图标
    /// </summary>
    private void 清空所有图标()
    {
        for (int i = 0; i < 物品UI.transform.childCount; i++)
        {
            Transform 子物体 = 物品UI.transform.GetChild(i);
            if (子物体 != null)
            {
                Image 图标组件 = 子物体.GetComponent<Image>();
                if (图标组件 != null)
                {
                    图标组件.sprite = null;
                }
            }
        }
    }
}
