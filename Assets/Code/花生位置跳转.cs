using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class 花生位置跳转 : MonoBehaviour
{
    public Transform[] 目标位置;

    private IEnumerator Start()
    {
        int 上次位置索引 = -1;
        while (true)
        {
            int 当前位置索引 = Random.Range(0, 目标位置.Length);
            while (上次位置索引 == 当前位置索引)
            {
                当前位置索引 = Random.Range(0, 目标位置.Length);
            }
            gameObject.transform.position = 目标位置[当前位置索引].position;
            gameObject.transform.rotation = 目标位置[当前位置索引].rotation;
            // Debug.Log($"已将SCP173由索引{上次位置索引}移动到索引{当前位置索引}");
            上次位置索引 = 当前位置索引;
            yield return new WaitForSeconds(5.5f);
        }
    }
}
