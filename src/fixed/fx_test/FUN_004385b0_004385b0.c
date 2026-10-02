/* undefined __stdcall FUN_004385b0(int param_1) @ 004385b0  1912 bytes */

#include "th12.h"

void __stdcall FUN_004385b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  void *extraout_ECX_05;
  undefined4 extraout_ECX_06;
  void *extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  void *extraout_ECX_11;
  undefined4 extraout_ECX_12;
  void *extraout_ECX_13;
  undefined4 extraout_ECX_14;
  void *pvVar8;
  void *extraout_ECX_15;
  int iVar9;
  int *piVar10;
  int iVar11;
  float10 fVar12;
  ulonglong uVar13;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = (DAT_004b0c94 + (int)DAT_004b0c90 * 2) * 0x40;
  puVar3 = &DAT_004b31d8 + iVar2;
  iVar4 = (int)DAT_004b0c48 / DAT_004b0cd4;
  if ((int)DAT_004b0c48 < DAT_004b0cd0) {
    piVar10 = (int *)(param_1 + 0x8314);
    iVar11 = 8;
    pvVar8 = DAT_004b0c48;
    do {
      FUN_00461970(pvVar8,*piVar10);
      piVar10 = piVar10 + 0x39;
      iVar11 = iVar11 + -1;
      pvVar8 = extraout_ECX_01;
    } while (iVar11 != 0);
  }
  else {
    pvVar8 = DAT_004b0c48;
    if (0 < iVar4) {
      piVar10 = (int *)(param_1 + 0x8314);
      local_34 = iVar4;
LAB_00438608:
      iVar11 = *piVar10;
      if (iVar11 != 0) {
        for (puVar5 = *(undefined4 **)(DAT_004ce8cc + 0x8856b8); puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)puVar5[1]) {
          piVar6 = (int *)*puVar5;
          if (*piVar6 == iVar11) goto LAB_0043864c;
        }
        for (puVar5 = *(undefined4 **)(DAT_004ce8cc + 0x8856c0); puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)puVar5[1]) {
          piVar6 = (int *)*puVar5;
          if (*piVar6 == iVar11) goto LAB_0043864c;
        }
      }
      goto LAB_0043867f;
    }
  }
LAB_0043873c:
  if (*(int *)(param_1 + 0xc41c) == 0) {
    fVar12 = FUN_004646e0(0.0);
    *(float *)(param_1 + 0xc48c) = (float)fVar12;
    pvVar8 = extraout_ECX_02;
  }
  if (*(int *)(param_1 + 0xc41c) == iVar4) {
    return;
  }
  iVar11 = 0;
  if (0 < iVar4) {
    puVar5 = (undefined4 *)(param_1 + 0x82d0);
LAB_0043877c:
    puVar5[-5] = *(undefined4 *)(param_1 + 0x988);
    puVar5[-4] = *(undefined4 *)(param_1 + 0x98c);
    iVar7 = puVar5[0x10];
    if (iVar7 != 0) {
      for (puVar1 = *(undefined4 **)(DAT_004ce8cc + 0x8856b8); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[1]) {
        piVar10 = (int *)*puVar1;
        if (*piVar10 == iVar7) goto LAB_004387d0;
      }
      for (puVar1 = *(undefined4 **)(DAT_004ce8cc + 0x8856c0); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[1]) {
        piVar10 = (int *)*puVar1;
        if (*piVar10 == iVar7) goto LAB_004387d0;
      }
    }
    goto LAB_004387fd;
  }
LAB_00438ca8:
  iVar2 = 8 - iVar11;
  piVar10 = (int *)(iVar11 * 0xe4 + 0x8310 + param_1);
  do {
    piVar10[-0x2c] = 0;
    FUN_00461970(pvVar8,*piVar10);
    piVar10 = piVar10 + 0x39;
    iVar2 = iVar2 + -1;
    pvVar8 = extraout_ECX_15;
  } while (iVar2 != 0);
LAB_00438ce5:
  *(int *)(param_1 + 0xc41c) = iVar4;
  *(undefined4 *)(param_1 + 0x8334) = 1;
  *(undefined4 *)(param_1 + 0x8418) = 1;
  *(undefined4 *)(param_1 + 0x84fc) = 1;
  *(undefined4 *)(param_1 + 0x85e0) = 1;
  *(undefined4 *)(param_1 + 0x86c4) = 1;
  *(undefined4 *)(param_1 + 0x87a8) = 1;
  *(undefined4 *)(param_1 + 0x888c) = 1;
  *(undefined4 *)(param_1 + 0x8970) = 1;
  return;
LAB_0043864c:
  if ((piVar6 != (int *)0x0) && (piVar6[0x11f] = piVar6[0x11f] | 0x10000000, piVar6[6] == 0)) {
    for (piVar6 = (int *)piVar6[5]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
      *(uint *)(*piVar6 + 0x47c) = *(uint *)(*piVar6 + 0x47c) | 0x10000000;
    }
  }
LAB_0043867f:
  *piVar10 = 0;
  pvVar8 = DAT_004b0c90;
  switch(DAT_004b0c94 + (int)DAT_004b0c90 * 2) {
  case 0:
    iVar11 = 0x15;
    puVar5 = &local_18;
    break;
  case 1:
    iVar11 = 0x16;
    puVar5 = &local_14;
    goto LAB_004386bf;
  case 2:
    iVar11 = 0xd;
    puVar5 = &local_10;
    goto LAB_004386f1;
  case 3:
    iVar11 = 0xe;
    puVar5 = &local_c;
    break;
  case 4:
    iVar11 = 0x11;
    puVar5 = &local_8;
LAB_004386bf:
    piVar6 = FUN_0041c6a0(puVar5,iVar11);
    *piVar10 = *piVar6;
    pvVar8 = extraout_ECX_00;
    goto switchD_00438698_caseD_6;
  case 5:
    iVar11 = 0x12;
    puVar5 = &local_4;
LAB_004386f1:
    piVar6 = FUN_0041c6a0(puVar5,iVar11);
    pvVar8 = (void *)*piVar6;
    *piVar10 = (int)pvVar8;
  default:
    goto switchD_00438698_caseD_6;
  }
  piVar6 = FUN_0041c6a0(puVar5,iVar11);
  *piVar10 = *piVar6;
  pvVar8 = extraout_ECX;
switchD_00438698_caseD_6:
  piVar10 = piVar10 + 0x39;
  local_34 = local_34 + -1;
  if (local_34 == 0) goto LAB_0043873c;
  goto LAB_00438608;
LAB_004387d0:
  if ((piVar10 != (int *)0x0) && (piVar10[0x11f] = piVar10[0x11f] | 0x10000000, piVar10[6] == 0)) {
    for (piVar10 = (int *)piVar10[5]; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
      *(uint *)(*piVar10 + 0x47c) = *(uint *)(*piVar10 + 0x47c) | 0x10000000;
    }
  }
LAB_004387fd:
  puVar5[0x10] = 0;
  puVar5[0x18] = iVar11;
  pvVar8 = DAT_004b0c90;
  switch(DAT_004b0c94 + (int)DAT_004b0c90 * 2) {
  case 0:
    iVar7 = *(int *)(iVar2 + 0x4b31d4 + iVar4 * 4);
    iVar9 = *(int *)(param_1 + 0xa2c);
    uVar13 = FUN_004931e0(iVar9,puVar3);
    puVar5[-3] = (int)uVar13;
    uVar13 = FUN_004931e0(extraout_ECX_03,iVar9 + 0x28 + (iVar7 + iVar11) * 8);
    puVar5[-2] = (int)uVar13;
    uVar13 = FUN_004931e0(*(int *)(iVar2 + 0x4b31d4 + iVar4 * 4) + iVar11,
                          *(undefined4 *)(param_1 + 0xa2c));
    puVar5[-1] = (int)uVar13;
    uVar13 = FUN_004931e0(extraout_ECX_04,(int)(uVar13 >> 0x20));
    *puVar5 = (int)uVar13;
    piVar10 = puVar5 + -1;
    if (*(int *)(param_1 + 0xc598) == 0) {
      piVar10 = puVar5 + -3;
    }
    iVar9 = *(int *)(param_1 + 0x98c) + piVar10[1];
    iVar7 = *(int *)(param_1 + 0x988) + *piVar10;
    puVar5[-6] = iVar9;
    puVar5[-7] = iVar7;
    puVar5[-4] = iVar9;
    puVar5[-5] = iVar7;
    FUN_004615a0((void *)0x0,*(void **)(param_1 + 0x10),&local_30,0x12,0);
    puVar5[0x10] = local_30;
    pvVar8 = extraout_ECX_05;
    break;
  case 1:
    iVar7 = *(int *)(param_1 + 0xa2c);
    iVar9 = *(int *)(iVar2 + 0x4b31d4 + iVar4 * 4) + iVar11;
    uVar13 = FUN_004931e0(puVar3,iVar9);
    puVar5[-3] = (int)uVar13;
    uVar13 = FUN_004931e0(iVar7 + 0x28 + iVar9 * 8,(int)(uVar13 >> 0x20));
    puVar5[-2] = (int)uVar13;
    iVar7 = *(int *)(iVar2 + 0x4b31d4 + iVar4 * 4);
    iVar9 = *(int *)(param_1 + 0xa2c);
    uVar13 = FUN_004931e0(iVar9,puVar3);
    puVar5[-1] = (int)uVar13;
    uVar13 = FUN_004931e0(extraout_ECX_06,iVar9 + 0x78 + (iVar7 + iVar11) * 8);
    *puVar5 = (int)uVar13;
    piVar10 = puVar5 + -1;
    if (*(int *)(param_1 + 0xc598) == 0) {
      piVar10 = puVar5 + -3;
    }
    iVar7 = *(int *)(param_1 + 0x988) + *piVar10;
    iVar9 = *(int *)(param_1 + 0x98c) + piVar10[1];
    puVar5[-7] = iVar7;
    puVar5[-6] = iVar9;
    puVar5[-5] = iVar7;
    puVar5[-4] = iVar9;
    FUN_004615a0((void *)0x0,*(void **)(param_1 + 0x10),&local_2c,0x13,0);
    puVar5[0x10] = local_2c;
    pvVar8 = extraout_ECX_07;
    break;
  case 2:
    uVar13 = FUN_004931e0(*(int *)(iVar2 + 0x4b31d4 + iVar4 * 4) + iVar11,
                          *(undefined4 *)(param_1 + 0xa2c));
    puVar5[-3] = (int)uVar13;
    uVar13 = FUN_004931e0(extraout_ECX_08,(int)(uVar13 >> 0x20));
    puVar5[-2] = (int)uVar13;
    iVar7 = *(int *)(param_1 + 0xa2c);
    iVar9 = *(int *)(iVar2 + 0x4b31d4 + iVar4 * 4) + iVar11;
    uVar13 = FUN_004931e0(puVar3,iVar9);
    puVar5[-1] = (int)uVar13;
    uVar13 = FUN_004931e0(iVar7 + 0x78 + iVar9 * 8,(int)(uVar13 >> 0x20));
    *puVar5 = (int)uVar13;
    piVar10 = puVar5 + -1;
    if (*(int *)(param_1 + 0xc598) == 0) {
      piVar10 = puVar5 + -3;
    }
    iVar7 = *(int *)(param_1 + 0x988) + *piVar10;
    iVar9 = *(int *)(param_1 + 0x98c) + piVar10[1];
    puVar5[-7] = iVar7;
    puVar5[-6] = iVar9;
    puVar5[-5] = iVar7;
    puVar5[-4] = iVar9;
    FUN_004615a0((void *)0x0,*(void **)(param_1 + 0x10),&local_28,0xb,0);
    pvVar8 = local_28;
    goto LAB_00438c82;
  case 3:
    iVar7 = *(int *)(iVar2 + 0x4b31d4 + iVar4 * 4);
    iVar9 = *(int *)(param_1 + 0xa2c);
    uVar13 = FUN_004931e0(iVar9,puVar3);
    puVar5[-3] = (int)uVar13;
    uVar13 = FUN_004931e0(extraout_ECX_09,iVar9 + 0x28 + (iVar7 + iVar11) * 8);
    puVar5[-2] = (int)uVar13;
    uVar13 = FUN_004931e0(*(int *)(iVar2 + 0x4b31d4 + iVar4 * 4) + iVar11,
                          *(undefined4 *)(param_1 + 0xa2c));
    puVar5[-1] = (int)uVar13;
    uVar13 = FUN_004931e0(extraout_ECX_10,(int)(uVar13 >> 0x20));
    *puVar5 = (int)uVar13;
    piVar10 = puVar5 + -1;
    if (*(int *)(param_1 + 0xc598) == 0) {
      piVar10 = puVar5 + -3;
    }
    iVar9 = *(int *)(param_1 + 0x98c) + piVar10[1];
    iVar7 = *piVar10 + *(int *)(param_1 + 0x988);
    puVar5[-6] = iVar9;
    puVar5[-7] = iVar7;
    puVar5[-4] = iVar9;
    puVar5[-5] = iVar7;
    FUN_004615a0((void *)0x0,*(void **)(param_1 + 0x10),&local_24,0xc,0);
    puVar5[0x10] = local_24;
    pvVar8 = extraout_ECX_11;
    break;
  case 4:
    iVar7 = *(int *)(param_1 + 0xa2c);
    iVar9 = *(int *)(iVar2 + 0x4b31d4 + iVar4 * 4) + iVar11;
    uVar13 = FUN_004931e0(puVar3,iVar9);
    puVar5[-3] = (int)uVar13;
    uVar13 = FUN_004931e0(iVar7 + 0x28 + iVar9 * 8,(int)(uVar13 >> 0x20));
    puVar5[-2] = (int)uVar13;
    iVar7 = *(int *)(iVar2 + 0x4b31d4 + iVar4 * 4);
    iVar9 = *(int *)(param_1 + 0xa2c);
    uVar13 = FUN_004931e0(iVar9,puVar3);
    puVar5[-1] = (int)uVar13;
    uVar13 = FUN_004931e0(extraout_ECX_12,iVar9 + 0x78 + (iVar7 + iVar11) * 8);
    *puVar5 = (int)uVar13;
    piVar10 = puVar5 + -1;
    if (*(int *)(param_1 + 0xc598) == 0) {
      piVar10 = puVar5 + -3;
    }
    iVar7 = *(int *)(param_1 + 0x988) + *piVar10;
    iVar9 = *(int *)(param_1 + 0x98c) + piVar10[1];
    puVar5[-7] = iVar7;
    puVar5[-6] = iVar9;
    puVar5[-5] = iVar7;
    puVar5[-4] = iVar9;
    FUN_004615a0((void *)0x0,*(void **)(param_1 + 0x10),&local_20,0xf,0);
    puVar5[0x10] = local_20;
    pvVar8 = extraout_ECX_13;
    break;
  case 5:
    uVar13 = FUN_004931e0(*(int *)(iVar2 + 0x4b31d4 + iVar4 * 4) + iVar11,
                          *(undefined4 *)(param_1 + 0xa2c));
    puVar5[-3] = (int)uVar13;
    uVar13 = FUN_004931e0(extraout_ECX_14,(int)(uVar13 >> 0x20));
    puVar5[-2] = (int)uVar13;
    iVar7 = *(int *)(param_1 + 0xa2c);
    iVar9 = *(int *)(iVar2 + 0x4b31d4 + iVar4 * 4) + iVar11;
    uVar13 = FUN_004931e0(puVar3,iVar9);
    puVar5[-1] = (int)uVar13;
    uVar13 = FUN_004931e0(iVar7 + 0x78 + iVar9 * 8,(int)(uVar13 >> 0x20));
    *puVar5 = (int)uVar13;
    piVar10 = puVar5 + -1;
    if (*(int *)(param_1 + 0xc598) == 0) {
      piVar10 = puVar5 + -3;
    }
    iVar7 = *piVar10 + *(int *)(param_1 + 0x988);
    iVar9 = *(int *)(param_1 + 0x98c) + piVar10[1];
    puVar5[-7] = iVar7;
    puVar5[-6] = iVar9;
    puVar5[-5] = iVar7;
    puVar5[-4] = iVar9;
    FUN_004615a0((void *)0x0,*(void **)(param_1 + 0x10),&local_1c,0x10,0);
    pvVar8 = local_1c;
LAB_00438c82:
    puVar5[0x10] = pvVar8;
  }
  puVar5[-0x1c] = 2;
  iVar11 = iVar11 + 1;
  puVar5 = puVar5 + 0x39;
  if (iVar4 <= iVar11) goto code_r0x00438ca1;
  goto LAB_0043877c;
code_r0x00438ca1:
  if (7 < iVar11) goto LAB_00438ce5;
  goto LAB_00438ca8;
}


