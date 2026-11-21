using System.Collections.Generic;
using UnityEngine;

public class 多人游戏_演奏_钢琴_定义音符 : MonoBehaviour
{
    [Header("音符")]
    [Tooltip("音符列表")]
    public List<音符> 音符列表 = new List<音符>();
    [System.Serializable]
    public class 音符
    {
        public string 名称;
        public AudioClip 音频;
    }
}
