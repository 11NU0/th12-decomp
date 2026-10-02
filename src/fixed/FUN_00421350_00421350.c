/* undefined __stdcall FUN_00421350(void) @ 00421350  210 bytes */
#include "th12.h"

void __stdcall FUN_00421350(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar1 = DAT_004b43e4;
  FUN_004615a0((void *)0x0,*(void **)((int)DAT_004b43e4 + 0x6d44),&local_4,0x55,0);
  *(undefined4 *)((int)iVar1 + 0x6cac) = local_4;
  iVar2 = DAT_004b0cb0 * 1000000;
  *(int *)((int)iVar1 + 0x6d48) = iVar2;
  DAT_004b0c44 = DAT_004b0c44 + iVar2 / 10;
  if (999999999 < DAT_004b0c44) {
    DAT_004b0c44 = 999999999;
  }
  *(uint *)((int)iVar1 + 0x6d18) = *(uint *)((int)iVar1 + 0x6d18) | 0x200;
  if ((*(uint *)((int)iVar1 + 0x6d2c) & 1) == 0) {
    *(undefined4 *)((int)iVar1 + 0x6d24) = 0;
    *(undefined4 *)((int)iVar1 + 0x6d20) = 0;
    *(undefined4 *)((int)iVar1 + 0x6d1c) = 0xfff0bdc1;
    *(undefined4 **)((int)iVar1 + 0x6d28) = &DAT_004b2ed0;
    *(uint *)((int)iVar1 + 0x6d2c) = *(uint *)((int)iVar1 + 0x6d2c) | 1;
  }
  *(undefined4 *)((int)iVar1 + 0x6d24) = 0;
  *(undefined4 *)((int)iVar1 + 0x6d20) = 0;
  *(undefined4 *)((int)iVar1 + 0x6d1c) = 0xffffffff;
  return;
}


