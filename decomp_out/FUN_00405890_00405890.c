/* undefined __stdcall FUN_00405890(void) @ 00405890  103 bytes */
#include "th12.h"

void FUN_00405890(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_004b43c0;
  uVar1 = *(uint *)(DAT_004b43c0 + 0x35d0);
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)(DAT_004b43c0 + 0x35c8) = 0;
    *(undefined4 *)(iVar2 + 0x35c4) = 0;
    *(undefined4 *)(iVar2 + 0x35c0) = 0xfff0bdc1;
    *(undefined4 **)(iVar2 + 0x35cc) = &DAT_004b2ed0;
    *(uint *)(iVar2 + 0x35d0) = uVar1 | 1;
  }
  *(undefined4 *)(iVar2 + 0x35c4) = 0x3c;
  *(undefined4 *)(iVar2 + 0x35c8) = 0x42700000;
  *(undefined4 *)(iVar2 + 0x35c0) = 0x3b;
  *(uint *)(iVar2 + 0x35bc) = *(uint *)(iVar2 + 0x35bc) | 4;
  return;
}


