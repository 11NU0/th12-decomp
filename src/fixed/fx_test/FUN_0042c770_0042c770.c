/* ulonglong __fastcall FUN_0042c770(int * param_1) @ 0042c770  1327 bytes */

#include "th12.h"

ulonglong __fastcall FUN_0042c770(int *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  void *this;
  uint extraout_EDX;
  float *extraout_EDX_00;
  float *extraout_EDX_01;
  float *extraout_EDX_02;
  float *extraout_EDX_03;
  float *pfVar5;
  float *extraout_EDX_04;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  do {
    (**(code **)*param_1)();
    if (param_1[0x10c] == 0) break;
    lVar7 = (ulonglong)extraout_EDX << 0x20;
    if ((param_1[0x10c] & 1U) != 0) {
      lVar7 = (**(code **)(*param_1 + 0x28))();
    }
    if ((*(byte *)(param_1 + 0x10c) & 4) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x2c))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
    }
    if ((*(byte *)(param_1 + 0x10c) & 8) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x30))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
    }
    if ((*(byte *)(param_1 + 0x10c) & 0x10) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x34))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
    }
    if ((*(byte *)(param_1 + 0x10c) & 0x40) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x38))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
    }
    if ((*(byte *)(param_1 + 0x10c) & 0x20) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x3c))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
    }
    if ((param_1[0x10c] & 0x100U) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x40))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
    }
    if ((param_1[0x10c] & 0x20000U) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x44))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
    }
    if ((param_1[0x10c] & 0x40000U) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x48))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
    }
    if ((param_1[0x10c] & 0x800000U) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x4c))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
    }
    if ((param_1[0x10c] & 0x400U) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x50))();
      lVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)lVar7 + (int)uVar8);
    }
    iVar6 = (int)lVar7;
    if ((param_1[0x10c] & 0x1000U) != 0) {
      if (param_1[99] < 1) {
        param_1[0x10c] = param_1[0x10c] ^ 0x1000;
        iVar6 = iVar6 + 1;
      }
      else {
        pfVar5 = (float *)param_1[0x65];
        param_1[0x62] = param_1[99];
        if ((*pfVar5 <= 0.99) || (1.01 <= *pfVar5)) {
          fVar1 = (float)param_1[100] - *pfVar5 * 1.0;
        }
        else {
          fVar1 = (float)param_1[100] - 1.0;
        }
        param_1[100] = (int)fVar1;
        uVar9 = FUN_004931e0(pfVar5,(int)((ulonglong)lVar7 >> 0x20));
        param_1[99] = (int)uVar9;
      }
    }
    if (param_1[0x113] != 0) {
      param_1[0x113] = param_1[0x113] + -1;
    }
  } while (iVar6 != 0);
  pfVar5 = (float *)param_1[999];
  iVar6 = param_1[0x11c] + -1;
  if (0 < iVar6) {
    pfVar3 = pfVar5 + iVar6 * 5;
    do {
      *pfVar3 = pfVar3[-5];
      pfVar3[1] = pfVar3[-4];
      pfVar3[2] = pfVar3[-3];
      pfVar3[3] = pfVar3[-2];
      pfVar3[4] = pfVar3[-1];
      iVar6 = iVar6 + -1;
      pfVar3 = pfVar3 + -5;
    } while (0 < iVar6);
  }
  *pfVar5 = *pfVar5 + (float)param_1[0x17];
  pfVar5[1] = (float)param_1[0x18] + pfVar5[1];
  pfVar5[2] = (float)param_1[0x19] + pfVar5[2];
  param_1[0x14] = (int)*pfVar5;
  param_1[0x15] = (int)pfVar5[1];
  param_1[0x16] = (int)pfVar5[2];
  pfVar5[3] = (float)param_1[0x1a];
  pfVar5[4] = (float)param_1[0x1d];
  pfVar5 = (float *)param_1[999];
  if ((param_1[0x10f] < 1) && ((param_1[0x10c] & 0x400U) == 0)) {
    iVar6 = 0;
    if (0 < param_1[0x11c]) {
      do {
        FUN_0042e880(&fStack_18,(float)param_1[0x1a],(float)param_1[0x1b]);
        fStack_18 = (float)param_1[0x14] + fStack_18;
        fStack_14 = (float)param_1[0x15] + fStack_14;
        fStack_10 = fStack_10 + (float)param_1[0x16];
        fVar1 = (float)param_1[0x1c] + *extraout_EDX_00;
        if ((((fVar1 < -192.0 == (fVar1 == -192.0)) &&
             (*extraout_EDX_00 - (float)param_1[0x1c] < 192.0)) &&
            (fVar1 = (float)param_1[0x1c] + extraout_EDX_00[1], fVar1 < 0.0 == (fVar1 == 0.0))) &&
           (pfVar5 = extraout_EDX_00, extraout_EDX_00[1] - (float)param_1[0x1c] < 448.0))
        goto LAB_0042cafa;
        iVar6 = iVar6 + 1;
        pfVar5 = extraout_EDX_00 + 5;
      } while (iVar6 < param_1[0x11c]);
    }
    return CONCAT44(pfVar5,1);
  }
  pfVar5 = (float *)param_1[0x111];
  param_1[0x10e] = param_1[0x10f];
  if ((*pfVar5 <= 0.99) || (1.01 <= *pfVar5)) {
    fVar1 = (float)param_1[0x110] - *pfVar5 * 1.0;
  }
  else {
    fVar1 = (float)param_1[0x110] - 1.0;
  }
  param_1[0x110] = (int)fVar1;
  uVar9 = FUN_004931e0(pfVar5,param_1[0x10f]);
  pfVar5 = (float *)(uVar9 >> 0x20);
  param_1[0x10f] = (int)uVar9;
LAB_0042cafa:
  pfVar3 = (float *)param_1[999];
  fStack_20 = 0.0;
  bVar2 = false;
  iVar6 = 0;
  if (param_1[0x11c] != 1 && -1 < param_1[0x11c] + -1) {
    do {
      FUN_0042e880(&fStack_18,pfVar3[3],pfVar3[4] * 0.5);
      fStack_18 = *pfVar3 + fStack_18;
      fStack_14 = pfVar3[1] + fStack_14;
      fStack_10 = pfVar3[2] + fStack_10;
      fStack_20 = pfVar3[4] + fStack_20;
      pfVar5 = extraout_EDX_01;
      if (16.0 < fStack_20 != (fStack_20 == 16.0)) {
        iVar4 = FUN_00437a80(this,pfVar3[3],(float)param_1[0x1c] * 0.5,pfVar3[4]);
        if (iVar4 == 1) {
          uStack_c = 0x42000000;
          uStack_8 = 0x42000000;
          uStack_4 = 0;
          (**(code **)(*param_1 + 0x18))(DAT_004b4514 + 0x97c,&uStack_c,0,1);
          pfVar5 = extraout_EDX_03;
        }
        else {
          pfVar5 = extraout_EDX_02;
          if (((iVar4 == 2) && (!bVar2)) &&
             (pfVar5 = (float *)(param_1[0xb] % 3), pfVar5 == (float *)0x0)) {
            FUN_004391c0((float *)(DAT_004b4514 + 0x97c));
            bVar2 = true;
            pfVar5 = extraout_EDX_04;
          }
        }
      }
      iVar6 = iVar6 + 1;
      pfVar3 = pfVar3 + 5;
    } while (iVar6 < param_1[0x11c] + -1);
  }
  FUN_00455630(param_1 + 0x2ba,(short *)pfVar5,(uint)(param_1 + 0x2ba));
  iVar6 = param_1[0xb];
  pfVar5 = (float *)param_1[0xd];
  param_1[10] = iVar6;
  if ((0.99 < *pfVar5) && (*pfVar5 < 1.01)) {
    param_1[0xb] = iVar6 + 1U;
    param_1[0xc] = (int)((float)param_1[0xc] + 1.0);
    return (ulonglong)(iVar6 + 1U) << 0x20;
  }
  param_1[0xc] = (int)(*pfVar5 + (float)param_1[0xc]);
  uVar9 = FUN_004931e0(pfVar5,iVar6);
  param_1[0xb] = (int)uVar9;
  return uVar9 & 0xffffffff00000000;
}


