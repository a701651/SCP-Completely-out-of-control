using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class AntiCheatWin32 : MonoBehaviour
{
    public bool debugGUI = true;
    List<string> processList = new List<string>();

    void Start()
    {
        StartCoroutine(Scan());
    }

    IEnumerator Scan()
    {
        while (true)
        {
            processList.Clear();

            IntPtr snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
            if (snapshot == IntPtr.Zero)
                yield break;

            PROCESSENTRY32 pe = new PROCESSENTRY32();
            pe.dwSize = (uint)Marshal.SizeOf(typeof(PROCESSENTRY32));

            if (Process32First(snapshot, ref pe))
            {
                do
                {
                    string name = pe.szExeFile.ToLower();
                    processList.Add($"[PID:{pe.th32ProcessID}] {pe.szExeFile}");

                    if (name.Contains("cheatengine"))
                    {
                        // 如果不是编辑器模式
                        if (!Application.isEditor)
                        {
                            ForceExit();
                        }
                    }
                } while (Process32Next(snapshot, ref pe));
            }

            CloseHandle(snapshot);
            yield return new WaitForSeconds(2f);
        }
    }

    void OnGUI()
    {
        if (!debugGUI)
            return;

        for (int i = 0; i < processList.Count; i++)
        {
            GUI.Label(new Rect(10, 10 + i * 22, 500, 22), processList[i]);
        }
    }

    void ForceExit()
    {
        ShowMessageBox("检测到 Cheat Engine！\n游戏已强制关闭。");
        // 随便写一个野指针
        IntPtr ptr = (IntPtr)0x12345678;
        byte[] data = new byte[4];

        Marshal.Copy(data, 0, ptr, data.Length);
    }

    #region Win32 API

    const uint TH32CS_SNAPPROCESS = 0x00000002;

    [StructLayout(LayoutKind.Sequential)]
    struct PROCESSENTRY32
    {
        public uint dwSize;
        public uint cntUsage;
        public int th32ProcessID;
        public IntPtr th32DefaultHeapID;
        public uint th32ModuleID;
        public uint cntThreads;
        public int th32ParentProcessID;
        public int pcPriClassBase;
        public uint dwFlags;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 260)]
        public string szExeFile;
    }

    [DllImport("kernel32.dll")]
    static extern IntPtr CreateToolhelp32Snapshot(uint dwFlags, uint th32ProcessID);

    [DllImport("kernel32.dll")]
    static extern bool Process32First(IntPtr hSnapshot, ref PROCESSENTRY32 lppe);

    [DllImport("kernel32.dll")]
    static extern bool Process32Next(IntPtr hSnapshot, ref PROCESSENTRY32 lppe);

    [DllImport("kernel32.dll")]
    static extern bool CloseHandle(IntPtr hObject);

    [DllImport("user32.dll", CharSet = CharSet.Unicode)]
    static extern int MessageBoxW(IntPtr hwnd, string text, string caption, uint type);

    void ShowMessageBox(string msg)
    {
        MessageBoxW(IntPtr.Zero, msg, "反作弊警告", 0x10);
    }

    #endregion
}
