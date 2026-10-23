using UnityEngine;

public class 通行证_本地加密_测试 : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        string 测试token = "579a8c70c6259e055bf35ecbf7954a14077db9ede7b32d414b8f3a7b98f324b2";
        通行证_用户_token.实例.更新用户token(测试token);
        string 解密结果 = 通行证_用户_token.实例.获取用户token();
        Debug.Log($"原始token:{测试token},解密token:{解密结果}");
    }
}