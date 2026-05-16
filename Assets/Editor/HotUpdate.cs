using GluonGui.WorkspaceWindow.Views.WorkspaceExplorer;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public static class HotUpdate
{
    private const string 热更新_打包 = "Tools/热更新/打包";
    [MenuItem(热更新_打包)]
    public static void 打包热更新包()
    {
        // 运行编辑器菜单 HybridCLR/Generate/All
        EditorApplication.ExecuteMenuItem("HybridCLR/Generate/All");
        // 等待运行完成
        EditorApplication.delayCall += 检查编译完成;
    }
    private static void 检查编译完成()
    {
        // 如果还在编译，再次延迟调用自己
        if (EditorApplication.isCompiling)
        {
            EditorApplication.delayCall += 检查编译完成;
        }
        else
        {
            // D:\SCP Completely out of control\HybridCLRData\HotUpdateDlls\StandaloneWindows64
            // 获取 Application.dataPath 的父目录
            string parentPath = System.IO.Path.GetDirectoryName(Application.dataPath);
            string dllPath1 = parentPath + "/HybridCLRData/HotUpdateDlls/StandaloneWindows64";
            string dllPath2 = parentPath + "/HybridCLRData/AssembliesPostIl2CppStrip/StandaloneWindows64";
            // D:\SCP Completely out of control\Assets\MyAsset\Codes
            string toPath = Application.dataPath + "/MyAsset/Codes";
            // 移动文件HotUpdate.dll，mscorlib.dll，System.dll，System.Core.dll，并加上后缀.bytes
            string[] dlls = new string[] { "HotUpdate.dll", "mscorlib.dll", "System.dll", "System.Core.dll" };
            // 删除之前的文件
            foreach (string dll in dlls) {
                string File = toPath + "/" + dll + ".bytes";
                System.IO.File.Delete(File);
            }
            // 复制
            foreach (string dll in dlls)
            {
                string fromPath = dllPath2 + "/" + dll;
                if (dll == "HotUpdate.dll")
                {
                    fromPath = dllPath1 + "/" + dll;
                }
                string toFile = toPath + "/" + dll + ".bytes";
                System.IO.File.Copy(fromPath, toFile);
            }
            // yooAsset构建
            EditorApplication.ExecuteMenuItem("YooAsset/AssetBundle Builder");
        }
    }
}

