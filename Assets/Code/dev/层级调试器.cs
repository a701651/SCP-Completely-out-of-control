using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 层级调试器 : MonoBehaviour
{
    public GameObject 预制体;
    // Start is called before the first frame update
    void Start()
    {
        Button button = GetComponent<Button>();
        button.onClick.AddListener(() =>{
            // 判断当前场景是否只有一个tag为“层级调试器”的物体
            if (GameObject.FindGameObjectsWithTag("层级调试器").Length >= 1)
            {
                Debug.LogWarning("场景中已经存在一个或多个层级调试器，不能在添加更多了");
                return;
            }
            // 实例化预制体
            GameObject go = Instantiate(预制体);
        });
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
