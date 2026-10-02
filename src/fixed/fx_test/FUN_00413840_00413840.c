/* undefined4 __stdcall FUN_00413840(undefined4 * param_1) @ 00413840  4773 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

typedef struct local_40__u { undefined4 _; undefined1 _0_1_; } local_40__u;
undefined4 __stdcall FUN_00413840(undefined4 *param_1)

{
  local_40__u *local_40__u_alias;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar9;
  int iVar10;
  void *pvVar11;
  uint uVar12;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar13;
  int *extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int *extraout_ECX_09;
  int *extraout_ECX_10;
  int *extraout_ECX_11;
  int *extraout_ECX_12;
  int *extraout_ECX_13;
  int *extraout_ECX_14;
  undefined4 extraout_ECX_15;
  int *extraout_ECX_16;
  int *extraout_ECX_17;
  int *extraout_ECX_18;
  int *extraout_ECX_19;
  int *extraout_ECX_20;
  int *extraout_ECX_21;
  uint uVar14;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  int extraout_ECX_24;
  int extraout_ECX_25;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  int *extraout_EDX_02;
  int *extraout_EDX_03;
  int *extraout_EDX_04;
  int *extraout_EDX_05;
  undefined4 extraout_EDX_06;
  int iVar15;
  int *extraout_EDX_07;
  int *piVar16;
  int *extraout_EDX_08;
  int *extraout_EDX_09;
  int *piVar17;
  int *extraout_EDX_10;
  int *extraout_EDX_11;
  int *extraout_EDX_12;
  int *extraout_EDX_13;
  int *extraout_EDX_14;
  int *piVar18;
  float *pfVar19;
  float10 fVar20;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar21;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 fVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  uint local_64;
  int *local_5c;
  float *local_58;
  float fStack_50;
  float fStack_4c;
  float local_44;
  float local_40;
  undefined4 local_3c;
  double dStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((param_1[0x5ae] & 0x20000) != 0) {
    return 0;
  }
  param_1[0x5ae] = param_1[0x5ae] | 0x20000;
  pfVar19 = (float *)(param_1 + 0xd);
  *param_1 = param_1[0xd];
  param_1[1] = param_1[0xe];
  param_1[2] = param_1[0xf];
  param_1[3] = param_1[0x10];
  param_1[4] = param_1[0x11];
  param_1[5] = param_1[0x12];
  param_1[6] = param_1[0x13];
  param_1[7] = param_1[0x14];
  param_1[8] = param_1[0x15];
  param_1[9] = param_1[0x16];
  param_1[10] = param_1[0x17];
  param_1[0xb] = param_1[0x18];
  param_1[0xc] = param_1[0x19];
  if (param_1[0xd6] != 0) {
    FUN_0041c020();
    if ((*(byte *)(param_1 + 0x26) & 3) == 0) {
      fVar20 = FUN_004646e0(local_40);
      fVar20 = FUN_004646e0((float)fVar20);
      param_1[0x21] = (float)fVar20;
    }
    param_1[0x20] = local_3c;
  }
  if (param_1[0xf4] != 0) {
    FUN_0041c020();
    param_1[0x22] = local_40;
    param_1[0x23] = local_3c;
  }
  if (param_1[0xe5] != 0) {
    FUN_0041c020();
    if ((*(byte *)(param_1 + 0x33) & 1) == 0) {
      fVar20 = FUN_004646e0(local_40);
      fVar20 = FUN_004646e0((float)fVar20);
      param_1[0x2e] = (float)fVar20;
    }
    param_1[0x2d] = local_3c;
  }
  if (param_1[0x103] != 0) {
    FUN_0041c020();
    param_1[0x2f] = local_40;
    param_1[0x30] = local_3c;
  }
  if (param_1[0xb4] == 0) {
    FUN_00464d50();
  }
  else {
    pfVar6 = (float *)FUN_00405900();
    local_14 = *pfVar6 - (float)param_1[0x1a];
    local_10 = pfVar6[1] - (float)param_1[0x1b];
    local_c = pfVar6[2] - (float)param_1[0x1c];
    param_1[0x1d] = local_14;
    param_1[0x1e] = local_10;
    param_1[0x1f] = local_c;
  }
  if (param_1[199] == 0) {
    FUN_00464d50();
  }
  else {
    pfVar6 = (float *)FUN_00405900();
    local_14 = *pfVar6 - (float)param_1[0x27];
    local_10 = pfVar6[1] - (float)param_1[0x28];
    local_c = pfVar6[2] - (float)param_1[0x29];
    param_1[0x2a] = local_14;
    param_1[0x2b] = local_10;
    param_1[0x2c] = local_c;
  }
  FUN_00464db0();
  if ((param_1[0x5ae] & 0x2000000) != 0) {
    param_1[0x27] = (float)param_1[0x27] + _DAT_004cebdc;
    param_1[0x28] = (float)param_1[0x28] + _DAT_004cebe0;
    param_1[0x29] = (float)param_1[0x29] + _DAT_004cebe4;
  }
  FUN_00464db0();
  FUN_00413700();
  piVar17 = param_1 + 0x38;
  piVar7 = FUN_00461920(extraout_ECX,DAT_004ce8cc,param_1[0x38]);
  if (piVar7 == (int *)0x0) {
    *piVar17 = 0;
  }
  else {
    param_1[0x57b] = ABS((float)piVar7[0x17] * (float)piVar7[0x11]);
    local_44 = ABS((float)piVar7[0x16] * (float)piVar7[0x10]);
    param_1[0x57c] = local_44;
  }
  fVar1 = *pfVar19 + (float)param_1[0x57b] * 0.5;
  if ((fVar1 < -192.0 != NAN(fVar1)) || (192.0 < *pfVar19 - (float)param_1[0x57b] * 0.5)) {
    if (((param_1[0x5ae] & 0x8000) != 0) && ((param_1[0x5ae] & 4) == 0)) {
      return 0xffffffff;
    }
  }
  else {
    fVar1 = (float)param_1[0xe] + (float)param_1[0x57c] * 0.5;
    if ((fVar1 < 0.0 != NAN(fVar1)) || (448.0 < (float)param_1[0xe] - (float)param_1[0x57c] * 0.5))
    {
      if (((param_1[0x5ae] & 0x8000) != 0) && ((param_1[0x5ae] & 8) == 0)) {
        return 0xffffffff;
      }
    }
    else {
      param_1[0x5ae] = param_1[0x5ae] | 0x8000;
    }
  }
  uVar14 = param_1[0x5ae];
  piVar7 = extraout_EDX;
  if ((uVar14 & 0x8000000) != 0) {
    piVar7 = DAT_004b43c4;
    if (DAT_004b43c4[0xf] == 0) {
LAB_00413c23:
      if ((uVar14 & 0x10000000) != 0) {
        param_1[0x8b] = param_1[0x5b0];
        FUN_00461f40(param_1[0x5b0]);
        param_1[0x5ae] = param_1[0x5ae] & 0xeffffffe;
        uVar14 = extraout_ECX_01;
        piVar7 = extraout_EDX_01;
      }
    }
    else if ((uVar14 & 0x10000000) == 0) {
      param_1[0x8b] = param_1[0x5af];
      FUN_00461f40(param_1[0x5af]);
      param_1[0x5ae] = param_1[0x5ae] | 0x10000001;
      uVar14 = extraout_ECX_00;
      piVar7 = extraout_EDX_00;
    }
    else if (DAT_004b43c4[0xf] == 0) goto LAB_00413c23;
  }
  local_44 = *(float *)param_1[0x9e];
  iVar8 = FUN_00468d90(uVar14,piVar7,local_44);
  if (iVar8 != 0) {
    return 0xffffffff;
  }
  piVar7 = extraout_ECX_02;
  piVar16 = extraout_EDX_02;
  if ((code *)param_1[0x5da] != (code *)0x0) {
    uVar23 = (*(code *)param_1[0x5da])();
    piVar16 = (int *)((ulonglong)uVar23 >> 0x20);
    piVar7 = extraout_ECX_03;
    if ((int)uVar23 != 0) {
      return 0xffffffff;
    }
  }
  if (((param_1[0x5ae] & 0x400000) != 0) && ((param_1[0x5ae] & 0x20) == 0)) {
    if (((*(byte *)(DAT_004b43cc + 0x1f) & 1) == 0) ||
       ((((DAT_004b43cc[0x1e] < 0x67 || (0x70 < DAT_004b43cc[0x1e])) ||
         (piVar7 = DAT_004b43c4, DAT_004b43c4[0xf] == 0)) ||
        ((*(byte *)(DAT_004b4514 + 0x3105) & 4) != 0)))) {
      bVar5 = FUN_0041c890(piVar7);
      piVar7 = extraout_ECX_07;
      piVar16 = extraout_EDX_04;
      if (CONCAT31(extraout_var_00,bVar5) != 0) {
        pvVar11 = (void *)param_1[0x47];
        FUN_00461970(pvVar11,(int)pvVar11);
        param_1[0x34] = 0x42400000;
        param_1[0x47] = 0;
        param_1[0x35] = 0x42400000;
        piVar7 = extraout_ECX_08;
        piVar16 = extraout_EDX_05;
      }
    }
    else {
      bVar5 = FUN_0041c890(DAT_004b43c4);
      uVar13 = extraout_ECX_04;
      if (CONCAT31(extraout_var,bVar5) == 0) {
        FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&local_44,0x32,0);
        param_1[0x47] = local_44;
        uVar13 = extraout_ECX_05;
      }
      FUN_00461e30(uVar13);
      param_1[0x34] = 0x43400000;
      param_1[0x35] = 0x43400000;
      piVar7 = extraout_ECX_06;
      piVar16 = extraout_EDX_03;
    }
  }
  param_1[0x5ae] = param_1[0x5ae] & 0xffefffff;
  if ((param_1[0x5ae] & 0x21) == 0) {
    if ((code *)param_1[0x5db] == (code *)0x0) {
      iVar8 = FUN_00439ed0(pfVar19,(float *)(param_1 + 0x34));
      uVar23 = CONCAT44(extraout_EDX_06,iVar8);
    }
    else {
      uVar23 = (*(code *)param_1[0x5db])();
    }
    if ((DAT_004b4514[0x28a] == 2) || (DAT_004b4514[0x28a] == 0)) {
      iVar8 = (int)uVar23 >> 0x1f;
      iVar15 = (int)uVar23 / 5 + iVar8;
      uVar23 = CONCAT44(iVar15,iVar15 - iVar8);
    }
    piVar16 = (int *)((ulonglong)uVar23 >> 0x20);
    piVar18 = (int *)uVar23;
    if (DAT_004b43e4[0x1b4c] != 0) {
      piVar18 = (int *)0x0;
    }
    uVar14 = DAT_004b43cc[0x1f];
    piVar7 = DAT_004b43e4;
    if ((((uVar14 & 1) != 0) && (0x5c < DAT_004b43cc[0x1e])) &&
       ((DAT_004b43cc[0x1e] < 100 &&
        (((piVar16 = DAT_004b43c4, DAT_004b43c4[0xf] != 0 ||
          (iVar8 = FUN_00412690(), piVar7 = extraout_ECX_09, piVar16 = extraout_EDX_07, iVar8 != 0))
         && ((*(byte *)(DAT_004b4514 + 0x3105) & 4) == 0)))))) {
      piVar16 = (int *)((int)piVar18 / 5 + ((int)piVar18 >> 0x1f));
      piVar7 = (int *)((int)piVar16 - ((int)piVar18 >> 0x1f));
      piVar18 = piVar7;
    }
    if (((((uVar14 & 1) == 0) || (piVar16 = DAT_004b43cc, DAT_004b43cc[0x1e] < 0x67)) ||
        (((0x70 < DAT_004b43cc[0x1e] ||
          ((DAT_004b43c4[0xf] == 0 || ((param_1[0x5ae] & 0x400000) == 0)))) ||
         (piVar7 = DAT_004b4514, (*(byte *)(DAT_004b4514 + 0x3105) & 4) != 0)))) &&
       (piVar18 != (int *)0x0)) {
      FUN_00412780();
      if (((*(byte *)(param_1 + 0x5ae) & 0x10) == 0) && ((int)param_1[0x5a5] < 1)) {
        FUN_00412050(param_1 + 0x582);
      }
      pbVar9 = (byte *)FUN_0041a6f0(param_1[0x5d3]);
      if (pbVar9 != (byte *)0x0) {
        FUN_004067e0(0);
        FUN_00411df0();
        FUN_00411e40();
        iVar8 = param_1[0x5d3];
        iVar10 = FUN_004694f0(pbVar9);
        iVar15 = *(int *)(iVar8 + 4);
        *(int *)(iVar15 + 4) = iVar10;
        piVar7 = *(int **)(iVar8 + 4);
        *piVar7 = 0;
        local_44 = *(float *)param_1[0x9e];
        iVar8 = FUN_00468d90(iVar15,piVar7,local_44);
        if (iVar8 != 0) {
          return 0xffffffff;
        }
      }
      piVar16 = (int *)~((uint)param_1[0x5ae] >> 7);
      piVar7 = (int *)((uint)((int)param_1[0x582] < 1) & (uint)piVar16);
      if (((char)piVar7 != '\0') &&
         (iVar8 = FUN_00414af0(piVar7,piVar16), piVar7 = extraout_ECX_10, piVar16 = extraout_EDX_08,
         iVar8 != 0)) {
        return 1;
      }
      param_1[0x5ae] = param_1[0x5ae] | 0x100000;
    }
  }
  if (((*(byte *)(param_1 + 0x587) & 2) != 0) && (iVar8 = FUN_00414af0(piVar7,piVar16), iVar8 != 0))
  {
    return 1;
  }
  pbVar9 = (byte *)FUN_0041a6f0(param_1[0x5d3]);
  piVar7 = extraout_ECX_11;
  if (pbVar9 != (byte *)0x0) {
    FUN_004067e0(0);
    FUN_00411df0();
    FUN_00411e40();
    iVar8 = param_1[0x5d3];
    iVar15 = FUN_004694f0(pbVar9);
    piVar7 = *(int **)(iVar8 + 4);
    piVar7[1] = iVar15;
    **(undefined4 **)(iVar8 + 4) = 0;
  }
  if ((((param_1[0x5ae] & 0x22) == 0) && ((int)param_1[0x5aa] < 1)) &&
     ((param_1[0x5ae] & 0x2000000) == 0)) {
    if ((code *)param_1[0x5dc] == (code *)0x0) {
      local_44 = (float)param_1[0x36] * 0.5;
      iVar8 = FUN_00437980(local_44);
      piVar7 = extraout_ECX_13;
      if ((((param_1[0x5ae] & 0x200) != 0) && (iVar8 == 2)) &&
         (piVar7 = (int *)0x3, (int)param_1[0x9c] % 3 == 0)) {
        FUN_004391c0((float *)(DAT_004b4514 + 0x25f));
        piVar7 = extraout_ECX_14;
      }
    }
    else {
      (*(code *)param_1[0x5dc])();
      piVar7 = extraout_ECX_12;
    }
  }
  if ((param_1[0x5ae] & 0x80000) != 0) {
    if ((float)param_1[0x10] < -0.03 == NAN((float)param_1[0x10])) {
      if ((float)param_1[0x10] <= 0.03) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x1;
      }
    }
    else {
      piVar16 = (int *)0xffffffff;
    }
    piVar7 = (int *)param_1[0x8c];
    if (piVar7 != piVar16) {
      if (piVar7 == (int *)0xffffffff) {
        piVar18 = (int *)(3 - (uint)(piVar16 != (int *)0x0));
      }
      else if (piVar7 == (int *)0x0) {
        piVar7 = (int *)((piVar16 != (int *)0xffffffff) + 1);
        piVar18 = piVar7;
      }
      else {
        piVar18 = (int *)0x0;
        if (piVar7 == (int *)0x1) {
          piVar18 = (int *)((-(uint)(piVar16 != (int *)0x0) & 0xfffffffd) + 4);
        }
      }
      iVar8 = FUN_00461c50(piVar7);
      local_44 = *(float *)(iVar8 + 0x3f8);
      iVar8 = FUN_00461c50(extraout_ECX_15);
      local_14 = *(float *)(iVar8 + 0x424);
      local_10 = *(float *)(iVar8 + 0x428);
      local_c = *(float *)(iVar8 + 0x42c);
      param_1[0x8c] = piVar16;
      FUN_00461a70(piVar16,*piVar17);
      *piVar17 = 0;
      iVar8 = param_1[0x8b];
      if ((DAT_004cee78 & 0x8000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + '\x01';
      }
      *(int *)((int)local_44 + 0x130) = *(int *)((int)local_44 + 0x130) + 1;
      pvVar11 = FUN_004621c0();
      *(uint *)((int)pvVar11 + 0x480) = *(uint *)((int)pvVar11 + 0x480) | 1;
      *(float *)((int)pvVar11 + 0x430) = local_14;
      *(float *)((int)pvVar11 + 0x434) = local_10;
      *(undefined4 *)((int)pvVar11 + 0x20) = 8;
      *(float *)((int)pvVar11 + 0x438) = local_c;
      FUN_00454df0(iVar8 + (int)piVar18);
      piVar7 = (int *)FUN_00461250();
      iVar8 = *piVar7;
      piVar7 = extraout_ECX_16;
      if ((DAT_004cee78 & 0x8000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + -1;
        piVar7 = extraout_ECX_17;
      }
      *piVar17 = iVar8;
    }
  }
  fVar20 = (float10)32.0;
  if ((param_1[0x5ae] & 0x2000000) == 0) {
    piVar7 = param_1 + 0x78;
    local_58 = (float *)(param_1 + 0x4a);
    fStack_4c = 1.96182e-44;
    local_5c = piVar7;
    do {
      piVar16 = FUN_00461920(piVar7,DAT_004ce8cc,local_5c[-0x40]);
      if (piVar16 == (int *)0x0) {
        local_5c[-0x40] = 0;
        piVar7 = extraout_ECX_18;
      }
      else {
        fStack_2c = local_58[-2] + *pfVar19;
        fStack_28 = (float)param_1[0xe] + local_58[-1];
        fStack_24 = (float)param_1[0xf] + *local_58;
        iVar8 = *local_5c;
        piVar7 = local_5c;
        fVar21 = extraout_ST0;
        fVar22 = extraout_ST1;
        if (-1 < iVar8) {
          piVar7 = FUN_00461920(local_5c,DAT_004ce8cc,param_1[iVar8 + 0x38]);
          if (piVar7 == (int *)0x0) {
            param_1[iVar8 + 0x38] = 0;
          }
          fStack_2c = fStack_2c + (float)piVar7[0x109];
          fStack_28 = (float)piVar7[0x10a] + fStack_28;
          fStack_24 = (float)piVar7[0x10b] + fStack_24;
          piVar7 = extraout_ECX_19;
          fVar21 = extraout_ST0_00;
          fVar22 = extraout_ST1_00;
        }
        piVar16[0x10c] = (int)(float)((float10)fStack_2c + fVar20 + fVar21);
        piVar16[0x10d] = (int)(float)((float10)fStack_28 + fVar22);
        piVar16[0x10e] = (int)fStack_24;
        if ((piVar16[0x11f] & 0x20000000U) != 0) {
          piVar16[0xb] = param_1[0x14];
          piVar16[0x11f] = piVar16[0x11f] | 4;
        }
      }
      local_58 = local_58 + 3;
      local_5c = local_5c + 1;
      fStack_4c = (float)((int)fStack_4c + -1);
    } while (fStack_4c != 0.0);
  }
  else {
    iVar8 = 0xe;
    piVar16 = piVar17;
    do {
      piVar18 = FUN_00461920(piVar7,DAT_004ce8cc,*piVar16);
      piVar7 = extraout_ECX_20;
      if (piVar18 != (int *)0x0) {
        piVar18[0x10c] = (int)*pfVar19;
        piVar18[0x10d] = param_1[0xe];
        piVar7 = (int *)param_1[0xf];
        piVar18[0x10e] = (int)piVar7;
      }
      piVar16 = piVar16 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  piVar16 = DAT_004b4514;
  if ((((param_1[0x5ae] & 0x21) == 0) && ((param_1[0x5ae] & 0x6000000) == 0)) &&
     ((DAT_004b4514[0x2260] == 0 ||
      (local_44 = ABS(*pfVar19 - (float)DAT_004b4514[0x25f]),
      ABS(*(float *)(DAT_004b4514[0x2260] + 0x1074) - (float)DAT_004b4514[0x25f]) < local_44)))) {
    FUN_00412660(param_1[0x5d3]);
    *(undefined *)(piVar16 + 0x2261) = 1;
    piVar7 = extraout_ECX_21;
  }
  piVar7 = FUN_00461920(piVar7,DAT_004ce8cc,*piVar17);
  if (piVar7 == (int *)0x0) {
    *piVar17 = 0;
    piVar17 = extraout_EDX_09;
    goto LAB_0041457e;
  }
  piVar17 = (int *)0xfffeffff;
  if (param_1[0x5a1] != 0) {
    piVar7[0x11f] = piVar7[0x11f] & 0xfffeffff;
    if ((param_1[0x5ae] & 0x400000) != 0) {
      DAT_004b43e4[0x1b02] = DAT_004b43e4[0x1b02] & 0xfffeffff;
    }
    param_1[0x5a1] = param_1[0x5a1] + -1;
    goto LAB_0041457e;
  }
  if ((param_1[0x5ae] & 0x40000000) != 0) {
    uVar14 = param_1[0x9c] & 0x80000003;
    bVar5 = uVar14 == 0;
    if ((int)uVar14 < 0) {
      bVar5 = (uVar14 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar5) {
      piVar7[0x11f] = piVar7[0x11f] | 0x10000;
      piVar7[0xf0] = -0xff01;
    }
    else {
      piVar7[0x11f] = piVar7[0x11f] & 0xfffeffff;
    }
  }
  uVar14 = param_1[0x5ae];
  if ((uVar14 & 0x100000) == 0) {
    uVar12 = param_1[0x9c] & 0x80000003;
    bVar5 = uVar12 == 0;
    if ((int)uVar12 < 0) {
      bVar5 = (uVar12 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (!bVar5) {
      piVar7[0x11f] = piVar7[0x11f] & 0xfffeffff;
      goto LAB_0041457e;
    }
    if ((uVar14 & 0x20400000) == 0) goto LAB_0041457e;
    uVar14 = DAT_004b43cc[0x1f] & 1;
    if ((uVar14 != 0) && ((DAT_004b43cc[0x1f] & 8U) != 0)) goto LAB_0041457e;
    if (uVar14 == 0) {
LAB_0041452f:
      if (499 < *(int *)(param_1[0x5d3] + 0x2650)) goto LAB_0041457e;
    }
    else {
      piVar17 = (int *)param_1[0x5d3];
      if (99 < piVar17[0x994]) {
        if (uVar14 != 0) goto LAB_0041457e;
        goto LAB_0041452f;
      }
    }
    piVar7[0x11f] = piVar7[0x11f] | 0x10000;
    piVar7[0xf0] = -0xffff01;
    goto LAB_0041457e;
  }
  piVar7[0x11f] = piVar7[0x11f] | 0x10000;
  piVar7[0xf0] = -0xffff01;
  param_1[0x5a1] = 4;
  if (-1 < (int)param_1[0x5a3]) {
    FUN_00453e20(uVar14,pfVar19,*pfVar19);
    piVar17 = extraout_EDX_12;
    goto LAB_0041457e;
  }
  if ((param_1[0x5ae] & 0x20400000) != 0) {
    uVar14 = DAT_004b43cc[0x1f];
    uVar12 = uVar14 & 1;
    if ((uVar12 == 0) || (piVar17 = DAT_004b43cc, (uVar14 & 8) == 0)) {
      if (uVar12 == 0) {
LAB_0041448e:
        piVar17 = (int *)param_1[0x5d3];
        if (899 < piVar17[0x994]) goto LAB_004144b9;
      }
      else {
        uVar14 = param_1[0x5d3];
        piVar17 = DAT_004b43cc;
        if (199 < *(int *)(uVar14 + 0x2650)) {
          if (uVar12 != 0) goto LAB_004144b9;
          goto LAB_0041448e;
        }
      }
      FUN_00453e20(uVar14,piVar17,*pfVar19);
      piVar17 = extraout_EDX_10;
      goto LAB_0041457e;
    }
  }
LAB_004144b9:
  FUN_00453e20(pfVar19,piVar17,*pfVar19);
  piVar17 = extraout_EDX_11;
LAB_0041457e:
  iVar8 = param_1[0x5d4];
  if (iVar8 != 0) {
    fStack_50 = (float)param_1[0x5d8];
    fVar1 = (float)param_1[0x5d6];
    local_58 = *(float **)(iVar8 + 0x14);
    fStack_4c = (float)param_1[0x5d9];
    if (DAT_004b43cc[0x1e] == 0x6f) {
      fVar2 = 1.0;
    }
    else {
      fVar2 = 8.0;
    }
    if ((float)param_1[0x5d6] < (float)param_1[0x5d5]) {
      param_1[0x5d6] = (float)param_1[0x5d6] + 2.0;
    }
    local_64 = 0xff;
    if (32.0 <= (float)param_1[0x5d6]) {
      if ((float)param_1[0x5d6] < 64.0) {
        local_64 = (int)ROUND(((float)param_1[0x5d6] - 32.0) * 255.0 * 0.03125) & 0xff;
      }
    }
    else {
      local_64 = 0;
    }
    fStack_1c = (float)param_1[0xe];
    local_20 = *pfVar19;
    fVar3 = fVar1 * 2.0 + 40.0;
    fStack_18 = (float)param_1[0xf];
    local_44 = (local_20 - fVar1) - 20.0;
    FUN_00410020(local_44,(fStack_1c - fVar1) - 20.0,fVar3,fVar3);
    local_44 = 0.0;
    local_20 = *pfVar19 + 32.0 + 192.0;
    fStack_1c = (float)param_1[0xe] + 16.0;
    fStack_18 = (float)param_1[0xf];
    pfVar19 = (float *)((int *)param_1[0x5d4])[4];
    if (0 < *(int *)param_1[0x5d4]) {
      do {
        iVar8 = 0;
        if (0 < *(int *)(param_1[0x5d4] + 4)) {
          fVar3 = fVar1 * fVar1;
          dStack_38 = (double)fVar3;
          while( true ) {
            fStack_2c = *local_58 - local_20;
            fStack_28 = local_58[1] - fStack_1c;
            fStack_24 = local_58[2] - fStack_18;
            fVar4 = fVar3 - (fStack_2c * fStack_2c + fStack_28 * fStack_28);
            local_14 = fStack_2c;
            local_10 = fStack_28;
            local_c = fStack_24;
            if (fVar4 < 0.0) {
              *(undefined *)((int)pfVar19 + 0x13) = 0;
            }
            else {
              fVar4 = fVar4 / fVar3;
              pfVar19[4] = (float)param_1[0x5d7];
  local_40__u_alias = (local_40__u *)&local_40;
              local_40__u_alias->_0_1_ =
                   (undefined)
                   (int)ROUND(255.0 - fVar4 * (float)(0xff - (uint)*(byte *)((int)pfVar19 + 0x12)));
  local_40__u_alias = (local_40__u *)&local_40;
              *(undefined *)((int)pfVar19 + 0x12) = local_40__u_alias->_0_1_;
  local_40__u_alias = (local_40__u *)&local_40;
              local_40__u_alias->_0_1_ =
                   (undefined)
                   (int)ROUND(255.0 - (float)(0xff - (uint)*(byte *)((int)pfVar19 + 0x11)) * fVar4);
  local_40__u_alias = (local_40__u *)&local_40;
              *(undefined *)((int)pfVar19 + 0x11) = local_40__u_alias->_0_1_;
              piVar17 = DAT_004b43cc;
  local_40__u_alias = (local_40__u *)&local_40;
              local_40__u_alias->_0_1_ =
                   (undefined)
                   (int)ROUND(255.0 - (float)(0xff - (uint)*(byte *)(pfVar19 + 4)) * fVar4);
  local_40__u_alias = (local_40__u *)&local_40;
              *(undefined *)(pfVar19 + 4) = local_40__u_alias->_0_1_;
              if (piVar17[0x1e] == 0x6f) {
  local_40__u_alias = (local_40__u *)&local_40;
                local_40__u_alias->_0_1_ = (undefined)(int)ROUND((float)local_64 * fVar4);
  local_40__u_alias = (local_40__u *)&local_40;
                *(undefined *)((int)pfVar19 + 0x13) = local_40__u_alias->_0_1_;
                local_40 = 4.0;
              }
              else {
                local_40 = 32.0;
                *(undefined *)((int)pfVar19 + 0x13) = 0xff;
              }
              local_40 = fVar4 * local_40;
              D3DXVec3Normalize(&fStack_2c,&fStack_2c);
              fStack_2c = local_40 * fStack_2c;
              fStack_28 = fStack_28 * local_40;
              fStack_24 = local_40 * fStack_24;
              fVar20 = (float10)FUN_004938c0(extraout_ECX_22);
              local_40 = (float)fVar20;
              fStack_2c = local_40 * fVar4 * fVar2 + fStack_2c;
              fVar20 = (float10)FUN_004938c0(extraout_ECX_23);
              fStack_28 = (float)fVar20 * fVar4 * fVar2 + fStack_28;
              *pfVar19 = fStack_2c + *pfVar19;
              pfVar19[1] = pfVar19[1] + fStack_28;
              pfVar19[2] = 0.0;
              local_58[2] = 0.0;
            }
            local_40 = fStack_50 + 0.09817477;
            fVar20 = FUN_004646e0(local_40);
            fStack_50 = (float)fVar20;
            local_40 = fStack_4c - 0.049087387;
            fVar20 = FUN_004646e0(local_40);
            fStack_4c = (float)fVar20;
            local_58 = local_58 + 3;
            iVar8 = iVar8 + 1;
            pfVar19 = pfVar19 + 7;
            if (*(int *)(param_1[0x5d4] + 4) <= iVar8) break;
            fVar3 = (float)dStack_38;
          }
        }
        local_44 = (float)((int)local_44 + 1);
      } while ((int)local_44 < *(int *)param_1[0x5d4]);
    }
    local_40 = (float)param_1[0x5d8] + 0.19634955;
    fVar20 = FUN_004646e0(local_40);
    param_1[0x5d8] = (float)fVar20;
    local_40 = (float)param_1[0x5d9] + 0.09817477;
    fVar20 = FUN_004646e0(local_40);
    param_1[0x5d9] = (float)fVar20;
    iVar8 = extraout_ECX_24;
    piVar17 = extraout_EDX_13;
  }
  if (0 < (int)param_1[0x5a5]) {
    FUN_00464a20(iVar8,piVar17,-1.0);
    iVar8 = extraout_ECX_25;
    piVar17 = extraout_EDX_14;
  }
  if (0 < (int)param_1[0x5aa]) {
    FUN_00464a20(iVar8,piVar17,-1.0);
  }
  iVar8 = param_1[0x9c];
  pfVar19 = (float *)param_1[0x9e];
  param_1[0x9b] = iVar8;
  if ((0.99 < *pfVar19) && (*pfVar19 < 1.01)) {
    param_1[0x9c] = iVar8 + 1;
    param_1[0x9d] = (float)param_1[0x9d] + 1.0;
    return 0;
  }
  local_40 = *pfVar19 + (float)param_1[0x9d];
  param_1[0x9d] = local_40;
  uVar24 = FUN_004931e0(pfVar19,iVar8);
  param_1[0x9c] = (int)uVar24;
  return 0;
}


