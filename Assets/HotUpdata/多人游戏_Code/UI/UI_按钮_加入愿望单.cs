using Steamworks;
using UnityEngine;

public class UI_按钮_加入愿望单 : MonoBehaviour
{
    public void AddToWishlist()
    {
        string url = $"https://store.steampowered.com/app/3642390/";
        SteamFriends.OpenWebOverlay(url,true);
    }
}
