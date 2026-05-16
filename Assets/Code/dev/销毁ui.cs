using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 销毁ui : MonoBehaviour
{
    public GameObject ui;
    private void Start()
    {
        Button button = GetComponent<Button>();
        button.onClick.AddListener(() =>
        {
            Destroy(ui);
        });
    }
}
