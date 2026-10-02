/* ulonglong __fastcall FUN_0042ada0(int * param_1) @ 0042ada0  836 bytes */
#include "th12.h"

ulonglong __fastcall FUN_0042ada0(int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  short *psVar5;
  float10 fVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fStack_14;
  void *pvStack_10;
  float fStack_c;
  
  (**(code **)*param_1)();
  uVar2 = param_1[0x10c];
  if (uVar2 != 0) {
    if ((uVar2 & 0x1000) != 0) {
      if (param_1[99] < 1) {
        param_1[0x10c] = uVar2 ^ 0x1000;
      }
      else {
        FUN_00464a20(extraout_ECX,extraout_EDX,-1.0);
      }
    }
    if (param_1[0x113] != 0) {
      param_1[0x113] = param_1[0x113] + -1;
    }
  }
  if ((float)param_1[0x1b] < (float)param_1[0x11d]) {
    fVar1 = (float)param_1[0x1d] * DAT_004b2ed0 + (float)param_1[0x1b];
    param_1[0x1b] = (int)fVar1;
    if ((float)param_1[0x11d] < fVar1 != (NANP((float)param_1[0x11d]) || NANP(fVar1))) {
      param_1[0x1b] = param_1[0x11d];
    }
  }
  fVar6 = FUN_00464640((float)param_1[0x1a],(float)param_1[0x11c] * DAT_004b2ed0);
  param_1[0x1a] = (int)(float)fVar6;
  iVar4 = extraout_EDX_00;
  if (((*(byte *)((int)param_1 + 0x12a) & 1) != 0) && (iVar3 = *(int *)((int)DAT_004b43dc + 0x1c), iVar3 != 0)
     ) {
    param_1[0x14] = *(int *)((int)iVar3 + 0x1074);
    iVar4 = *(int *)((int)iVar3 + 0x1078);
    param_1[0x15] = iVar4;
    param_1[0x16] = *(int *)((int)iVar3 + 0x107c);
  }
  fStack_14 = DAT_004b2ed0 * (float)param_1[0x118];
  pvStack_10 = (void *)((float)param_1[0x119] * DAT_004b2ed0);
  fStack_c = DAT_004b2ed0 * (float)param_1[0x11a];
  param_1[0x14] = (int)((float)param_1[0x14] + fStack_14);
  param_1[0x15] = (int)((float)param_1[0x15] + (float)pvStack_10);
  param_1[0x16] = (int)((float)param_1[0x16] + fStack_c);
  switch(param_1[3]) {
  case 2:
switchD_0042aeee_caseD_2:
    if (param_1[6] < param_1[0x123]) break;
    FUN_004067e0(0);
    param_1[3] = 5;
    iVar4 = extraout_EDX_01;
  case 5:
    if (param_1[0x124] <= param_1[6]) {
      return CONCAT44(iVar4,1);
    }
    fVar1 = (float)param_1[0x11f] -
            ((float)param_1[7] * (float)param_1[0x11f]) / (float)param_1[0x124];
LAB_0042af99:
    param_1[0x1c] = (int)fVar1;
    break;
  case 3:
    if (param_1[0x121] <= param_1[6]) {
      FUN_004067e0(0);
      param_1[3] = 4;
    }
    break;
  case 4:
    if (param_1[0x122] <= param_1[6]) {
      FUN_004067e0(0);
      param_1[0x1c] = param_1[0x11f];
      param_1[3] = 2;
      goto switchD_0042aeee_caseD_2;
    }
    fVar1 = ((float)param_1[0x11f] * (float)param_1[7]) / (float)param_1[0x122];
    goto LAB_0042af99;
  }
  if (((param_1[3] == 4) || (param_1[3] == 2)) &&
     (16.0 < (float)param_1[0x1b] != NANP((float)param_1[0x1b]))) {
    fStack_14 = (float)param_1[0x14];
    pvStack_10 = (void *)param_1[0x15];
    fStack_c = (float)param_1[0x16];
    if (32.0 <= (float)param_1[0x1c]) {
      fVar1 = (float)param_1[0x1c] - ((float)param_1[0x1c] + 16.0) / 3.0;
    }
    else {
      fVar1 = (float)param_1[0x1c] * 0.5;
    }
    iVar4 = FUN_00437a80(pvStack_10,param_1[0x1a],fVar1,(float)param_1[0x1b]);
    if (iVar4 == 1) {
      fStack_14 = 32.0;
      pvStack_10 = (void *)0x42000000;
      fStack_c = 0.0;
      (**(code **)(*param_1 + 0x18))(DAT_004b4514 + 0x97c,&fStack_14,0,1);
    }
    else if ((iVar4 == 2) && (param_1[6] % 3 == 0)) {
      FUN_004391c0((float *)((int)DAT_004b4514 + 0x97c));
    }
  }
  fVar1 = *(float *)(param_1[0x295] + 0x38);
  param_1[0x2b7] = param_1[0x2b7] | 8;
  param_1[0x1a8] = (int)((float)param_1[0x1c] / fVar1);
  fVar1 = *(float *)((short *)param_1[0x295] + 0x1a);
  param_1[0x2b7] = param_1[0x2b7] | 8;
  param_1[0x1a9] = (int)((float)param_1[0x1b] / fVar1);
  lVar7 = FUN_00455630(8,(short *)param_1[0x295],(uint)(param_1 + 0x198));
  psVar5 = (short *)((ulonglong)lVar7 >> 0x20);
  uVar8 = ZEXT48(psVar5) << 0x20;
  if (NANP((float)param_1[0x1e]) != ((float)param_1[0x1e] == 0.0)) {
    uVar8 = FUN_00455630(extraout_ECX_00,psVar5,(uint)(param_1 + 0x2c5));
  }
  return uVar8 & 0xffffffff00000000;
}


