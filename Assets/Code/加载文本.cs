using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 加载文本 : MonoBehaviour
{
    // Start is called before the first frame update
    IEnumerator Start()
    {
        while (true)
        {
            gameObject.GetComponent<Text>().text =
                "正在加载用户信息" + new string('.', (int)(Time.time * 2) % 4);
            yield return new WaitForSeconds(0.5f);
        }
    }

    // Update is called once per frame
    void Update() { }
}
