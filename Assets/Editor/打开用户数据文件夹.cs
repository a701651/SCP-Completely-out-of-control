using System.IO;
using UnityEditor;
using UnityEngine;

public class 打开用户数据文件夹 : MonoBehaviour
{
    private const string _数据文件夹 = "Tools/快捷文件夹/打开数据";
    private const string _构建文件夹 = "Tools/快捷文件夹/打开构建";
    private const string _Code构建文件夹 = "Tools/快捷文件夹/打开Code构建文件夹";
    private const string _热更新Code文件夹 = "Tools/快捷文件夹/打开热更新Code";
    
    private const string _构建文件夹Path = "C:\\Users\\123\\Desktop\\game";
    private static string 项目根目录 => Path.GetDirectoryName(Application.dataPath);
    [MenuItem(_数据文件夹)]
    static void 打开数据文件夹()
    {
        OpenFolder(Application.persistentDataPath);
    }
    [MenuItem(_构建文件夹)]
    static void 打开构建文件夹()
    {
        OpenFolder(_构建文件夹Path);
    }
    [MenuItem(_Code构建文件夹)]
    static void 打开Code构建文件夹()
    {
        // Library文件夹
        string path = Path.Combine(项目根目录, "Library","HybridCLR","HotUpdateDlls");
        OpenFolder(path);
    }
    [MenuItem(_热更新Code文件夹)]
    static void 打开热更新Code文件夹()
    {
        string path = Path.Combine(Application.dataPath,"HotUpdata","多人模式","Code");
        OpenFolder(path);
    }
    static void OpenFolder(string path)
    {
        Application.OpenURL($"file://{path}");
    }
}
