// Assets/Scripts/MirrorAotHints.cs —— 必须编译进 AOT 主包
using System;
using Mirror;
using UnityEngine;
using UnityEngine.Scripting;

[Preserve]
public class AOT_Mirror : NetworkBehaviour
{
    // weaver 会为这个字段生成 GeneratedSyncVarSetter<Vector2> 的调用
    [SyncVar] private Vector2 _vector2Hint;

    // ✅ 新增：确保 Vector3 的 SyncVar setter 被实例化
    [SyncVar] private Vector3 _vector3Hint;

    // Unity 官方推荐的占位方法：不需要真的被调用，但必须保留下来
    [Preserve]
    public void UsedOnlyForAOTCodeGeneration(Vector2 v, Vector3 v3)
    {
        // ---------- Vector2 ----------
        _vector2Hint = v;                        // 触发泛型 setter 实例化
        Action<Vector2, Vector2> hook2 = (a, b) => { };
        hook2(v, v);

        // ---------- Vector3 ----------
        _vector3Hint = v3;                       // 触发 GeneratedSyncVarSetter<Vector3>
        Action<Vector3, Vector3> hook3 = (a, b) => { };
        hook3(v3, v3);
    }
}