/* undefined __thiscall FUN_0041d9c0(void * this, int param_1) @ 0041d9c0  468 bytes */

#include "th12.h"

void __thiscall FUN_0041d9c0(void *this,int param_1)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *this_00;
  undefined4 *puVar6;
  int *piVar7;
  
  iVar4 = param_1;
  if (((byte)DAT_004b0ce0 & 9) == 0) {
    puVar6 = (undefined4 *)(&DAT_004b512c + DAT_004ce8cc);
    if (*(int *)(&DAT_004b512c + DAT_004ce8cc) != 0) {
      FUN_004604e0(this);
      FUN_0046ca4f((void *)*puVar6);
      *puVar6 = 0;
      this = extraout_ECX;
    }
  }
  else {
    FUN_00461be0(this,*(int *)(param_1 + 0x6ce4));
    this = extraout_ECX_00;
  }
  pvVar2 = *(void **)(param_1 + 0x6d30);
  *(undefined4 *)(param_1 + 0x6ce4) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_0041cd90(this);
    FUN_0046ca4f(pvVar2);
    *(undefined4 *)(param_1 + 0x6d30) = 0;
    this = extraout_ECX_01;
  }
  if (((byte)DAT_004b0ce0 & 9) == 0) {
    if (*(void **)(param_1 + 0x6d34) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x6d34));
      *(undefined4 *)(param_1 + 0x6d34) = 0;
      this = extraout_ECX_02;
    }
    *(undefined4 *)(param_1 + 0x6d34) = 0;
    DAT_004ce8a0 = (void *)0x0;
  }
  else {
    this = *(void **)(param_1 + 0x6d34);
    DAT_004ce8a0 = this;
  }
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 8) + 4);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  FUN_00461a70(this,*(int *)(param_1 + 0x6c68));
  *(undefined4 *)(param_1 + 0x6c68) = 0;
  FUN_00461a70(this_00,*(int *)(param_1 + 0x6c6c));
  *(undefined4 *)(param_1 + 0x6c6c) = 0;
  FUN_00461a70(*(void **)(param_1 + 0x6c78),(int)*(void **)(param_1 + 0x6c78));
  *(undefined4 *)(param_1 + 0x6c78) = 0;
  *(undefined4 *)(param_1 + 0x6c7c) = 0;
  *(undefined4 *)(param_1 + 0x6c80) = 0;
  *(undefined4 *)(param_1 + 0x6c84) = 0;
  *(undefined4 *)(param_1 + 0x6c88) = 0;
  *(undefined4 *)(param_1 + 0x6c8c) = 0;
  *(undefined4 *)(param_1 + 0x6c90) = 0;
  *(undefined4 *)(param_1 + 0x6c94) = 0;
  *(undefined4 *)(param_1 + 0x6c98) = 0;
  *(undefined4 *)(param_1 + 0x6c9c) = 0;
  *(undefined4 *)(param_1 + 0x6ca0) = 0;
  piVar7 = (int *)(param_1 + 0x6c40);
  param_1 = 10;
LAB_0041db00:
  iVar3 = *piVar7;
  if (iVar3 != 0) {
    for (puVar6 = *(undefined4 **)(DAT_004ce8cc + 0x8856b8); puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[1]) {
      piVar5 = (int *)*puVar6;
      if (*piVar5 == iVar3) goto LAB_0041db4c;
    }
    for (puVar6 = *(undefined4 **)(DAT_004ce8cc + 0x8856c0); puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[1]) {
      piVar5 = (int *)*puVar6;
      if (*piVar5 == iVar3) goto LAB_0041db4c;
    }
  }
  goto LAB_0041db71;
LAB_0041db4c:
  if ((piVar5 != (int *)0x0) && (piVar5[0x11f] = piVar5[0x11f] | 0x10000000, piVar5[6] == 0)) {
    for (piVar5 = (int *)piVar5[5]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      *(uint *)(*piVar5 + 0x47c) = *(uint *)(*piVar5 + 0x47c) | 0x10000000;
    }
  }
LAB_0041db71:
  *piVar7 = 0;
  piVar7 = piVar7 + 1;
  param_1 = param_1 + -1;
  if (param_1 == 0) {
    puVar1 = (uint *)(iVar4 + 0x6d18);
    *puVar1 = *puVar1 | 0x1c0;
    *(undefined4 *)(iVar4 + 0x6cf4) = 0;
    return;
  }
  goto LAB_0041db00;
}


