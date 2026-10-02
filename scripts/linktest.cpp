// Link test: touches every DLL that th12.exe imports, so the reconstructed
// toolchain proves it can resolve headers + import libs for the whole game.
#include <windows.h>
#define DIRECTINPUT_VERSION 0x0800
#include <d3d9.h>
#include <d3dx9.h>
#include <dinput.h>
#include <dsound.h>
#include <mmsystem.h>

static volatile void* k0 = (void*)&CreateWindowExA;          // user32
static volatile void* k1 = (void*)&GetDC;                    // gdi32
static volatile void* k2 = (void*)&CoInitialize;             // ole32
static volatile void* k3 = (void*)&Direct3DCreate9;         // d3d9
static volatile void* k4 = (void*)&D3DXCreateTextureFromFileA; // d3dx9_40
static volatile void* k5 = (void*)&DirectInput8Create;       // dinput8
static volatile void* k6 = (void*)&DirectSoundCreate8;       // dsound
static volatile void* k7 = (void*)&timeGetTime;              // winmm
static volatile void* k8 = (void*)&VirtualAlloc;             // kernel32

int main() {
  LARGE_INTEGER li;
  li.QuadPart = 0;
  QueryPerformanceCounter(&li);
  return (int)(li.LowPart & 0);
}
