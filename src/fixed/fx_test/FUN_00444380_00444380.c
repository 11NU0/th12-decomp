/* undefined __fastcall FUN_00444380(undefined4 param_1, int * param_2, int param_3) @ 00444380  2297 bytes */

#include "th12.h"

void __fastcall FUN_00444380(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int *extraout_ECX_09;
  int *extraout_ECX_10;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  int *extraout_EDX_02;
  int *piVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  
  lVar9 = ZEXT48(param_2) << 0x20;
  iVar8 = 0;
  if (0 < *(int *)(param_3 + 0x28)) {
LAB_00444395:
    iVar1 = *(int *)(param_3 + 0x2d0);
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)puVar4[1]) {
        piVar3 = (int *)*puVar4;
        param_2 = DAT_004ce8cc;
        if (*piVar3 == iVar1) goto LAB_004443e7;
      }
      param_2 = DAT_004ce8cc;
      for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0]; puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)puVar4[1]) {
        piVar3 = (int *)*puVar4;
        param_2 = piVar3;
        if (*piVar3 == iVar1) goto LAB_004443e7;
      }
      piVar3 = (int *)0x0;
    }
    goto LAB_004443ef;
  }
LAB_004447f6:
  if (iVar8 + 1 < 7) {
    iVar8 = iVar8 + 0x35;
LAB_00444803:
    piVar3 = (int *)((ulonglong)lVar9 >> 0x20);
    iVar1 = *(int *)(param_3 + 0x2d0);
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; piVar3 = DAT_004ce8cc,
          puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[1]) {
        piVar5 = (int *)*puVar4;
        if (*piVar5 == iVar1) goto LAB_00444857;
      }
      for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0]; puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)puVar4[1]) {
        piVar5 = (int *)*puVar4;
        piVar3 = piVar5;
        if (*piVar5 == iVar1) goto LAB_00444857;
      }
      piVar5 = (int *)0x0;
    }
    goto LAB_0044485f;
  }
LAB_0044496e:
  iVar8 = *(int *)(param_3 + 0x28);
joined_r0x00444975:
  iVar8 = iVar8 + 1;
  if (4 < iVar8) {
    return;
  }
  piVar3 = (int *)((ulonglong)lVar9 >> 0x20);
  iVar2 = *(int *)(param_3 + 0x2d0);
  iVar1 = iVar8 * 2 + 0x3b;
  if (iVar2 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; piVar3 = DAT_004ce8cc,
        puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[1]) {
      piVar5 = (int *)*puVar4;
      if (*piVar5 == iVar2) goto LAB_004449d7;
    }
    for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar5 = (int *)*puVar4;
      piVar3 = piVar5;
      if (*piVar5 == iVar2) goto LAB_004449d7;
    }
    piVar5 = (int *)0x0;
  }
  goto LAB_004449df;
LAB_004443e7:
  if (piVar3 == (int *)0x0) {
LAB_004443ef:
    *(undefined4 *)(param_3 + 0x2d0) = 0;
  }
  for (piVar5 = piVar3 + 4; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    param_2 = (int *)*piVar5;
    piVar6 = param_2;
    if (((int)*(short *)((int)param_2 + 0x3ea) == iVar8 + 0x2d) ||
       ((iVar8 + 0x2d == -1 && (param_2 != piVar3)))) goto LAB_0044441f;
  }
  piVar6 = (int *)0x0;
LAB_0044441f:
  if ((code *)piVar6[0x125] != (code *)0x0) {
    (*(code *)piVar6[0x125])();
    piVar5 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  *(undefined2 *)(piVar6 + 0xf1) = 0x1e;
  FUN_00455630(piVar5,(short *)param_2,(uint)piVar6);
  iVar1 = *(int *)(param_3 + 0x2d0);
  if (iVar1 != 0) {
    for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar1) goto LAB_004444a7;
    }
    puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar4 != (undefined4 *)0x0) {
      do {
        piVar3 = (int *)*puVar4;
        if (*piVar3 == iVar1) goto LAB_004444a7;
        puVar4 = (undefined4 *)puVar4[1];
      } while (puVar4 != (undefined4 *)0x0);
      piVar3 = (int *)0x0;
      goto LAB_004444ab;
    }
  }
  piVar3 = (int *)0x0;
LAB_004444ab:
  *(undefined4 *)(param_3 + 0x2d0) = 0;
LAB_004444b5:
  for (piVar5 = piVar3 + 4; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    piVar6 = (int *)*piVar5;
    if (((int)*(short *)((int)piVar6 + 0x3ea) == iVar8 + 0x34) ||
       ((iVar8 + 0x34 == -1 && (piVar6 != piVar3)))) goto LAB_004444df;
  }
  piVar6 = (int *)0x0;
LAB_004444df:
  if ((code *)piVar6[0x125] != (code *)0x0) {
    (*(code *)piVar6[0x125])();
    piVar5 = extraout_ECX_00;
  }
  *(undefined2 *)(piVar6 + 0xf1) = 0x1e;
  lVar9 = FUN_00455630(piVar5,(short *)0x1e,(uint)piVar6);
  if (4 < iVar8) goto LAB_004447e8;
  iVar2 = *(int *)(param_3 + 0x2d0);
  iVar1 = iVar8 * 2 + 0x3b;
  if (iVar2 == 0) {
LAB_0044451f:
    piVar3 = (int *)0x0;
  }
  else {
    for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_00444567;
    }
    puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar4 == (undefined4 *)0x0) goto LAB_0044451f;
    do {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_00444567;
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
    piVar3 = (int *)0x0;
  }
LAB_0044456b:
  *(undefined4 *)(param_3 + 0x2d0) = 0;
LAB_00444575:
  for (piVar5 = piVar3 + 4; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    piVar6 = (int *)*piVar5;
    if ((*(short *)((int)piVar6 + 0x3ea) == iVar1) || ((iVar1 == -1 && (piVar6 != piVar3))))
    goto LAB_0044459f;
  }
  piVar6 = (int *)0x0;
LAB_0044459f:
  if ((code *)piVar6[0x125] != (code *)0x0) {
    (*(code *)piVar6[0x125])();
    piVar5 = extraout_ECX_01;
  }
  *(undefined2 *)(piVar6 + 0xf1) = 0x1e;
  FUN_00455630(piVar5,(short *)0x1e,(uint)piVar6);
  iVar2 = *(int *)(param_3 + 0x2d0);
  iVar1 = iVar8 * 2 + 0x3c;
  if (iVar2 == 0) {
LAB_004445d6:
    piVar3 = (int *)0x0;
  }
  else {
    for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_0044461f;
    }
    puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar4 == (undefined4 *)0x0) goto LAB_004445d6;
    do {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_0044461f;
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
    piVar3 = (int *)0x0;
  }
LAB_00444623:
  *(undefined4 *)(param_3 + 0x2d0) = 0;
LAB_0044462d:
  for (piVar5 = piVar3 + 4; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    piVar6 = (int *)*piVar5;
    if ((*(short *)((int)piVar6 + 0x3ea) == iVar1) || ((iVar1 == -1 && (piVar6 != piVar3))))
    goto LAB_00444653;
  }
  piVar6 = (int *)0x0;
LAB_00444653:
  if ((code *)piVar6[0x125] != (code *)0x0) {
    (*(code *)piVar6[0x125])();
    piVar5 = extraout_ECX_02;
  }
  *(undefined2 *)(piVar6 + 0xf1) = 0x1e;
  FUN_00455630(piVar5,(short *)0x1e,(uint)piVar6);
  iVar2 = *(int *)(param_3 + 0x2d0);
  iVar1 = iVar8 * 2 + 0x45;
  if (iVar2 == 0) {
LAB_0044468a:
    piVar3 = (int *)0x0;
  }
  else {
    for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_004446d7;
    }
    puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar4 == (undefined4 *)0x0) goto LAB_0044468a;
    do {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_004446d7;
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
    piVar3 = (int *)0x0;
  }
LAB_004446db:
  *(undefined4 *)(param_3 + 0x2d0) = 0;
LAB_004446e5:
  for (piVar5 = piVar3 + 4; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    piVar6 = (int *)*piVar5;
    if ((*(short *)((int)piVar6 + 0x3ea) == iVar1) || ((iVar1 == -1 && (piVar6 != piVar3))))
    goto LAB_0044470f;
  }
  piVar6 = (int *)0x0;
LAB_0044470f:
  if ((code *)piVar6[0x125] != (code *)0x0) {
    (*(code *)piVar6[0x125])();
    piVar5 = extraout_ECX_03;
  }
  *(undefined2 *)(piVar6 + 0xf1) = 0x1e;
  FUN_00455630(piVar5,(short *)0x1e,(uint)piVar6);
  iVar2 = *(int *)(param_3 + 0x2d0);
  iVar1 = iVar8 * 2 + 0x46;
  if (iVar2 == 0) {
LAB_00444746:
    piVar3 = (int *)0x0;
  }
  else {
    for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_0044478f;
    }
    puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar4 == (undefined4 *)0x0) goto LAB_00444746;
    do {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_0044478f;
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
    piVar3 = (int *)0x0;
  }
LAB_00444793:
  *(undefined4 *)(param_3 + 0x2d0) = 0;
LAB_0044479d:
  for (piVar5 = piVar3 + 4; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    piVar6 = (int *)*piVar5;
    if ((*(short *)((int)piVar6 + 0x3ea) == iVar1) || ((iVar1 == -1 && (piVar6 != piVar3))))
    goto LAB_004447c3;
  }
  piVar6 = (int *)0x0;
LAB_004447c3:
  if ((code *)piVar6[0x125] != (code *)0x0) {
    (*(code *)piVar6[0x125])();
    piVar5 = extraout_ECX_04;
  }
  *(undefined2 *)(piVar6 + 0xf1) = 0x1e;
  lVar9 = FUN_00455630(piVar5,(short *)0x1e,(uint)piVar6);
LAB_004447e8:
  param_2 = (int *)((ulonglong)lVar9 >> 0x20);
  iVar8 = iVar8 + 1;
  if (*(int *)(param_3 + 0x28) <= iVar8) goto LAB_004447f6;
  goto LAB_00444395;
LAB_004444a7:
  if (piVar3 == (int *)0x0) goto LAB_004444ab;
  goto LAB_004444b5;
LAB_00444567:
  if (piVar3 == (int *)0x0) goto LAB_0044456b;
  goto LAB_00444575;
LAB_0044461f:
  if (piVar3 == (int *)0x0) goto LAB_00444623;
  goto LAB_0044462d;
LAB_004446d7:
  if (piVar3 == (int *)0x0) goto LAB_004446db;
  goto LAB_004446e5;
LAB_0044478f:
  if (piVar3 == (int *)0x0) goto LAB_00444793;
  goto LAB_0044479d;
LAB_00444857:
  if (piVar5 == (int *)0x0) {
LAB_0044485f:
    *(undefined4 *)(param_3 + 0x2d0) = 0;
  }
  for (piVar6 = piVar5 + 4; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
    piVar3 = (int *)*piVar6;
    piVar7 = piVar3;
    if (((int)*(short *)((int)piVar3 + 0x3ea) == iVar8 + -7) ||
       ((iVar8 + -7 == -1 && (piVar3 != piVar5)))) goto LAB_0044488f;
  }
  piVar7 = (int *)0x0;
LAB_0044488f:
  if ((code *)piVar7[0x125] != (code *)0x0) {
    (*(code *)piVar7[0x125])();
    piVar6 = extraout_ECX_05;
    piVar3 = extraout_EDX_00;
  }
  *(undefined2 *)(piVar7 + 0xf1) = 0x1f;
  lVar9 = FUN_00455630(piVar6,(short *)piVar3,(uint)piVar7);
  iVar1 = *(int *)(param_3 + 0x2d0);
  if (iVar1 != 0) {
    for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar5 = (int *)*puVar4;
      piVar3 = DAT_004ce8cc;
      if (*(int *)*puVar4 == iVar1) goto LAB_0044490e;
    }
    puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar9 = CONCAT44(DAT_004ce8cc,puVar4);
    if (puVar4 != (undefined4 *)0x0) {
      do {
        piVar3 = (int *)*puVar4;
        piVar5 = piVar3;
        if (*piVar3 == iVar1) goto LAB_0044490e;
        puVar4 = (undefined4 *)puVar4[1];
      } while (puVar4 != (undefined4 *)0x0);
      piVar5 = (int *)0x0;
      goto LAB_00444912;
    }
  }
  piVar3 = (int *)((ulonglong)lVar9 >> 0x20);
  piVar5 = (int *)0x0;
LAB_00444912:
  *(undefined4 *)(param_3 + 0x2d0) = 0;
LAB_00444918:
  for (piVar6 = piVar5 + 4; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
    piVar3 = (int *)*piVar6;
    piVar7 = piVar3;
    if ((*(short *)((int)piVar3 + 0x3ea) == iVar8) || ((iVar8 == -1 && (piVar3 != piVar5))))
    goto LAB_0044493f;
  }
  piVar7 = (int *)0x0;
LAB_0044493f:
  if ((code *)piVar7[0x125] != (code *)0x0) {
    (*(code *)piVar7[0x125])();
    piVar6 = extraout_ECX_06;
    piVar3 = extraout_EDX_01;
  }
  *(undefined2 *)(piVar7 + 0xf1) = 0x1f;
  lVar9 = FUN_00455630(piVar6,(short *)piVar3,(uint)piVar7);
  iVar8 = iVar8 + 1;
  if (0x3a < iVar8) goto LAB_0044496e;
  goto LAB_00444803;
LAB_0044490e:
  if (piVar5 != (int *)0x0) goto LAB_00444918;
  goto LAB_00444912;
LAB_004449d7:
  if (piVar5 == (int *)0x0) {
LAB_004449df:
    *(undefined4 *)(param_3 + 0x2d0) = 0;
  }
  for (piVar6 = piVar5 + 4; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
    piVar3 = (int *)*piVar6;
    piVar7 = piVar3;
    if ((*(short *)((int)piVar3 + 0x3ea) == iVar1) || ((iVar1 == -1 && (piVar3 != piVar5))))
    goto LAB_00444a0f;
  }
  piVar7 = (int *)0x0;
LAB_00444a0f:
  if ((code *)piVar7[0x125] != (code *)0x0) {
    (*(code *)piVar7[0x125])();
    piVar6 = extraout_ECX_07;
    piVar3 = extraout_EDX_02;
  }
  *(undefined2 *)(piVar7 + 0xf1) = 0x1f;
  FUN_00455630(piVar6,(short *)piVar3,(uint)piVar7);
  iVar2 = *(int *)(param_3 + 0x2d0);
  iVar1 = iVar8 * 2 + 0x3c;
  if (iVar2 != 0) {
    for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_00444a97;
    }
    puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar4 != (undefined4 *)0x0) {
      do {
        piVar3 = (int *)*puVar4;
        if (*piVar3 == iVar2) goto LAB_00444a97;
        puVar4 = (undefined4 *)puVar4[1];
      } while (puVar4 != (undefined4 *)0x0);
      piVar3 = (int *)0x0;
      goto LAB_00444a9b;
    }
  }
  piVar3 = (int *)0x0;
LAB_00444a9b:
  *(undefined4 *)(param_3 + 0x2d0) = 0;
LAB_00444aa5:
  for (piVar5 = piVar3 + 4; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    piVar6 = (int *)*piVar5;
    if ((*(short *)((int)piVar6 + 0x3ea) == iVar1) || ((iVar1 == -1 && (piVar6 != piVar3))))
    goto LAB_00444acf;
  }
  piVar6 = (int *)0x0;
LAB_00444acf:
  if ((code *)piVar6[0x125] != (code *)0x0) {
    (*(code *)piVar6[0x125])();
    piVar5 = extraout_ECX_08;
  }
  *(undefined2 *)(piVar6 + 0xf1) = 0x1f;
  FUN_00455630(piVar5,(short *)0x1f,(uint)piVar6);
  iVar2 = *(int *)(param_3 + 0x2d0);
  iVar1 = iVar8 * 2 + 0x45;
  if (iVar2 == 0) {
LAB_00444b06:
    piVar3 = (int *)0x0;
  }
  else {
    for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_00444b4f;
    }
    puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar4 == (undefined4 *)0x0) goto LAB_00444b06;
    do {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_00444b4f;
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
    piVar3 = (int *)0x0;
  }
LAB_00444b53:
  *(undefined4 *)(param_3 + 0x2d0) = 0;
LAB_00444b5d:
  for (piVar5 = piVar3 + 4; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    piVar6 = (int *)*piVar5;
    if ((*(short *)((int)piVar6 + 0x3ea) == iVar1) || ((iVar1 == -1 && (piVar6 != piVar3))))
    goto LAB_00444b83;
  }
  piVar6 = (int *)0x0;
LAB_00444b83:
  if ((code *)piVar6[0x125] != (code *)0x0) {
    (*(code *)piVar6[0x125])();
    piVar5 = extraout_ECX_09;
  }
  *(undefined2 *)(piVar6 + 0xf1) = 0x1f;
  FUN_00455630(piVar5,(short *)0x1f,(uint)piVar6);
  iVar2 = *(int *)(param_3 + 0x2d0);
  iVar1 = iVar8 * 2 + 0x46;
  if (iVar2 == 0) {
LAB_00444bba:
    piVar3 = (int *)0x0;
  }
  else {
    for (puVar4 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_00444c07;
    }
    puVar4 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar4 == (undefined4 *)0x0) goto LAB_00444bba;
    do {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar2) goto LAB_00444c07;
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
    piVar3 = (int *)0x0;
  }
LAB_00444c0b:
  *(undefined4 *)(param_3 + 0x2d0) = 0;
LAB_00444c15:
  for (piVar5 = piVar3 + 4; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    piVar6 = (int *)*piVar5;
    if ((*(short *)((int)piVar6 + 0x3ea) == iVar1) || ((iVar1 == -1 && (piVar6 != piVar3))))
    goto LAB_00444c3f;
  }
  piVar6 = (int *)0x0;
LAB_00444c3f:
  if ((code *)piVar6[0x125] != (code *)0x0) {
    (*(code *)piVar6[0x125])();
    piVar5 = extraout_ECX_10;
  }
  *(undefined2 *)(piVar6 + 0xf1) = 0x1f;
  lVar9 = FUN_00455630(piVar5,(short *)0x1f,(uint)piVar6);
  goto joined_r0x00444975;
LAB_00444a97:
  if (piVar3 == (int *)0x0) goto LAB_00444a9b;
  goto LAB_00444aa5;
LAB_00444b4f:
  if (piVar3 == (int *)0x0) goto LAB_00444b53;
  goto LAB_00444b5d;
LAB_00444c07:
  if (piVar3 != (int *)0x0) goto LAB_00444c15;
  goto LAB_00444c0b;
}


