/* undefined4 __fastcall FUN_00469d40(int param_1) @ 00469d40  1236 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00469d40(int param_1)

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  ulonglong uVar10;
  float fStack_20;
  float local_1c;
  float fStack_10;
  float fStack_c;
  
  pfVar2 = *(float **)((int)param_1 + 0x478);
  if (29999 < (int)pfVar2[0xfe]) {
    if (pfVar2[0x105] != 0.0) {
      puVar1 = (uint *)((int)pfVar2[0x105] + 0x70);
      *puVar1 = *puVar1 & 0xfffffffe;
      pfVar2[0x105] = 0.0;
    }
    return 1;
  }
  iVar7 = 0xb;
  pfVar6 = pfVar2 + 0xc9;
  do {
    *pfVar6 = pfVar6[-3];
    pfVar6[1] = pfVar6[-2];
    pfVar6[2] = pfVar6[-1];
    iVar7 = iVar7 + -1;
    pfVar6 = pfVar6 + -3;
  } while (0 < iVar7);
  if ((*(byte *)((int)pfVar2 + 0xd8) & 1) == 0) {
    FUN_00465390(pfVar2 + 0xcf,pfVar2[0xd3],pfVar2[0xd2]);
    pfVar2[0xd1] = 0.0;
  }
  else {
    pfVar2[0xd4] = pfVar2[0xd5] + pfVar2[0xd4];
    fVar9 = FUN_004646e0(pfVar2[0xd2] + pfVar2[0xd3]);
    fVar9 = FUN_004646e0((float)fVar9);
    pfVar2[0xd3] = (float)fVar9;
  }
  FUN_00464db0();
  pfVar2[0xa8] = pfVar2[0xcc];
  pfVar2[0xa9] = pfVar2[0xcd];
  pfVar2[0xaa] = pfVar2[0xce];
  if (40.0 <= ABS(pfVar2[0xcc] - pfVar2[0x102])) {
    fVar9 = FUN_0046a520(-1.5707964,pfVar2[0xd3]);
    fVar9 = FUN_004646e0((float)(fVar9 - (float10)1.5707963705062866));
    pfVar2[0xd3] = (float)fVar9;
  }
  if (pfVar2[0xca] <= 0.0) {
    return 1;
  }
  fVar3 = pfVar2[0x105];
  iVar7 = 0;
  local_1c = (float)-(int)pfVar2[0xfe] * pfVar2[0xd2] * 0.0078125;
  if (fVar3 != 0.0) {
    *(float *)((int)fVar3 + 0x18) = pfVar2[0xae];
    *(float *)((int)fVar3 + 0x1c) = pfVar2[0xaf];
    fVar4 = pfVar2[0xb0];
    *(float *)((int)fVar3 + 0x20) = fVar4;
    fVar9 = (( float10 (__fastcall *)())FUN_004937aa)(fVar4);
    *(float *)((int)pfVar2[0x105] + 8) = (float)fVar9;
    if (*(float *)((int)pfVar2[0x105] + 0x1c) < -64.0) {
      puVar1 = (uint *)((int)pfVar2[0x105] + 0x70);
      *puVar1 = *puVar1 & 0xfffffffe;
      pfVar2[0x105] = 0.0;
    }
  }
  if (local_1c < 0.0 != NANP(local_1c)) {
    do {
      local_1c = local_1c + 1.0;
    } while (local_1c < 0.0 != NANP(local_1c));
  }
  pfVar6 = pfVar2 + 7;
  pfVar8 = pfVar2;
  do {
    if (0 < iVar7) {
      fVar9 = (( float10 (__fastcall *)())FUN_004937aa)(pfVar2 + iVar7 * 3 + 0xa5);
      fVar9 = FUN_004646e0((float)fVar9);
      fStack_20 = (float)fVar9;
    }
    if (iVar7 < 0xb) {
      fVar9 = (( float10 (__fastcall *)())FUN_004937aa)(pfVar2 + iVar7 * 3 + 0xab);
      fVar9 = FUN_004646e0((float)fVar9);
      fVar3 = (float)fVar9;
      if (iVar7 == 0) {
        fVar9 = FUN_00465280(fVar3,1.5707964);
        goto LAB_0046a0ac;
      }
      fVar9 = FUN_004646e0(fVar3 + fStack_20);
      fVar9 = FUN_004646e0((float)(fVar9 * (float10)0.5));
      fStack_20 = (float)fVar9;
      fVar9 = FUN_0042e770(fVar3,fStack_20);
      fVar9 = FUN_004646e0((float)fVar9);
      if (fVar9 < (float10)0.0 != (fVar9 == (float10)0.0)) {
        fVar9 = (float10)(fStack_20 + 3.1415927);
        goto LAB_0046a0ac;
      }
    }
    else {
      fVar9 = (float10)(fStack_20 + 1.5707964);
LAB_0046a0ac:
      fVar9 = FUN_004646e0((float)fVar9);
      fStack_20 = (float)fVar9;
    }
    iVar5 = iVar7 * 3;
    *pfVar8 = pfVar2[iVar5 + 0xa8] + 32.0 + 192.0;
    pfVar8[1] = pfVar2[iVar5 + 0xa9] + 16.0;
    pfVar8[2] = pfVar2[iVar5 + 0xaa];
    fVar3 = pfVar8[1];
    fVar4 = pfVar8[2];
    *pfVar6 = *pfVar8;
    pfVar6[1] = fVar3;
    pfVar6[2] = fVar4;
    FUN_0046a4a0(&fStack_10,fStack_20,12.0);
    iVar7 = iVar7 + 1;
    pfVar6 = pfVar6 + 0xe;
    *pfVar8 = fStack_10 + *pfVar8;
    pfVar8[1] = fStack_c + pfVar8[1];
    pfVar8[6] = local_1c;
    pfVar8[7] = pfVar8[7] - fStack_10;
    pfVar8[8] = pfVar8[8] - fStack_c;
    pfVar8[0xd] = local_1c;
    local_1c = pfVar2[0xd2] * 0.0078125 + local_1c;
    pfVar8 = pfVar8 + 0xe;
    if (0xb < iVar7) {
      fVar3 = pfVar2[0xfe];
      pfVar6 = (float *)pfVar2[0x100];
      pfVar2[0xfd] = fVar3;
      if ((0.99 < *pfVar6) && (*pfVar6 < 1.01)) {
        pfVar2[0xfe] = (float)((int)fVar3 + 1);
        pfVar2[0xff] = pfVar2[0xff] + 1.0;
        return 0;
      }
      pfVar2[0xff] = *pfVar6 + pfVar2[0xff];
      uVar10 = FUN_004931e0(pfVar6,fVar3);
      pfVar2[0xfe] = (float)uVar10;
      return 0;
    }
  } while( true );
}


