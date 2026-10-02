/* undefined4 __fastcall FUN_004364f0(undefined4 param_1, uint param_2) @ 004364f0  1606 bytes */

#include "th12.h"

undefined4 __fastcall FUN_004364f0(undefined4 param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  void *this;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar9;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  void *this_00;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 uVar10;
  int unaff_EDI;
  bool bVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  int local_10;
  float fStack_c;
  float fStack_8;
  
  uVar8 = DAT_004d49d0 & 0x50;
  if ((char)uVar8 == 'P') {
    *(undefined4 *)(unaff_EDI + 0xa1c) = 5;
  }
  else {
    param_2 = DAT_004d49d0 & 0x60;
    if ((char)param_2 == '`') {
      *(undefined4 *)(unaff_EDI + 0xa1c) = 7;
    }
    else {
      uVar8 = DAT_004d49d0 & 0x90;
      if ((char)uVar8 == -0x70) {
        *(undefined4 *)(unaff_EDI + 0xa1c) = 6;
      }
      else {
        param_2 = DAT_004d49d0 & 0xa0;
        if ((char)param_2 == -0x60) {
          *(undefined4 *)(unaff_EDI + 0xa1c) = 8;
        }
        else if ((DAT_004d49d0 & 0x20) == 0) {
          if ((DAT_004d49d0 & 0x10) == 0) {
            if ((DAT_004d49d0 & 0x40) == 0) {
              if ((char)DAT_004d49d0 < '\0') {
                *(undefined4 *)(unaff_EDI + 0xa1c) = 4;
              }
              else {
                *(undefined4 *)(unaff_EDI + 0xa1c) = 0;
              }
            }
            else {
              *(undefined4 *)(unaff_EDI + 0xa1c) = 3;
            }
          }
          else {
            *(undefined4 *)(unaff_EDI + 0xa1c) = 1;
          }
        }
        else {
          *(undefined4 *)(unaff_EDI + 0xa1c) = 2;
        }
      }
    }
  }
  if (((DAT_004b43dc == 0) || (*(int *)(DAT_004b43dc + 0x70) == 0)) ||
     (*(int *)(unaff_EDI + 0xa48) < 4)) {
    *(undefined4 *)(unaff_EDI + 0xc598) = 0;
    *(undefined4 *)(unaff_EDI + 0xc3fc) = 0x1e;
  }
  else {
    *(uint *)(unaff_EDI + 0xc598) = DAT_004d49d0 >> 3 & 1;
  }
  iVar4 = *(int *)(&UNK_004a114c + *(int *)(unaff_EDI + 0xa1c) * 8);
  if (*(int *)(unaff_EDI + 0xc598) == 0) {
    piVar6 = FUN_00461920(uVar8,DAT_004ce8cc,*(int *)(unaff_EDI + 0x8258));
    if (piVar6 == (int *)0x0) {
      *(undefined4 *)(unaff_EDI + 0x8258) = 0;
      param_2 = extraout_EDX_00;
    }
    else {
      FUN_00461970(this,*(int *)(unaff_EDI + 0x8258));
      *(undefined4 *)(unaff_EDI + 0x8258) = 0;
      param_2 = extraout_EDX_01;
    }
    iVar5 = *(int *)(unaff_EDI + 0xa1c);
    if (iVar5 < 5) {
      local_10 = *(int *)(unaff_EDI + 0x990);
    }
    else {
      local_10 = *(int *)(unaff_EDI + 0x998);
    }
  }
  else {
    if (*(int *)(unaff_EDI + 0x8258) == 0) {
      FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + DAT_004b43c8),&local_10,0x4d,0);
      *(int *)(unaff_EDI + 0x8258) = local_10;
      param_2 = extraout_EDX;
    }
    iVar5 = *(int *)(unaff_EDI + 0xa1c);
    if (iVar5 < 5) {
      local_10 = *(int *)(unaff_EDI + 0x994);
    }
    else {
      local_10 = *(int *)(unaff_EDI + 0x99c);
    }
  }
  local_10 = local_10 * iVar4;
  uVar13 = FUN_004931e0(iVar5,param_2);
  iVar4 = (int)uVar13;
  uVar13 = FUN_004931e0(extraout_ECX,(int)(uVar13 >> 0x20));
  iVar5 = (int)uVar13;
  local_10 = iVar5;
  if ((iVar4 < 0) && (-1 < *(int *)(unaff_EDI + 0xa14))) {
    FUN_00454d10(*(void **)(unaff_EDI + 0x10),(void *)(unaff_EDI + 0x14),1);
    uVar13 = CONCAT44(extraout_EDX_02,local_10);
    uVar9 = extraout_ECX_01;
LAB_0043671e:
    local_10 = (int)uVar13;
    if ((iVar4 < 1) || (0 < *(int *)(unaff_EDI + 0xa14))) {
      if (iVar4 != 0) goto LAB_0043676b;
LAB_00436754:
      iVar15 = *(int *)(unaff_EDI + 0xa14);
      bVar11 = iVar15 < 0;
      goto LAB_0043675b;
    }
    iVar15 = 3;
  }
  else {
    uVar9 = extraout_ECX_00;
    if (iVar4 != 0) goto LAB_0043671e;
    iVar15 = *(int *)(unaff_EDI + 0xa14);
    bVar11 = iVar15 < 0;
    if (bVar11) {
      FUN_00454d10(*(void **)(unaff_EDI + 0x10),(void *)(unaff_EDI + 0x14),2);
      uVar13 = CONCAT44(extraout_EDX_03,local_10);
      uVar9 = extraout_ECX_02;
      goto LAB_00436754;
    }
LAB_0043675b:
    local_10 = (int)uVar13;
    if (iVar15 == 0 || bVar11) goto LAB_0043676b;
    iVar15 = 4;
  }
  FUN_00454d10(*(void **)(unaff_EDI + 0x10),(void *)(unaff_EDI + 0x14),iVar15);
  uVar13 = CONCAT44(extraout_EDX_04,local_10);
  uVar9 = extraout_ECX_03;
LAB_0043676b:
  uVar10 = (undefined4)(uVar13 >> 0x20);
  local_10 = (int)uVar13;
  *(int *)(unaff_EDI + 0xa14) = iVar4;
  *(int *)(unaff_EDI + 0xa18) = iVar5;
  *(float *)(unaff_EDI + 0x9a0) = (float)iVar4 * DAT_004b2ed0;
  *(float *)(unaff_EDI + 0x9a4) = (float)local_10 * DAT_004b2ed0;
  if (*(int *)(unaff_EDI + 0xa1c) != 0) {
    uVar10 = *(undefined4 *)(unaff_EDI + 0x9a0);
    uVar9 = *(undefined4 *)(unaff_EDI + 0x9a8);
    *(undefined4 *)(unaff_EDI + 0x9ac) = uVar10;
    *(undefined4 *)(unaff_EDI + 0x9b0) = *(undefined4 *)(unaff_EDI + 0x9a4);
    *(undefined4 *)(unaff_EDI + 0x9b4) = uVar9;
  }
  uVar13 = FUN_004931e0(uVar9,uVar10);
  *(int *)(unaff_EDI + 0x9b8) = (int)uVar13;
  uVar14 = FUN_004931e0(extraout_ECX_04,(int)(uVar13 >> 0x20));
  *(int *)(unaff_EDI + 0x988) = *(int *)(unaff_EDI + 0x988) + (int)uVar13;
  iVar4 = *(int *)(unaff_EDI + 0x988);
  *(int *)(unaff_EDI + 0x98c) = *(int *)(unaff_EDI + 0x98c) + (int)uVar14;
  *(int *)(unaff_EDI + 0x9bc) = (int)uVar14;
  if (iVar4 < -0x5c00) {
    *(undefined4 *)(unaff_EDI + 0x988) = 0xffffa400;
  }
  else if (0x5c00 < iVar4) {
    *(undefined4 *)(unaff_EDI + 0x988) = 0x5c00;
  }
  if (*(int *)(unaff_EDI + 0x98c) < 0x1000) {
    *(undefined4 *)(unaff_EDI + 0x98c) = 0x1000;
  }
  else if (0xd800 < *(int *)(unaff_EDI + 0x98c)) {
    *(undefined4 *)(unaff_EDI + 0x98c) = 0xd800;
  }
  iVar5 = DAT_004ce8cc;
  *(float *)(unaff_EDI + 0x97c) = (float)*(int *)(unaff_EDI + 0x988) * 0.0078125;
  *(float *)(unaff_EDI + 0x980) = (float)*(int *)(unaff_EDI + 0x98c) * 0.0078125;
  piVar6 = FUN_00461920(iVar4,iVar5,*(int *)(unaff_EDI + 0x8258));
  if (piVar6 == (int *)0x0) {
    *(undefined4 *)(unaff_EDI + 0x8258) = 0;
    fVar12 = extraout_ST0;
  }
  else {
    fVar1 = *(float *)(unaff_EDI + 0x97c);
    fVar2 = *(float *)(unaff_EDI + 0x980);
    iVar4 = *(int *)(unaff_EDI + 0x984);
    piVar6 = FUN_00461920(extraout_ECX_05,iVar5,*(int *)(unaff_EDI + 0x8258));
    fVar12 = extraout_ST0_00;
    if (piVar6 != (int *)0x0) {
      piVar6[0x10c] = (int)(fVar1 + 32.0 + 192.0);
      piVar6[0x10d] = (int)(fVar2 + 16.0);
      piVar6[0x10e] = iVar4;
    }
  }
  if ((*(byte *)(unaff_EDI + 0xc414) & 8) != 0) {
    *(int *)(unaff_EDI + 0xc418) = *(int *)(unaff_EDI + 0xc418) + 1;
  }
  piVar6 = (int *)(unaff_EDI + 0x82c0);
  local_10 = 8;
LAB_0043690b:
  if (piVar6[-0x18] != 0) {
    if ((*(byte *)(unaff_EDI + 0xc414) & 8) == 0) {
      piVar7 = piVar6 + 3;
      if (*(int *)(unaff_EDI + 0xc598) == 0) {
        piVar7 = piVar6 + 1;
      }
      iVar4 = *(int *)(unaff_EDI + 0x98c);
      iVar5 = piVar7[1];
      piVar6[-3] = *(int *)(unaff_EDI + 0x988) + *piVar7;
      piVar6[-2] = iVar4 + iVar5;
      if ((code *)piVar6[0x1f] != (code *)0x0) {
        (*(code *)piVar6[0x1f])();
        fVar12 = (float10)0.0078125;
      }
    }
    else {
      piVar6[-3] = *(int *)(unaff_EDI + 0x988);
      piVar6[-2] = *(int *)(unaff_EDI + 0x98c);
      if (0x1d < *(int *)(unaff_EDI + 0xc418)) {
        piVar6[-0x18] = 0;
        FUN_00461970((void *)piVar6[0x14],piVar6[0x14]);
        FUN_00461970(this_00,piVar6[0x15]);
        fVar12 = (float10)0.0078125;
        *(undefined4 *)(unaff_EDI + 0xc41c) = 0;
        goto LAB_00436ae8;
      }
    }
    if (piVar6[0x1d] == 0) {
      iVar4 = *(int *)(unaff_EDI + 0xc3fc);
      if (0x1d < iVar4) {
        iVar5 = ((piVar6[-3] - piVar6[-1]) * iVar4) / 100;
        iVar4 = ((piVar6[-2] - *piVar6) * iVar4) / 100;
        if ((iVar5 == 0) && (iVar4 == 0)) {
          piVar6[-1] = piVar6[-3];
          *piVar6 = piVar6[-2];
        }
        else {
          piVar6[-1] = piVar6[-1] + iVar5;
          *piVar6 = *piVar6 + iVar4;
        }
      }
    }
    else {
      piVar6[0x1d] = 0;
      piVar6[-1] = piVar6[-3];
      *piVar6 = piVar6[-2];
    }
    iVar4 = piVar6[0x14];
    fStack_c = (float)((float10)piVar6[-1] * fVar12);
    fStack_8 = (float)((float10)*piVar6 * fVar12);
    if (iVar4 != 0) {
      for (puVar3 = *(undefined4 **)(DAT_004ce8cc + 0x8856b8); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        piVar7 = (int *)*puVar3;
        if (*piVar7 == iVar4) goto LAB_00436a7b;
      }
      for (puVar3 = *(undefined4 **)(DAT_004ce8cc + 0x8856c0); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        piVar7 = (int *)*puVar3;
        if (*piVar7 == iVar4) goto LAB_00436a7b;
      }
    }
    goto LAB_00436aa9;
  }
  goto LAB_00436ae8;
LAB_00436a7b:
  if (piVar7 != (int *)0x0) {
    piVar7[0x10c] = (int)(fStack_c + 32.0 + 192.0);
    piVar7[0x10d] = (int)(fStack_8 + 16.0);
    piVar7[0x10e] = 0;
  }
LAB_00436aa9:
  iVar4 = piVar6[0x15];
  if (iVar4 != 0) {
    for (puVar3 = *(undefined4 **)(DAT_004ce8cc + 0x8856b8); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      piVar7 = (int *)*puVar3;
      if (*piVar7 == iVar4) goto LAB_00436b0a;
    }
    for (puVar3 = *(undefined4 **)(DAT_004ce8cc + 0x8856c0); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      piVar7 = (int *)*puVar3;
      if (*piVar7 == iVar4) goto LAB_00436b0a;
    }
  }
LAB_00436ae8:
  piVar6 = piVar6 + 0x39;
  local_10 = local_10 + -1;
  if (local_10 == 0) {
    return 0;
  }
  goto LAB_0043690b;
LAB_00436b0a:
  if (piVar7 != (int *)0x0) {
    piVar7[0x10c] = (int)(fStack_c + 32.0 + 192.0);
    piVar7[0x10d] = (int)(fStack_8 + 16.0);
    piVar7[0x10e] = 0;
  }
  goto LAB_00436ae8;
}


