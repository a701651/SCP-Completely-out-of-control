using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

public class 启动游戏并切换主场景 : MonoBehaviour
{
    [InitializeOnLoad]
    public class PlayModeSceneStarter
    {
        static PlayModeSceneStarter()
        {
            // 这里填你的主场景路径，注意要包含 .unity 后缀
            string mainScenePath = "Assets/Scenes/登录界面.unity";
        
            // 将指定场景设置为播放模式的启动场景
            EditorSceneManager.playModeStartScene = AssetDatabase.LoadAssetAtPath<SceneAsset>(mainScenePath);
        }
    }
}
