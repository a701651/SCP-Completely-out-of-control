using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class 加载界面_进度条_状态机 : MonoBehaviour
{
#region 变量
    [SerializeField]
    private bool 是否显示进度条 = false;
    [SerializeField]
    private float 当前进度 = 0f;
    [SerializeField]
    private string 当前进度文本 = "";
    [SerializeField]
    private Slider 进度条;
    [SerializeField]
    private TMP_Text 进度描述文本;
    [SerializeField]
    private TMP_Text 进度显示文本;
#endregion
/// <summary>
/// 设置进度条数据
/// </summary>
/// <param name="progress">进度值_min0_max100_浮点</param>
/// <param name="text">进度述文本_字符串</param>
    public void 设置进度(float progress, string text)
    {
        当前进度 = progress;
        当前进度文本 = text;
        更新ui();
    }
/// <summary>
/// 设置进度条的显示状态
/// </summary>
/// <param name="show">是否显示进度条</param>
    public void 设置进度条Show(bool show)
    {
        是否显示进度条 = show;
        更新ui();
    }

    private void 更新ui()
    {
        进度条.value = 当前进度;
        进度描述文本.text = 当前进度文本;
        // 保留2位小数
        string progress = 当前进度.ToString("0.00") + "%";
        进度显示文本.text = progress;
        进度条.gameObject.SetActive(是否显示进度条);
    }
}
