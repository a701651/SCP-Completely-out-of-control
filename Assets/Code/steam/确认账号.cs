using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 确认账号 : MonoBehaviour
{
    public GameObject ui;
    public GameObject ui2;
    // Start is called before the first frame update
    void Start()
    {
        Button button = GetComponent<Button>();
        button.onClick.AddListener(() =>
        {
            ui.SetActive(false);
            ui2.SetActive(true);
        });
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
