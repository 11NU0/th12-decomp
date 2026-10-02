/* undefined4 __fastcall FUN_00429610(int * param_1) @ 00429610  1233 bytes */

#include "th12.h"

undefined4 __fastcall FUN_00429610(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 uVar4;
  void *this;
  undefined4 extraout_ECX_11;
  uint extraout_EDX;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  do {
    (**(code **)*param_1)();
    uVar4 = extraout_ECX;
    uVar6 = extraout_EDX;
    if (param_1[0x10c] == 0) break;
    lVar7 = (ulonglong)extraout_EDX << 0x20;
    if ((param_1[0x10c] & 1U) != 0) {
      lVar7 = (**(code **)(*param_1 + 0x28))();
      uVar4 = extraout_ECX_00;
    }
    if ((*(byte *)(param_1 + 0x10c) & 4) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x2c))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
      uVar4 = extraout_ECX_01;
    }
    if ((*(byte *)(param_1 + 0x10c) & 8) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x30))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
      uVar4 = extraout_ECX_02;
    }
    if ((*(byte *)(param_1 + 0x10c) & 0x10) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x34))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
      uVar4 = extraout_ECX_03;
    }
    if ((*(byte *)(param_1 + 0x10c) & 0x40) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x38))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
      uVar4 = extraout_ECX_04;
    }
    if ((*(byte *)(param_1 + 0x10c) & 0x20) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x3c))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
      uVar4 = extraout_ECX_05;
    }
    if ((param_1[0x10c] & 0x100U) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x40))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
      uVar4 = extraout_ECX_06;
    }
    if ((param_1[0x10c] & 0x20000U) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x44))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
      uVar4 = extraout_ECX_07;
    }
    if ((param_1[0x10c] & 0x40000U) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x48))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
      uVar4 = extraout_ECX_08;
    }
    if ((param_1[0x10c] & 0x800000U) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x4c))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
      uVar4 = extraout_ECX_09;
    }
    uVar5 = (undefined4)((ulonglong)lVar7 >> 0x20);
    if ((param_1[0x10c] & 0x1000U) != 0) {
      if (param_1[99] < 1) {
        param_1[0x10c] = param_1[0x10c] ^ 0x1000;
        lVar7 = CONCAT44(uVar5,(int)lVar7 + 1);
      }
      else {
        pfVar2 = (float *)param_1[0x65];
        param_1[0x62] = param_1[99];
        if ((*pfVar2 <= 0.99) || (1.01 <= *pfVar2)) {
          fVar1 = (float)param_1[100] - *pfVar2 * 1.0;
        }
        else {
          fVar1 = (float)param_1[100] - 1.0;
        }
        param_1[100] = (int)fVar1;
        uVar9 = FUN_004931e0(pfVar2,uVar5);
        lVar7 = CONCAT44((int)(uVar9 >> 0x20),(int)lVar7);
        param_1[99] = (int)uVar9;
        uVar4 = extraout_ECX_10;
      }
    }
    uVar6 = (uint)((ulonglong)lVar7 >> 0x20);
    if (param_1[0x113] != 0) {
      param_1[0x113] = param_1[0x113] + -1;
    }
  } while ((int)lVar7 != 0);
  if ((float)param_1[0x119] <= (float)param_1[0x1b]) {
    param_1[0x1e] = (int)((float)param_1[0x1d] * DAT_004b2ed0 + (float)param_1[0x1e]);
    fStack_20 = DAT_004b2ed0 * (float)param_1[0x17];
    fStack_1c = (float)param_1[0x18] * DAT_004b2ed0;
    fStack_18 = DAT_004b2ed0 * (float)param_1[0x19];
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_20);
    param_1[0x15] = (int)(fStack_1c + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x16] + fStack_18);
    if ((0.0 < (float)param_1[0x11b] != NAN((float)param_1[0x11b])) &&
       ((float)param_1[0x11b] < (float)param_1[0x1b] + (float)param_1[0x1e] !=
        (NAN((float)param_1[0x11b]) || NAN((float)param_1[0x1b] + (float)param_1[0x1e])))) {
      param_1[0x1b] = (int)((float)param_1[0x11b] - (float)param_1[0x1e]);
      param_1[0x119] = (int)((float)param_1[0x11b] - (float)param_1[0x1e]);
      if ((float)param_1[0x1b] <= 0.0) {
        return 1;
      }
    }
  }
  else {
    fVar1 = (float)param_1[0x1d] * DAT_004b2ed0 + (float)param_1[0x1b];
    param_1[0x1b] = (int)fVar1;
    if ((float)param_1[0x119] < fVar1 != (NAN((float)param_1[0x119]) || NAN(fVar1))) {
      param_1[0x1b] = param_1[0x119];
    }
  }
  if (param_1[0x10f] < 1) {
    FUN_0042e880(&fStack_20,(float)param_1[0x1a],(float)param_1[0x1b]);
    fStack_20 = (float)param_1[0x14] + fStack_20;
    fStack_1c = (float)param_1[0x15] + fStack_1c;
    fStack_18 = (float)param_1[0x16] + fStack_18;
    iVar3 = FUN_0042e820(param_1 + 0x14,(float)param_1[0x1c],(float)param_1[0x1c]);
    if ((iVar3 != 0) &&
       (iVar3 = FUN_0042e820(&fStack_20,(float)param_1[0x1c],(float)param_1[0x1c]), iVar3 != 0)) {
      return 1;
    }
  }
  else {
    FUN_00464a20(uVar4,uVar6,-1.0);
  }
  if ((16.0 < (float)param_1[0x1b] != NAN((float)param_1[0x1b])) &&
     (3.0 < (float)param_1[0x1c] != NAN((float)param_1[0x1c]))) {
    FUN_0042e880(&fStack_20,(float)param_1[0x1a],(float)param_1[0x1b] / 10.0);
    fStack_20 = fStack_20 + (float)param_1[0x14];
    fStack_1c = (float)param_1[0x15] + fStack_1c;
    fStack_18 = (float)param_1[0x16] + fStack_18;
    if (32.0 <= (float)param_1[0x1c]) {
      fVar1 = (float)param_1[0x1c] - ((float)param_1[0x1c] + 16.0) * 0.5;
    }
    else {
      fVar1 = (float)param_1[0x1c] * 0.5;
    }
    iVar3 = FUN_00437a80(this,param_1[0x1a],fVar1,((float)param_1[0x1b] * 4.0) / 5.0);
    if (iVar3 == 1) {
      uStack_14 = 0x42000000;
      uStack_10 = 0x42000000;
      uStack_c = 0;
      (**(code **)(*param_1 + 0x18))(DAT_004b4514 + 0x97c,&uStack_14,0,1);
    }
    else if (iVar3 == 2) {
      if (param_1[0xb] % 3 == 0) {
        FUN_004391c0((float *)(DAT_004b4514 + 0x97c));
      }
      FUN_00464a80();
    }
  }
  fVar1 = *(float *)(param_1[0x28c] + 0x38);
  param_1[0x2ae] = param_1[0x2ae] | 8;
  param_1[0x19f] = (int)((float)param_1[0x1c] / fVar1);
  fVar1 = *(float *)((short *)param_1[0x28c] + 0x1a);
  param_1[0x2ae] = param_1[0x2ae] | 8;
  param_1[0x1a0] = (int)((float)param_1[0x1b] / fVar1);
  lVar7 = FUN_00455630(8,(short *)param_1[0x28c],(uint)(param_1 + 399));
  if (NAN((float)param_1[0x1e]) != ((float)param_1[0x1e] == 0.0)) {
    FUN_00455630(extraout_ECX_11,(short *)((ulonglong)lVar7 >> 0x20),(uint)(param_1 + 700));
  }
  FUN_00464a80();
  return 0;
}


