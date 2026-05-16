using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;
public static class AutoSaveOnRun
{
    private const string MenuNameOn = "Tools/Auto Save/Enable";
    private const string MenuNameOff = "Tools/Auto Save/Disable";
    [MenuItem(MenuNameOn)]
    private static void EnableAutoSave()
    {
        EditorApplication.playModeStateChanged += AutoSave;
        Debug.Log("自动保存已启用");
    }
    [MenuItem(MenuNameOff)]
    private static void DisableAutoSave()
    {
        EditorApplication.playModeStateChanged -= AutoSave;
        Debug.Log("自动保存已禁用");
    }
    private static void AutoSave(PlayModeStateChange state)
    {
        if (EditorApplication.isPlayingOrWillChangePlaymode && !EditorApplication.isPlaying)
        {
            EditorSceneManager.SaveOpenScenes();
            AssetDatabase.SaveAssets();
            Debug.Log("场景和资源已自动保存");
        }
    }
}