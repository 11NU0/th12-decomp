/* longlong __fastcall FUN_00441530(undefined4 param_1, uint param_2, int param_3) @ 00441530  4417 bytes */
#include "th12.h"

longlong __fastcall FUN_00441530(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint uVar6;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int extraout_ECX_14;
  int extraout_ECX_15;
  int extraout_ECX_16;
  int extraout_ECX_17;
  int extraout_ECX_18;
  int extraout_ECX_19;
  int extraout_ECX_20;
  int extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 uVar7;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  undefined4 extraout_ECX_29;
  undefined4 extraout_ECX_30;
  undefined4 extraout_ECX_31;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  int *extraout_EDX_02;
  int *extraout_EDX_03;
  int *extraout_EDX_04;
  int *extraout_EDX_05;
  int *extraout_EDX_06;
  int *extraout_EDX_07;
  int *extraout_EDX_08;
  int *extraout_EDX_09;
  int *extraout_EDX_10;
  int *extraout_EDX_11;
  int *extraout_EDX_12;
  int *extraout_EDX_13;
  int *extraout_EDX_14;
  short *extraout_EDX_15;
  short *extraout_EDX_16;
  short *extraout_EDX_17;
  short *extraout_EDX_18;
  short *extraout_EDX_19;
  short *extraout_EDX_20;
  short *extraout_EDX_21;
  short *extraout_EDX_22;
  short *extraout_EDX_23;
  short *extraout_EDX_24;
  short *psVar8;
  int *piVar9;
  uint uVar10;
  short *psVar11;
  int iVar12;
  longlong lVar13;
  
  iVar12 = 0;
  if (0 < *(int *)(param_3 + 0x28)) {
LAB_00441545:
    iVar1 = *(int *)(param_3 + 0x2cc);
    if (iVar1 == 0) {
LAB_00441552:
      piVar2 = (int *)0x0;
    }
    else {
      for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        piVar2 = (int *)*puVar5;
        if (*piVar2 == iVar1) goto LAB_00441597;
      }
      puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
      if (puVar5 == (undefined4 *)0x0) goto LAB_00441552;
      do {
        piVar2 = (int *)*puVar5;
        if (*piVar2 == iVar1) goto LAB_00441597;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar2 = (int *)0x0;
    }
    goto LAB_0044159b;
  }
LAB_004416b5:
  lVar13 = (ulonglong)param_2 << 0x20;
  if (iVar12 + 1 < 5) {
    iVar12 = iVar12 + 0x19;
LAB_004416d0:
    iVar1 = *(int *)(param_3 + 0x2cc);
    if (iVar1 == 0) {
LAB_004416e1:
      piVar2 = (int *)0x0;
    }
    else {
      for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        piVar2 = (int *)*puVar5;
        if (*piVar2 == iVar1) goto LAB_00441739;
      }
      puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
      if (puVar5 == (undefined4 *)0x0) goto LAB_004416e1;
      do {
        piVar2 = (int *)*puVar5;
        if (*piVar2 == iVar1) goto LAB_00441739;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar2 = (int *)0x0;
    }
    goto LAB_0044173d;
  }
LAB_00441850:
  piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
  if (0 < *(int *)(param_3 + 0x28)) {
    uVar6 = *(uint *)(param_3 + 0x2cc);
    if (uVar6 != 0) {
      for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        puVar3 = (uint *)*puVar5;
        if (*puVar3 == uVar6) goto LAB_004418ae;
      }
      puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
      if (puVar5 != (undefined4 *)0x0) {
        do {
          puVar3 = (uint *)*puVar5;
          if (*puVar3 == uVar6) goto LAB_004418ae;
          puVar5 = (undefined4 *)puVar5[1];
        } while (puVar5 != (undefined4 *)0x0);
        puVar3 = (uint *)0x0;
        goto LAB_004418b2;
      }
    }
    puVar3 = (uint *)0x0;
    goto LAB_004418b2;
  }
  goto LAB_00441d51;
LAB_00441597:
  if (piVar2 == (int *)0x0) {
LAB_0044159b:
    *(undefined4 *)(param_3 + 0x2cc) = 0;
  }
  for (piVar4 = piVar2 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    piVar9 = (int *)*piVar4;
    if (((int)*(short *)((int)piVar9 + 0x3ea) == iVar12 + 0x13) ||
       ((iVar12 + 0x13 == -1 && (piVar9 != piVar2)))) goto LAB_004415cf;
  }
  piVar9 = (int *)0x0;
LAB_004415cf:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    piVar4 = extraout_ECX;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  FUN_00455630(piVar4,(short *)0x1e,(uint)piVar9);
  iVar1 = *(int *)(param_3 + 0x2cc);
  if (iVar1 != 0) {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar2 = (int *)*puVar5;
      if (*piVar2 == iVar1) goto LAB_0044164e;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar5 != (undefined4 *)0x0) {
      do {
        piVar2 = (int *)*puVar5;
        if (*piVar2 == iVar1) goto LAB_0044164e;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar2 = (int *)0x0;
      goto LAB_00441652;
    }
  }
  piVar2 = (int *)0x0;
LAB_00441652:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_0044165c:
  for (piVar4 = piVar2 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    piVar9 = (int *)*piVar4;
    if (((int)*(short *)((int)piVar9 + 0x3ea) == iVar12 + 0x18) ||
       ((iVar12 + 0x18 == -1 && (piVar9 != piVar2)))) goto LAB_00441682;
  }
  piVar9 = (int *)0x0;
LAB_00441682:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    piVar4 = extraout_ECX_00;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(piVar4,(short *)0x1e,(uint)piVar9);
  param_2 = (uint)((ulonglong)lVar13 >> 0x20);
  iVar12 = iVar12 + 1;
  if (*(int *)(param_3 + 0x28) <= iVar12) goto LAB_004416b5;
  goto LAB_00441545;
LAB_0044164e:
  if (piVar2 != (int *)0x0) goto LAB_0044165c;
  goto LAB_00441652;
LAB_00441739:
  if (piVar2 == (int *)0x0) {
LAB_0044173d:
    *(undefined4 *)(param_3 + 0x2cc) = 0;
  }
  for (piVar4 = piVar2 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    piVar9 = (int *)*piVar4;
    if (((int)*(short *)((int)piVar9 + 0x3ea) == iVar12 + -5) ||
       ((iVar12 + -5 == -1 && (piVar9 != piVar2)))) goto LAB_00441771;
  }
  piVar9 = (int *)0x0;
LAB_00441771:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    piVar4 = extraout_ECX_01;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1f;
  FUN_00455630(piVar4,(short *)0x1f,(uint)piVar9);
  iVar1 = *(int *)(param_3 + 0x2cc);
  if (iVar1 != 0) {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar2 = (int *)*puVar5;
      if (*piVar2 == iVar1) goto LAB_004417ee;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar5 != (undefined4 *)0x0) {
      do {
        piVar2 = (int *)*puVar5;
        if (*piVar2 == iVar1) goto LAB_004417ee;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar2 = (int *)0x0;
      goto LAB_004417f2;
    }
  }
  piVar2 = (int *)0x0;
LAB_004417f2:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_004417fc:
  for (piVar4 = piVar2 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    piVar9 = (int *)*piVar4;
    if ((*(short *)((int)piVar9 + 0x3ea) == iVar12) || ((iVar12 == -1 && (piVar9 != piVar2))))
    goto LAB_00441822;
  }
  piVar9 = (int *)0x0;
LAB_00441822:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    piVar4 = extraout_ECX_02;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1f;
  lVar13 = FUN_00455630(piVar4,(short *)0x1f,(uint)piVar9);
  iVar12 = iVar12 + 1;
  if (0x1c < iVar12) goto LAB_00441850;
  goto LAB_004416d0;
LAB_004417ee:
  if (piVar2 != (int *)0x0) goto LAB_004417fc;
  goto LAB_004417f2;
LAB_004418ae:
  if (puVar3 == (uint *)0x0) {
LAB_004418b2:
    *(undefined4 *)(param_3 + 0x2cc) = 0;
  }
  for (puVar3 = puVar3 + 4; puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[1]) {
    uVar6 = *puVar3;
    uVar10 = uVar6;
    if (*(short *)(uVar6 + 0x3ea) == 0x1d) goto LAB_004418d4;
  }
  uVar10 = 0;
LAB_004418d4:
  if (*(code **)(uVar10 + 0x494) != (code *)0x0) {
    (**(code **)(uVar10 + 0x494))();
    uVar6 = extraout_ECX_03;
  }
  *(undefined2 *)(uVar10 + 0x3c4) = 0x1e;
  FUN_00455630(uVar6,(short *)0x1e,uVar10);
  uVar6 = *(uint *)(param_3 + 0x2cc);
  if (uVar6 != 0) {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      puVar3 = (uint *)*puVar5;
      if (*puVar3 == uVar6) goto LAB_0044194e;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar5 != (undefined4 *)0x0) {
      do {
        puVar3 = (uint *)*puVar5;
        if (*puVar3 == uVar6) goto LAB_0044194e;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      puVar3 = (uint *)0x0;
      goto LAB_00441952;
    }
  }
  puVar3 = (uint *)0x0;
LAB_00441952:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
  goto LAB_00441958;
LAB_004419e7:
  if (puVar3 == (uint *)0x0) goto LAB_004419eb;
  goto LAB_004419f1;
LAB_00441a87:
  if (piVar4 == (int *)0x0) goto LAB_00441a8b;
  goto LAB_00441a91;
LAB_00441b27:
  if (piVar4 == (int *)0x0) goto LAB_00441b2b;
  goto LAB_00441b31;
LAB_00441bc7:
  if (piVar4 == (int *)0x0) goto LAB_00441bcb;
  goto LAB_00441bd1;
LAB_00441c67:
  if (piVar4 == (int *)0x0) goto LAB_00441c6b;
  goto LAB_00441c71;
LAB_00441d07:
  if (piVar4 == (int *)0x0) goto LAB_00441d0b;
  goto LAB_00441d11;
LAB_004422be:
  if (piVar4 == (int *)0x0) goto LAB_004422c2;
  goto LAB_004422c8;
LAB_0044235e:
  if (piVar4 == (int *)0x0) goto LAB_00442362;
  goto LAB_00442368;
LAB_004423fe:
  if (piVar4 != (int *)0x0) goto LAB_00442408;
  goto LAB_00442402;
LAB_00441dae:
  if (piVar4 == (int *)0x0) goto LAB_00441db2;
  goto LAB_00441db8;
LAB_00441e4e:
  if (piVar4 == (int *)0x0) goto LAB_00441e52;
  goto LAB_00441e58;
LAB_00441eee:
  if (piVar4 == (int *)0x0) goto LAB_00441ef2;
  goto LAB_00441ef8;
LAB_00441f8e:
  if (piVar4 == (int *)0x0) goto LAB_00441f92;
  goto LAB_00441f98;
LAB_0044202e:
  if (piVar4 == (int *)0x0) goto LAB_00442032;
  goto LAB_00442038;
LAB_004420ce:
  if (piVar4 == (int *)0x0) goto LAB_004420d2;
  goto LAB_004420d8;
LAB_0044216e:
  if (piVar4 == (int *)0x0) goto LAB_00442172;
  goto LAB_00442178;
LAB_0044220e:
  if (piVar4 != (int *)0x0) goto LAB_00442218;
  goto LAB_00442212;
LAB_0044194e:
  if (puVar3 == (uint *)0x0) goto LAB_00441952;
LAB_00441958:
  for (puVar3 = puVar3 + 4; puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[1]) {
    uVar6 = *puVar3;
    uVar10 = uVar6;
    if (*(short *)(uVar6 + 0x3ea) == 0x1e) goto LAB_00441974;
  }
  uVar10 = 0;
LAB_00441974:
  if (*(code **)(uVar10 + 0x494) != (code *)0x0) {
    (**(code **)(uVar10 + 0x494))();
    uVar6 = extraout_ECX_04;
  }
  *(undefined2 *)(uVar10 + 0x3c4) = 0x1e;
  FUN_00455630(uVar6,(short *)0x1e,uVar10);
  uVar6 = *(uint *)(param_3 + 0x2cc);
  if (uVar6 == 0) {
LAB_0044199d:
    puVar3 = (uint *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      puVar3 = (uint *)*puVar5;
      if (*puVar3 == uVar6) goto LAB_004419e7;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar5 == (undefined4 *)0x0) goto LAB_0044199d;
    do {
      puVar3 = (uint *)*puVar5;
      if (*puVar3 == uVar6) goto LAB_004419e7;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    puVar3 = (uint *)0x0;
  }
LAB_004419eb:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_004419f1:
  for (puVar3 = puVar3 + 4; puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[1]) {
    uVar6 = *puVar3;
    uVar10 = uVar6;
    if (*(short *)(uVar6 + 0x3ea) == 0x1f) goto LAB_00441a15;
  }
  uVar10 = 0;
LAB_00441a15:
  if (*(code **)(uVar10 + 0x494) != (code *)0x0) {
    (**(code **)(uVar10 + 0x494))();
    uVar6 = extraout_ECX_05;
  }
  *(undefined2 *)(uVar10 + 0x3c4) = 0x1e;
  lVar13 = FUN_00455630(uVar6,(short *)0x1e,uVar10);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00441a3e:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_00441a87;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00441a3e;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_00441a87;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00441a8b:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00441a91:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x20;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x20) goto LAB_00441ab4;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00441ab4:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_06;
    piVar2 = extraout_EDX;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00441add:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_00441b27;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00441add;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_00441b27;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00441b2b:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00441b31:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x21;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x21) goto LAB_00441b54;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00441b54:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_07;
    piVar2 = extraout_EDX_00;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00441b7d:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_00441bc7;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00441b7d;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_00441bc7;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00441bcb:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00441bd1:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x22;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x22) goto LAB_00441bf4;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00441bf4:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_08;
    piVar2 = extraout_EDX_01;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00441c1d:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_00441c67;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00441c1d;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_00441c67;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00441c6b:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00441c71:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x23;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x23) goto LAB_00441c94;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00441c94:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_09;
    piVar2 = extraout_EDX_02;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00441cbd:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_00441d07;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00441cbd;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_00441d07;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00441d0b:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00441d11:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x24;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x24) goto LAB_00441d34;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00441d34:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_10;
    piVar2 = extraout_EDX_03;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
LAB_00441d51:
  iVar12 = *(int *)(param_3 + 0x28);
  if (iVar12 < 2) {
    if (0 < iVar12) {
      return CONCAT44(piVar2,iVar12);
    }
    iVar12 = *(int *)(param_3 + 0x2cc);
    if (iVar12 == 0) {
LAB_00442278:
      piVar4 = (int *)0x0;
    }
    else {
      for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        piVar4 = (int *)*puVar5;
        piVar2 = DAT_004ce8cc;
        if (*(int *)*puVar5 == iVar12) goto LAB_004422be;
      }
      puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
      piVar2 = DAT_004ce8cc;
      if (puVar5 == (undefined4 *)0x0) goto LAB_00442278;
      do {
        piVar2 = (int *)*puVar5;
        piVar4 = piVar2;
        if (*piVar2 == iVar12) goto LAB_004422be;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar4 = (int *)0x0;
    }
LAB_004422c2:
    *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_004422c8:
    piVar4 = piVar4 + 4;
    if (piVar4 != (int *)0x0) {
      iVar12 = 0x25;
      do {
        piVar2 = (int *)*piVar4;
        piVar9 = piVar2;
        if (*(short *)((int)piVar2 + 0x3ea) == 0x25) goto LAB_004422e8;
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
    }
    piVar9 = (int *)0x0;
LAB_004422e8:
    if ((code *)piVar9[0x125] != (code *)0x0) {
      (*(code *)piVar9[0x125])();
      iVar12 = extraout_ECX_19;
      piVar2 = extraout_EDX_12;
    }
    *(undefined2 *)(piVar9 + 0xf1) = 0x1f;
    lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
    iVar12 = *(int *)(param_3 + 0x2cc);
    if (iVar12 == 0) {
LAB_00442317:
      piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
      piVar4 = (int *)0x0;
    }
    else {
      for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        piVar4 = (int *)*puVar5;
        piVar2 = DAT_004ce8cc;
        if (*(int *)*puVar5 == iVar12) goto LAB_0044235e;
      }
      puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
      lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
      if (puVar5 == (undefined4 *)0x0) goto LAB_00442317;
      do {
        piVar2 = (int *)*puVar5;
        piVar4 = piVar2;
        if (*piVar2 == iVar12) goto LAB_0044235e;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar4 = (int *)0x0;
    }
LAB_00442362:
    *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00442368:
    piVar4 = piVar4 + 4;
    if (piVar4 != (int *)0x0) {
      iVar12 = 0x26;
      do {
        piVar2 = (int *)*piVar4;
        piVar9 = piVar2;
        if (*(short *)((int)piVar2 + 0x3ea) == 0x26) goto LAB_00442388;
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
    }
    piVar9 = (int *)0x0;
LAB_00442388:
    if ((code *)piVar9[0x125] != (code *)0x0) {
      (*(code *)piVar9[0x125])();
      iVar12 = extraout_ECX_20;
      piVar2 = extraout_EDX_13;
    }
    *(undefined2 *)(piVar9 + 0xf1) = 0x1f;
    lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
    iVar12 = *(int *)(param_3 + 0x2cc);
    if (iVar12 == 0) {
LAB_004423b7:
      piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
      piVar4 = (int *)0x0;
    }
    else {
      for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        piVar4 = (int *)*puVar5;
        piVar2 = DAT_004ce8cc;
        if (*(int *)*puVar5 == iVar12) goto LAB_004423fe;
      }
      puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
      lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
      if (puVar5 == (undefined4 *)0x0) goto LAB_004423b7;
      do {
        piVar2 = (int *)*puVar5;
        piVar4 = piVar2;
        if (*piVar2 == iVar12) goto LAB_004423fe;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar4 = (int *)0x0;
    }
LAB_00442402:
    *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00442408:
    piVar4 = piVar4 + 4;
    if (piVar4 != (int *)0x0) {
      iVar12 = 0x27;
      do {
        piVar2 = (int *)*piVar4;
        piVar9 = piVar2;
        if (*(short *)((int)piVar2 + 0x3ea) == 0x27) goto LAB_00442438;
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
    }
    piVar9 = (int *)0x0;
LAB_00442438:
    if ((code *)piVar9[0x125] != (code *)0x0) {
      (*(code *)piVar9[0x125])();
      iVar12 = extraout_ECX_21;
      piVar2 = extraout_EDX_14;
    }
    *(undefined2 *)(piVar9 + 0xf1) = 0x1f;
    FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
    piVar2 = FUN_00461920(*(undefined4 *)(param_3 + 0x2cc),(int)DAT_004ce8cc,
                          *(undefined4 *)(param_3 + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(param_3 + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar7 = extraout_ECX_22;
    psVar8 = extraout_EDX_15;
    if (piVar2 != (int *)0x0) {
      uVar7 = 0x28;
      do {
        psVar8 = (short *)*piVar2;
        psVar11 = psVar8;
        if (psVar8[0x1f5] == 0x28) goto LAB_004424a8;
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    psVar11 = (short *)0x0;
LAB_004424a8:
    if (*(code **)(psVar11 + 0x24a) != (code *)0x0) {
      (**(code **)(psVar11 + 0x24a))();
      uVar7 = extraout_ECX_23;
      psVar8 = extraout_EDX_16;
    }
    psVar11[0x1e2] = 0x1f;
    FUN_00455630(uVar7,psVar8,(uint)psVar11);
    piVar2 = FUN_00461920(*(undefined4 *)(param_3 + 0x2cc),(int)DAT_004ce8cc,
                          *(undefined4 *)(param_3 + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(param_3 + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar7 = extraout_ECX_24;
    psVar8 = extraout_EDX_17;
    if (piVar2 != (int *)0x0) {
      uVar7 = 0x29;
      do {
        psVar8 = (short *)*piVar2;
        psVar11 = psVar8;
        if (psVar8[0x1f5] == 0x29) goto LAB_00442518;
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    psVar11 = (short *)0x0;
LAB_00442518:
    if (*(code **)(psVar11 + 0x24a) != (code *)0x0) {
      (**(code **)(psVar11 + 0x24a))();
      uVar7 = extraout_ECX_25;
      psVar8 = extraout_EDX_18;
    }
    psVar11[0x1e2] = 0x1f;
    FUN_00455630(uVar7,psVar8,(uint)psVar11);
    piVar2 = FUN_00461920(*(undefined4 *)(param_3 + 0x2cc),(int)DAT_004ce8cc,
                          *(undefined4 *)(param_3 + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(param_3 + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar7 = extraout_ECX_26;
    psVar8 = extraout_EDX_19;
    if (piVar2 != (int *)0x0) {
      uVar7 = 0x2a;
      do {
        psVar8 = (short *)*piVar2;
        psVar11 = psVar8;
        if (psVar8[0x1f5] == 0x2a) goto LAB_00442588;
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    psVar11 = (short *)0x0;
LAB_00442588:
    if (*(code **)(psVar11 + 0x24a) != (code *)0x0) {
      (**(code **)(psVar11 + 0x24a))();
      uVar7 = extraout_ECX_27;
      psVar8 = extraout_EDX_20;
    }
    psVar11[0x1e2] = 0x1f;
    FUN_00455630(uVar7,psVar8,(uint)psVar11);
    piVar2 = FUN_00461920(*(undefined4 *)(param_3 + 0x2cc),(int)DAT_004ce8cc,
                          *(undefined4 *)(param_3 + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(param_3 + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar7 = extraout_ECX_28;
    psVar8 = extraout_EDX_21;
    if (piVar2 != (int *)0x0) {
      uVar7 = 0x2b;
      do {
        psVar8 = (short *)*piVar2;
        psVar11 = psVar8;
        if (psVar8[0x1f5] == 0x2b) goto LAB_004425f8;
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    psVar11 = (short *)0x0;
LAB_004425f8:
    if (*(code **)(psVar11 + 0x24a) != (code *)0x0) {
      (**(code **)(psVar11 + 0x24a))();
      uVar7 = extraout_ECX_29;
      psVar8 = extraout_EDX_22;
    }
    psVar11[0x1e2] = 0x1f;
    FUN_00455630(uVar7,psVar8,(uint)psVar11);
    piVar2 = FUN_00461920(*(undefined4 *)(param_3 + 0x2cc),(int)DAT_004ce8cc,
                          *(undefined4 *)(param_3 + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(param_3 + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar7 = extraout_ECX_30;
    psVar8 = extraout_EDX_23;
    if (piVar2 != (int *)0x0) {
      uVar7 = 0x2c;
      do {
        psVar8 = (short *)*piVar2;
        psVar11 = psVar8;
        if (psVar8[0x1f5] == 0x2c) goto LAB_00442659;
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    psVar11 = (short *)0x0;
LAB_00442659:
    if (*(code **)(psVar11 + 0x24a) != (code *)0x0) {
      (**(code **)(psVar11 + 0x24a))();
      uVar7 = extraout_ECX_31;
      psVar8 = extraout_EDX_24;
    }
    psVar11[0x1e2] = 0x1f;
    lVar13 = FUN_00455630(uVar7,psVar8,(uint)psVar11);
    return lVar13;
  }
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00441d67:
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_00441dae;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    piVar2 = DAT_004ce8cc;
    if (puVar5 == (undefined4 *)0x0) goto LAB_00441d67;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_00441dae;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00441db2:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00441db8:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x25;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x25) goto LAB_00441dd8;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00441dd8:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_11;
    piVar2 = extraout_EDX_04;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00441e07:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_00441e4e;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00441e07;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_00441e4e;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00441e52:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00441e58:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x26;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x26) goto LAB_00441e78;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00441e78:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_12;
    piVar2 = extraout_EDX_05;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00441ea7:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_00441eee;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00441ea7;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_00441eee;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00441ef2:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00441ef8:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x27;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x27) goto LAB_00441f18;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00441f18:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_13;
    piVar2 = extraout_EDX_06;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00441f47:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_00441f8e;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00441f47;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_00441f8e;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00441f92:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00441f98:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x28;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x28) goto LAB_00441fb8;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00441fb8:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_14;
    piVar2 = extraout_EDX_07;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00441fe7:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_0044202e;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00441fe7;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_0044202e;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00442032:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00442038:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x29;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x29) goto LAB_00442058;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00442058:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_15;
    piVar2 = extraout_EDX_08;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00442087:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_004420ce;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00442087;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_004420ce;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_004420d2:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_004420d8:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x2a;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x2a) goto LAB_004420f8;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_004420f8:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_16;
    piVar2 = extraout_EDX_09;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_00442127:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_0044216e;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00442127;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_0044216e;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00442172:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00442178:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x2b;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x2b) goto LAB_00442198;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00442198:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_17;
    piVar2 = extraout_EDX_10;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  iVar12 = *(int *)(param_3 + 0x2cc);
  if (iVar12 == 0) {
LAB_004421c7:
    piVar2 = (int *)((ulonglong)lVar13 >> 0x20);
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      piVar2 = DAT_004ce8cc;
      if (*(int *)*puVar5 == iVar12) goto LAB_0044220e;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar13 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_004421c7;
    do {
      piVar2 = (int *)*puVar5;
      piVar4 = piVar2;
      if (*piVar2 == iVar12) goto LAB_0044220e;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_00442212:
  *(undefined4 *)(param_3 + 0x2cc) = 0;
LAB_00442218:
  piVar4 = piVar4 + 4;
  if (piVar4 != (int *)0x0) {
    iVar12 = 0x2c;
    do {
      piVar2 = (int *)*piVar4;
      piVar9 = piVar2;
      if (*(short *)((int)piVar2 + 0x3ea) == 0x2c) goto LAB_00442238;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00442238:
  if ((code *)piVar9[0x125] != (code *)0x0) {
    (*(code *)piVar9[0x125])();
    iVar12 = extraout_ECX_18;
    piVar2 = extraout_EDX_11;
  }
  *(undefined2 *)(piVar9 + 0xf1) = 0x1e;
  lVar13 = FUN_00455630(iVar12,(short *)piVar2,(uint)piVar9);
  return lVar13;
}


