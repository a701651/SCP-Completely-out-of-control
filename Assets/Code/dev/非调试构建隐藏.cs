using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class 非调试构建隐藏 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        if (Debug.isDebugBuild || Application.isEditor)
        {

        }
        else
        {
            Destroy(gameObject);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
