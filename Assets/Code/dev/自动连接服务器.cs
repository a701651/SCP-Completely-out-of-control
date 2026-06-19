using UnityEngine;
using Mirror;
using kcp2k;
using System; // 导入 Mirror 包

public class 自动连接服务器 : MonoBehaviour
{
    public GameObject 网络控制器;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        // mirror 创建服务器
        网络控制器.GetComponent<KcpTransport>().Port = 7777; // 设置服务器端口
        try
        {
            网络控制器.GetComponent<NetworkManager>().StartHost();
        }
        catch (Exception e)
        {
            网络控制器.GetComponent<NetworkManager>().StartClient();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
