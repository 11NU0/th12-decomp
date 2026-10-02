/* undefined4 __thiscall FUN_0043ae80(void * this, int param_1) @ 0043ae80  1487 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0043ae80(void *this,int param_1)

{
  byte *pbVar1;
  undefined2 *puVar2;
  int iVar3;
  int in_EAX;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  *(int *)(param_1 + 0x10) = in_EAX;
  if (in_EAX == 0) {
    DAT_004b4518 = param_1;
    FUN_0043ccd0(param_1);
    uVar4 = FUN_0043cbb0();
    *(undefined4 *)(param_1 + 0xa0) = uVar4;
    puVar5 = (undefined4 *)operator_new(0x24);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      *puVar5 = 0x72323174;
      *(undefined2 *)(puVar5 + 1) = 4;
      puVar5[4] = 0x100;
    }
    *(undefined4 **)(param_1 + 0x18) = puVar5;
    pvVar6 = operator_new(0x70);
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      FUN_00423250();
      _memset(pvVar6,0,0x70);
    }
    *(void **)(param_1 + 0x1c) = pvVar6;
    pvVar6 = operator_new(0xa0);
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      _memset(pvVar6,0,0xa0);
    }
    *(void **)(param_1 + 0x20 + DAT_004b0cb0 * 4) = pvVar6;
    puVar2 = *(undefined2 **)(param_1 + 0x20 + DAT_004b0cb0 * 4);
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x5c) = DAT_004b0c90;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60) = DAT_004b0c94;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 100) = DAT_004b0ca8;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x1c) + 10);
    *pbVar1 = *pbVar1 ^ ((byte)(DAT_004b0ce0 >> 4) ^ *(byte *)(*(int *)(param_1 + 0x1c) + 10)) & 1;
    if (DAT_004b44e8 != 0) {
      puVar5 = (undefined4 *)(DAT_004b44e8 + 0x24);
      puVar10 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18);
      for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    *puVar2 = (undefined2)DAT_004b0cb0;
    puVar2[1] = (undefined2)DAT_004ce568;
    _DAT_004ce56c = 0;
    *(uint *)(puVar2 + 0x4e) =
         *(uint *)(puVar2 + 0x4e) ^ (*(uint *)(puVar2 + 0x4e) ^ DAT_004cee4c) & 1;
    if (DAT_004cee4c != 0) {
      *(undefined4 *)(puVar2 + 0x18) = 0;
      *(undefined4 *)(puVar2 + 0x1a) = 0;
    }
    *(undefined4 *)(puVar2 + 6) = DAT_004b0c44;
    puVar2[8] = (short)DAT_004b0c48;
    *(undefined4 *)(puVar2 + 10) = DAT_004b0c78;
    puVar2[0xc] = (short)_DAT_004b0c98;
    puVar2[0xd] = (short)_DAT_004b0c9c;
    puVar2[0xe] = (short)_DAT_004b0ca0;
    puVar2[0xf] = (short)_DAT_004b0ca4;
    *(undefined4 *)(puVar2 + 0x10) = DAT_004b0c4c;
    *(undefined4 *)(puVar2 + 0x12) = DAT_004b0c50;
    *(undefined4 *)(puVar2 + 0x14) = DAT_004b0c54;
    *(undefined4 *)(puVar2 + 0x16) = DAT_004b0ccc;
    *(undefined4 *)(puVar2 + 0x1c) = DAT_004b0cc4;
    *(undefined4 *)(puVar2 + 0x22) = DAT_004b0cdc;
    iVar8 = 0;
    piVar7 = (int *)(puVar2 + 0x26);
    iVar9 = 0x14;
    do {
      *piVar7 = iVar8;
      piVar7 = piVar7 + 1;
      iVar8 = iVar8 + -0x21522153;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x6c) = DAT_004b0cc4;
    puVar5 = (undefined4 *)operator_new(0x24);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = puVar5[1] & 0xfffffffe;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *puVar5 = 0;
      puVar5[5] = puVar5;
      puVar5[6] = 0;
      puVar5[7] = 0;
    }
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[2] = &LAB_0043c510;
    puVar5[8] = param_1;
    puVar5[1] = puVar5[1] & 0xfffffffd | 1;
    FUN_00462380();
    *(undefined4 **)(param_1 + 8) = puVar5;
    puVar5 = (undefined4 *)operator_new(0x24);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = puVar5[1] & 0xfffffffe;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *puVar5 = 0;
      puVar5[5] = puVar5;
      puVar5[6] = 0;
      puVar5[7] = 0;
    }
    puVar5[2] = &LAB_0043c530;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[8] = param_1;
    puVar5[1] = puVar5[1] & 0xfffffffd | 1;
    FUN_00462380();
    *(undefined4 **)(param_1 + 0x1d4) = puVar5;
    puVar5 = (undefined4 *)operator_new(0x24);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = puVar5[1] & 0xfffffffe;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *puVar5 = 0;
      puVar5[5] = puVar5;
      puVar5[6] = 0;
      puVar5[7] = 0;
    }
    puVar5[2] = &LAB_0043c570;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[8] = param_1;
    puVar5[1] = puVar5[1] & 0xfffffffd | 1;
    FUN_00462420();
    *(undefined4 **)(param_1 + 0xc) = puVar5;
    *(int *)(param_1 + 0x1d8) = DAT_004b0cb0;
    *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
    return 0;
  }
  if (in_EAX == 1) {
    DAT_004b4518 = param_1;
    iVar8 = FUN_0043c350(param_1,(char *)this);
    if (iVar8 == 0) {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18);
      puVar10 = (undefined4 *)(DAT_004b44e8 + 0x24);
      for (iVar8 = 0xf; iVar9 = DAT_004b0cb0, iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar8 = DAT_004b0cb0 * 0x24;
      iVar3 = *(int *)(param_1 + 0xb8 + DAT_004b0cb0 * 0x24);
      *(undefined4 *)(param_1 + 0xac + DAT_004b0cb0 * 0x24) =
           *(undefined4 *)(param_1 + 0xa8 + DAT_004b0cb0 * 0x24);
      *(undefined4 *)(param_1 + 0xb4 + iVar9 * 0x24) = *(undefined4 *)(param_1 + 0xb0 + iVar8);
      *(undefined4 *)(param_1 + 0xbc + iVar9 * 0x24) = 0xffffffff;
      DAT_004b0c90 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x5c);
      DAT_004b0c94 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60);
      DAT_004b0ca8 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 100);
      DAT_004ce568._0_2_ = *(undefined2 *)(iVar3 + 2);
      _DAT_004ce56c = 0;
      DAT_004b0c44 = *(undefined4 *)(iVar3 + 0xc);
      DAT_004b0c48 = (int)*(short *)(iVar3 + 0x10);
      iVar8 = DAT_004b0cd0;
      if ((DAT_004b0cd0 < DAT_004b0c48) || (iVar8 = DAT_004b0cd4, DAT_004b0c48 < DAT_004b0cd4)) {
        DAT_004b0c48 = iVar8;
      }
      DAT_004b0c78 = *(undefined4 *)(iVar3 + 0x14);
      _DAT_004b0c98 = (int)*(short *)(iVar3 + 0x18);
      _DAT_004b0c9c = (int)*(short *)(iVar3 + 0x1a);
      _DAT_004b0ca0 = (int)*(short *)(iVar3 + 0x1c);
      _DAT_004b0ca4 = (int)*(short *)(iVar3 + 0x1e);
      FUN_00422e80();
      FUN_00422e80();
      FUN_00422e80();
      DAT_004b0ccc = *(undefined4 *)(iVar3 + 0x2c);
      DAT_004b0cc4 = *(undefined4 *)(iVar3 + 0x38);
      DAT_004b0cd8 = *(undefined4 *)(*(int *)(param_1 + 0xb8 + DAT_004b0cb0 * 0x24) + 0x3c);
      DAT_004b0cdc = *(undefined4 *)(iVar3 + 0x44);
      puVar5 = (undefined4 *)operator_new(0x24);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5[1] = puVar5[1] & 0xfffffffe;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        *puVar5 = 0;
        puVar5[5] = puVar5;
        puVar5[6] = 0;
        puVar5[7] = 0;
      }
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[2] = &LAB_0043c520;
      puVar5[8] = param_1;
      puVar5[1] = puVar5[1] & 0xfffffffd | 1;
      FUN_00462380();
      *(undefined4 **)(param_1 + 8) = puVar5;
      puVar5 = (undefined4 *)operator_new(0x24);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5[1] = puVar5[1] & 0xfffffffe;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        *puVar5 = 0;
        puVar5[5] = puVar5;
        puVar5[6] = 0;
        puVar5[7] = 0;
      }
      puVar5[2] = &LAB_0043c530;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[8] = param_1;
      puVar5[1] = puVar5[1] & 0xfffffffd | 1;
      FUN_00462380();
      *(undefined4 **)(param_1 + 0x1d4) = puVar5;
      puVar5 = (undefined4 *)operator_new(0x24);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5[1] = puVar5[1] & 0xfffffffe;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        *puVar5 = 0;
        puVar5[5] = puVar5;
        puVar5[6] = 0;
        puVar5[7] = 0;
      }
      puVar5[2] = &LAB_0043c570;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[8] = param_1;
      puVar5[1] = puVar5[1] & 0xfffffffd | 1;
      FUN_00462420();
      *(undefined4 **)(param_1 + 0xc) = puVar5;
      *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
      return 0;
    }
  }
  else if ((in_EAX != 2) || (iVar8 = FUN_0043c350(param_1,(char *)this), iVar8 == 0)) {
    return 0;
  }
  return 0xffffffff;
}


