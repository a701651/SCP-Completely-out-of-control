using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class 灯光闪烁 : MonoBehaviour
{
    public Light[] 灯光;
    private IEnumerator Start()
    {
        bool 开启 = false;
        while (true)
        {
            开启 = !开启;
            foreach (var 灯 in 灯光)
            {
                灯.enabled = 开启;
            }
            yield return new WaitForSeconds(5f);
            开启 = !开启;
            foreach (var 灯 in 灯光)
            {
                灯.enabled = 开启;
            }
            yield return new WaitForSeconds(0.5f);
        }
    }
}
