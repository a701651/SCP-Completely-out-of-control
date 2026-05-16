using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 切换登录 : MonoBehaviour
{
    public GameObject 登录ui;
    public GameObject 注册ui;

    // Start is called before the first frame update
    void Start()
    {
        Button button = GetComponent<Button>();
        button.onClick.AddListener(() =>
        {
            登录ui.SetActive(true);
            注册ui.SetActive(false);
        });
    }

    // Update is called once per frame
    void Update() { }
}
