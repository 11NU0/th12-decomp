/* undefined __stdcall FUN_00405890(void) @ 00405890  103 bytes */
#include "th12.h"

void __stdcall FUN_00405890(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_004b43c0;
  uVar1 = *(uint *)((int)DAT_004b43c0 + 0x35d0);
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)((int)DAT_004b43c0 + 0x35c8) = 0;
    *(undefined4 *)((int)iVar2 + 0x35c4) = 0;
    *(undefined4 *)((int)iVar2 + 0x35c0) = 0xfff0bdc1;
    *(undefined4 **)((int)iVar2 + 0x35cc) = &DAT_004b2ed0;
    *(uint *)((int)iVar2 + 0x35d0) = uVar1 | 1;
  }
  *(undefined4 *)((int)iVar2 + 0x35c4) = 0x3c;
  *(undefined4 *)((int)iVar2 + 0x35c8) = 0x42700000;
  *(undefined4 *)((int)iVar2 + 0x35c0) = 0x3b;
  *(uint *)((int)iVar2 + 0x35bc) = *(uint *)((int)iVar2 + 0x35bc) | 4;
  return;
}


