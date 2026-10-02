/* undefined4 __stdcall FUN_0041fcc0(int * param_1) @ 0041fcc0  4297 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_0041fcc0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  void *this;
  void *this_00;
  undefined4 extraout_ECX;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  void *this_08;
  undefined4 extraout_ECX_00;
  void *this_09;
  void *this_10;
  void *this_11;
  void *this_12;
  void *this_13;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  void *this_14;
  void *this_15;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  void *this_16;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  void *extraout_ECX_20;
  undefined4 extraout_ECX_21;
  void *extraout_ECX_22;
  ushort *puVar10;
  ushort *extraout_EDX;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 extraout_ST0_07;
  ulonglong uVar11;
  COLORREF CVar12;
  COLORREF CVar13;
  undefined4 uVar14;
  char *pcVar15;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [5];
  undefined4 local_4;
  
  piVar6 = param_1;
  if (0 < param_1[0x23]) {
    param_1[0x23] = param_1[0x23] + -1;
  }
  if (((*(byte *)(param_1 + 0x24) & 1) != 0) && ((DAT_004d49d0 & 0x200) != 0)) {
    uVar9 = (uint)*(ushort *)param_1[0x19];
    if ((param_1[10] & 1U) == 0) {
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[6] = -999999;
      param_1[9] = (int)&DAT_004b2ed0;
      param_1[10] = param_1[10] | 1;
    }
    param_1[7] = uVar9;
    param_1[6] = uVar9 - 1;
    param_1[8] = (int)(float)uVar9;
  }
  puVar10 = (ushort *)(uint)*(ushort *)param_1[0x19];
  if ((int)puVar10 <= param_1[7]) {
    do {
      iVar2 = DAT_004ce8cc;
      iVar8 = piVar6[0x19];
      this = (void *)(uint)*(byte *)(iVar8 + 2);
      switch(this) {
      case (void *)0x0:
        if (DAT_004b0cb8 != 0) {
          DAT_004b0cc0 = 0;
        }
        DAT_004b0cb8 = 0;
        return 0xffffffff;
      case (void *)0x1:
        FUN_004615a0((void *)0x0,*(void **)(DAT_004b4514 + 0x10),&local_44,
                     *(int *)(&DAT_004b2f84 + DAT_004b0c90 * 4),0);
        piVar6[0x10] = local_44;
        break;
      case (void *)0x2:
        if (DAT_004b0cb0 == 5) {
          if (*piVar6 < 2) {
LAB_004201e5:
            FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&local_38,
                         *(int *)(&DAT_004b2f90 + DAT_004b0cb0 * 4),0);
            piVar6[0x11] = local_38;
          }
          else {
            FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x4c),&local_40,10,0);
            piVar6[0x11] = local_40;
          }
        }
        else {
          if ((DAT_004b0cb0 != 7) || (*piVar6 < 2)) goto LAB_004201e5;
          FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x4c),&local_3c,0xd,0);
          piVar6[0x11] = local_3c;
        }
        break;
      case (void *)0x3:
        FUN_004615a0((void *)0x0,*(void **)(DAT_004b43e4 + 0x6d44),&local_48,0x34,0);
        piVar6[0x12] = local_48;
        break;
      case (void *)0x4:
        FUN_00461970((void *)piVar6[0x10],piVar6[0x10]);
        piVar6[0x10] = 0;
        break;
      case (void *)0x5:
        FUN_00461970(this,piVar6[0x11]);
        piVar6[0x11] = 0;
        FUN_00461970(this_09,piVar6[0x17]);
        break;
      case (void *)0x6:
        FUN_00461970((void *)piVar6[0x12],piVar6[0x12]);
        FUN_00461970(this_10,piVar6[0x13]);
        FUN_00461970(this_11,piVar6[0x14]);
        FUN_00461970((void *)piVar6[0x15],piVar6[0x15]);
        FUN_00461970(this_12,piVar6[0x16]);
        break;
      case (void *)0x7:
        FUN_00461970(this,piVar6[0x11]);
        FUN_00461970((void *)piVar6[0x10],piVar6[0x10]);
        FUN_00461970(this_13,piVar6[0x12]);
        piVar6[0x27] = 0;
        FUN_00461dd0(extraout_ECX_01);
        FUN_00461dd0(extraout_ECX_02);
        iVar2 = DAT_004ce8cc;
        iVar8 = piVar6[0x13];
        piVar7 = FUN_00461920(iVar8,DAT_004ce8cc,iVar8);
        if (piVar7 == (int *)0x0) {
          piVar6[0x13] = 0;
        }
        piVar7[0x110] = 0;
        piVar7 = FUN_00461920(extraout_ECX_03,iVar2,piVar6[0x14]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x14] = 0;
        }
        piVar7[0x110] = (int)(float)extraout_ST0;
        FUN_00461dd0(extraout_ECX_04);
        FUN_00461dd0(piVar6[0x27] * 3);
        piVar7 = FUN_00461920(extraout_ECX_05,DAT_004ce8cc,piVar6[0x15]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x15] = 0;
        }
        iVar8 = DAT_004ce8cc;
        piVar7[0x110] = (int)(float)extraout_ST0_00;
        piVar7 = FUN_00461920(extraout_ECX_06,iVar8,piVar6[0x16]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x16] = 0;
        }
        piVar7[0x110] = (int)(float)extraout_ST0_01;
        piVar6[0x24] = piVar6[0x24] & 0xfffffffd;
        piVar6[0x25] = 0;
        piVar6[0x26] = 0;
        break;
      case (void *)0x8:
        FUN_00461970((void *)piVar6[0x10],piVar6[0x10]);
        FUN_00461970(this_14,piVar6[0x11]);
        FUN_00461970(this_15,piVar6[0x12]);
        piVar6[0x27] = 1;
        FUN_00461dd0(extraout_ECX_07);
        FUN_00461dd0(piVar6[0x27] * 3);
        piVar7 = FUN_00461920(extraout_ECX_08,DAT_004ce8cc,piVar6[0x13]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x13] = 0;
        }
        iVar8 = DAT_004ce8cc;
        piVar7[0x110] = 0;
        piVar7 = FUN_00461920(extraout_ECX_09,iVar8,piVar6[0x14]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x14] = 0;
        }
        piVar7[0x110] = (int)(float)extraout_ST0_02;
        FUN_00461dd0(piVar6[0x27] * 3);
        FUN_00461dd0(extraout_ECX_10);
        piVar7 = FUN_00461920(extraout_ECX_11,DAT_004ce8cc,piVar6[0x15]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x15] = 0;
        }
        iVar2 = DAT_004ce8cc;
        piVar7[0x110] = (int)(float)extraout_ST0_03;
        iVar8 = piVar6[0x16];
        piVar7 = FUN_00461920(iVar8,iVar2,iVar8);
        if (piVar7 == (int *)0x0) {
          piVar6[0x16] = 0;
        }
        piVar7[0x110] = (int)(float)extraout_ST0_04;
        piVar6[0x24] = piVar6[0x24] & 0xfffffffd;
        piVar6[0x25] = 0;
        piVar6[0x26] = 0;
        break;
      case (void *)0x9:
        FUN_00461970(this,piVar6[0x11]);
        FUN_00461970(this_16,piVar6[0x10]);
        FUN_00461970((void *)piVar6[0x12],piVar6[0x12]);
        piVar6[0x27] = 2;
        FUN_00461dd0(extraout_ECX_12);
        FUN_00461dd0(extraout_ECX_13);
        iVar8 = DAT_004ce8cc;
        piVar7 = FUN_00461920(extraout_ECX_14,DAT_004ce8cc,piVar6[0x13]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x13] = 0;
        }
        piVar7[0x110] = 0;
        iVar2 = piVar6[0x14];
        piVar7 = FUN_00461920(iVar2,iVar8,iVar2);
        if (piVar7 == (int *)0x0) {
          piVar6[0x14] = 0;
        }
        piVar7[0x110] = (int)(float)extraout_ST0_05;
        FUN_00461dd0(extraout_ECX_15);
        FUN_00461dd0(extraout_ECX_16);
        iVar8 = piVar6[0x15];
        piVar7 = FUN_00461920(iVar8,DAT_004ce8cc,iVar8);
        if (piVar7 == (int *)0x0) {
          piVar6[0x15] = 0;
        }
        piVar7[0x110] = (int)(float)extraout_ST0_06;
        piVar7 = FUN_00461920(extraout_ECX_17,DAT_004ce8cc,piVar6[0x16]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x16] = 0;
        }
        piVar7[0x110] = (int)(float)extraout_ST0_07;
        piVar6[0x24] = piVar6[0x24] | 2;
        piVar6[0x25] = 0;
        piVar6[0x26] = 0;
        break;
      case (void *)0xa:
        piVar6[0x24] = piVar6[0x24] ^ ((int)*(char *)(iVar8 + 4) ^ piVar6[0x24]) & 1U;
        break;
      case (void *)0xb:
        if (piVar6[0xc] < 1) {
          FUN_004067e0(*(int *)(iVar8 + 4));
          this = extraout_ECX_20;
          puVar10 = extraout_EDX;
        }
        FUN_00464a20(this,puVar10,-1.0);
        if (((_DAT_004d49dc & 0x80001) == 0) && (0 < piVar6[0xc])) {
          if ((*(byte *)(piVar6 + 0x24) & 1) == 0) {
            return 0;
          }
          if ((DAT_004d49d0 & 0x200) == 0) {
            return 0;
          }
          FUN_004067e0(0);
          piVar6[0x25] = 0;
          piVar6[0x26] = 0;
        }
        else {
          FUN_00453d90(extraout_ECX_21,0);
          FUN_004067e0(0);
          piVar6[0x25] = 0;
          piVar6[0x26] = 0;
        }
        break;
      case (void *)0xc:
        piVar6[0x23] = 1;
        break;
      case (void *)0xd:
        param_1 = (int *)0x0;
        do {
          local_34 = *(int *)(&DAT_004b2fd4 + ((int)param_1 + DAT_004b0c90 * 3) * 4) +
                     *(int *)(piVar6[0x19] + 4);
          piVar7 = (int *)FUN_00462060(local_34);
          piVar7 = FUN_00461920(extraout_ECX_18,DAT_004ce8cc,*piVar7);
          if (piVar7 != (int *)0x0) {
            FUN_00454b80(local_34,piVar7[0xfe]);
          }
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < 3);
        break;
      case (void *)0xe:
        if (DAT_004b0cb0 == 5) {
          if (*piVar6 < 2) {
LAB_0042078a:
            param_1 = (int *)0x0;
            iVar8 = DAT_004b0cb0;
            do {
              if (-1 < *(int *)(&DAT_004b3070 + ((int)param_1 + iVar8 * 3) * 4)) {
                local_34 = *(int *)(piVar6[0x19] + 4) +
                           *(int *)(&DAT_004b3070 + ((int)param_1 + iVar8 * 3) * 4);
                piVar7 = (int *)FUN_00462060(local_34);
                piVar7 = FUN_00461920(extraout_ECX_19,DAT_004ce8cc,*piVar7);
                iVar8 = DAT_004b0cb0;
                if (piVar7 != (int *)0x0) {
                  FUN_00454b80(local_34,piVar7[0xfe]);
                  iVar8 = DAT_004b0cb0;
                }
              }
              param_1 = (int *)((int)param_1 + 1);
            } while ((int)param_1 < 3);
          }
          else {
            param_1 = (int *)0x0;
            do {
              if (-1 < param_1[0x12cc34]) {
                iVar8 = *(int *)(piVar6[0x19] + 4) + param_1[0x12cc34];
                FUN_00462060(param_1);
                FUN_00461ea0(iVar8);
              }
              param_1 = param_1 + 1;
            } while ((int)param_1 < 0xc);
          }
        }
        else {
          if ((DAT_004b0cb0 != 7) || (*piVar6 < 2)) goto LAB_0042078a;
          param_1 = (int *)0x0;
          do {
            if (-1 < param_1[0x12cc37]) {
              iVar8 = *(int *)(piVar6[0x19] + 4) + param_1[0x12cc37];
              FUN_00462060(param_1);
              FUN_00461ea0(iVar8);
            }
            param_1 = param_1 + 1;
          } while ((int)param_1 < 0xc);
        }
        break;
      case (void *)0xf:
        piVar7 = FUN_00461920(this,DAT_004ce8cc,piVar6[0x13]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x13] = 0;
        }
        pcVar15 = FUN_00420e40();
        FUN_00460760(piVar6[piVar6[0x27] + 0x28],0,0,0,pcVar15);
        FUN_00461970(this_00,piVar6[0x13]);
        break;
      case (void *)0x10:
        piVar7 = FUN_00461920(piVar6[0x14],DAT_004ce8cc,piVar6[0x14]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x14] = 0;
        }
        pcVar15 = FUN_00420e40();
        FUN_00460760(piVar6[piVar6[0x27] + 0x28],0,0,0,pcVar15);
        FUN_00461970((void *)piVar6[0x14],piVar6[0x14]);
        break;
      case (void *)0x11:
        if (piVar6[0x25] == 0) {
          if (piVar6[0x26] == 0) {
            CVar12 = piVar6[piVar6[0x27] + 0x28];
            pcVar15 = " ";
            uVar9 = 0;
            uVar14 = 0;
            CVar13 = 0;
            FUN_00461c50(this);
            FUN_00460760(CVar12,CVar13,uVar14,uVar9,pcVar15);
            CVar12 = piVar6[piVar6[0x27] + 0x28];
            pcVar15 = " ";
            uVar9 = 0;
            uVar14 = 0;
            CVar13 = 0;
            FUN_00461c50(piVar6[0x27]);
            FUN_00460760(CVar12,CVar13,uVar14,uVar9,pcVar15);
            CVar12 = piVar6[piVar6[0x27] + 0x28];
            pcVar15 = " ";
            uVar9 = 1;
            uVar14 = 0;
            CVar13 = 0;
            FUN_00461c50(CVar12);
            FUN_00460760(CVar12,CVar13,uVar14,uVar9,pcVar15);
            CVar12 = piVar6[piVar6[0x27] + 0x28];
            pcVar15 = " ";
            uVar9 = 1;
            uVar14 = 0;
            CVar13 = 0;
            FUN_00461c50(extraout_ECX);
            FUN_00460760(CVar12,CVar13,uVar14,uVar9,pcVar15);
            piVar6[0x26] = 1;
            FUN_00461970((void *)piVar6[0x13],piVar6[0x13]);
            FUN_00461970(this_01,piVar6[0x14]);
            FUN_00461970(this_02,piVar6[0x15]);
            FUN_00461970((void *)piVar6[0x16],piVar6[0x16]);
          }
          pcVar15 = FUN_00420e40();
          if (*pcVar15 == '|') {
            uVar14 = FUN_0046d143(pcVar15 + 1);
            pcVar15 = _strchr(pcVar15 + 1,0x2c);
            uVar9 = FUN_0046d143(pcVar15 + 1);
            pcVar15 = _strchr(pcVar15 + 1,0x2c);
            pcVar15 = pcVar15 + 1;
            CVar12 = piVar6[piVar6[0x27] + 0x28];
            CVar13 = 0;
            FUN_00461c50(CVar12);
            FUN_00460760(CVar12,CVar13,uVar14,uVar9,pcVar15);
            FUN_00461970(this_03,piVar6[0x15]);
          }
          else {
            CVar12 = piVar6[piVar6[0x27] + 0x28];
            uVar9 = 0;
            uVar14 = 0;
            CVar13 = 0;
            FUN_00461c50(CVar12);
            FUN_00460760(CVar12,CVar13,uVar14,uVar9,pcVar15);
            FUN_00461970(this_04,piVar6[0x13]);
            piVar6[0x25] = piVar6[0x25] + 1;
          }
        }
        else {
          pcVar15 = FUN_00420e40();
          if (*pcVar15 == '|') {
            uVar14 = FUN_0046d143(pcVar15 + 1);
            pcVar15 = _strchr(pcVar15 + 1,0x2c);
            uVar9 = FUN_0046d143(pcVar15 + 1);
            pcVar15 = _strchr(pcVar15 + 1,0x2c);
            CVar12 = piVar6[piVar6[0x27] + 0x28];
            pcVar15 = pcVar15 + 1;
            CVar13 = 0;
            FUN_00461c50(piVar6[0x27]);
            FUN_00460760(CVar12,CVar13,uVar14,uVar9,pcVar15);
            FUN_00461970(this_05,piVar6[0x16]);
          }
          else {
            CVar12 = piVar6[piVar6[0x27] + 0x28];
            uVar9 = 0;
            uVar14 = 0;
            CVar13 = 0;
            FUN_00461c50(piVar6[0x27]);
            FUN_00460760(CVar12,CVar13,uVar14,uVar9,pcVar15);
            FUN_00461970(this_06,piVar6[0x14]);
            piVar6[0x25] = 0;
            piVar6[0x26] = 0;
          }
        }
        break;
      case (void *)0x12:
        FUN_00461970((void *)piVar6[0x13],piVar6[0x13]);
        FUN_00461970(this_07,piVar6[0x14]);
        FUN_00461970(this_08,piVar6[0x15]);
        FUN_00461970((void *)piVar6[0x16],piVar6[0x16]);
        break;
      case (void *)0x13:
        FUN_00430150(1,*(int *)(DAT_004b452c + 0x38));
        FUN_004615a0((void *)0x0,*(void **)(DAT_004b43e4 + 0x6ce4),&local_4,2,0);
        break;
      case (void *)0x14:
        switch(DAT_004b0cb0) {
        case 1:
          FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&local_30,0x11,0);
          piVar6[0x17] = local_30;
          break;
        case 2:
          FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&local_2c,0x15,0);
          piVar6[0x17] = local_2c;
          break;
        case 3:
          FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&local_28,0xe,0);
          piVar6[0x17] = local_28;
          break;
        case 4:
          FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&local_24,0x17,0);
          piVar6[0x17] = local_24;
          break;
        case 5:
          FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&local_20,0xe,0);
          piVar6[0x17] = local_20;
          break;
        case 6:
          FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&local_1c,0x10,0);
          piVar6[0x17] = local_1c;
          break;
        case 7:
          FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),local_18,0x10,0);
          piVar6[0x17] = local_18[0];
        }
        break;
      case (void *)0x15:
        FUN_00421350();
        FUN_0041d020(extraout_ECX_22);
        FUN_00406ed0();
        iVar2 = DAT_004b451c;
        iVar8 = DAT_004b44e8;
        if ((*(int *)(DAT_004b44e8 + 0x74) == 0) && (DAT_004b0ca8 != 4)) {
          *(undefined *)
           ((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + DAT_004b451c + 0x5a9 +
           (DAT_004b0cb0 + DAT_004b0ca8 * 6) * 8) = 1;
          *(undefined *)
           ((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + iVar2 + 0x5a8 +
           (DAT_004b0cb0 + DAT_004b0ca8 * 6) * 8) = 1;
        }
        iVar5 = DAT_004b4518;
        iVar4 = DAT_004b43e4;
        if (((byte)DAT_004b0ce0 & 0x10) == 0) {
          if ((*(int *)(iVar8 + 0x74) == 0) ||
             ((*(byte *)(*(int *)(DAT_004b4518 + 0x1c) + 10) & 1) == 0)) {
            if (DAT_004b0cb0 == 6) {
              *(uint *)(DAT_004b43e4 + 0x6d18) = *(uint *)(DAT_004b43e4 + 0x6d18) | 0x20;
              iVar8 = FUN_00421880();
              iVar8 = iVar8 * 100;
              switch(DAT_004b0ca8) {
              case 0:
                iVar8 = iVar8 + ((_DAT_004b0ca0 + _DAT_004b0c98 * 2) * 0x19 + DAT_004b0c48) * 10000;
                break;
              case 1:
                iVar8 = iVar8 + ((_DAT_004b0ca0 + _DAT_004b0c98 * 2) * 0x32 + DAT_004b0c48) * 10000;
                break;
              case 2:
                iVar8 = iVar8 + ((_DAT_004b0ca0 + _DAT_004b0c98 * 2) * 100 + DAT_004b0c48) * 10000;
                break;
              case 3:
                iVar8 = iVar8 + ((_DAT_004b0ca0 + _DAT_004b0c98 * 2) * 0x96 + DAT_004b0c48) * 10000;
                break;
              case 4:
                iVar8 = iVar8 + (_DAT_004b0c98 * 100 + DAT_004b0c48) * 400000;
              }
              FUN_0040e730(&DAT_004b0c40,iVar8);
              iVar4 = DAT_004b43e4;
              *(int *)(DAT_004b43e4 + 0x6d48) = *(int *)(DAT_004b43e4 + 0x6d48) + iVar8;
              if (*(int *)(iVar5 + 0x10) == 1) goto LAB_00420ac3;
              puVar1 = (uint *)(iVar4 + 0x6d18);
              *puVar1 = *puVar1 | 0x10;
              *(undefined4 *)(iVar4 + 0x6d4c) = 0;
              iVar8 = (DAT_004b0c94 + DAT_004b0c90 * 2) * 0x117d + DAT_004b0ca8;
              piVar7 = (int *)(iVar2 + 0x598 + iVar8 * 4);
              if (*(int *)(iVar2 + 0x598 + iVar8 * 4) < 99999) {
                *piVar7 = *piVar7 + 1;
              }
            }
            else if (DAT_004b0cb0 == 7) {
              *(uint *)(DAT_004b43e4 + 0x6d18) = *(uint *)(DAT_004b43e4 + 0x6d18) | 0x20;
              iVar8 = FUN_00421880();
              iVar8 = (iVar8 + ((_DAT_004b0ca0 + _DAT_004b0c98 * 2) * 0x96 + DAT_004b0c48) * 100) *
                      100;
              FUN_0040e730(&DAT_004b0c40,iVar8);
              *(int *)(iVar4 + 0x6d48) = *(int *)(iVar4 + 0x6d48) + iVar8;
              if (*(int *)(iVar5 + 0x10) == 1) goto LAB_00420ac3;
              FUN_00433870();
              iVar8 = (DAT_004b0c94 + DAT_004b0c90 * 2) * 0x117d + DAT_004b0ca8;
              piVar7 = (int *)(DAT_004b451c + 0x598 + iVar8 * 4);
              if (*(int *)(DAT_004b451c + 0x598 + iVar8 * 4) < 99999) {
                *piVar7 = *piVar7 + 1;
              }
            }
            else {
              FUN_0040f720(0xc);
              FUN_004217e0();
            }
          }
          else {
LAB_00420ac3:
            FUN_00432850();
          }
        }
        else {
          FUN_00433870();
        }
        break;
      case (void *)0x16:
        if (DAT_004b0cb0 == 6) {
          uVar14 = 0x41000000;
        }
        else {
          uVar14 = 0x40000000;
        }
        goto LAB_00420ce5;
      case (void *)0x17:
        FUN_00461970(this,piVar6[0x10]);
        break;
      case (void *)0x18:
        FUN_00461970(this,piVar6[0x11]);
        break;
      case (void *)0x19:
        piVar7 = FUN_00461920(piVar6[0x13],DAT_004ce8cc,piVar6[0x13]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x13] = 0;
        }
        piVar7[0x110] = (int)(float)*(int *)(piVar6[0x19] + 4);
        piVar7 = FUN_00461920(extraout_ECX_00,iVar2,piVar6[0x14]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x14] = 0;
        }
        iVar8 = piVar6[0x19];
        piVar7[0x110] = (int)(float)*(int *)(iVar8 + 4);
        piVar7 = FUN_00461920(iVar8,iVar2,piVar6[0x15]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x15] = 0;
        }
        iVar8 = piVar6[0x19];
        piVar7[0x110] = (int)(float)*(int *)(iVar8 + 4);
        piVar7 = FUN_00461920(iVar8,iVar2,piVar6[0x16]);
        if (piVar7 == (int *)0x0) {
          piVar6[0x16] = 0;
        }
        piVar7[0x110] = (int)(float)*(int *)(piVar6[0x19] + 4);
        break;
      case (void *)0x1a:
        piVar6[0x24] = piVar6[0x24] | 2;
        break;
      case (void *)0x1b:
        uVar14 = *(undefined4 *)(iVar8 + 4);
LAB_00420ce5:
        FUN_00430270(this,puVar10,uVar14);
      }
      puVar10 = (ushort *)(*(byte *)(piVar6[0x19] + 3) + 4 + piVar6[0x19]);
      piVar6[0x19] = (int)puVar10;
    } while ((int)(uint)*puVar10 <= piVar6[7]);
  }
  iVar8 = piVar6[7];
  pfVar3 = (float *)piVar6[9];
  piVar6[6] = iVar8;
  if ((0.99 < *pfVar3) && (*pfVar3 < 1.01)) {
    piVar6[7] = iVar8 + 1;
    piVar6[8] = (int)((float)piVar6[8] + 1.0);
    return 0;
  }
  piVar6[8] = (int)(*pfVar3 + (float)piVar6[8]);
  uVar11 = FUN_004931e0(pfVar3,iVar8);
  piVar6[7] = (int)uVar11;
  return 0;
}


