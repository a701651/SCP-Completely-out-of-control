# SCP-Completely-out-of-control
游戏SCP Completely out of control源代码
## 项目安装教程
1.使用Unity6000.0.75f1【必须安装Windows Build Support (IL2CPP)】

2.在Unity Hub中添加项目并打开，等待加载出主界面

3.在顶部栏点击<img width="100" height="36" alt="图片" src="https://github.com/user-attachments/assets/db3b2a6f-20a9-454e-a0cf-3af8d1afbdcc" />，其次点击<img width="223" height="43" alt="图片" src="https://github.com/user-attachments/assets/cac48620-5410-494a-9580-62908d4f4fb2" />你将打开一个类似页面<img width="1204" height="349" alt="图片" src="https://github.com/user-attachments/assets/76f744b9-6471-4b65-9bde-21b8a045caa3" />点击<img width="163" height="45" alt="图片" src="https://github.com/user-attachments/assets/d4e73547-c661-4d1e-bf8f-70a538521d76" />等待跑完你就完成了项目的安装

>注：切换平台需要重新进行第3步
## 项目热更新构建教程
### 代码热更新
1.你在写完代码后通过<img width="741" height="433" alt="图片" src="https://github.com/user-attachments/assets/d65b6a37-3ed5-4536-b8a6-6cddd41c6c2e" />进行一次ALL构建

>注：后续可以通过<img width="640" height="528" alt="图片" src="https://github.com/user-attachments/assets/23b3f889-c5b3-4785-8e91-9fa3d683f1c3" />如图的第一个选项构建代码。

2.复制代码，构建完成后应该能在 `Library\HybridCLR` 中看见 `AssembliesPostIl2CppStrip` 和 `HotUpdateDlls` 我们需要复制的文件在这个文件夹里面。
复制 `AssembliesPostIl2CppStrip` 当中的 `mscorlib.dll` `System.Core.dll` `System.dll` 到 `Assets/HotUpdata/多人模式/Code`
复制 `HotUpdateDlls` 当中的 `多人游戏_Code.dll` 到 `Assets/HotUpdata/多人模式/Code`
>注:`AssembliesPostIl2CppStrip` 和 `HotUpdateDlls` 下面可能还有一级文件夹，这个取决于你构建的平台

3.修改名称，将更改复制的四个文件加上后缀名 `bytes`

### 资源热更新
>必须完成 `代码热更新` 后在继续

1.打开顶部栏的<img width="279" height="226" alt="图片" src="https://github.com/user-attachments/assets/f990b54e-3ca8-4e0a-85a6-adb4325bc925" />选中<img width="282" height="40" alt="图片" src="https://github.com/user-attachments/assets/62466e25-df8f-4ec8-8cf1-34c741c33d3f" />在打开的页面点击<img width="1458" height="595" alt="图片" src="https://github.com/user-attachments/assets/dc82e9c6-6c9c-4f58-a2bc-c94a345fc9e1" />如图的最大绿色按钮
>有两种打包<img width="606" height="27" alt="图片" src="https://github.com/user-attachments/assets/88c41d25-a158-42b0-9570-efd55e0a09f4" />图一为完整包，<img width="622" height="60" alt="图片" src="https://github.com/user-attachments/assets/f5cceb6c-4858-44a9-a142-63f1a75eed72" />图二为必须包（仅代码和必要资源，无大部分场景和模型，后续更新联网热更新后会很有用的）










