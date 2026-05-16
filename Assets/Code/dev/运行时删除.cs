using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class 运行时删除 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        // 销毁当前物体
        Destroy(gameObject);
    }
}
