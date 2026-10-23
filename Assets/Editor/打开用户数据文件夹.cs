using UnityEditor;
using UnityEngine;

public class 打开用户数据文件夹 : MonoBehaviour
{
    private const string MenuName = "Tools/打开数据文件夹";
    [MenuItem(MenuName)]
    static void OpenDataFolder()
    {
        var path = Application.persistentDataPath;
        Debug.Log($"打开数据文件夹:{path}");
        Application.OpenURL($"file://{path}");
    }
}
