/* undefined4 __stdcall FUN_00450a70(void) @ 00450a70  577 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00450a70(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HINSTANCE unaff_EBX;
  bool bVar5;
  UINT local_2c;
  WNDPROC local_28;
  int local_24;
  int local_20;
  
  local_2c = 0;
  local_28 = (WNDPROC)0x0;
  local_24 = 0;
  local_20 = 0;
  GetStockObject(4);
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_28 = FUN_0044fe00;
  DAT_004cf3fc = 1;
  DAT_004cf400 = 0;
  RegisterClassA((WNDCLASSA *)&local_2c);
  uVar1 = DAT_004cf428 ^ ((uint)DAT_004ceacd * 4 ^ DAT_004cf428) & 0xc;
  bVar5 = (uVar1 & 0xc) != 0;
  DAT_004ce9fc = (uint)bVar5;
  if ((DAT_004ceace == '\0') && (DAT_004cead3 == '\x02')) {
    DAT_004cf428 = uVar1 | 0x10;
  }
  else {
    DAT_004cf428 = uVar1 & 0xffffffef;
  }
  _DAT_004cf46c = 0xf;
  _DAT_004cf470 = 0xf;
  _DAT_004cf474 = 0;
  _DAT_004cf478 = 0xc;
  _DAT_004cf47c = 0xc;
  _DAT_004cf480 = 0;
  _DAT_004cf484 = 0xc;
  _DAT_004cf488 = 0xc;
  _DAT_004cf48c = 0;
  _DAT_004cf490 = 8;
  _DAT_004cf494 = 8;
  _DAT_004cf498 = 0;
  DAT_004cf468 = 0;
  if (bVar5) {
    uVar1 = DAT_004cf428 >> 2 & 3;
    if (uVar1 == 3) {
      iVar2 = GetSystemMetrics(7);
      iVar2 = iVar2 * 2 + 0x500;
      iVar3 = GetSystemMetrics(8);
      iVar3 = iVar3 * 2 + 0x3c0;
    }
    else if (uVar1 == 2) {
      iVar2 = GetSystemMetrics(7);
      iVar2 = iVar2 * 2 + 0x3c0;
      iVar3 = GetSystemMetrics(8);
      iVar3 = iVar3 * 2 + 0x2d0;
    }
    else {
      iVar2 = GetSystemMetrics(7);
      iVar2 = iVar2 * 2 + 0x280;
      iVar3 = GetSystemMetrics(8);
      iVar3 = iVar3 * 2 + 0x1e0;
    }
    iVar4 = GetSystemMetrics(4);
    DAT_004cf3f0 = CreateWindowExA(0,"BASE",&DAT_004a269c,0x100b0000,DAT_004cead8,DAT_004ceadc,iVar2
                                   ,iVar4 + iVar3,(HWND)0x0,(HMENU)0x0,unaff_EBX,(LPVOID)0x0);
  }
  else {
    DAT_004cf3f0 = CreateWindowExA(0,"BASE",&DAT_004a269c,0x90000000,0,0,0x280,0x1e0,(HWND)0x0,
                                   (HMENU)0x0,unaff_EBX,(LPVOID)0x0);
  }
  GetWindowRect(DAT_004cf3f0,(LPRECT)&DAT_004ce8f8);
  DAT_004ce940 = DAT_004cf3f0;
  if (DAT_004cf3f0 == (HWND)0x0) {
    return 1;
  }
  SendMessageA(DAT_004cf3f0,0x112,0xf020,0);
  Sleep(0x10);
  SendMessageA(DAT_004cf3f0,0x112,0xf120,0);
  return 0;
}


