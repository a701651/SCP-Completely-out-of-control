using System;
using System.IO;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;

public class 通行证_本地加密 : MonoBehaviour
{
    // 单例模式
    public static 通行证_本地加密 实例
    {
        get
        {
            if (_实例 == null)
            {
                GameObject go = new GameObject("通行证_本地加密");
                go.AddComponent<通行证_本地加密>();
                DontDestroyOnLoad(go);
            }
            return _实例;
        }
    }
    private static 通行证_本地加密 _实例;
    // 不能更换
    private string 密钥 = "你妈，你老冯在天上飞了";
    private byte[] key;
    private void Awake()
    {
        _实例 = this;
        SHA256 sha = SHA256.Create();
        key = sha.ComputeHash(Encoding.UTF8.GetBytes(密钥));
    }
    
    // 加密
    public string 加密(string plainText)
    {
        if (key == null || key.Length != 32)
            Debug.LogError("Key must be 32 bytes (256 bits).");

        using var aes = Aes.Create();
        aes.KeySize = 256;
        aes.BlockSize = 128;
        aes.Mode = CipherMode.CBC;
        aes.Padding = PaddingMode.PKCS7;

        aes.Key = key;
        aes.GenerateIV(); // 随机 IV（很重要）

        using var encryptor = aes.CreateEncryptor();
        using var ms = new MemoryStream();

        // 先写入 IV
        ms.Write(aes.IV, 0, aes.IV.Length);

        using (var cs = new CryptoStream(ms, encryptor, CryptoStreamMode.Write))
        using (var sw = new StreamWriter(cs, Encoding.UTF8))
        {
            sw.Write(plainText);
        }

        return Convert.ToBase64String(ms.ToArray());
    }
    
    // 解密
    public string 解密(string rowcipherData)
    {
        byte[] cipherData = Convert.FromBase64String(rowcipherData);
        if (key == null || key.Length != 32)
            Debug.LogError("Key must be 32 bytes (256 bits).");

        using var aes = Aes.Create();
        aes.KeySize = 256;
        aes.BlockSize = 128;
        aes.Mode = CipherMode.CBC;
        aes.Padding = PaddingMode.PKCS7;

        aes.Key = key;

        // 从数据前 16 字节读取 IV
        byte[] iv = new byte[16];
        Array.Copy(cipherData, 0, iv, 0, iv.Length);
        aes.IV = iv;

        using var decryptor = aes.CreateDecryptor();
        using var ms = new MemoryStream(cipherData, iv.Length, cipherData.Length - iv.Length);
        using var cs = new CryptoStream(ms, decryptor, CryptoStreamMode.Read);
        using var sr = new StreamReader(cs, Encoding.UTF8);

        return sr.ReadToEnd();
    }
}
