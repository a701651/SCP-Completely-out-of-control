using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 删除储存数据 : MonoBehaviour
{
    public string 字段名;

    // Start is called before the first frame update
    void Start()
    {
        Button button = GetComponent<Button>();
        button.onClick.AddListener(() =>
        {
            if (字段名 == "" || 字段名 == null || 字段名.Length == 0)
            {
                Debug.Log("字段名不能为空");
                return;
            }
            if (PlayerPrefs.HasKey(字段名))
            {
                PlayerPrefs.DeleteKey(字段名);
                Debug.Log("删除成功");
            }
            else
            {
                Debug.Log("没有找到该字段");
            }
        });
    }

    // Update is called once per frame
    void Update() { }
}
