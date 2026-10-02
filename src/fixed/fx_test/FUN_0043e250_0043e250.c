/* undefined __stdcall FUN_0043e250(undefined4 * param_1, undefined4 param_2) @ 0043e250  225 bytes */

#include "th12.h"

void __stdcall FUN_0043e250(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_EAX;
  
  puVar4 = param_1;
  iVar3 = DAT_004b4524;
  if (9 < *(int *)(DAT_004b4524 + 0x14)) {
    *(undefined4 *)(DAT_004b4524 + 0x14) = 0;
  }
  puVar1 = (undefined *)(*(int *)(iVar3 + 0x14) * 0x40 + 0x4cc + iVar3);
  puVar1[0x38] = 1;
  param_1 = (undefined4 *)0x0;
  if (in_EAX < 0) {
    *puVar1 = 10;
  }
  else {
    if (in_EAX != 0) {
      do {
        iVar2 = in_EAX / 10;
        *(char *)((int)param_1 + (int)puVar1) = (char)in_EAX + (char)iVar2 * -10;
        param_1 = (undefined4 *)((int)param_1 + 1);
        in_EAX = iVar2;
      } while (iVar2 != 0);
      if (param_1 != (undefined4 *)0x0) goto LAB_0043e2ca;
    }
    *puVar1 = 0;
  }
  param_1 = (undefined4 *)0x1;
LAB_0043e2ca:
  puVar1[0x39] = param_1._0_1_;
  *(undefined4 *)(puVar1 + 0x18) = param_2;
  if ((*(uint *)(puVar1 + 0x2c) & 1) == 0) {
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0xfff0bdc1;
    *(undefined4 **)(puVar1 + 0x28) = &DAT_004b2ed0;
    *(uint *)(puVar1 + 0x2c) = *(uint *)(puVar1 + 0x2c) | 1;
  }
  *(undefined4 *)(puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xc) = *puVar4;
  *(undefined4 *)(puVar1 + 0x10) = puVar4[1];
  *(undefined4 *)(puVar1 + 0x14) = puVar4[2];
  *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
  return;
}


