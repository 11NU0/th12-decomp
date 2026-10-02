/* undefined4 __stdcall FUN_0040c8b0(void) @ 0040c8b0  494 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0040c8b0(void)

{
  int *piVar1;
  uint uVar2;
  void *this;
  int iVar3;
  void *pvVar4;
  uint *unaff_ESI;
  
  if ((*(short *)((int)unaff_ESI + 0x532) != 2) && (*(short *)((int)unaff_ESI + 0x532) != 1)) {
    return 0;
  }
  iVar3 = FUN_0040d560(unaff_ESI + 0x12f,8.0,8.0);
  if (iVar3 == 0) {
    *(undefined2 *)((int)unaff_ESI + 0x532) = 3;
    if ((code *)unaff_ESI[0x127] != (code *)0x0) {
      (*(code *)unaff_ESI[0x127])();
    }
    *(undefined2 *)(unaff_ESI + 0xf3) = 1;
    uVar2 = unaff_ESI[0x149];
    if (-1 < (int)uVar2) {
      this = *(void **)(&DAT_004debdc + DAT_004b43c8);
      if ((DAT_004cee78 & 0x8000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + '\x01';
      }
      piVar1 = (int *)((int)this + 0x130);
      *piVar1 = *piVar1 + 1;
      pvVar4 = FUN_004621c0();
      *(uint *)((int)pvVar4 + 0x480) = *(uint *)((int)pvVar4 + 0x480) | 1;
      *(undefined4 *)((int)pvVar4 + 0x20) = 0x17;
      if ((float *)(unaff_ESI + 0x12f) == (float *)0x0) {
        *(undefined4 *)((int)pvVar4 + 0x430) = 0;
        *(undefined4 *)((int)pvVar4 + 0x434) = 0;
        *(undefined4 *)((int)pvVar4 + 0x438) = 0;
      }
      else {
        *(float *)((int)pvVar4 + 0x430) = (float)unaff_ESI[0x12f] + 32.0 + 192.0;
        *(float *)((int)pvVar4 + 0x434) = (float)unaff_ESI[0x130] + 16.0;
        *(uint *)((int)pvVar4 + 0x438) = unaff_ESI[0x131];
      }
      FUN_00454d10(this,pvVar4,uVar2);
      FUN_00461250();
      if ((DAT_004cee78 & 0x8000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + -1;
      }
    }
    if ((unaff_ESI[0x13d] & 1) == 0) {
      unaff_ESI[0x13b] = 0;
      unaff_ESI[0x13a] = 0;
      unaff_ESI[0x139] = 0xfff0bdc1;
      unaff_ESI[0x13c] = (uint)&DAT_004b2ed0;
      unaff_ESI[0x13d] = unaff_ESI[0x13d] | 1;
    }
    unaff_ESI[0x13a] = 0;
    unaff_ESI[0x13b] = 0;
    unaff_ESI[0x139] = 0xffffffff;
    return 1;
  }
  if ((code *)unaff_ESI[0x127] != (code *)0x0) {
    (*(code *)unaff_ESI[0x127])();
  }
  *(undefined2 *)(unaff_ESI + 0xf3) = 1;
  *unaff_ESI = *unaff_ESI | 8;
  *(undefined2 *)((int)unaff_ESI + 0x532) = 3;
  return 1;
}


