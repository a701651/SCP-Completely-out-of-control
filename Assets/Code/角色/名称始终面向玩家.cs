using System.Collections;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

public class 名称始终面向玩家 : NetworkBehaviour
{
    public Camera Camera1;
    public static Camera camera;

    void Start()
    {
        隐藏自己();
    }

    void OnEnable()
    {
        隐藏自己();
    }

    void 隐藏自己()
    {
        if (isLocalPlayer)
        {
            camera = Camera1;
            if (camera == null)
            {
                Debug.LogError("[名称始终面向玩家]没有找到相机！");
            }
            gameObject.SetActive(false);
        }
        else
        {
            gameObject.SetActive(true);
        }
    }

    // Start is called before the first frame update
    [Client]
    void Update()
    {
        if (isLocalPlayer)
        {
            return;
        }
        if (camera == null)
        {
            return;
        }
        // 判断相对距离
        if (Vector3.Distance(transform.position, camera.transform.position) > 10)
        {
            gameObject.GetComponent<Canvas>().enabled = false;
            return;
        }
        gameObject.GetComponent<Canvas>().enabled = true;
        // 将当前对象的旋转设置为玩家摄像头的旋转
        transform.rotation = new Quaternion(
            0,
            camera.transform.rotation.y,
            0,
            camera.transform.rotation.w
        );
    }
}
