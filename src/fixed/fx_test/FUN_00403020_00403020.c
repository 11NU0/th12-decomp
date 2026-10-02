/* undefined4 __stdcall FUN_00403020(void) @ 00403020  1729 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00403020(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int *extraout_ECX_02;
  int *piVar6;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  short *extraout_EDX;
  short *psVar7;
  int *unaff_EBX;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  int *piVar11;
  undefined2 in_FPUControlWord;
  float10 fVar12;
  float10 fVar13;
  longlong lVar14;
  int *piVar15;
  float *pfVar16;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  int iStack_38;
  undefined uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (((unaff_EBX[0xd6f] & 8U) != 0) ||
     (((unaff_EBX[0xd6f] & 4U) != 0 && (0x3b < unaff_EBX[0xd71])))) {
    return 1;
  }
  unaff_EBX[0xdbd] = 0;
  unaff_EBX[0xdbe] = 0;
  local_14 = 0.0;
  local_10 = 0;
  local_c = 0;
  unaff_EBX[0xdbf] = 0;
  unaff_EBX[0xdc0] = 0;
  piVar6 = unaff_EBX + 0xd86;
  piVar15 = unaff_EBX + 0xd8c;
  unaff_EBX[0xdc1] = 0;
  D3DXVec3Normalize(piVar15,piVar6);
  unaff_EBX[0x9dd] = 0x808080;
  if (((*(byte *)(unaff_EBX + 0xd6f) & 4) == 0) || (unaff_EBX[0xd71] < 0x1e)) {
    FUN_00404620((int)unaff_EBX);
    FUN_004049a0(unaff_EBX);
    piVar8 = unaff_EBX + 0x73;
    iVar10 = 8;
    uVar5 = extraout_ECX;
    psVar7 = extraout_EDX;
    do {
      lVar14 = FUN_00455630(uVar5,psVar7,(uint)piVar8);
      uVar4 = DAT_004b2ed0;
      psVar7 = (short *)((ulonglong)lVar14 >> 0x20);
      piVar8 = piVar8 + 0x12d;
      iVar10 = iVar10 + -1;
      uVar5 = extraout_ECX_00;
    } while (iVar10 != 0);
    DAT_004b2ed0 = uVar4;
    if (unaff_EBX[0x9de] != 0) {
      DAT_004b2ed0 = 0x3f800000;
      lVar14 = FUN_00455630(extraout_ECX_00,(short *)(unaff_EBX + 0x9e5),(uint)(unaff_EBX + 0x9e5));
      lVar14 = FUN_00455630(extraout_ECX_01,(short *)((ulonglong)lVar14 >> 0x20),
                            (uint)(unaff_EBX + 0xb12));
      FUN_00455630(unaff_EBX + 0xc3f,(short *)((ulonglong)lVar14 >> 0x20),(uint)(unaff_EBX + 0xc3f))
      ;
      DAT_004b2ed0 = uVar4;
    }
  }
  unaff_EBX[0x9de] = 0;
  piVar8 = unaff_EBX + 0xd83;
  piVar11 = &DAT_004ced1c;
  for (iVar10 = 0x46; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar11 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar11 = piVar11 + 1;
  }
  if (unaff_EBX[0xd77] != 0) {
    fStack_48 = (float)unaff_EBX[0xd7b];
    pfVar16 = *(float **)(unaff_EBX[0xd77] + 0x14);
    fStack_44 = (float)unaff_EBX[0xd7c];
    if (unaff_EBX[0xd7d] == 1) {
      if ((DAT_004b43cc != 0) && ((*(byte *)(DAT_004b43cc + 0x7c) & 1) != 0)) goto LAB_004036dd;
      FUN_00410020(-192.0,0.0,384.0,128.0);
      pfVar9 = (float *)((int *)unaff_EBX[0xd77])[4];
      iVar10 = 0;
      piVar6 = extraout_ECX_02;
      if (0 < *(int *)unaff_EBX[0xd77]) {
        do {
          iStack_40 = 0;
          if (0 < *(int *)(unaff_EBX[0xd77] + 4)) {
            fVar12 = (float10)FUN_004938c0(piVar6);
            do {
              *(undefined *)((int)pfVar9 + 0x13) = 0xc0;
              piVar6 = (int *)unaff_EBX[0xd77];
              fVar1 = 24.0 - ((float)iStack_40 * 24.0) / (float)(piVar6[1] + -1);
              fVar13 = (float10)FUN_004938c0(piVar6[1] + -1);
              fStack_28 = fVar1 * (float)fVar13;
              fStack_24 = fVar1 * (float)fVar12;
              if ((((iVar10 != 0) && (iStack_40 != 0)) && (iVar10 != *piVar6 + -1)) &&
                 (iStack_40 != piVar6[1] + -1)) {
                *pfVar9 = *pfVar9 + fStack_28;
                pfVar9[1] = pfVar9[1] + fStack_24;
                pfVar9[2] = 0.0;
                pfVar16[2] = 0.0;
              }
              fVar13 = FUN_004646e0(fStack_48 + 0.668424);
              fStack_48 = (float)fVar13;
              pfVar16 = pfVar16 + 3;
              iStack_40 = iStack_40 + 1;
              pfVar9 = pfVar9 + 7;
            } while (iStack_40 < *(int *)(unaff_EBX[0xd77] + 4));
          }
          fVar12 = FUN_004646e0(fStack_44 - 1.4959966);
          fStack_44 = (float)fVar12;
          piVar6 = (int *)unaff_EBX[0xd77];
          iVar10 = iVar10 + 1;
        } while (iVar10 < *piVar6);
      }
      fVar12 = FUN_004646e0((float)unaff_EBX[0xd7b] + 0.049087387);
      unaff_EBX[0xd7b] = (int)(float)fVar12;
      fVar1 = (float)unaff_EBX[0xd7c] + 0.03926991;
    }
    else {
      if (unaff_EBX[0xd7d] != 2) goto LAB_004036dd;
      fVar1 = (float)unaff_EBX[0xd79];
      if ((float)unaff_EBX[0xd78] < (float)unaff_EBX[0xd79] !=
          (NAN((float)unaff_EBX[0xd78]) || NAN((float)unaff_EBX[0xd79]))) {
        unaff_EBX[0xd79] = (int)((float)unaff_EBX[0xd79] - 2.0);
      }
      FUN_00410020(-fVar1,224.0 - fVar1,fVar1 * 2.0,fVar1 * 2.0);
      pfVar9 = (float *)((int *)unaff_EBX[0xd77])[4];
      iStack_38 = 0;
      if (0 < *(int *)unaff_EBX[0xd77]) {
        do {
          iVar10 = 0;
          if (0 < *(int *)(unaff_EBX[0xd77] + 4)) {
            do {
              fStack_28 = *pfVar16 - 224.0;
              fStack_24 = pfVar16[1] - 240.0;
              fStack_20 = pfVar16[2] - local_14;
              fVar2 = fVar1 * fVar1 - (fStack_28 * fStack_28 + fStack_24 * fStack_24);
              fStack_1c = fStack_28;
              fStack_18 = fStack_24;
              local_14 = fStack_20;
              if (fVar2 < 0.0) {
                *(undefined *)((int)pfVar9 + 0x13) = 0;
              }
              else {
                fVar2 = fVar2 / (fVar1 * fVar1);
                pfVar9[4] = -NAN;
                *(undefined *)((int)pfVar9 + 0x13) = 0x60;
                uStack_34 = (undefined)
                            (int)ROUND(255.0 - fVar2 * (float)(0xff - (uint)*(byte *)((int)pfVar9 +
                                                                                     0x12)));
                *(undefined *)((int)pfVar9 + 0x12) = uStack_34;
                uStack_34 = (undefined)
                            (int)ROUND(255.0 - (float)(0xff - (uint)*(byte *)((int)pfVar9 + 0x11)) *
                                               fVar2);
                *(undefined *)((int)pfVar9 + 0x11) = uStack_34;
                uStack_34 = (undefined)
                            (int)ROUND(255.0 - (float)(0xff - (uint)*(byte *)(pfVar9 + 4)) * fVar2);
                *(undefined *)(pfVar9 + 4) = uStack_34;
                fVar3 = fVar2 * 32.0;
                D3DXVec3Normalize(&fStack_28,&fStack_28,piVar15,piVar6,in_FPUControlWord);
                fStack_28 = fVar3 * fStack_28;
                fStack_24 = fVar3 * fStack_24;
                fStack_20 = fVar3 * fStack_20;
                fVar12 = (float10)FUN_004938c0(extraout_ECX_03);
                fStack_28 = (float)fVar12 * fVar2 * 8.0 + fStack_28;
                fVar12 = (float10)FUN_004938c0(extraout_ECX_04);
                fStack_24 = (float)fVar12 * fVar2 * 8.0 + fStack_24;
                *pfVar9 = *pfVar9 + fStack_28;
                pfVar9[1] = pfVar9[1] + fStack_24;
                pfVar9[2] = 0.0;
                pfVar16[2] = 0.0;
              }
              fVar12 = FUN_004646e0(fStack_48 + 1.5707964);
              fStack_48 = (float)fVar12;
              fVar12 = FUN_004646e0(fStack_44 - 0.69813174);
              fStack_44 = (float)fVar12;
              pfVar16 = pfVar16 + 3;
              iVar10 = iVar10 + 1;
              pfVar9 = pfVar9 + 7;
            } while (iVar10 < *(int *)(unaff_EBX[0xd77] + 4));
          }
          iStack_38 = iStack_38 + 1;
        } while (iStack_38 < *(int *)unaff_EBX[0xd77]);
      }
      fVar12 = FUN_004646e0((float)unaff_EBX[0xd7b] + 0.049087387);
      unaff_EBX[0xd7b] = (int)(float)fVar12;
      iVar10 = FUN_00464440();
      fVar1 = (float)iVar10;
      if (iVar10 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      fVar1 = (fVar1 * 2.3283064e-10 * 3.1415927) / 40.0 + 0.03926991 + (float)unaff_EBX[0xd7c];
    }
    fVar12 = FUN_004646e0(fVar1);
    unaff_EBX[0xd7c] = (int)(float)fVar12;
  }
LAB_004036dd:
  unaff_EBX[0xd76] = unaff_EBX[0xd76] + 1;
  return 1;
}


