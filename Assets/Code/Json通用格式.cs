using System;
using UnityEngine;

public class Json通用格式 : MonoBehaviour
{
    [Serializable]
    public class Json
    {
        public int code;
        public string message;
    }
}
