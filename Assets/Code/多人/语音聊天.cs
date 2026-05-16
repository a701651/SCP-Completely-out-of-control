using System.Collections;
using System.Collections.Generic;
using Mirror;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public class 语音聊天 : NetworkBehaviour
{
    private bool is_开麦;
    public 输入系统 InputControls;
    public AudioSource audioSource;
    public GameObject 语音图标;

    void OnEnable()
    {
        StartCoroutine(语音图标管理());
        // 如果是安卓端，申请权限
        if (Application.platform == RuntimePlatform.Android)
        {
            if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
            {
                // 请求麦克风权限
                Permission.RequestUserPermission(Permission.Microphone);
            }
        }
        StartCoroutine(Init());
    }

    #region 初始化
    IEnumerator Init()
    {
        // 等待网络加载完毕
        yield return new WaitUntil(() => NetworkClient.active);
        if (!isLocalPlayer)
        {
            yield break;
        }
        Debug.Log("语音聊天初始化");
        // 初始化输入系统
        InputControls = new 输入系统();
        InputControls.Player.语音.started += On开始说话;
        InputControls.Player.语音.canceled += On结束说话;
        InputControls.Player.语音.Enable();
        yield return null;
    }
    #endregion
    void On开始说话(InputAction.CallbackContext obj)
    {
        Debug.Log("开始说话");
        is_开麦 = true;
        StartCoroutine(StartSpeak());
    }

    void On结束说话(InputAction.CallbackContext obj)
    {
        Debug.Log("结束说话");
        is_开麦 = false;
    }

    IEnumerator StartSpeak()
    {
        Debug.Log("开始录音");
        while (is_开麦)
        {
            // 获取麦克风输入
            AudioClip audio_input = Microphone.Start(null, false, 1, 44100);
            // 等待1秒
            yield return new WaitForSeconds(1);

            // 将 AudioClip 转换为 byte[]
            byte[] audioData = ConvertAudioClipToBytes(audio_input);
            if (audioData != null && audioData.Length > 0)
            {
                发送语音(audioData);
            }

            // 停止录音并清理资源
            Microphone.End(null);
            audio_input = null;
        }
    }

    /// <summary>
    /// 将 AudioClip 音频剪辑转换为字节数组
    /// </summary>
    /// <param name="clip">要转换的 AudioClip 对象</param>
    /// <returns>转换后的字节数组，如果 clip 为 null 则返回 null</returns>
    byte[] ConvertAudioClipToBytes(AudioClip clip)
    {
        if (clip == null)
            return null;

        // 获取音频采样数据
        float[] samples = new float[clip.samples * clip.channels];
        clip.GetData(samples, 0);

        // 将 float 数组转换为 byte 数组（每个 float 占 4 字节）
        byte[] bytes = new byte[samples.Length * 4];
        System.Buffer.BlockCopy(samples, 0, bytes, 0, bytes.Length);

        return bytes;
    }

    /// <summary>
    /// 将字节数组转换回 AudioClip 音频剪辑
    /// </summary>
    /// <param name="bytes">包含音频数据的字节数组</param>
    /// <param name="sampleRate">音频采样率，默认为 44100 Hz</param>
    /// <param name="channels">音频通道数，默认为 1（单声道）</param>
    /// <returns>转换后的 AudioClip 对象，如果 bytes 为 null 或空则返回 null</returns>
    AudioClip ConvertBytesToAudioClip(byte[] bytes, int sampleRate = 44100, int channels = 1)
    {
        if (bytes == null || bytes.Length == 0)
            return null;

        // 计算采样点数量并转换字节数组为 float 数组
        int sampleCount = bytes.Length / 4;
        float[] samples = new float[sampleCount];
        System.Buffer.BlockCopy(bytes, 0, samples, 0, bytes.Length);

        // 创建新的 AudioClip 并设置音频数据
        AudioClip clip = AudioClip.Create(
            "ReceivedAudio",
            sampleCount / channels,
            channels,
            sampleRate,
            false
        );
        clip.SetData(samples, 0);

        return clip;
    }

    [Command]
    void 发送语音(byte[] data)
    {
        接收语音(data, netId);
    }

    [ClientRpc]
    void 接收语音(byte[] data, uint yc_netId)
    {
        // 自己的音频不播放
        if (isLocalPlayer)
        {
            return;
        }
        Debug.Log("仅接受语音不输出阶段");
        // 播放
        if (data != null && data.Length > 0)
        {
            if (yc_netId == netId)
            {
                // 将 byte[] 转换回 AudioClip
                AudioClip audioClip = ConvertBytesToAudioClip(data);
                if (audioClip != null)
                {
                    is_播放中 = true;
                    audioSource.PlayOneShot(audioClip);
                    Debug.Log("接受语音并输出1s语音");
                }
            }
        }
    }

    float time = 0;
    bool is_播放中 = false;

    IEnumerator 语音图标管理()
    {
        while (true)
        {
            if (is_播放中)
            {
                time = Time.time;
                is_播放中 = false;
            }
            if (Time.time - time > 2)
            {
                语音图标.SetActive(false);
            }
            else
            {
                语音图标.SetActive(true);
            }
            yield return new WaitForSeconds(1);
        }
    }
}
