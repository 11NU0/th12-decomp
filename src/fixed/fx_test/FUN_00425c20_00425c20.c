/* undefined4 __fastcall FUN_00425c20(undefined4 param_1, short * param_2, int param_3) @ 00425c20  4955 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00425c20(undefined4 param_1,short *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar4;
  void *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  void *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  void *this;
  void *extraout_ECX_04;
  void *this_00;
  void *extraout_ECX_05;
  void *this_01;
  void *extraout_ECX_06;
  void *pvVar5;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  short *extraout_ECX_10;
  undefined4 extraout_ECX_11;
  short *extraout_ECX_12;
  short *psVar6;
  short *extraout_ECX_13;
  undefined4 extraout_ECX_14;
  short *extraout_ECX_15;
  undefined4 extraout_ECX_16;
  short *extraout_ECX_17;
  undefined4 extraout_ECX_18;
  short *extraout_ECX_19;
  short *extraout_ECX_20;
  short *extraout_ECX_21;
  short *extraout_ECX_22;
  short *extraout_ECX_23;
  short *extraout_ECX_24;
  short *extraout_ECX_25;
  short *extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  short *extraout_ECX_29;
  void *this_02;
  short *extraout_ECX_30;
  short *extraout_ECX_31;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *extraout_EDX_01;
  short *extraout_EDX_02;
  short *extraout_EDX_03;
  short *extraout_EDX_04;
  short *extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  int iVar7;
  undefined4 extraout_EDX_08;
  short *extraout_EDX_09;
  short *extraout_EDX_10;
  short *extraout_EDX_11;
  short *extraout_EDX_12;
  short *extraout_EDX_13;
  short *extraout_EDX_14;
  short *extraout_EDX_15;
  short *extraout_EDX_16;
  short *extraout_EDX_17;
  short *extraout_EDX_18;
  undefined4 extraout_EDX_19;
  short *extraout_EDX_20;
  undefined4 extraout_EDX_21;
  short *extraout_EDX_22;
  undefined4 extraout_EDX_23;
  short *extraout_EDX_24;
  short *extraout_EDX_25;
  undefined4 extraout_EDX_26;
  short *extraout_EDX_27;
  undefined4 extraout_EDX_28;
  short *extraout_EDX_29;
  uint uVar8;
  short *extraout_EDX_30;
  short *extraout_EDX_31;
  short *extraout_EDX_32;
  short *extraout_EDX_33;
  short *extraout_EDX_34;
  short *extraout_EDX_35;
  short *extraout_EDX_36;
  short *extraout_EDX_37;
  undefined4 extraout_EDX_38;
  undefined4 extraout_EDX_39;
  undefined4 extraout_EDX_40;
  undefined4 uVar9;
  short *extraout_EDX_41;
  short *extraout_EDX_42;
  void *pvVar10;
  bool bVar11;
  float10 fVar12;
  ulonglong uVar13;
  float fVar14;
  undefined4 uVar15;
  int local_90;
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  
  pvVar10 = (void *)(param_3 + 0x14);
  *(undefined4 *)(param_3 + 0x666fdc) = 0;
  *(undefined4 *)(param_3 + 0x666fd4) = 0;
  local_90 = 0;
  do {
    iVar3 = *(int *)((int)pvVar10 + 0x9b0);
    if (iVar3 == 0) goto LAB_00426f53;
    if (iVar3 == 5) {
      piVar4 = (int *)((int)pvVar10 + 0x9c0);
      *piVar4 = *piVar4 + -1;
      iVar3 = DAT_004b43c8;
      if (*piVar4 < 0) {
        iVar7 = *(int *)((int)pvVar10 + 0x9b4);
        *(undefined4 *)((int)pvVar10 + 0x9b0) = 2;
        pvVar5 = *(void **)(&DAT_004debdc + iVar3);
        FUN_00402520();
        *(undefined *)((int)pvVar10 + 0x49d) = 0x10;
        *(undefined *)((int)pvVar10 + 0x49c) = 0x10;
        FUN_00454d10(pvVar5,pvVar10,iVar7 + 0xa5);
        param_2 = extraout_EDX;
      }
      goto LAB_00426f53;
    }
    if (iVar3 == 1) {
      param_2 = DAT_004b4534;
      if ((*(int *)(DAT_004b4534 + 0x16) != 0) &&
         (iVar3 = FUN_004271c0(), param_2 = extraout_EDX_00, iVar3 != 0)) goto LAB_00426879;
      if ((((*(int *)(DAT_004b4514 + 0x514) != 2) && (*(int *)(DAT_004b4514 + 0x514) != 4)) &&
          (((0x27 < *(int *)((int)pvVar10 + 0x98c) || (*(float *)(DAT_004b4514 + 0x4c0) < 128.0)) &&
           (*(float *)(DAT_004b4514 + 0x4c0) < 128.0)))) ||
         (*(int *)((int)DAT_004b43e4 + 0x6d30) != 0)) {
        uVar15 = *(undefined4 *)(*(int *)(DAT_004b4514 + 0x516) + 8);
        goto LAB_00425eab;
      }
      fVar14 = *(float *)((int)pvVar10 + 0x97c) * DAT_004b2ed0;
      fVar2 = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x980);
      *(float *)((int)pvVar10 + 0x96c) =
           *(float *)((int)pvVar10 + 0x96c) + DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x978);
      *(float *)((int)pvVar10 + 0x970) = fVar14 + *(float *)((int)pvVar10 + 0x970);
      *(float *)((int)pvVar10 + 0x974) = fVar2 + *(float *)((int)pvVar10 + 0x974);
      fVar14 = DAT_004b2ed0 * 0.03 + *(float *)((int)pvVar10 + 0x97c);
      *(float *)((int)pvVar10 + 0x97c) = fVar14;
      if (0.0 < fVar14 != (fVar14 == 0.0)) {
        *(undefined4 *)((int)pvVar10 + 0x978) = 0;
      }
      if (2.0 < *(float *)((int)pvVar10 + 0x97c) != NAN(*(float *)((int)pvVar10 + 0x97c))) {
        *(undefined4 *)((int)pvVar10 + 0x97c) = 0x40000000;
      }
      if (*(float *)((int)pvVar10 + 0x970) <= 472.0) goto switchD_004265bc_caseD_6;
      *(undefined4 *)((int)pvVar10 + 0x9b0) = 0;
      goto LAB_00426f53;
    }
    if (iVar3 == 2) {
      fVar14 = *(float *)((int)pvVar10 + 0x97c) * DAT_004b2ed0;
      fVar2 = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x980);
      *(float *)((int)pvVar10 + 0x96c) =
           DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x978) + *(float *)((int)pvVar10 + 0x96c);
      *(float *)((int)pvVar10 + 0x970) = fVar14 + *(float *)((int)pvVar10 + 0x970);
      *(float *)((int)pvVar10 + 0x974) = *(float *)((int)pvVar10 + 0x974) + fVar2;
      fVar14 = DAT_004b2ed0 * 0.03 + *(float *)((int)pvVar10 + 0x97c);
      *(float *)((int)pvVar10 + 0x97c) = fVar14;
      if (0.0 < fVar14 != (fVar14 == 0.0)) {
        uVar15 = *(undefined4 *)(*(int *)(DAT_004b4514 + 0x516) + 8);
LAB_00425eab:
        *(undefined4 *)((int)pvVar10 + 0x9bc) = uVar15;
        *(undefined4 *)((int)pvVar10 + 0x9b0) = 3;
        goto LAB_00425f24;
      }
      if (*(float *)((int)pvVar10 + 0x970) <= 472.0) goto switchD_004265bc_caseD_6;
      *(undefined4 *)((int)pvVar10 + 0x9b0) = 0;
      DAT_004b0ccc = DAT_004b0ccc + -4;
      if (DAT_004b0ccc < 0x401) {
        if (DAT_004b0ccc < -0x400) {
          DAT_004b0ccc = -0x400;
        }
      }
      else {
        DAT_004b0ccc = 0x400;
      }
      goto LAB_00426f53;
    }
    if (iVar3 == 3) {
LAB_00425f24:
      if ((*(int *)(DAT_004b4534 + 0x16) != 0) &&
         (iVar3 = FUN_004271c0(), param_2 = extraout_EDX_01, iVar3 != 0)) goto LAB_00426879;
      fVar14 = *(float *)((int)pvVar10 + 0x9bc);
      pfVar1 = (float *)((int)pvVar10 + 0x96c);
      fVar12 = FUN_004377a0(pfVar1);
      FUN_00427d00((float *)((int)pvVar10 + 0x978),(float)fVar12,fVar14);
      fVar14 = *(float *)((int)pvVar10 + 0x97c) * DAT_004b2ed0;
      fVar2 = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x980);
      *pfVar1 = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x978) + *pfVar1;
      *(float *)((int)pvVar10 + 0x970) = *(float *)((int)pvVar10 + 0x970) + fVar14;
      *(float *)((int)pvVar10 + 0x974) = fVar2 + *(float *)((int)pvVar10 + 0x974);
      param_2 = DAT_004b4514;
      if (12.0 <= *(float *)((int)pvVar10 + 0x9bc)) goto LAB_00426224;
      *(float *)((int)pvVar10 + 0x9bc) = *(float *)((int)pvVar10 + 0x9bc) + 0.2;
      bVar11 = *(int *)(param_2 + 0x514) == 4;
LAB_00426099:
      if (bVar11) {
        *(undefined4 *)((int)pvVar10 + 0x978) = 0;
LAB_0042609f:
        *(undefined4 *)((int)pvVar10 + 0x97c) = 0;
        *(undefined4 *)((int)pvVar10 + 0x9b0) = 1;
      }
    }
    else {
      if (iVar3 == 4) {
        if ((*(int *)(DAT_004b4534 + 0x16) != 0) &&
           (iVar3 = FUN_004271c0(), param_2 = extraout_EDX_02, iVar3 != 0)) goto LAB_00426879;
        fVar14 = *(float *)((int)pvVar10 + 0x9bc);
        pfVar1 = (float *)((int)pvVar10 + 0x96c);
        fVar12 = FUN_004377a0(pfVar1);
        FUN_00427d00((float *)((int)pvVar10 + 0x978),(float)fVar12,fVar14);
        local_64 = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x978);
        local_60 = *(float *)((int)pvVar10 + 0x97c) * DAT_004b2ed0;
        local_5c = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x980);
        *pfVar1 = local_64 + *pfVar1;
        *(float *)((int)pvVar10 + 0x970) = *(float *)((int)pvVar10 + 0x970) + local_60;
        *(float *)((int)pvVar10 + 0x974) = *(float *)((int)pvVar10 + 0x974) + local_5c;
        if (*(float *)((int)pvVar10 + 0x9bc) < 12.0) {
          *(float *)((int)pvVar10 + 0x9bc) = *(float *)((int)pvVar10 + 0x9bc) + 0.2;
        }
        bVar11 = *(int *)(DAT_004b4514 + 0x514) == 4;
        param_2 = extraout_EDX_03;
        goto LAB_00426099;
      }
      if (iVar3 == 8) {
        fVar14 = *(float *)((int)pvVar10 + 0x984);
        pfVar1 = (float *)((int)pvVar10 + 0x96c);
        fVar12 = FUN_004377a0(pfVar1);
        FUN_00427d00((float *)((int)pvVar10 + 0x978),(float)fVar12,fVar14);
        local_54 = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x978);
        local_50 = *(float *)((int)pvVar10 + 0x97c) * DAT_004b2ed0;
        local_4c = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x980);
        *pfVar1 = local_54 + *pfVar1;
        *(float *)((int)pvVar10 + 0x970) = local_50 + *(float *)((int)pvVar10 + 0x970);
        *(float *)((int)pvVar10 + 0x974) = local_4c + *(float *)((int)pvVar10 + 0x974);
        if ((0x3b < *(int *)((int)pvVar10 + 0x98c)) && (*(float *)((int)pvVar10 + 0x984) < 12.0)) {
          *(float *)((int)pvVar10 + 0x984) = *(float *)((int)pvVar10 + 0x984) + 0.2;
        }
LAB_00426224:
        bVar11 = *(int *)(DAT_004b4514 + 0x514) == 4;
        param_2 = DAT_004b4514;
        goto LAB_00426099;
      }
      if (iVar3 != 6) {
        if (iVar3 != 7) goto switchD_004265bc_caseD_6;
LAB_00426879:
        if (*(int *)(DAT_004b4534 + 0x16) != 0) {
          fVar14 = *(float *)((int)pvVar10 + 0x9bc);
          pfVar1 = (float *)((int)pvVar10 + 0x96c);
          fVar12 = FUN_0044ac00();
          FUN_00427d00((float *)((int)pvVar10 + 0x978),(float)fVar12,fVar14);
          local_34 = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x978);
          local_30 = *(float *)((int)pvVar10 + 0x97c) * DAT_004b2ed0;
          local_2c = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x980);
          *pfVar1 = *pfVar1 + local_34;
          *(float *)((int)pvVar10 + 0x970) = *(float *)((int)pvVar10 + 0x970) + local_30;
          *(float *)((int)pvVar10 + 0x974) = *(float *)((int)pvVar10 + 0x974) + local_2c;
          psVar6 = DAT_004b4534;
          param_2 = extraout_EDX_18;
          if (*(float *)((int)pvVar10 + 0x9bc) < 6.0) {
            *(float *)((int)pvVar10 + 0x9bc) =
                 ((float)*(int *)(DAT_004b4534 + 10) / 600.0) * 0.05 + 0.02 +
                 *(float *)((int)pvVar10 + 0x9bc);
            param_2 = psVar6;
          }
          fVar14 = *(float *)(*(int *)(DAT_004b4534 + 0x1a) + 0x1078) -
                   *(float *)((int)pvVar10 + 0x970);
          fVar2 = *(float *)(*(int *)(DAT_004b4534 + 0x1a) + 0x1074) - *pfVar1;
          fVar14 = fVar2 * fVar2 + fVar14 * fVar14;
          if (fVar14 < 324.0 != NAN(fVar14)) {
            *(undefined4 *)((int)pvVar10 + 0x9b0) = 0;
            FUN_00453e20(extraout_ECX_07,param_2,*pfVar1);
            FUN_0044aca0(extraout_ECX_08,extraout_EDX_19);
            param_2 = extraout_EDX_20;
            goto LAB_00426f53;
          }
          goto switchD_004265bc_caseD_6;
        }
        *(undefined4 *)((int)pvVar10 + 0x978) = 0;
        goto LAB_0042609f;
      }
      if ((*(int *)(DAT_004b4534 + 0x16) != 0) &&
         (iVar3 = FUN_004271c0(), param_2 = extraout_EDX_04, iVar3 != 0)) goto LAB_00426879;
      pvVar5 = DAT_004b43e4;
      if (*(int *)((int)DAT_004b43e4 + 0x6d30) != 0) {
        FUN_004067e0(10000);
        pvVar5 = extraout_ECX;
        param_2 = extraout_EDX_05;
      }
      iVar3 = *(int *)((int)pvVar10 + 0x9b4);
      if (((iVar3 == 0xd) || (iVar3 == 0xe)) || (iVar3 == 0xf)) {
        fVar14 = *(float *)((int)pvVar10 + 0x970) - *(float *)(DAT_004b4514 + 0x4c0);
        fVar2 = *(float *)((int)pvVar10 + 0x96c) - *(float *)(DAT_004b4514 + 0x4be);
        fVar14 = fVar2 * fVar2 + fVar14 * fVar14;
        if (fVar14 < 3600.0 == (fVar14 == 3600.0)) {
          if (*(int *)((int)pvVar10 + 0x9c4) != 0) {
            if (*(int *)((int)pvVar10 + 0x9a0) < 0x5a) {
              FUN_004219e0();
            }
            else {
              FUN_0040d5d0();
            }
            *(undefined4 *)((int)pvVar10 + 0x9c4) = 0;
          }
        }
        else {
          FUN_00464a20(pvVar5,param_2,-1.0);
          FUN_00464a20(extraout_ECX_00,extraout_EDX_06,-1.0);
          if (*(int *)((int)pvVar10 + 0x9a0) == 0x5a) {
            FUN_00464a20(extraout_ECX_01,extraout_EDX_07,-1.0);
          }
          if (*(int *)((int)pvVar10 + 0x9c4) == 0) {
            FUN_00421a10();
            *(undefined4 *)((int)pvVar10 + 0x9c4) = 1;
          }
        }
        if (*(int *)((int)pvVar10 + 0x9a0) == 0x5a) {
          FUN_0040d5d0();
        }
        else if (0x95 < *(int *)((int)pvVar10 + 0x9a0)) {
          FUN_004067e0(0);
          iVar3 = DAT_004b43c8;
          iVar7 = (*(int *)((int)pvVar10 + 0x9b4) + -0xc) % 3;
          *(int *)((int)pvVar10 + 0x9b4) = iVar7 + 0xd;
          FUN_004061e0(*(void **)(&DAT_004debdc + iVar3),iVar7 + 0xb2);
          FUN_00453e20(extraout_ECX_03,extraout_EDX_08,*(undefined4 *)((int)pvVar10 + 0x96c));
          FUN_00461a70(*(void **)((int)pvVar10 + 0x968),(int)*(void **)((int)pvVar10 + 0x968));
          *(undefined4 *)((int)pvVar10 + 0x968) = 0;
        }
        uVar13 = FUN_00464a80();
        param_2 = (short *)(uVar13 >> 0x20);
        pvVar5 = extraout_ECX_02;
      }
      local_44 = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x978);
      local_40 = *(float *)((int)pvVar10 + 0x97c) * DAT_004b2ed0;
      local_3c = DAT_004b2ed0 * *(float *)((int)pvVar10 + 0x980);
      *(float *)((int)pvVar10 + 0x96c) = *(float *)((int)pvVar10 + 0x96c) + local_44;
      *(float *)((int)pvVar10 + 0x970) = *(float *)((int)pvVar10 + 0x970) + local_40;
      *(float *)((int)pvVar10 + 0x974) = local_3c + *(float *)((int)pvVar10 + 0x974);
      if (*(int *)((int)pvVar10 + 0x98c) < 0x4b0) {
        if (((*(float *)((int)pvVar10 + 0x96c) <= -176.0) &&
            (*(float *)((int)pvVar10 + 0x978) < 0.0)) ||
           ((176.0 < *(float *)((int)pvVar10 + 0x96c) != (*(float *)((int)pvVar10 + 0x96c) == 176.0)
            && (0.0 < *(float *)((int)pvVar10 + 0x978) != NAN(*(float *)((int)pvVar10 + 0x978))))))
        {
          *(float *)((int)pvVar10 + 0x978) = *(float *)((int)pvVar10 + 0x978) * -1.0;
        }
        if (((*(float *)((int)pvVar10 + 0x970) <= 160.0) && (*(float *)((int)pvVar10 + 0x97c) < 0.0)
            ) || ((370.0 < *(float *)((int)pvVar10 + 0x970) !=
                   (*(float *)((int)pvVar10 + 0x970) == 370.0) &&
                  (0.0 < *(float *)((int)pvVar10 + 0x97c) != NAN(*(float *)((int)pvVar10 + 0x97c))))
                 )) {
          *(float *)((int)pvVar10 + 0x97c) = *(float *)((int)pvVar10 + 0x97c) * -1.0;
        }
      }
      else if (((*(float *)((int)pvVar10 + 0x96c) < -208.0 !=
                 (*(float *)((int)pvVar10 + 0x96c) == -208.0)) ||
               (208.0 <= *(float *)((int)pvVar10 + 0x96c))) ||
              ((*(float *)((int)pvVar10 + 0x970) <= -16.0 ||
               (464.0 <= *(float *)((int)pvVar10 + 0x970))))) {
        *(undefined4 *)((int)pvVar10 + 0x9b0) = 0;
        DAT_004b0ccc = DAT_004b0ccc + -4;
        if (DAT_004b0ccc < 0x401) {
          if (DAT_004b0ccc < -0x400) {
            DAT_004b0ccc = -0x400;
          }
        }
        else {
          DAT_004b0ccc = 0x400;
        }
        FUN_00461a70(pvVar5,*(int *)((int)pvVar10 + 0x968));
        *(undefined4 *)((int)pvVar10 + 0x968) = 0;
        param_2 = extraout_EDX_17;
        goto LAB_00426f53;
      }
      if (DAT_004b0c58 < 3) {
        switch(*(undefined4 *)((int)pvVar10 + 0x9b4)) {
        case 10:
        case 0xd:
          if (DAT_004b0c4c == 1) {
            if (DAT_004b0c50 != 1) goto LAB_0042662f;
            if (*(int *)((int)pvVar10 + 0x968) == 0) {
              FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + DAT_004b43c8),&local_48,0xd3,0);
              *(int *)((int)pvVar10 + 0x968) = local_48;
              FUN_00461970(this,local_48);
              param_2 = extraout_EDX_10;
            }
          }
          else {
            if (DAT_004b0c4c == 2) {
              if (DAT_004b0c50 == 3) {
LAB_00426658:
                if (*(int *)((int)pvVar10 + 0x968) == 0) {
                  FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + DAT_004b43c8),&local_28,0xd3,0
                              );
                  iVar3 = local_28;
                  pvVar5 = extraout_ECX_04;
                  goto LAB_00426832;
                }
                break;
              }
            }
            else if ((DAT_004b0c4c == 3) && (DAT_004b0c50 == 2)) goto LAB_00426658;
LAB_0042662f:
            FUN_00461a70(pvVar5,*(int *)((int)pvVar10 + 0x968));
            *(undefined4 *)((int)pvVar10 + 0x968) = 0;
            param_2 = extraout_EDX_11;
          }
          break;
        case 0xb:
        case 0xe:
          if (DAT_004b0c4c == 2) {
            if (DAT_004b0c50 != 2) goto LAB_00426702;
            if (*(int *)((int)pvVar10 + 0x968) == 0) {
              FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + DAT_004b43c8),&local_68,0xd3,0);
              *(int *)((int)pvVar10 + 0x968) = local_68;
              FUN_00461970(this_00,local_68);
              param_2 = extraout_EDX_12;
            }
          }
          else {
            if (DAT_004b0c4c == 1) {
              if (DAT_004b0c50 == 3) {
LAB_0042672b:
                if (*(int *)((int)pvVar10 + 0x968) == 0) {
                  FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + DAT_004b43c8),&local_38,0xd3,0
                              );
                  iVar3 = local_38;
                  pvVar5 = extraout_ECX_05;
                  goto LAB_00426832;
                }
                break;
              }
            }
            else if ((DAT_004b0c4c == 3) && (DAT_004b0c50 == 1)) goto LAB_0042672b;
LAB_00426702:
            FUN_00461a70(*(void **)((int)pvVar10 + 0x968),(int)*(void **)((int)pvVar10 + 0x968));
            *(undefined4 *)((int)pvVar10 + 0x968) = 0;
            param_2 = extraout_EDX_13;
          }
          break;
        case 0xc:
        case 0xf:
          if (DAT_004b0c4c == 3) {
            if (DAT_004b0c50 != 3) goto LAB_004267d1;
            if (*(int *)((int)pvVar10 + 0x968) == 0) {
              FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + DAT_004b43c8),&local_58,0xd3,0);
              *(int *)((int)pvVar10 + 0x968) = local_58;
              FUN_00461970(this_01,local_58);
              param_2 = extraout_EDX_14;
            }
          }
          else {
            if (DAT_004b0c4c == 1) {
              if (DAT_004b0c50 == 2) {
LAB_004267fa:
                if (*(int *)((int)pvVar10 + 0x968) != 0) break;
                FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + DAT_004b43c8),&local_24,0xd3,0);
                iVar3 = local_24;
                pvVar5 = extraout_ECX_06;
LAB_00426832:
                *(int *)((int)pvVar10 + 0x968) = iVar3;
                FUN_00461970(pvVar5,iVar3);
                param_2 = extraout_EDX_16;
                break;
              }
            }
            else if ((DAT_004b0c4c == 2) && (DAT_004b0c50 == 1)) goto LAB_004267fa;
LAB_004267d1:
            FUN_00461a70(pvVar5,*(int *)((int)pvVar10 + 0x968));
            *(undefined4 *)((int)pvVar10 + 0x968) = 0;
            param_2 = extraout_EDX_15;
          }
        }
      }
      else {
        FUN_00461a70(pvVar5,*(int *)((int)pvVar10 + 0x968));
        *(undefined4 *)((int)pvVar10 + 0x968) = 0;
        param_2 = extraout_EDX_09;
      }
    }
switchD_004265bc_caseD_6:
    psVar6 = DAT_004b4514;
    if (*(int *)(DAT_004b4514 + 0x514) == 2) {
LAB_00426ecb:
      if ((*(byte *)((int)pvVar10 + 0x47c) & 1) != 0) {
        FUN_00455630(psVar6,param_2,(uint)pvVar10);
        psVar6 = extraout_ECX_30;
      }
      if ((*(byte *)((int)pvVar10 + 0x930) & 1) != 0) {
        FUN_00455630(psVar6,(short *)((int)pvVar10 + 0x4b4),(uint)((int)pvVar10 + 0x4b4));
        psVar6 = extraout_ECX_31;
      }
      if ((*(int *)((int)pvVar10 + 0x968) != 0) &&
         (piVar4 = FUN_00461920(psVar6,DAT_004ce8cc,*(int *)((int)pvVar10 + 0x968)),
         piVar4 != (int *)0x0)) {
        piVar4[0x10c] = (int)(*(float *)((int)pvVar10 + 0x96c) + 32.0 + 192.0);
        piVar4[0x10d] = (int)(*(float *)((int)pvVar10 + 0x970) + 16.0);
        piVar4[0x10e] = *(int *)((int)pvVar10 + 0x974);
      }
      uVar13 = FUN_00464a80();
      param_2 = (short *)(uVar13 >> 0x20);
      *(int *)(param_3 + 0x666fd4) = *(int *)(param_3 + 0x666fd4) + 1;
      goto LAB_00426f53;
    }
    local_20 = *(float *)((int)pvVar10 + 0x96c) - 0.0;
    local_1c = *(float *)((int)pvVar10 + 0x970) - 0.0;
    local_14 = *(float *)((int)pvVar10 + 0x96c) + 0.0;
    local_10 = *(float *)((int)pvVar10 + 0x970) + 0.0;
    if ((((local_14 < *(float *)(DAT_004b4514 + 0x6222) !=
           (NAN(local_14) || NAN(*(float *)(DAT_004b4514 + 0x6222)))) ||
         (local_10 < *(float *)(DAT_004b4514 + 0x6224))) ||
        (*(float *)(DAT_004b4514 + 0x6228) < local_20 !=
         (NAN(*(float *)(DAT_004b4514 + 0x6228)) || NAN(local_20)))) ||
       (*(float *)(DAT_004b4514 + 0x622a) < local_1c !=
        (NAN(*(float *)(DAT_004b4514 + 0x622a)) || NAN(local_1c)))) {
      iVar3 = *(int *)((int)pvVar10 + 0x9b0);
      if ((((iVar3 != 4) && (iVar3 != 3)) && ((iVar3 != 6 && ((iVar3 != 7 && (iVar3 != 8)))))) &&
         (((param_2 = (short *)(DAT_004d49d0 & 8), param_2 != (short *)0x0 &&
           ((((*(float *)(DAT_004b4514 + 0x622e) <= local_14 &&
              (*(float *)(DAT_004b4514 + 0x6230) <= local_10)) &&
             (*(float *)(DAT_004b4514 + 0x6234) < local_20 ==
              (NAN(*(float *)(DAT_004b4514 + 0x6234)) || NAN(local_20)))) &&
            (*(float *)(DAT_004b4514 + 0x6236) < local_1c ==
             (NAN(*(float *)(DAT_004b4514 + 0x6236)) || NAN(local_1c)))))) ||
          (((param_2 == (short *)0x0 && (*(float *)(DAT_004b4514 + 0x623a) <= local_14)) &&
           ((*(float *)(DAT_004b4514 + 0x623c) <= local_10 &&
            ((*(float *)(DAT_004b4514 + 0x6240) < local_20 ==
              (NAN(*(float *)(DAT_004b4514 + 0x6240)) || NAN(local_20)) &&
             (*(float *)(DAT_004b4514 + 0x6242) < local_1c ==
              (NAN(*(float *)(DAT_004b4514 + 0x6242)) || NAN(local_1c)))))))))))) {
        psVar6 = *(short **)(DAT_004b4514 + 0x516);
        fVar14 = *(float *)(psVar6 + 4);
        *(undefined4 *)((int)pvVar10 + 0x9b0) = 4;
        *(float *)((int)pvVar10 + 0x9bc) = fVar14 / 3.0;
      }
      goto LAB_00426ecb;
    }
    switch(*(undefined4 *)((int)pvVar10 + 0x9b4)) {
    case 1:
      FUN_00426ff0();
      psVar6 = extraout_ECX_13;
      param_2 = extraout_EDX_25;
      break;
    case 2:
      if ((*(float *)(DAT_004b4514 + 0x4c0) <= 128.0) || (*(int *)((int)pvVar10 + 0x9b0) == 3)) {
        iVar3 = FUN_00421880();
        goto LAB_00426d65;
      }
      iVar3 = FUN_00421880();
      uVar8 = iVar3 * 3 >> 0x1f & 3;
      iVar3 = (int)(iVar3 * 3 + uVar8) >> 2;
      uVar13 = FUN_004931e0(extraout_ECX_18,uVar8);
      iVar3 = ((iVar3 - (((int)uVar13 + -0x80) * iVar3) / 0x1c2) / 10) * 10;
      if (iVar3 < 1) {
        iVar3 = 10;
      }
      uVar15 = 0xffffffff;
      goto LAB_00426d8b;
    case 3:
      if (DAT_004b0cd0 <= DAT_004b0c48) {
        FUN_00427ca0(DAT_004b4514,param_2,0x43480000);
        FUN_0043e250((undefined4 *)((int)pvVar10 + 0x96c),0xff40ff40);
        FUN_00453e20(extraout_ECX_14,extraout_EDX_26,*(undefined4 *)((int)pvVar10 + 0x96c));
      }
      bVar11 = FUN_00422d70();
      psVar6 = extraout_ECX_15;
      param_2 = extraout_EDX_27;
      if (CONCAT31(extraout_var_00,bVar11) != 0) {
        FUN_004385b0((int)DAT_004b4514);
        FUN_00453e20(extraout_ECX_16,extraout_EDX_28,*(undefined4 *)((int)pvVar10 + 0x96c));
        FUN_0043e250((undefined4 *)((int)pvVar10 + 0x96c),0xffffff40);
        DAT_004b0ccc = DAT_004b0ccc + 0x18;
        psVar6 = extraout_ECX_17;
        param_2 = extraout_EDX_29;
        goto LAB_00426a2f;
      }
      break;
    case 4:
      iVar3 = 2;
      if (_DAT_004b0c9c != 0) {
        iVar3 = 1;
      }
      FUN_00422d30(iVar3);
      DAT_004b0ccc = DAT_004b0ccc + 0x100;
      psVar6 = extraout_ECX_19;
      param_2 = extraout_EDX_30;
      goto LAB_00426a2f;
    case 5:
      FUN_00422e10();
      DAT_004b0ccc = DAT_004b0ccc + 0x100;
      psVar6 = extraout_ECX_21;
      param_2 = extraout_EDX_32;
      goto LAB_00426a2f;
    case 6:
      FUN_00422ce0();
      DAT_004b0ccc = DAT_004b0ccc + 0x100;
      psVar6 = extraout_ECX_20;
      param_2 = extraout_EDX_31;
      goto LAB_00426a2f;
    case 7:
      FUN_00422dd0();
      DAT_004b0ccc = DAT_004b0ccc + 0x100;
      psVar6 = extraout_ECX_22;
      param_2 = extraout_EDX_33;
LAB_00426a2f:
      if (DAT_004b0ccc < 0x401) {
        if (DAT_004b0ccc < -0x400) {
          DAT_004b0ccc = -0x400;
        }
      }
      else {
        DAT_004b0ccc = 0x400;
      }
      break;
    case 8:
      if (DAT_004b0cd0 <= DAT_004b0c48) {
        FUN_00427ca0(DAT_004b0c48,param_2,0x42c80000);
        FUN_0043e250((undefined4 *)((int)pvVar10 + 0x96c),0xff40ff40);
        FUN_00453e20(extraout_ECX_09,extraout_EDX_21,*(undefined4 *)((int)pvVar10 + 0x96c));
      }
      bVar11 = FUN_00422d70();
      psVar6 = extraout_ECX_10;
      param_2 = extraout_EDX_22;
      if (CONCAT31(extraout_var,bVar11) != 0) {
        FUN_004385b0((int)DAT_004b4514);
        FUN_0043e250((undefined4 *)((int)pvVar10 + 0x96c),0xffffff40);
        FUN_00453e20(extraout_ECX_11,extraout_EDX_23,*(undefined4 *)((int)pvVar10 + 0x96c));
        DAT_004b0ccc = DAT_004b0ccc + 0xc;
        psVar6 = extraout_ECX_12;
        param_2 = extraout_EDX_24;
        goto LAB_00426a2f;
      }
      break;
    case 9:
      FUN_00427ca0(DAT_004b4514,param_2,0x3dcccccd);
      iVar3 = 10;
      goto LAB_00426d9a;
    case 10:
    case 0xd:
      FUN_004270b0((int)pvVar10);
      psVar6 = extraout_ECX_23;
      param_2 = extraout_EDX_34;
      break;
    case 0xb:
    case 0xe:
      FUN_004270b0((int)pvVar10);
      psVar6 = extraout_ECX_24;
      param_2 = extraout_EDX_35;
      break;
    case 0xc:
    case 0xf:
      FUN_004270b0((int)pvVar10);
      psVar6 = extraout_ECX_25;
      param_2 = extraout_EDX_36;
      break;
    case 0x10:
    case 0x11:
    case 0x12:
      FUN_00453e20(DAT_004b4514,param_2,*(undefined4 *)((int)pvVar10 + 0x96c));
      psVar6 = extraout_ECX_26;
      param_2 = extraout_EDX_37;
      switch(*(undefined4 *)((int)pvVar10 + 0x9c8)) {
      default:
        goto switchD_00426182_caseD_12;
      case 1:
        iVar3 = 0;
        if (0 < *(int *)((int)pvVar10 + 0x9cc)) {
          do {
            FUN_00426ff0();
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)((int)pvVar10 + 0x9cc));
        }
        iVar3 = FUN_00421880();
        uVar13 = FUN_004931e0(*(int *)((int)pvVar10 + 0x9cc) * iVar3,extraout_EDX_39);
        iVar3 = (int)uVar13 + *(int *)((int)pvVar10 + 0x9d0) * iVar3;
        goto LAB_00426d7d;
      case 2:
      case 3:
        iVar3 = 0;
        if (0 < *(int *)((int)pvVar10 + 0x9cc)) {
          do {
            FUN_00426ff0();
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)((int)pvVar10 + 0x9cc));
        }
        FUN_00421880();
        uVar15 = extraout_ECX_28;
        uVar9 = extraout_EDX_40;
        break;
      case 0xffffffff:
        iVar3 = 0;
        if (0 < *(int *)((int)pvVar10 + 0x9cc)) {
          do {
            FUN_00426ff0();
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)((int)pvVar10 + 0x9cc));
        }
        FUN_00421880();
        uVar15 = extraout_ECX_27;
        uVar9 = extraout_EDX_38;
      }
      uVar13 = FUN_004931e0(uVar15,uVar9);
      iVar3 = (int)uVar13;
LAB_00426d65:
      iVar3 = (iVar3 / 10) * 10;
LAB_00426d7d:
      if (iVar3 < 1) {
        iVar3 = 10;
      }
      uVar15 = 0xffffff00;
LAB_00426d8b:
      FUN_0043e250((undefined4 *)((int)pvVar10 + 0x96c),uVar15);
LAB_00426d9a:
      FUN_0040e730(&DAT_004b0c40,iVar3);
      psVar6 = extraout_ECX_29;
      param_2 = extraout_EDX_41;
    }
switchD_00426182_caseD_12:
    *(undefined4 *)((int)pvVar10 + 0x9b0) = 0;
    FUN_00453e20(psVar6,param_2,*(undefined4 *)((int)pvVar10 + 0x96c));
    FUN_00461970(this_02,*(int *)((int)pvVar10 + 0x968));
    param_2 = extraout_EDX_42;
LAB_00426f53:
    local_90 = local_90 + 1;
    pvVar10 = (void *)((int)pvVar10 + 0x9d8);
    if (0xa67 < local_90) {
      return 1;
    }
  } while( true );
}


