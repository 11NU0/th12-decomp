/* undefined4 __thiscall FUN_004072d0(void * this, int param_1) @ 004072d0  194 bytes */

#include "th12.h"

undefined4 __thiscall FUN_004072d0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  void *this_00;
  void *this_01;
  
  piVar4 = FUN_00461920(this,DAT_004ce8cc,*(int *)(param_1 + 0x40));
  if (piVar4 == (int *)0x0) {
    *(int *)(param_1 + 0x40) = 0;
  }
  FUN_00406f60(0x28);
  iVar3 = DAT_004b4514;
  if (piVar4 == (int *)0x0) {
    FUN_00461970(*(void **)(param_1 + 0x48),(int)*(void **)(param_1 + 0x48));
    return 0xffffffff;
  }
  if (300 < *(int *)(param_1 + 0x18)) {
    FUN_00461970(this_00,*(int *)(param_1 + 0x40));
    FUN_00461970(this_01,*(int *)(param_1 + 0x48));
    *(undefined4 *)(DAT_004b4514 + 0x825c) = 0x3f800000;
    return 0xffffffff;
  }
  puVar1 = (undefined4 *)(DAT_004b4514 + 0x97c);
  *(undefined4 *)(DAT_004b4514 + 0x825c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x508) = *puVar1;
  uVar2 = *(undefined4 *)(iVar3 + 0x980);
  *(undefined4 *)(param_1 + 0x50c) = uVar2;
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(iVar3 + 0x984);
  FUN_00461e30(uVar2);
  FUN_00407580();
  return 0;
}


