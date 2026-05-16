using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 隐藏ui : MonoBehaviour
{
    public bool is_显示 = false;
    public GameObject uiObjects;
    // Start is called before the first frame update
    void Start()
    {
        Button button = GetComponent<Button>();
        button.onClick.AddListener(() =>
        {
            if (!is_显示)
            {
                uiObjects.SetActive(false);
            }
            else
            {
                uiObjects.SetActive(true);
            }
        });
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
