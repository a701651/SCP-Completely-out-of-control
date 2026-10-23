using System;
using UnityEngine;
using UnityEngine.UI;

public class UI_物品选中_绑定 : MonoBehaviour
{
    public GameObject 物品框GameObject1;
    public GameObject 物品框GameObject2;
    public GameObject 物品框GameObject3;
    public 多人_状态机_玩家_基础物品类 物品类;

    private void OnEnable()
    {
        物品类.当前物品id_变化 += On当前物品id_变化;
    }
    
    private void OnDisable()
    {
        物品类.当前物品id_变化 -= On当前物品id_变化;
    }
    
    void On当前物品id_变化(int 物品id)
    {
        GameObject 物品框GameObject1_选中 = 物品框GameObject1.transform.Find("选中").gameObject;
        GameObject 物品框GameObject1_选中_图标 = 物品框GameObject1.transform.Find("图标").gameObject;
        GameObject 物品框GameObject2_选中 = 物品框GameObject2.transform.Find("选中").gameObject;
        GameObject 物品框GameObject2_选中_图标 = 物品框GameObject2.transform.Find("图标").gameObject;
        GameObject 物品框GameObject3_选中 = 物品框GameObject3.transform.Find("选中").gameObject;
        GameObject 物品框GameObject3_选中_图标 = 物品框GameObject3.transform.Find("图标").gameObject;
        
        var 未选中color = new Color(255, 255, 255, 0.1f);
        var 选中color = new Color(255, 255, 255, 0.7f);
        
        物品框GameObject1_选中.SetActive(false);
        物品框GameObject2_选中.SetActive(false);
        物品框GameObject3_选中.SetActive(false);
        物品框GameObject1_选中_图标.GetComponent<RawImage>().color = 未选中color;
        物品框GameObject2_选中_图标.GetComponent<RawImage>().color = 未选中color;
        物品框GameObject3_选中_图标.GetComponent<RawImage>().color = 未选中color;
        
        switch (物品id)
        {
            case 1:
                物品框GameObject1_选中.SetActive(true);
                物品框GameObject1_选中_图标.GetComponent<RawImage>().color = 选中color;
                break;
            case 2:
                物品框GameObject2_选中.SetActive(true);
                物品框GameObject2_选中_图标.GetComponent<RawImage>().color = 选中color;
                break;
            case 3:
                物品框GameObject3_选中.SetActive(true);
                物品框GameObject3_选中_图标.GetComponent<RawImage>().color = 选中color;
                break;
        }
    }
}
