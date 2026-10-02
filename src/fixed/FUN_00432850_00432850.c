/* undefined __stdcall FUN_00432850(void) @ 00432850  259 bytes */
#include "th12.h"

void __stdcall FUN_00432850(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *this;
  void *this_00;
  undefined4 local_4;
  
  iVar2 = DAT_004b4510;
  *(undefined4 *)((int)DAT_004b4510 + 4) = 2;
  if ((*(uint *)((int)iVar2 + 0x20) & 1) == 0) {
    *(undefined4 *)((int)iVar2 + 0x18) = 0;
    *(undefined4 *)((int)iVar2 + 0x14) = 0;
    *(undefined4 *)((int)iVar2 + 0x10) = 0xfff0bdc1;
    *(undefined4 **)((int)iVar2 + 0x1c) = &DAT_004b2ed0;
    *(uint *)((int)iVar2 + 0x20) = *(uint *)((int)iVar2 + 0x20) | 1;
  }
  *(undefined4 *)((int)iVar2 + 0x18) = 0;
  *(undefined4 *)((int)iVar2 + 0x14) = 0;
  *(undefined4 *)((int)iVar2 + 0x10) = 0xffffffff;
  if ((*(uint *)((int)iVar2 + 0x34) & 1) == 0) {
    *(undefined4 *)((int)iVar2 + 0x2c) = 0;
    *(undefined4 *)((int)iVar2 + 0x28) = 0;
    *(undefined4 *)((int)iVar2 + 0x24) = 0xfff0bdc1;
    *(undefined4 **)((int)iVar2 + 0x30) = &DAT_004b2ed0;
    *(uint *)((int)iVar2 + 0x34) = *(uint *)((int)iVar2 + 0x34) | 1;
  }
  iVar1 = DAT_004b44e8;
  *(undefined4 *)((int)iVar2 + 0x2c) = 0;
  *(undefined4 *)((int)iVar2 + 0x28) = 0;
  *(undefined4 *)((int)iVar2 + 0x24) = 0xffffffff;
  *(uint *)((int)iVar1 + 0x60) = *(uint *)((int)iVar1 + 0x60) | 0x10;
  piVar3 = FUN_004357c0(&local_4,0x4b);
  iVar1 = *piVar3;
  *(int *)((int)iVar2 + 0x1ec) = iVar1;
  FUN_00435750(this,iVar1);
  *(undefined4 *)((int)iVar2 + 0x2dc) = *(undefined4 *)((int)DAT_004b43e4 + 0x6d44);
  piVar3 = FUN_004357c0(&local_4,0x68);
  iVar1 = *piVar3;
  *(int *)((int)iVar2 + 0x1e8) = iVar1;
  FUN_00461970(this_00,iVar1);
  FUN_00423020();
  FUN_00454960(6,0);
  *(undefined4 *)((int)iVar2 + 0x2d8) = DAT_004b2ed0;
  DAT_004b2ed0 = 0x3f800000;
  *(undefined4 *)((int)iVar2 + 0x200) = DAT_004cf468;
  DAT_004cf468 = 0;
  return;
}


