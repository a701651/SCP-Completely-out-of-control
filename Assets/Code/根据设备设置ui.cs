using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class 根据设备设置ui : MonoBehaviour
{
    public GameObject 手机ui;
    public GameObject 电脑ui;
    private 设备类型.设备Type type;

    void Start()
    {
        Init_UI();
    }

    public void Init_UI()
    {
        手机ui.SetActive(false);
        电脑ui.SetActive(false);

        // 根据设备类型设置ui
        if (设备类型.设备type == 设备类型.设备Type.手机)
        {
            手机ui.SetActive(true);
        }
        else
        {
            电脑ui.SetActive(true);
        }
    }

    void Update()
    {
        if (type != 设备类型.设备type)
        {
            Init_UI();
            type = 设备类型.设备type;
        }
    }
}
