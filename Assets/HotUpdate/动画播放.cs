using System.Collections;
using UnityEngine;
using UnityEngine.Video;
public class 动画播放 : MonoBehaviour
{
    public GameObject 动画1;
    public GameObject 动画2;
    public GameObject 背景板;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(playAnimation());
    }
    IEnumerator playAnimation()
    {
        背景板.SetActive(true);
        动画1.SetActive(true);
        yield return new WaitForSeconds(11);
        动画2.SetActive(true);
        动画1.SetActive(false);
        yield return new WaitForSeconds(7);
        动画2.SetActive(false);
        背景板.SetActive(false);
    }
}
