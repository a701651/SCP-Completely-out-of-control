using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class 剧情列表Entity_剧情
{
    /// <summary>
    /// ID
    /// </summary>
    public int id;
    /// <summary>
    /// 类型（0进入对话，1进入下一个任务）
    /// </summary>
    public int type;
    /// <summary>
    /// 下一个剧情ID
    /// </summary>
    public int next;
    /// <summary>
    /// 章节ID
    /// </summary>
    public int chapter;
    /// <summary>
    /// 名称
    /// </summary>
    public string name;
    /// <summary>
    /// 描述
    /// </summary>
    public string description;
    /// <summary>
    /// 对话起始ID
    /// </summary>
    public long chat_id;
    /// <summary>
    /// 位置ID
    /// </summary>
    public long location_id;
}

[Serializable]
public class 剧情列表Entity_对话
{
    /// <summary>
    /// ID
    /// </summary>
    public long id;
    /// <summary>
    /// 类型（0文本，1视频动画，2黑屏文本）
    /// </summary>
    public int type;
    /// <summary>
    /// 下一个对话(0为退出）
    /// </summary>
    public long next;
    /// <summary>
    /// 人物名称
    /// </summary>
    public string name;
    /// <summary>
    /// 内容
    /// </summary>
    public string content;
    /// <summary>
    /// 音频路径
    /// </summary>
    public string audio_path;
    /// <summary>
    /// 动画路径
    /// </summary>
    public string animation_path;
    /// <summary>
    /// 选项ID
    /// </summary>
    public int option1;
    /// <summary>
    /// 选项ID
    /// </summary>
    public int option2;
    /// <summary>
    /// 选项ID
    /// </summary>
    public int option3;
    /// <summary>
    /// 选项ID
    /// </summary>
    public int option4;
}

[Serializable]
public class 剧情列表Entity_选项
{
    /// <summary>
    /// ID
    /// </summary>
    public long id;
    /// <summary>
    /// 内容
    /// </summary>
    public string content;
    /// <summary>
    /// 下一个ID
    /// </summary>
    public long next_id;
}

[Serializable]
public class 剧情列表Entity_章节
{
    /// <summary>
    /// ID
    /// </summary>
    public int id;
    /// <summary>
    /// 类型
    /// </summary>
    public int type;
    /// <summary>
    /// 章节号
    /// </summary>
    public string chapter;
    /// <summary>
    /// 页数号
    /// </summary>
    public string page;
    /// <summary>
    /// 章节名称
    /// </summary>
    public string chapter_name;
}


[ExcelAsset]
public class 剧情列表 : ScriptableObject
{
    public List<剧情列表Entity_剧情> 剧情;
    public List<剧情列表Entity_对话> 对话;
    public List<剧情列表Entity_选项> 选项;
    public List<剧情列表Entity_章节> 章节;
}
