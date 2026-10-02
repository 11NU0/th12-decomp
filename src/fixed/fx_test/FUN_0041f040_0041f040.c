/* undefined4 __thiscall FUN_0041f040(void * this, int param_1) @ 0041f040  2191 bytes */

#include "th12.h"

undefined4 __thiscall FUN_0041f040(void *this,int param_1)

{
  float fVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *extraout_ECX_01;
  float *this_00;
  float *extraout_ECX_02;
  int iVar7;
  int iVar8;
  int *local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pvVar5 = DAT_004ce8cc;
  piVar6 = FUN_00461920(this,(int)DAT_004ce8cc,*(int *)(param_1 + 0x6cac));
  iVar8 = DAT_004b43b8;
  if (piVar6 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x6cac) = 0;
    this_00 = extraout_ECX;
  }
  else {
    local_18 = 224.0;
    local_14 = 200.0;
    local_10 = 0.0;
    piVar6 = FUN_00461920(*(undefined4 *)(param_1 + 0x6cac),(int)pvVar5,
                          *(undefined4 *)(param_1 + 0x6cac));
    if (piVar6 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x6cac) = 0;
    }
    iVar8 = DAT_004b43b8;
    uVar2 = *(undefined *)((int)piVar6 + 0x3bf);
    *(undefined4 *)(DAT_004b43b8 + 0x18fa4) = 0;
    *(undefined4 *)(iVar8 + 0x18fa8) = 0;
    *(undefined *)(iVar8 + 0x18f83) = uVar2;
    *(undefined4 *)(iVar8 + 0x18f9c) = 1;
    *(undefined4 *)(iVar8 + 0x18f98) = 3;
    FUN_00401610(*(int *)(param_1 + 0x6d48));
    iVar8 = DAT_004b43b8;
    *(undefined4 *)(DAT_004b43b8 + 0x18f98) = 0;
    *(undefined4 *)(iVar8 + 0x18f9c) = 0;
    *(undefined *)(iVar8 + 0x18f83) = 0xff;
    *(undefined4 *)(iVar8 + 0x18fa4) = 1;
    *(undefined4 *)(iVar8 + 0x18fa8) = 1;
    this_00 = extraout_ECX_00;
  }
  if (*(int *)(param_1 + 0x6cb8) != 0) {
    local_24 = 0x435e0000;
    local_20 = 192.0;
    local_1c = 0;
    local_28 = FUN_00461920(this_00,(int)DAT_004ce8cc,*(int *)(param_1 + 0x6cb4));
    if (local_28 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x6cb4) = 0;
    }
    this_00 = DAT_004b43cc;
    if (DAT_004b43cc == (float *)0x0) {
      *(undefined4 *)(param_1 + 0x6cb8) = 0;
      FUN_00461a70(*(void **)(param_1 + 0x6cb4),(int)*(void **)(param_1 + 0x6cb4));
      *(undefined4 *)(param_1 + 0x6cb4) = 0;
      this_00 = extraout_ECX_01;
    }
    else if (local_28 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x6cb8) = 0;
    }
    else {
      *(undefined *)(iVar8 + 0x18f83) = *(undefined *)((int)local_28 + 0x3bf);
      *(undefined4 *)(iVar8 + 0x18f9c) = 1;
      *(undefined4 *)(iVar8 + 0x18f98) = 3;
      FUN_004015c0("%3d.");
      iVar8 = DAT_004b43b8;
      *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x3f19999a;
      *(undefined4 *)(iVar8 + 0x18f88) = 0x3f19999a;
      local_24 = 0x43850000;
      local_20 = 198.0;
      FUN_004015c0("%.2ds");
      iVar8 = DAT_004b43b8;
      local_24 = 0x435e0000;
      *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xff808080;
      uVar2 = *(undefined *)((int)local_28 + 0x3bf);
      local_20 = 208.0;
      *(undefined4 *)(iVar8 + 0x18f84) = 0x3f800000;
      *(undefined4 *)(iVar8 + 0x18f88) = 0x3f800000;
      *(undefined *)(iVar8 + 0x18f83) = uVar2;
      FUN_0041d0b0((int *)&local_28);
      FUN_004015c0("%3d.");
      iVar8 = DAT_004b43b8;
      *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x3f19999a;
      *(undefined4 *)(iVar8 + 0x18f88) = 0x3f19999a;
      local_24 = 0x43850000;
      local_20 = 214.0;
      FUN_004015c0("%.2ds");
      iVar8 = DAT_004b43b8;
      *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x3f800000;
      this_00 = (float *)0x0;
      *(undefined4 *)(iVar8 + 0x18f88) = 0x3f800000;
      *(undefined *)(iVar8 + 0x18f83) = 0xff;
      *(undefined4 *)(iVar8 + 0x18f98) = 0;
      *(undefined4 *)(iVar8 + 0x18f9c) = 0;
      *(undefined4 *)(iVar8 + 0x18f80) = 0xffffffff;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x6ce8) != NAN(*(float *)(param_1 + 0x6ce8))) {
    local_18 = 41.0;
    local_10 = *(float *)(param_1 + 0x6ce8) * 330.0 + 41.0;
    local_14 = 23.0;
    local_c = 25.0;
    FUN_00451f30();
    local_18 = local_18 - 1.0;
    local_10 = local_10 - 1.0;
    local_14 = local_14 - 1.0;
    local_c = local_c - 1.0;
    FUN_00451f30();
    this_00 = (float *)(param_1 + 0x6cf8);
    local_28 = (int *)0x4;
    do {
      if (NAN(*this_00) == (*this_00 == 0.0)) {
        if (*(float *)(param_1 + 0x6ce8) <= *this_00) {
          fVar1 = *(float *)(param_1 + 0x6ce8);
        }
        else {
          fVar1 = *this_00;
        }
        local_18 = 40.0;
        local_10 = fVar1 * 330.0 + 40.0;
        local_14 = 22.0;
        local_c = 24.0;
        FUN_00451f30();
      }
      this_00 = this_00 + 2;
      local_28 = (int *)((int)local_28 + -1);
    } while (local_28 != (int *)0x0);
  }
  iVar8 = 4;
  do {
    FUN_0045c900(this_00,DAT_004ce8cc);
    iVar4 = DAT_004b43b8;
    iVar8 = iVar8 + -1;
    this_00 = extraout_ECX_02;
  } while (iVar8 != 0);
  *(undefined4 *)(DAT_004b43b8 + 0x18f98) = 3;
  local_20 = 48.0;
  *(undefined *)(iVar4 + 0x18f83) = *(undefined *)(param_1 + 0x3cf);
  local_1c = 0;
  iVar8 = DAT_004b0c40;
  iVar7 = DAT_004b0cc8;
  if (((byte)DAT_004b0ce0 & 0x10) != 0) {
    iVar8 = *(int *)((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + DAT_004b451c + 0x5a4 +
                    (DAT_004b0cb0 + DAT_004b0ca8 * 6) * 8);
    if (iVar8 < *(int *)(param_1 + 0x6cdc)) {
      iVar8 = *(int *)(param_1 + 0x6cdc);
    }
    iVar7 = 0;
  }
  *(undefined4 *)(iVar4 + 0x18fa4) = 2;
  local_24 = 0x441b0000;
  *(undefined4 *)(iVar4 + 0x18fa8) = 1;
  FUN_00401610(iVar7 + iVar8 * 10);
  local_18 = 500.0;
  local_14 = 72.0;
  local_10 = 0.0;
  local_20 = 72.0;
  local_24 = 0x441b0000;
  local_1c = 0;
  FUN_00401610(DAT_004b0cc4 + *(int *)(param_1 + 0x6cdc) * 10);
  iVar8 = DAT_004b43b8;
  local_18 = 540.0;
  local_14 = 152.0;
  *(undefined4 *)(DAT_004b43b8 + 0x18fa4) = 1;
  *(undefined4 *)(iVar8 + 0x18fa8) = 1;
  local_10 = 0.0;
  local_1c = 0;
  local_20 = 152.0;
  local_24 = 0x44070000;
  FUN_004015c0("%d.");
  iVar8 = DAT_004b43b8;
  *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x3f19999a;
  *(undefined4 *)(iVar8 + 0x18f88) = 0x3f19999a;
  local_24 = 0x440c0000;
  local_20 = local_20 + 7.0;
  FUN_004015c0("%.2d");
  iVar8 = DAT_004b43b8;
  *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x18f88) = 0x3f800000;
  local_20 = local_20 - 7.0;
  local_24 = 0x440f8000;
  FUN_004015c0("/%d.");
  iVar8 = DAT_004b43b8;
  local_24 = 0x44178000;
  local_20 = local_20 + 7.0;
  *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x3f19999a;
  *(undefined4 *)(iVar8 + 0x18f88) = 0x3f19999a;
  FUN_004015c0("00");
  iVar8 = DAT_004b43b8;
  *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x18fa4) = 2;
  *(undefined4 *)(iVar8 + 0x18f88) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x18fa8) = 1;
  local_18 = 620.0;
  local_14 = 176.0;
  local_24 = 0x441b0000;
  local_10 = 0.0;
  local_20 = 176.0;
  local_1c = 0;
  FUN_00401610(DAT_004b0c78 / 100 - (DAT_004b0c78 / 100) % 10);
  local_18 = 620.0;
  local_24 = 0x441b0000;
  local_14 = 200.0;
  local_10 = 0.0;
  local_20 = 200.0;
  local_1c = 0;
  FUN_00401610(DAT_004b0cdc);
  iVar8 = DAT_004b43b8;
  *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
  *(undefined4 *)(iVar8 + 0x18fa4) = 1;
  *(undefined4 *)(iVar8 + 0x18fa8) = 1;
  *(undefined *)(iVar8 + 0x18f83) = 0xff;
  *(undefined4 *)(iVar8 + 0x18f98) = 0;
  *(undefined4 *)(iVar8 + 0x18f9c) = 0;
  if ((((DAT_004b43dc != 0) && (-1 < *(int *)(param_1 + 0x6d38))) &&
      (*(int *)(DAT_004b43dc + 0x1c) != 0)) &&
     (((*(byte *)(DAT_004b43dc + 0x3c) & 1) == 0 && (*(int *)(param_1 + 0x6d30) == 0)))) {
    local_28 = (int *)0x2;
    do {
      FUN_0045c900(DAT_004ce8cc,DAT_004ce8cc);
      iVar8 = DAT_004b43b8;
      local_28 = (int *)((int)local_28 + -1);
    } while (local_28 != (int *)0x0);
    local_24 = 0x43c50000;
    uVar3 = *(undefined4 *)(param_1 + 0x4f0c);
    local_20 = 16.0;
    *(undefined4 *)(DAT_004b43b8 + 0x18f9c) = 1;
    local_1c = 0;
    *(undefined4 *)(iVar8 + 0x18f80) = uVar3;
    *(undefined4 *)(iVar8 + 0x18f98) = 3;
    FUN_004015c0(".");
    iVar8 = DAT_004b43b8;
    local_24 = 0x43c90000;
    local_20 = 22.0;
    *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x3f19999a;
    *(undefined4 *)(iVar8 + 0x18f88) = 0x3f19999a;
    FUN_004015c0("%.2d");
    iVar8 = DAT_004b43b8;
    *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0x18f88) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0x18f80) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x18f9c) = 0;
    *(undefined4 *)(iVar8 + 0x18f98) = 0;
    return 1;
  }
  return 1;
}


