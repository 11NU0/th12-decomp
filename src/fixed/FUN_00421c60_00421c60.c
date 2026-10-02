/* undefined4 __stdcall FUN_00421c60(void) @ 00421c60  65 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00421c60(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_004b43dc;
  uVar1 = *(uint *)((int)DAT_004b43dc + 0x60);
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)((int)DAT_004b43dc + 0x58) = 0;
    *(undefined4 *)((int)iVar2 + 0x54) = 0;
    *(undefined4 *)((int)iVar2 + 0x50) = 0xfff0bdc1;
    *(undefined4 **)((int)iVar2 + 0x5c) = &DAT_004b2ed0;
    *(uint *)((int)iVar2 + 0x60) = uVar1 | 1;
  }
  *(undefined4 *)((int)iVar2 + 0x58) = 0;
  *(undefined4 *)((int)iVar2 + 0x54) = 0;
  *(undefined4 *)((int)iVar2 + 0x50) = 0xffffffff;
  *(undefined4 *)((int)iVar2 + 0x68) = 0;
  *(undefined4 *)((int)iVar2 + 0x6c) = 0;
  return 0;
}


