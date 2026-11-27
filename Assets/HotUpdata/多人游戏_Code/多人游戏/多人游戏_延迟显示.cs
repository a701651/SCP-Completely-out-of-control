using System;
using Mirror;
using UnityEngine;
using UnityEngine.UI;

public class 多人游戏_延迟显示 : MonoBehaviour
{
    private Text text;

    private void Awake()
    {
        text = GetComponent<Text>();
    }

    private void Update()
    {
        try
        {
            double rtt = NetworkTime.rtt;
            text.text = $"{rtt:F0}ms";
            if (rtt > 100)
            {
                text.color = Color.red;
            }
            else
            {
                text.color = Color.white;
            }
        }
        catch{}
    }
}
