using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;

public static class SteamDefineTools
{
    private const string Symbol = "IS_STEAM";

    private const string MenuAdd = "Tools/Steam/开启 IS_STEAM";
    private const string MenuRemove = "Tools/Steam/关闭 IS_STEAM";

    // 取当前编辑器选中的平台（Build Settings 里激活的那个）
    private static BuildTargetGroup Group => EditorUserBuildSettings.selectedBuildTargetGroup;

    private static List<string> GetDefines()
    {
        string raw = PlayerSettings.GetScriptingDefineSymbolsForGroup(Group);
        return raw.Split(';')
                  .Select(s => s.Trim())
                  .Where(s => !string.IsNullOrEmpty(s))
                  .ToList();
    }

    private static void SetDefines(List<string> defines)
    {
        PlayerSettings.SetScriptingDefineSymbolsForGroup(
            Group, string.Join(";", defines.Distinct()));
        AssetDatabase.SaveAssets();
    }

    private static bool HasSymbol => GetDefines().Contains(Symbol);

    // ---------- 添加 ----------
    [MenuItem(MenuAdd, false, 20)]
    private static void AddSymbol()
    {
        var defines = GetDefines();
        if (defines.Contains(Symbol))
        {
            Debug.Log($"[Steam] {Symbol} 已存在，无需重复添加。");
            return;
        }

        defines.Add(Symbol);
        SetDefines(defines);
        Debug.Log($"[Steam] ✅ 已添加编译符号 {Symbol}（平台：{Group}）");
    }

    [MenuItem(MenuAdd, true)] // 已开启时按钮置灰
    private static bool AddSymbolValidate() => !HasSymbol;

    // ---------- 移除 ----------
    [MenuItem(MenuRemove, false, 21)]
    private static void RemoveSymbol()
    {
        var defines = GetDefines();
        if (!defines.Remove(Symbol))
        {
            Debug.Log($"[Steam] {Symbol} 不存在，无需移除。");
            return;
        }

        SetDefines(defines);
        Debug.Log($"[Steam] ❌ 已移除编译符号 {Symbol}（平台：{Group}）");
    }

    [MenuItem(MenuRemove, true)] // 未开启时按钮置灰
    private static bool RemoveSymbolValidate() => HasSymbol;
}