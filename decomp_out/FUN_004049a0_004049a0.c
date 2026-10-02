/* undefined4 __stdcall FUN_004049a0(int * param_1) @ 004049a0  3016 bytes */
#include "th12.h"

undefined4 FUN_004049a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  float fVar11;
  void *pvVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  float *pfVar17;
  float *pfVar18;
  int *piVar19;
  int *unaff_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  float10 fVar22;
  float10 fVar23;
  float local_34 [4];
  float local_24;
  float local_20;
  int local_14;
  undefined *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0049754c;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  piVar16 = (int *)param_1[0x13];
  if (*piVar16 <= param_1[0xf]) {
    do {
      iVar13 = param_1[0x13];
      switch(*(undefined2 *)(iVar13 + 4)) {
      case 0:
        goto LAB_00405239;
      case 1:
        iVar13 = *(int *)(iVar13 + 0xc);
        if ((param_1[0x12] & 1U) == 0) {
          param_1[0x10] = 0;
          param_1[0xf] = 0;
          param_1[0xe] = -999999;
          param_1[0x11] = (int)&DAT_004b2ed0;
          param_1[0x12] = param_1[0x12] | 1;
        }
        param_1[0xf] = iVar13;
        param_1[0xe] = iVar13 + -1;
        param_1[0x10] = (int)(float)iVar13;
        param_1[0x13] = *(int *)(param_1[0x13] + 8) + param_1[7];
        goto LAB_0040521d;
      case 2:
        param_1[0xdbf] = param_1[0xd83];
        param_1[0xdc0] = param_1[0xd84];
        param_1[0xdc1] = param_1[0xd85];
        param_1[0xd83] = *(int *)(iVar13 + 8);
        param_1[0xd84] = *(int *)(iVar13 + 0xc);
        param_1[0xd85] = *(int *)(iVar13 + 0x10);
        param_1[0xdbf] = (int)((float)param_1[0xd83] - (float)param_1[0xdbf]);
        param_1[0xdc0] = (int)((float)param_1[0xd84] - (float)param_1[0xdc0]);
        param_1[0xdc1] = (int)((float)param_1[0xd85] - (float)param_1[0xdc1]);
        break;
      case 3:
        iVar15 = *(int *)(iVar13 + 0x10);
        iVar1 = *(int *)(iVar13 + 0x14);
        iVar2 = *(int *)(iVar13 + 0x18);
        param_1[0x38] = *(int *)(iVar13 + 8);
        param_1[0x39] = *(int *)(iVar13 + 0xc);
        param_1[0x27] = param_1[0xd83];
        param_1[0x28] = param_1[0xd84];
        param_1[0x29] = param_1[0xd85];
        param_1[0x2a] = iVar15;
        param_1[0x2b] = iVar1;
        param_1[0x2c] = iVar2;
        goto LAB_00404b48;
      case 4:
        param_1[0xd86] = *(int *)(iVar13 + 8);
        param_1[0xd87] = *(int *)(iVar13 + 0xc);
        param_1[0xd88] = *(int *)(iVar13 + 0x10);
        break;
      case 5:
        iVar15 = *(int *)(iVar13 + 0x10);
        iVar1 = *(int *)(iVar13 + 0x14);
        iVar2 = *(int *)(iVar13 + 0x18);
        param_1[0x25] = *(int *)(iVar13 + 8);
        param_1[0x26] = *(int *)(iVar13 + 0xc);
        param_1[0x14] = param_1[0xd86];
        param_1[0x15] = param_1[0xd87];
        param_1[0x16] = param_1[0xd88];
        param_1[0x17] = iVar15;
        param_1[0x18] = iVar1;
        param_1[0x19] = iVar2;
        goto LAB_00404c15;
      case 6:
        param_1[0xd89] = *(int *)(iVar13 + 8);
        param_1[0xd8a] = *(int *)(iVar13 + 0xc);
        param_1[0xd8b] = *(int *)(iVar13 + 0x10);
        break;
      case 7:
        param_1[0xd95] = *(int *)(iVar13 + 8);
        break;
      case 8:
        uVar10 = *(uint *)(iVar13 + 8);
        param_1[0xdc8] = uVar10;
        param_1[0xdc4] = (int)(float)(uVar10 & 0xff);
        param_1[0xdc5] = (int)(float)(uint)*(byte *)((int)param_1 + 0x3721);
        param_1[0xdc6] = (int)(float)(uint)*(byte *)((int)param_1 + 0x3722);
        param_1[0xdc7] = (int)(float)(uint)*(byte *)((int)param_1 + 0x3723);
        param_1[0xdc2] = *(int *)(iVar13 + 0xc);
        param_1[0xdc3] = *(int *)(iVar13 + 0x10);
        break;
      case 9:
        local_34[0] = *(float *)(iVar13 + 0x14);
        local_34[1] = *(float *)(iVar13 + 0x18);
        local_34[2] = (float)(uint)*(byte *)(iVar13 + 0x10);
        local_34[3] = (float)(uint)*(byte *)(iVar13 + 0x11);
        local_24 = (float)(uint)*(byte *)(iVar13 + 0x12);
        local_20 = (float)(uint)*(byte *)(iVar13 + 0x13);
        FUN_00406250((int)local_34);
        param_1[0x6e] = *(int *)(iVar13 + 8);
        iVar13 = *(int *)(iVar13 + 0xc);
        piVar16 = param_1 + 0xdc2;
        piVar14 = param_1 + 0x4d;
        for (iVar15 = 7; iVar15 != 0; iVar15 = iVar15 + -1) {
          *piVar14 = *piVar16;
          piVar16 = piVar16 + 1;
          piVar14 = piVar14 + 1;
        }
        param_1[0x6f] = iVar13;
        pfVar17 = local_34;
        pfVar18 = (float *)(param_1 + 0x54);
        for (iVar13 = 7; iVar13 != 0; iVar13 = iVar13 + -1) {
          *pfVar18 = *pfVar17;
          pfVar17 = pfVar17 + 1;
          pfVar18 = pfVar18 + 1;
        }
        if ((param_1[0x6d] & 1U) == 0) {
          param_1[0x6b] = 0;
          param_1[0x6a] = 0;
          param_1[0x69] = -999999;
          param_1[0x6c] = (int)&DAT_004b2ed0;
          param_1[0x6d] = param_1[0x6d] | 1;
        }
        param_1[0x6b] = 0;
        param_1[0x6a] = 0;
        param_1[0x69] = -1;
        break;
      case 10:
        iVar15 = *(int *)(iVar13 + 0x10);
        iVar1 = *(int *)(iVar13 + 0x14);
        iVar2 = *(int *)(iVar13 + 0x18);
        iVar3 = *(int *)(iVar13 + 0x1c);
        iVar4 = *(int *)(iVar13 + 0x20);
        iVar5 = *(int *)(iVar13 + 0x24);
        iVar6 = *(int *)(iVar13 + 0x28);
        iVar7 = *(int *)(iVar13 + 0x2c);
        iVar8 = *(int *)(iVar13 + 0x30);
        param_1[0x38] = *(int *)(iVar13 + 8);
        param_1[0x27] = param_1[0xd83];
        param_1[0x28] = param_1[0xd84];
        param_1[0x29] = param_1[0xd85];
        param_1[0x2d] = iVar15;
        param_1[0x2e] = iVar1;
        param_1[0x2f] = iVar2;
        param_1[0x2a] = iVar3;
        param_1[0x2b] = iVar4;
        param_1[0x2c] = iVar5;
        param_1[0x30] = iVar6;
        param_1[0x31] = iVar7;
        param_1[0x39] = 8;
        param_1[0x32] = iVar8;
LAB_00404b48:
        if ((param_1[0x37] & 1U) == 0) {
          param_1[0x34] = 0;
          param_1[0x33] = -999999;
          param_1[0x35] = 0;
          param_1[0x36] = (int)&DAT_004b2ed0;
          param_1[0x37] = param_1[0x37] | 1;
        }
        param_1[0x34] = 0;
        param_1[0x35] = 0;
        param_1[0x33] = -1;
        break;
      case 0xb:
        iVar15 = *(int *)(iVar13 + 0x10);
        iVar1 = *(int *)(iVar13 + 0x14);
        iVar2 = *(int *)(iVar13 + 0x18);
        iVar3 = *(int *)(iVar13 + 0x1c);
        iVar4 = *(int *)(iVar13 + 0x20);
        iVar5 = *(int *)(iVar13 + 0x24);
        iVar6 = *(int *)(iVar13 + 0x28);
        iVar7 = *(int *)(iVar13 + 0x2c);
        iVar8 = *(int *)(iVar13 + 0x30);
        param_1[0x25] = *(int *)(iVar13 + 8);
        param_1[0x14] = param_1[0xd86];
        param_1[0x15] = param_1[0xd87];
        param_1[0x16] = param_1[0xd88];
        param_1[0x1a] = iVar15;
        param_1[0x1b] = iVar1;
        param_1[0x1c] = iVar2;
        param_1[0x17] = iVar3;
        param_1[0x18] = iVar4;
        param_1[0x19] = iVar5;
        param_1[0x1d] = iVar6;
        param_1[0x1e] = iVar7;
        param_1[0x26] = 8;
        param_1[0x1f] = iVar8;
LAB_00404c15:
        if ((param_1[0x24] & 1U) == 0) {
          param_1[0x21] = 0;
          param_1[0x20] = -999999;
          param_1[0x22] = 0;
          param_1[0x23] = (int)&DAT_004b2ed0;
          param_1[0x24] = param_1[0x24] | 1;
        }
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x20] = -1;
        break;
      case 0xc:
        cVar9 = *(char *)(iVar13 + 8);
        *(char *)(param_1 + 8) = cVar9;
        if (cVar9 == '\0') {
          param_1[0xd92] = 0;
          param_1[0xd93] = 0;
          param_1[0xd94] = 0;
        }
        if ((param_1[0xd] & 1U) == 0) {
          param_1[0xb] = 0;
          param_1[10] = 0;
          param_1[9] = -999999;
          param_1[0xc] = (int)&DAT_004b2ed0;
          param_1[0xd] = param_1[0xd] | 1;
        }
        param_1[0xb] = 0;
        param_1[10] = 0;
        param_1[9] = -1;
        break;
      case 0xd:
        DAT_004cf2a8 = *(undefined4 *)(iVar13 + 8);
        break;
      case 0xe:
        iVar15 = *(int *)(iVar13 + 0xc);
        if (iVar15 < 0) {
          param_1[*(int *)(iVar13 + 8) * 0x12d + 0x192] =
               param_1[*(int *)(iVar13 + 8) * 0x12d + 0x192] & 0xfffffffe;
        }
        else {
          pvVar12 = (void *)param_1[0x71];
          piVar16 = param_1 + *(int *)(iVar13 + 8) * 0x12d + 0x73;
          FUN_00402520();
          *(undefined *)((int)piVar16 + 0x49d) = 0x10;
          *(undefined *)(piVar16 + 0x127) = 0x10;
          FUN_00454d10(pvVar12,piVar16,iVar15);
        }
        break;
      case 0x11:
        pvVar12 = (void *)param_1[0xd77];
        if (pvVar12 != (void *)0x0) {
          FUN_00402870();
          FUN_0046ca4f(pvVar12);
        }
        param_1[0xd78] = 0x42e00000;
        param_1[0xd77] = 0;
        param_1[0xd7a] = -1;
        param_1[0xd79] = 0x43400000;
        fVar22 = FUN_004646e0(0.0);
        param_1[0xd7b] = (int)(float)fVar22;
        param_1[0xd7c] = (int)(float)fVar22;
        iVar13 = *(int *)(param_1[0x13] + 8);
        param_1[0xd7d] = iVar13;
        if (0.0 < (float)param_1[0xd78] != NAN((float)param_1[0xd78])) {
          if (iVar13 == 1) {
            pvVar12 = operator_new(0x18);
            local_c = 0;
            if (pvVar12 == (void *)0x0) {
LAB_004051fc:
              iVar13 = 0;
            }
            else {
              iVar13 = FUN_0040ff10(7);
            }
          }
          else {
            pvVar12 = operator_new(0x18);
            local_c = 1;
            if (pvVar12 == (void *)0x0) goto LAB_004051fc;
            iVar13 = FUN_0040ff10(0x11);
          }
          local_c = 0xffffffff;
          param_1[0xd77] = iVar13;
        }
        break;
      case 0x12:
        iVar15 = *(int *)(iVar13 + 0x10);
        iVar1 = *(int *)(iVar13 + 0x14);
        iVar2 = *(int *)(iVar13 + 0x18);
        param_1[0x4b] = *(int *)(iVar13 + 8);
        param_1[0x4c] = *(int *)(iVar13 + 0xc);
        param_1[0x3a] = param_1[0xd89];
        param_1[0x3b] = param_1[0xd8a];
        param_1[0x3c] = param_1[0xd8b];
        param_1[0x3d] = iVar15;
        param_1[0x3e] = iVar1;
        param_1[0x3f] = iVar2;
        if ((param_1[0x4a] & 1U) == 0) {
          param_1[0x48] = 0;
          param_1[0x47] = 0;
          param_1[0x46] = -999999;
          param_1[0x49] = (int)&DAT_004b2ed0;
          param_1[0x4a] = param_1[0x4a] | 1;
        }
        param_1[0x48] = 0;
        param_1[0x47] = 0;
        param_1[0x46] = -1;
      }
      piVar16 = (int *)((int)*(short *)(param_1[0x13] + 6) + param_1[0x13]);
      param_1[0x13] = (int)piVar16;
LAB_0040521d:
    } while (*(int *)param_1[0x13] <= param_1[0xf]);
  }
  FUN_00464a80();
  piVar16 = extraout_ECX;
LAB_00405239:
  if (param_1[0x25] != 0) {
    piVar16 = (int *)FUN_00405900();
    param_1[0xd86] = *piVar16;
    param_1[0xd87] = piVar16[1];
    param_1[0xd88] = piVar16[2];
    piVar16 = param_1;
  }
  if (param_1[0x38] != 0) {
    piVar16 = (int *)FUN_00405900();
    param_1[0xd83] = *piVar16;
    param_1[0xd84] = piVar16[1];
    param_1[0xd85] = piVar16[2];
    piVar16 = param_1;
  }
  if (param_1[0x6e] != 0) {
    piVar14 = (int *)FUN_00405c90(local_34);
    piVar19 = param_1 + 0xdc2;
    for (piVar16 = (int *)0x7; piVar16 != (int *)0x0; piVar16 = (int *)((int)piVar16 + -1)) {
      *piVar19 = *piVar14;
      piVar14 = piVar14 + 1;
      piVar19 = piVar19 + 1;
    }
  }
  if (param_1[0x4b] != 0) {
    piVar16 = (int *)FUN_00405900();
    param_1[0xd89] = *piVar16;
    param_1[0xd8a] = piVar16[1];
    param_1[0xd8b] = piVar16[2];
    piVar16 = param_1;
  }
  if (*(char *)(param_1 + 8) == '\0') goto switchD_00405324_caseD_3;
  switch(*(char *)(param_1 + 8)) {
  case '\x01':
    FUN_004646e0(((float)param_1[0xb] * 3.1415927 + (float)param_1[0xb] * 3.1415927) * 0.001953125);
    fVar22 = (float10)FUN_004939f0(extraout_ECX_00);
    param_1[0xd92] = (int)(((float)fVar22 - 1.0) * -50.0);
    fVar11 = ((float)fVar22 - 1.0) * -0.1;
    break;
  case '\x02':
    fVar22 = FUN_004646e0(((float)param_1[0xb] * 3.1415927 + (float)param_1[0xb] * 3.1415927) *
                          0.00048828125);
    fVar23 = (float10)FUN_004938c0(extraout_ECX_01);
    param_1[0xd92] = (int)((float)fVar23 * 50.0);
    FUN_004646e0((float)fVar22 + (float)fVar22);
    fVar22 = (float10)FUN_004938c0(extraout_ECX_02);
    param_1[0xd94] = (int)((float)fVar22 * 50.0);
    fVar11 = -(float)fVar23 * 0.05;
    goto LAB_00405400;
  default:
    goto switchD_00405324_caseD_3;
  case '\x05':
    fVar11 = ((float)param_1[0xb] * 3.1415927 + (float)param_1[0xb] * 3.1415927) * 0.00048828125 -
             3.1415927;
    fVar22 = (float10)FUN_004938c0(piVar16);
    param_1[0xd92] = (int)((float)fVar22 * 70.0);
    FUN_004646e0(fVar11 + fVar11);
    fVar23 = (float10)FUN_004938c0(extraout_ECX_03);
    param_1[0xd94] = (int)((float)fVar23 * 200.0);
    fVar11 = -(float)fVar22 * 0.1;
LAB_00405400:
    param_1[0xd89] = (int)fVar11;
    FUN_00464a80();
    bVar21 = SBORROW4(param_1[10],0x800);
    bVar20 = param_1[10] + -0x800 < 0;
    goto LAB_00405543;
  case '\x06':
    fVar22 = (float10)FUN_004938c0(piVar16);
    param_1[0xd92] = (int)((float)fVar22 * -50.0);
    param_1[0xd89] = (int)(-(float)fVar22 * 0.1);
    FUN_00464a80();
    bVar21 = SBORROW4(param_1[10],0x400);
    bVar20 = param_1[10] + -0x400 < 0;
    goto LAB_00405543;
  case '\a':
    fVar22 = (float10)FUN_004938c0(piVar16);
    param_1[0xd92] = (int)((float)fVar22 * -15.0);
    fVar11 = -(float)fVar22 * 0.01;
  }
  param_1[0xd89] = (int)fVar11;
  FUN_00464a80();
  bVar21 = SBORROW4(param_1[10],0x200);
  bVar20 = param_1[10] + -0x200 < 0;
LAB_00405543:
  if (bVar21 == bVar20) {
    FUN_004067e0(0);
  }
switchD_00405324_caseD_3:
  *unaff_FS_OFFSET = local_14;
  return 0;
}


