#include "PrecompiledHeader.h"
#include "..\UnityPlayerStub\Exports.h"

// Hint that the discrete gpu should be enabled on optimus/enduro systems
// NVIDIA docs: http://developer.download.nvidia.com/devzone/devcenter/gamegraphics/files/OptimusRenderingPolicies.pdf
// AMD forum post: http://devgurus.amd.com/thread/169965
extern "C"
{
    __declspec(dllexport) DWORD NvOptimusEnablement = 0x00000001;
    __declspec(dllexport) int AmdPowerXpressRequestHighPerformance = 1;
    __declspec(dllexport) extern const UINT D3D12SDKVersion = 611;
    __declspec(dllexport) extern const char* D3D12SDKPath = u8".\\D3D12\\";
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, LPWSTR lpCmdLine, int nShowCmd)
{
    LPCWSTR customDataFolder = nullptr;
    return UnityMain2(hInstance, customDataFolder, lpCmdLine, nShowCmd);
}
