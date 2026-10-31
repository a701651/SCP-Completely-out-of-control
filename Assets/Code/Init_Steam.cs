using UnityEngine;
#if IS_STEAM
using Steamworks;
#endif

public class Init_Steam : MonoBehaviour
{
#if IS_STEAM
    void OnEnable()
    {
        SteamClient.Init(3642390);
    }
#endif
}
