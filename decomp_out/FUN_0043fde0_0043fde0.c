/* undefined4 __thiscall FUN_0043fde0(void * this, int param_1) @ 0043fde0  4959 bytes */
#include "th12.h"

undefined4 __thiscall FUN_0043fde0(void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  void *this_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 uVar6;
  int extraout_ECX_11;
  int *extraout_ECX_12;
  int *extraout_ECX_13;
  void *this_01;
  int *extraout_ECX_14;
  int *extraout_ECX_15;
  int *extraout_ECX_16;
  int *extraout_ECX_17;
  void *extraout_ECX_18;
  void *extraout_ECX_19;
  void *this_02;
  void *extraout_ECX_20;
  void *this_03;
  void *extraout_ECX_21;
  int *extraout_ECX_22;
  undefined4 extraout_ECX_23;
  void *extraout_ECX_24;
  void *pvVar7;
  void *this_04;
  void *extraout_ECX_25;
  void *this_05;
  void *this_06;
  int *extraout_ECX_26;
  undefined4 extraout_ECX_27;
  int *extraout_ECX_28;
  int *extraout_ECX_29;
  void *extraout_ECX_30;
  void *this_07;
  void *this_08;
  void *this_09;
  void *this_10;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  undefined4 extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined4 extraout_ECX_35;
  undefined4 extraout_ECX_36;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *psVar8;
  int *extraout_EDX_01;
  int *extraout_EDX_02;
  int *extraout_EDX_03;
  int *extraout_EDX_04;
  int *extraout_EDX_05;
  int *extraout_EDX_06;
  int *extraout_EDX_07;
  int *extraout_EDX_08;
  int *extraout_EDX_09;
  uint extraout_EDX_10;
  int *extraout_EDX_11;
  int *extraout_EDX_12;
  int *extraout_EDX_13;
  int *extraout_EDX_14;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  
  iVar9 = param_1;
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    goto switchD_0043fdf4_caseD_0;
  case 1:
    goto switchD_0043fdf4_caseD_1;
  case 2:
    pvVar7 = *(void **)(param_1 + 0x28);
    piVar3 = (int *)(param_1 + 0x28);
    *(void **)(param_1 + 0x2c) = pvVar7;
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
      pvVar7 = extraout_ECX_18;
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
      pvVar7 = extraout_ECX_19;
    }
    if (*(int *)(iVar9 + 0x2c) != *piVar3) {
      FUN_00453d90(pvVar7,10);
      FUN_004619e0(this_02,*(int *)(iVar9 + 0x2c8));
      FUN_00461970(*(void **)(iVar9 + 0x2c8),(int)*(void **)(iVar9 + 0x2c8));
      iVar10 = 0;
      pvVar7 = extraout_ECX_20;
      if (0 < *(int *)(iVar9 + 0x28)) {
        do {
          FUN_0043f0a0(pvVar7,iVar10 + 3);
          FUN_0043f0a0(this_03,iVar10 + 0xb);
          iVar10 = iVar10 + 1;
          pvVar7 = extraout_ECX_21;
        } while (iVar10 < *(int *)(iVar9 + 0x28));
      }
      if (iVar10 + 1 < 8) {
        iVar10 = iVar10 + 0xc;
        do {
          piVar3 = FUN_00461920(*(undefined4 *)(iVar9 + 0x2c8),(int)DAT_004ce8cc,
                                *(undefined4 *)(iVar9 + 0x2c8));
          if (piVar3 == (int *)0x0) {
            *(undefined4 *)(iVar9 + 0x2c8) = 0;
          }
          for (piVar4 = piVar3 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
            piVar11 = (int *)*piVar4;
            if (((int)*(short *)((int)piVar11 + 0x3ea) == iVar10 + -8) ||
               ((iVar10 + -8 == -1 && (piVar11 != piVar3)))) goto LAB_00440917;
          }
          piVar11 = (int *)0x0;
LAB_00440917:
          if ((code *)piVar11[0x125] != (code *)0x0) {
            (*(code *)piVar11[0x125])();
            piVar4 = extraout_ECX_22;
          }
          *(undefined2 *)(piVar11 + 0xf1) = 0x1f;
          FUN_00455630(piVar4,(short *)0x1f,(uint)piVar11);
          piVar3 = FUN_00461920(extraout_ECX_23,(int)DAT_004ce8cc,*(int *)(iVar9 + 0x2c8));
          if (piVar3 == (int *)0x0) {
            *(undefined4 *)(iVar9 + 0x2c8) = 0;
          }
          piVar11 = extraout_EDX_08;
          for (piVar4 = piVar3 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
            piVar11 = (int *)*piVar4;
            piVar12 = piVar11;
            if ((*(short *)((int)piVar11 + 0x3ea) == iVar10) ||
               ((iVar10 == -1 && (piVar11 != piVar3)))) goto LAB_00440987;
          }
          piVar12 = (int *)0x0;
LAB_00440987:
          if ((code *)piVar12[0x125] != (code *)0x0) {
            (*(code *)piVar12[0x125])();
            piVar11 = extraout_EDX_09;
          }
          *(undefined2 *)(piVar12 + 0xf1) = 0x1f;
          FUN_00455630(0x1f,(short *)piVar11,(uint)piVar12);
          iVar10 = iVar10 + 1;
          pvVar7 = extraout_ECX_24;
        } while (iVar10 < 0x13);
      }
      pvVar7 = (void *)CONCAT31((int3)((uint)pvVar7 >> 8),0x10);
      if ((((((*(byte *)(DAT_004b451c + 0x1e9d0) & 0x10) == 0) &&
            ((*(byte *)(DAT_004b451c + 0x1e9d1) & 0x10) == 0)) &&
           ((*(byte *)(DAT_004b451c + 0x1e9d2) & 0x10) == 0)) &&
          (((*(byte *)(DAT_004b451c + 0x1e9d3) & 0x10) == 0 &&
           ((*(byte *)(DAT_004b451c + 0x1e9d4) & 0x10) == 0)))) &&
         ((*(byte *)(DAT_004b451c + 0x1e9d5) & 0x10) == 0)) {
        FUN_0043f040(pvVar7,4);
        FUN_0043f040(this_04,0xc);
        pvVar7 = extraout_ECX_25;
      }
    }
    if ((DAT_004d48c4 & 0x102) == 0) goto LAB_00440e88;
    if (*(int *)(iVar9 + 0x28) != 7) {
      FUN_00453d90(pvVar7,9);
      iVar10 = *(int *)(iVar9 + 0x30);
      if (iVar10 == 0) {
        *(undefined4 *)(iVar9 + 0x28) = 7;
      }
      else if (iVar10 < 8) {
        *(int *)(iVar9 + 0x28) = iVar10 + -1;
      }
      else {
        *(undefined4 *)(iVar9 + 0x28) = 7;
      }
      FUN_004619e0(this_05,*(int *)(iVar9 + 0x2c8));
      FUN_00461970(this_06,*(int *)(iVar9 + 0x2c8));
      lVar14 = (ulonglong)extraout_EDX_10 << 0x20;
      iVar10 = 0;
      if (0 < *(int *)(iVar9 + 0x28)) {
        do {
          piVar3 = FUN_00461920(*(undefined4 *)(iVar9 + 0x2c8),(int)DAT_004ce8cc,
                                *(undefined4 *)(iVar9 + 0x2c8));
          if (piVar3 == (int *)0x0) {
            *(undefined4 *)(iVar9 + 0x2c8) = 0;
          }
          for (piVar4 = piVar3 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
            piVar11 = (int *)*piVar4;
            if (((int)*(short *)((int)piVar11 + 0x3ea) == iVar10 + 3) ||
               ((iVar10 + 3 == -1 && (piVar11 != piVar3)))) goto LAB_00440ae7;
          }
          piVar11 = (int *)0x0;
LAB_00440ae7:
          if ((code *)piVar11[0x125] != (code *)0x0) {
            (*(code *)piVar11[0x125])();
            piVar4 = extraout_ECX_26;
          }
          *(undefined2 *)(piVar11 + 0xf1) = 0x1e;
          FUN_00455630(piVar4,(short *)0x1e,(uint)piVar11);
          piVar3 = FUN_00461920(extraout_ECX_27,(int)DAT_004ce8cc,*(int *)(iVar9 + 0x2c8));
          if (piVar3 == (int *)0x0) {
            *(undefined4 *)(iVar9 + 0x2c8) = 0;
          }
          piVar11 = extraout_EDX_11;
          for (piVar4 = piVar3 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
            piVar11 = (int *)*piVar4;
            piVar12 = piVar11;
            if (((int)*(short *)((int)piVar11 + 0x3ea) == iVar10 + 0xb) ||
               ((iVar10 + 0xb == -1 && (piVar11 != piVar3)))) goto LAB_00440b51;
          }
          piVar12 = (int *)0x0;
LAB_00440b51:
          if ((code *)piVar12[0x125] != (code *)0x0) {
            (*(code *)piVar12[0x125])();
            piVar11 = extraout_EDX_12;
          }
          *(undefined2 *)(piVar12 + 0xf1) = 0x1e;
          lVar14 = FUN_00455630(0x1e,(short *)piVar11,(uint)piVar12);
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar9 + 0x28));
      }
      if (iVar10 + 1 < 8) {
        iVar10 = iVar10 + 0xc;
LAB_00440b90:
        iVar13 = *(int *)(iVar9 + 0x2c8);
        if (iVar13 == 0) {
LAB_00440b9d:
          piVar3 = (int *)0x0;
          piVar4 = (int *)((ulonglong)lVar14 >> 0x20);
        }
        else {
          for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
              puVar5 = (undefined4 *)puVar5[1]) {
            piVar3 = (int *)*puVar5;
            piVar4 = DAT_004ce8cc;
            if (*piVar3 == iVar13) goto LAB_00440bec;
          }
          puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
          lVar14 = CONCAT44(DAT_004ce8cc,puVar5);
          if (puVar5 == (undefined4 *)0x0) goto LAB_00440b9d;
          do {
            piVar3 = (int *)*puVar5;
            piVar4 = piVar3;
            if (*piVar3 == iVar13) goto LAB_00440bec;
            puVar5 = (undefined4 *)puVar5[1];
          } while (puVar5 != (undefined4 *)0x0);
          piVar3 = (int *)0x0;
        }
        goto LAB_00440bf0;
      }
LAB_00440d06:
      piVar3 = DAT_004ce8cc;
      if (((((*(byte *)(DAT_004b451c + 0x1e9d0) & 0x10) == 0) &&
           ((*(byte *)(DAT_004b451c + 0x1e9d1) & 0x10) == 0)) &&
          ((*(byte *)(DAT_004b451c + 0x1e9d2) & 0x10) == 0)) &&
         ((((*(byte *)(DAT_004b451c + 0x1e9d3) & 0x10) == 0 &&
           ((*(byte *)(DAT_004b451c + 0x1e9d4) & 0x10) == 0)) &&
          ((*(byte *)(DAT_004b451c + 0x1e9d5) & 0x10) == 0)))) {
        iVar10 = *(int *)(iVar9 + 0x2c8);
        if (iVar10 != 0) {
          for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
              puVar5 = (undefined4 *)puVar5[1]) {
            piVar4 = (int *)*puVar5;
            if (*piVar4 == iVar10) goto LAB_00440da8;
          }
          puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
          if (puVar5 != (undefined4 *)0x0) {
            do {
              piVar4 = (int *)*puVar5;
              if (*piVar4 == iVar10) goto LAB_00440da8;
              puVar5 = (undefined4 *)puVar5[1];
            } while (puVar5 != (undefined4 *)0x0);
            piVar4 = (int *)0x0;
            goto LAB_00440dae;
          }
        }
        piVar4 = (int *)0x0;
        goto LAB_00440dae;
      }
      goto LAB_00440e88;
    }
    goto switchD_00440eb5_caseD_7;
  default:
    goto switchD_00440fbb_caseD_8;
  case 4:
    if (*(int *)(param_1 + 0x2b8) < 0x14) {
      return 1;
    }
    puVar1 = (uint *)(param_1 + 0x28);
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 0:
      DAT_004b0ce0 = DAT_004b0ce0 & 0xffffffef;
      goto LAB_00441053;
    case 1:
      DAT_004b0ce0 = DAT_004b0ce0 & 0xffffffef;
      FUN_004619e0(this,*(int *)(param_1 + 0x454));
      FUN_0043eee0(extraout_ECX_32,5);
      FUN_00464900();
      *(uint *)(iVar9 + 0x598c) = DAT_004b0ca8;
      DAT_004aebd0 = 4;
      DAT_004b0ca8 = 4;
      iVar9 = *(int *)(iVar9 + 0x30);
      if (iVar9 == 0) {
        *puVar1 = 0;
        return 1;
      }
      if (iVar9 < 1) {
        *puVar1 = iVar9 - 1;
        return 1;
      }
      *puVar1 = 0;
      return 1;
    case 2:
      DAT_004b0ce0 = DAT_004b0ce0 | 0x10;
LAB_00441053:
      FUN_004619e0(this,*(int *)(param_1 + 0x454));
      FUN_0043eee0(extraout_ECX_33,5);
      FUN_00464900();
      if (3 < (int)DAT_004aebd0) {
        DAT_004aebd0 = 1;
        DAT_004b0ca8 = 1;
      }
      uVar2 = DAT_004aebd0;
      FUN_0040f790(DAT_004aebd0,puVar1);
      DAT_004b0ca8 = uVar2;
      return 1;
    case 3:
      FUN_004619e0(this,*(int *)(param_1 + 0x454));
      FUN_0043eee0(extraout_ECX_34,0xb);
      FUN_00464900();
      return 1;
    case 4:
      FUN_004619e0(*(void **)(param_1 + 0x454),(int)*(void **)(param_1 + 0x454));
      FUN_0043eee0(extraout_ECX_35,10);
      FUN_00464900();
      return 1;
    case 5:
      FUN_004619e0(this,*(int *)(param_1 + 0x454));
      FUN_0043eee0(extraout_ECX_36,0xd);
      FUN_00464900();
      return 1;
    case 6:
      FUN_0043eee0(this,3);
      FUN_00464900();
      return 1;
    case 7:
      FUN_0043eee0(this,2);
    }
    goto switchD_00440fbb_caseD_8;
  }
LAB_00440bec:
  if (piVar3 == (int *)0x0) {
LAB_00440bf0:
    *(undefined4 *)(iVar9 + 0x2c8) = 0;
  }
  for (piVar11 = piVar3 + 4; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
    piVar4 = (int *)*piVar11;
    piVar12 = piVar4;
    if (((int)*(short *)((int)piVar4 + 0x3ea) == iVar10 + -8) ||
       ((iVar10 + -8 == -1 && (piVar4 != piVar3)))) goto LAB_00440c20;
  }
  piVar12 = (int *)0x0;
LAB_00440c20:
  if ((code *)piVar12[0x125] != (code *)0x0) {
    (*(code *)piVar12[0x125])();
    piVar11 = extraout_ECX_28;
    piVar4 = extraout_EDX_13;
  }
  *(undefined2 *)(piVar12 + 0xf1) = 0x1f;
  lVar14 = FUN_00455630(piVar11,(short *)piVar4,(uint)piVar12);
  iVar13 = *(int *)(iVar9 + 0x2c8);
  if (iVar13 != 0) {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar3 = (int *)*puVar5;
      piVar4 = DAT_004ce8cc;
      if (*piVar3 == iVar13) goto LAB_00440c95;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar14 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 != (undefined4 *)0x0) {
      do {
        piVar3 = (int *)*puVar5;
        piVar4 = piVar3;
        if (*piVar3 == iVar13) goto LAB_00440c95;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar3 = (int *)0x0;
      goto LAB_00440c99;
    }
  }
  piVar3 = (int *)0x0;
  piVar4 = (int *)((ulonglong)lVar14 >> 0x20);
LAB_00440c99:
  *(undefined4 *)(iVar9 + 0x2c8) = 0;
LAB_00440ca3:
  for (piVar11 = piVar3 + 4; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
    piVar4 = (int *)*piVar11;
    piVar12 = piVar4;
    if ((*(short *)((int)piVar4 + 0x3ea) == iVar10) || ((iVar10 == -1 && (piVar4 != piVar3))))
    goto LAB_00440cd7;
  }
  piVar12 = (int *)0x0;
LAB_00440cd7:
  if ((code *)piVar12[0x125] != (code *)0x0) {
    (*(code *)piVar12[0x125])();
    piVar11 = extraout_ECX_29;
    piVar4 = extraout_EDX_14;
  }
  *(undefined2 *)(piVar12 + 0xf1) = 0x1f;
  lVar14 = FUN_00455630(piVar11,(short *)piVar4,(uint)piVar12);
  iVar10 = iVar10 + 1;
  if (0x12 < iVar10) goto LAB_00440d06;
  goto LAB_00440b90;
LAB_00440c95:
  if (piVar3 != (int *)0x0) goto LAB_00440ca3;
  goto LAB_00440c99;
LAB_00440da8:
  if (piVar4 == (int *)0x0) {
LAB_00440dae:
    *(undefined4 *)(iVar9 + 0x2c8) = 0;
  }
  for (piVar4 = piVar4 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    iVar10 = *piVar4;
    if (*(short *)(iVar10 + 0x3ea) == 4) goto LAB_00440dd4;
  }
  iVar10 = 0;
LAB_00440dd4:
  if (*(code **)(iVar10 + 0x494) != (code *)0x0) {
    (**(code **)(iVar10 + 0x494))();
    piVar3 = DAT_004ce8cc;
  }
  *(undefined2 *)(iVar10 + 0x3c4) = 0x1d;
  iVar10 = *(int *)(iVar9 + 0x2c8);
  if (iVar10 != 0) {
    for (puVar5 = (undefined4 *)piVar3[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      if (*piVar4 == iVar10) goto LAB_00440e3f;
    }
    puVar5 = (undefined4 *)piVar3[0x2215b0];
    if (puVar5 != (undefined4 *)0x0) {
      do {
        piVar4 = (int *)*puVar5;
        if (*piVar4 == iVar10) goto LAB_00440e3f;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar4 = (int *)0x0;
      goto LAB_00440e43;
    }
  }
  piVar4 = (int *)0x0;
LAB_00440e43:
  *(undefined4 *)(iVar9 + 0x2c8) = 0;
  goto LAB_00440e49;
LAB_00440095:
  if (piVar4 == (int *)0x0) {
LAB_00440099:
    *(undefined4 *)(iVar9 + 0x2c8) = 0;
  }
  for (piVar11 = piVar4 + 4; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
    piVar3 = (int *)*piVar11;
    piVar12 = piVar3;
    if (((int)*(short *)((int)piVar3 + 0x3ea) == iVar13 + -8) ||
       ((iVar13 + -8 == -1 && (piVar3 != piVar4)))) goto LAB_004400cf;
  }
  piVar12 = (int *)0x0;
LAB_004400cf:
  if ((code *)piVar12[0x125] != (code *)0x0) {
    (*(code *)piVar12[0x125])();
    piVar11 = extraout_ECX_12;
    piVar3 = extraout_EDX_01;
  }
  *(undefined2 *)(piVar12 + 0xf1) = 0x1f;
  lVar14 = FUN_00455630(piVar11,(short *)piVar3,(uint)piVar12);
  iVar10 = *(int *)(iVar9 + 0x2c8);
  if (iVar10 != 0) {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar3 = (int *)*puVar5;
      piVar4 = DAT_004ce8cc;
      if (*piVar3 == iVar10) goto LAB_00440145;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar14 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 != (undefined4 *)0x0) {
      do {
        piVar3 = (int *)*puVar5;
        piVar4 = piVar3;
        if (*piVar3 == iVar10) goto LAB_00440145;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar3 = (int *)0x0;
      goto LAB_00440149;
    }
  }
  piVar3 = (int *)0x0;
  piVar4 = (int *)((ulonglong)lVar14 >> 0x20);
LAB_00440149:
  *(undefined4 *)(iVar9 + 0x2c8) = 0;
LAB_00440153:
  for (piVar11 = piVar3 + 4; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
    piVar4 = (int *)*piVar11;
    piVar12 = piVar4;
    if ((*(short *)((int)piVar4 + 0x3ea) == iVar13) || ((iVar13 == -1 && (piVar4 != piVar3))))
    goto LAB_00440187;
  }
  piVar12 = (int *)0x0;
LAB_00440187:
  if ((code *)piVar12[0x125] != (code *)0x0) {
    (*(code *)piVar12[0x125])();
    piVar11 = extraout_ECX_13;
    piVar4 = extraout_EDX_02;
  }
  *(undefined2 *)(piVar12 + 0xf1) = 0x1f;
  FUN_00455630(piVar11,(short *)piVar4,(uint)piVar12);
  iVar13 = iVar13 + 1;
  if (0x12 < iVar13) goto LAB_004401b6;
  goto LAB_00440041;
LAB_00440145:
  if (piVar3 != (int *)0x0) goto LAB_00440153;
  goto LAB_00440149;
LAB_004403d5:
  if (piVar4 == (int *)0x0) {
LAB_004403d9:
    *(undefined4 *)(iVar9 + 0x2c8) = 0;
  }
  for (piVar11 = piVar4 + 4; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
    piVar3 = (int *)*piVar11;
    piVar12 = piVar3;
    if (((int)*(short *)((int)piVar3 + 0x3ea) == iVar10 + 3) ||
       ((iVar10 + 3 == -1 && (piVar3 != piVar4)))) goto LAB_0044040f;
  }
  piVar12 = (int *)0x0;
LAB_0044040f:
  if ((code *)piVar12[0x125] != (code *)0x0) {
    (*(code *)piVar12[0x125])();
    piVar11 = extraout_ECX_14;
    piVar3 = extraout_EDX_04;
  }
  *(undefined2 *)(piVar12 + 0xf1) = 0x1e;
  lVar14 = FUN_00455630(piVar11,(short *)piVar3,(uint)piVar12);
  iVar13 = *(int *)(iVar9 + 0x2c8);
  if (iVar13 != 0) {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar3 = (int *)*puVar5;
      piVar4 = DAT_004ce8cc;
      if (*piVar3 == iVar13) goto LAB_0044048c;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar14 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 != (undefined4 *)0x0) {
      do {
        piVar3 = (int *)*puVar5;
        piVar4 = piVar3;
        if (*piVar3 == iVar13) goto LAB_0044048c;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar3 = (int *)0x0;
      goto LAB_00440490;
    }
  }
  piVar3 = (int *)0x0;
  piVar4 = (int *)((ulonglong)lVar14 >> 0x20);
LAB_00440490:
  *(undefined4 *)(iVar9 + 0x2c8) = 0;
LAB_0044049a:
  for (piVar11 = piVar3 + 4; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
    piVar4 = (int *)*piVar11;
    piVar12 = piVar4;
    if (((int)*(short *)((int)piVar4 + 0x3ea) == iVar10 + 0xb) ||
       ((iVar10 + 0xb == -1 && (piVar4 != piVar3)))) goto LAB_004404c0;
  }
  piVar12 = (int *)0x0;
LAB_004404c0:
  if ((code *)piVar12[0x125] != (code *)0x0) {
    (*(code *)piVar12[0x125])();
    piVar11 = extraout_ECX_15;
    piVar4 = extraout_EDX_05;
  }
  *(undefined2 *)(piVar12 + 0xf1) = 0x1e;
  lVar14 = FUN_00455630(piVar11,(short *)piVar4,(uint)piVar12);
  piVar3 = (int *)((ulonglong)lVar14 >> 0x20);
  iVar10 = iVar10 + 1;
  if (*(int *)(iVar9 + 0x28) <= iVar10) goto LAB_004404ef;
  goto LAB_00440370;
LAB_0044048c:
  if (piVar3 != (int *)0x0) goto LAB_0044049a;
  goto LAB_00440490;
LAB_00440555:
  if (piVar3 == (int *)0x0) {
LAB_00440559:
    *(undefined4 *)(iVar9 + 0x2c8) = 0;
  }
  for (piVar11 = piVar3 + 4; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
    piVar4 = (int *)*piVar11;
    piVar12 = piVar4;
    if (((int)*(short *)((int)piVar4 + 0x3ea) == iVar10 + -8) ||
       ((iVar10 + -8 == -1 && (piVar4 != piVar3)))) goto LAB_0044058f;
  }
  piVar12 = (int *)0x0;
LAB_0044058f:
  if ((code *)piVar12[0x125] != (code *)0x0) {
    (*(code *)piVar12[0x125])();
    piVar11 = extraout_ECX_16;
    piVar4 = extraout_EDX_06;
  }
  *(undefined2 *)(piVar12 + 0xf1) = 0x1f;
  lVar14 = FUN_00455630(piVar11,(short *)piVar4,(uint)piVar12);
  iVar13 = *(int *)(iVar9 + 0x2c8);
  if (iVar13 != 0) {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar3 = (int *)*puVar5;
      piVar4 = DAT_004ce8cc;
      if (*piVar3 == iVar13) goto LAB_00440605;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    lVar14 = CONCAT44(DAT_004ce8cc,puVar5);
    if (puVar5 != (undefined4 *)0x0) {
      do {
        piVar3 = (int *)*puVar5;
        piVar4 = piVar3;
        if (*piVar3 == iVar13) goto LAB_00440605;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar3 = (int *)0x0;
      goto LAB_00440609;
    }
  }
  piVar3 = (int *)0x0;
  piVar4 = (int *)((ulonglong)lVar14 >> 0x20);
LAB_00440609:
  *(undefined4 *)(iVar9 + 0x2c8) = 0;
LAB_00440613:
  for (piVar11 = piVar3 + 4; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
    piVar4 = (int *)*piVar11;
    piVar12 = piVar4;
    if ((*(short *)((int)piVar4 + 0x3ea) == iVar10) || ((iVar10 == -1 && (piVar4 != piVar3))))
    goto LAB_00440647;
  }
  piVar12 = (int *)0x0;
LAB_00440647:
  if ((code *)piVar12[0x125] != (code *)0x0) {
    (*(code *)piVar12[0x125])();
    piVar11 = extraout_ECX_17;
    piVar4 = extraout_EDX_07;
  }
  *(undefined2 *)(piVar12 + 0xf1) = 0x1f;
  lVar14 = FUN_00455630(piVar11,(short *)piVar4,(uint)piVar12);
  iVar10 = iVar10 + 1;
  if (0x12 < iVar10) goto LAB_00440676;
  goto LAB_00440500;
LAB_00440605:
  if (piVar3 != (int *)0x0) goto LAB_00440613;
  goto LAB_00440609;
LAB_00440718:
  if (piVar4 == (int *)0x0) goto LAB_0044071e;
  goto LAB_00440724;
LAB_004407af:
  if (piVar4 != (int *)0x0) goto LAB_004407b9;
  goto LAB_004407b3;
switchD_0043fdf4_caseD_0:
  *(undefined4 *)(param_1 + 0x30) = 8;
  iVar10 = FUN_0043f180();
  if (iVar10 == 0) {
    *(undefined4 *)(iVar9 + 0xb8 + *(int *)(iVar9 + 0xfc) * 4) = 1;
    *(int *)(iVar9 + 0xfc) = *(int *)(iVar9 + 0xfc) + 1;
  }
  if ((DAT_004b0ce0 & 0x10) != 0) {
    iVar10 = *(int *)(iVar9 + 0x30);
    if (iVar10 == 0) {
      *(undefined4 *)(iVar9 + 0x28) = 2;
    }
    else if (iVar10 < 3) {
      *(int *)(iVar9 + 0x28) = iVar10 + -1;
    }
    else {
      *(undefined4 *)(iVar9 + 0x28) = 2;
    }
    DAT_004b0ce0 = DAT_004b0ce0 & 0xffffffef;
  }
  FUN_0043ef40(1);
  if ((*(byte *)(iVar9 + 0x5c18) & 2) == 0) {
    piVar3 = FUN_00461920(extraout_ECX,(int)DAT_004ce8cc,*(int *)(iVar9 + 0x454));
    uVar6 = extraout_ECX_00;
    if (piVar3 == (int *)0x0) {
      FUN_0043efa0();
      FUN_004619e0(this_00,*(int *)(iVar9 + 0x454));
      uVar6 = extraout_ECX_01;
    }
    if (*(int *)(iVar9 + 0x20) != 3) {
      FUN_004619e0(*(void **)(iVar9 + 0x454),(int)*(void **)(iVar9 + 0x454));
      uVar6 = extraout_ECX_02;
    }
    piVar3 = DAT_004ce8cc;
    piVar4 = FUN_00461920(uVar6,(int)DAT_004ce8cc,*(int *)(iVar9 + 0x470));
    if ((piVar4 == (int *)0x0) &&
       (piVar3 = FUN_00461920(extraout_ECX_03,(int)piVar3,*(int *)(iVar9 + 0x474)),
       piVar3 == (int *)0x0)) {
      FUN_0043efa0();
    }
    FUN_004067e0(0xb4);
  }
  else {
    FUN_0043efa0();
    FUN_0043efa0();
    *(uint *)(iVar9 + 0x5c18) = *(uint *)(iVar9 + 0x5c18) & 0xfffffffd;
  }
switchD_0043fdf4_caseD_1:
  if (*(int *)(iVar9 + 0x2b8) == 0xb4) {
    iVar13 = 0;
    FUN_004615a0((void *)0x0,*(void **)(iVar9 + 0x14),&param_1,0,0);
    piVar3 = DAT_004ce8cc;
    *(int *)(iVar9 + 0x2c8) = param_1;
    piVar3 = FUN_00461920(*(undefined4 *)(iVar9 + 0x720),(int)piVar3,*(undefined4 *)(iVar9 + 0x720))
    ;
    iVar10 = extraout_ECX_04;
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(iVar9 + 0x720) = 0;
      FUN_004615a0((void *)0x0,*(void **)(iVar9 + 0x18),&param_1,0,0);
      *(int *)(iVar9 + 0x720) = param_1;
      iVar10 = param_1;
    }
    if (0 < *(int *)(iVar9 + 0x28)) {
      iVar13 = 0;
      do {
        piVar3 = FUN_00461920(iVar10,(int)DAT_004ce8cc,*(int *)(iVar9 + 0x2c8));
        if (piVar3 == (int *)0x0) {
          *(undefined4 *)(iVar9 + 0x2c8) = 0;
        }
        uVar2 = FUN_00462020(extraout_ECX_05,iVar13 + 3);
        uVar6 = extraout_ECX_06;
        psVar8 = extraout_EDX;
        if (*(code **)(uVar2 + 0x494) != (code *)0x0) {
          (**(code **)(uVar2 + 0x494))();
          uVar6 = extraout_ECX_07;
          psVar8 = extraout_EDX_00;
        }
        *(undefined2 *)(uVar2 + 0x3c4) = 0x1e;
        FUN_00455630(uVar6,psVar8,uVar2);
        piVar3 = FUN_00461920(*(undefined4 *)(iVar9 + 0x2c8),(int)DAT_004ce8cc,
                              *(undefined4 *)(iVar9 + 0x2c8));
        if (piVar3 == (int *)0x0) {
          *(undefined4 *)(iVar9 + 0x2c8) = 0;
        }
        uVar2 = FUN_00462020(extraout_ECX_08,iVar13 + 0xb);
        uVar6 = extraout_ECX_09;
        if (*(code **)(uVar2 + 0x494) != (code *)0x0) {
          (**(code **)(uVar2 + 0x494))();
          uVar6 = extraout_ECX_10;
        }
        *(undefined2 *)(uVar2 + 0x3c4) = 0x1e;
        FUN_00455630(uVar6,(short *)0x1e,uVar2);
        iVar13 = iVar13 + 1;
        iVar10 = extraout_ECX_11;
      } while (iVar13 < *(int *)(iVar9 + 0x28));
    }
    if (iVar13 + 1 < 8) {
      iVar13 = iVar13 + 0xc;
LAB_00440041:
      iVar10 = *(int *)(iVar9 + 0x2c8);
      piVar3 = DAT_004ce8cc;
      if (iVar10 == 0) {
LAB_00440054:
        piVar4 = (int *)0x0;
      }
      else {
        for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)puVar5[1]) {
          piVar4 = (int *)*puVar5;
          if (*piVar4 == iVar10) goto LAB_00440095;
        }
        puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
        if (puVar5 == (undefined4 *)0x0) goto LAB_00440054;
        do {
          piVar4 = (int *)*puVar5;
          piVar3 = piVar4;
          if (*piVar4 == iVar10) goto LAB_00440095;
          puVar5 = (undefined4 *)puVar5[1];
        } while (puVar5 != (undefined4 *)0x0);
        piVar4 = (int *)0x0;
      }
      goto LAB_00440099;
    }
LAB_004401b6:
    if (((((*(byte *)(DAT_004b451c + 0x1e9d0) & 0x10) == 0) &&
         ((*(byte *)(DAT_004b451c + 0x1e9d1) & 0x10) == 0)) &&
        ((*(byte *)(DAT_004b451c + 0x1e9d2) & 0x10) == 0)) &&
       ((((*(byte *)(DAT_004b451c + 0x1e9d3) & 0x10) == 0 &&
         ((*(byte *)(DAT_004b451c + 0x1e9d4) & 0x10) == 0)) &&
        ((*(byte *)(DAT_004b451c + 0x1e9d5) & 0x10) == 0)))) {
      piVar3 = FUN_00461920(*(undefined4 *)(iVar9 + 0x2c8),(int)DAT_004ce8cc,
                            *(undefined4 *)(iVar9 + 0x2c8));
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(iVar9 + 0x2c8) = 0;
      }
      for (piVar3 = piVar3 + 4; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        iVar10 = *piVar3;
        if (*(short *)(iVar10 + 0x3ea) == 4) goto LAB_00440258;
      }
      iVar10 = 0;
LAB_00440258:
      if (*(code **)(iVar10 + 0x494) != (code *)0x0) {
        (**(code **)(iVar10 + 0x494))();
      }
      piVar3 = DAT_004ce8cc;
      *(undefined2 *)(iVar10 + 0x3c4) = 0x1d;
      piVar3 = FUN_00461920(*(undefined4 *)(iVar9 + 0x2c8),(int)piVar3,
                            *(undefined4 *)(iVar9 + 0x2c8));
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(iVar9 + 0x2c8) = 0;
      }
      for (piVar3 = piVar3 + 4; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        iVar10 = *piVar3;
        if (*(short *)(iVar10 + 0x3ea) == 0xc) goto LAB_004402b8;
      }
      iVar10 = 0;
LAB_004402b8:
      if (*(code **)(iVar10 + 0x494) != (code *)0x0) {
        (**(code **)(iVar10 + 0x494))();
      }
      *(undefined2 *)(iVar10 + 0x3c4) = 0x1d;
    }
  }
  if (*(int *)(iVar9 + 0x2b8) < 0xbf) {
    return 1;
  }
  *(undefined4 *)(iVar9 + 0x24) = 2;
  if ((*(uint *)(iVar9 + 0x2c4) & 1) == 0) {
    *(undefined4 *)(iVar9 + 700) = 0;
    *(undefined4 *)(iVar9 + 0x2b8) = 0;
    *(undefined4 *)(iVar9 + 0x2b4) = 0xfff0bdc1;
    *(undefined4 **)(iVar9 + 0x2c0) = &DAT_004b2ed0;
    *(uint *)(iVar9 + 0x2c4) = *(uint *)(iVar9 + 0x2c4) | 1;
  }
  iVar10 = 0;
  *(undefined4 *)(iVar9 + 700) = 0;
  *(undefined4 *)(iVar9 + 0x2b8) = 0;
  *(undefined4 *)(iVar9 + 0x2b4) = 0xffffffff;
  FUN_004619e0(*(void **)(iVar9 + 0x2c8),(int)*(void **)(iVar9 + 0x2c8));
  FUN_00461970(this_01,*(int *)(iVar9 + 0x2c8));
  lVar14 = ZEXT48(extraout_EDX_03) << 0x20;
  piVar3 = extraout_EDX_03;
  if (0 < *(int *)(iVar9 + 0x28)) {
LAB_00440370:
    iVar13 = *(int *)(iVar9 + 0x2c8);
    if (iVar13 == 0) {
LAB_0044037d:
      piVar4 = (int *)0x0;
    }
    else {
      for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; piVar3 = DAT_004ce8cc,
          puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)puVar5[1]) {
        piVar4 = (int *)*puVar5;
        if (*piVar4 == iVar13) goto LAB_004403d5;
      }
      puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
      if (puVar5 == (undefined4 *)0x0) goto LAB_0044037d;
      do {
        piVar4 = (int *)*puVar5;
        piVar3 = piVar4;
        if (*piVar4 == iVar13) goto LAB_004403d5;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar4 = (int *)0x0;
    }
    goto LAB_004403d9;
  }
LAB_004404ef:
  if (iVar10 + 1 < 8) {
    iVar10 = iVar10 + 0xc;
LAB_00440500:
    iVar13 = *(int *)(iVar9 + 0x2c8);
    if (iVar13 == 0) {
LAB_0044050d:
      piVar3 = (int *)0x0;
      piVar4 = (int *)((ulonglong)lVar14 >> 0x20);
    }
    else {
      for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        piVar3 = (int *)*puVar5;
        piVar4 = DAT_004ce8cc;
        if (*piVar3 == iVar13) goto LAB_00440555;
      }
      puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
      lVar14 = CONCAT44(DAT_004ce8cc,puVar5);
      if (puVar5 == (undefined4 *)0x0) goto LAB_0044050d;
      do {
        piVar3 = (int *)*puVar5;
        piVar4 = piVar3;
        if (*piVar3 == iVar13) goto LAB_00440555;
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != (undefined4 *)0x0);
      piVar3 = (int *)0x0;
    }
    goto LAB_00440559;
  }
LAB_00440676:
  piVar3 = DAT_004ce8cc;
  if ((*(byte *)(DAT_004b451c + 0x1e9d0) & 0x10) != 0) {
    return 1;
  }
  if ((*(byte *)(DAT_004b451c + 0x1e9d1) & 0x10) != 0) {
    return 1;
  }
  if ((*(byte *)(DAT_004b451c + 0x1e9d2) & 0x10) != 0) {
    return 1;
  }
  if ((*(byte *)(DAT_004b451c + 0x1e9d3) & 0x10) != 0) {
    return 1;
  }
  if ((*(byte *)(DAT_004b451c + 0x1e9d4) & 0x10) != 0) {
    return 1;
  }
  if ((*(byte *)(DAT_004b451c + 0x1e9d5) & 0x10) != 0) {
    return 1;
  }
  iVar10 = *(int *)(iVar9 + 0x2c8);
  if (iVar10 == 0) {
LAB_004406d7:
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)DAT_004ce8cc[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      if (*piVar4 == iVar10) goto LAB_00440718;
    }
    puVar5 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar5 == (undefined4 *)0x0) goto LAB_004406d7;
    do {
      piVar4 = (int *)*puVar5;
      if (*piVar4 == iVar10) goto LAB_00440718;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_0044071e:
  *(undefined4 *)(iVar9 + 0x2c8) = 0;
LAB_00440724:
  for (piVar4 = piVar4 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    iVar10 = *piVar4;
    if (*(short *)(iVar10 + 0x3ea) == 4) goto LAB_00440744;
  }
  iVar10 = 0;
LAB_00440744:
  if (*(code **)(iVar10 + 0x494) != (code *)0x0) {
    (**(code **)(iVar10 + 0x494))();
    piVar3 = DAT_004ce8cc;
  }
  *(undefined2 *)(iVar10 + 0x3c4) = 0x1d;
  iVar10 = *(int *)(iVar9 + 0x2c8);
  if (iVar10 == 0) {
LAB_00440773:
    piVar4 = (int *)0x0;
  }
  else {
    for (puVar5 = (undefined4 *)piVar3[0x2215ae]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar4 = (int *)*puVar5;
      if (*piVar4 == iVar10) goto LAB_004407af;
    }
    puVar5 = (undefined4 *)piVar3[0x2215b0];
    if (puVar5 == (undefined4 *)0x0) goto LAB_00440773;
    do {
      piVar4 = (int *)*puVar5;
      if (*piVar4 == iVar10) goto LAB_004407af;
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != (undefined4 *)0x0);
    piVar4 = (int *)0x0;
  }
LAB_004407b3:
  *(undefined4 *)(iVar9 + 0x2c8) = 0;
LAB_004407b9:
  for (piVar4 = piVar4 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    iVar9 = *piVar4;
    if (*(short *)(iVar9 + 0x3ea) == 0xc) goto LAB_004407d9;
  }
  iVar9 = 0;
LAB_004407d9:
  if (*(code **)(iVar9 + 0x494) != (code *)0x0) {
    (**(code **)(iVar9 + 0x494))();
  }
  *(undefined2 *)(iVar9 + 0x3c4) = 0x1d;
  return 1;
LAB_00440e3f:
  if (piVar4 == (int *)0x0) goto LAB_00440e43;
LAB_00440e49:
  for (piVar4 = piVar4 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    iVar10 = *piVar4;
    if (*(short *)(iVar10 + 0x3ea) == 0xc) goto LAB_00440e69;
  }
  iVar10 = 0;
LAB_00440e69:
  if (*(code **)(iVar10 + 0x494) != (code *)0x0) {
    (**(code **)(iVar10 + 0x494))();
  }
  *(undefined2 *)(iVar10 + 0x3c4) = 0x1d;
LAB_00440e88:
  if ((DAT_004d48c4 & 0x80001) == 0) {
switchD_00440fbb_caseD_8:
    return 1;
  }
  FUN_00461970(*(void **)(iVar9 + 0x2c8),(int)*(void **)(iVar9 + 0x2c8));
  pvVar7 = extraout_ECX_30;
  switch(*(undefined4 *)(iVar9 + 0x28)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    FUN_00453d90(extraout_ECX_30,7);
    FUN_00461970(this_07,*(int *)(iVar9 + 0x470));
    *(undefined4 *)(iVar9 + 0x470) = 0;
    FUN_00461970(this_08,*(int *)(iVar9 + 0x474));
    *(undefined4 *)(iVar9 + 0x474) = 0;
    FUN_00461970(*(void **)(iVar9 + 0x720),(int)*(void **)(iVar9 + 0x720));
    FUN_0043ef40(4);
    return 1;
  case 5:
    FUN_00453d90(extraout_ECX_30,7);
    FUN_00461970(this_09,*(int *)(iVar9 + 0x470));
    *(undefined4 *)(iVar9 + 0x470) = 0;
    FUN_00461970(this_10,*(int *)(iVar9 + 0x474));
    *(undefined4 *)(iVar9 + 0x474) = 0;
    FUN_00461970(*(void **)(iVar9 + 0x720),(int)*(void **)(iVar9 + 0x720));
    FUN_0043ef40(4);
    FUN_00453d90(extraout_ECX_31,7);
    return 1;
  case 6:
    iVar9 = 7;
    break;
  case 7:
switchD_00440eb5_caseD_7:
    iVar9 = 9;
    break;
  default:
    goto switchD_00440fbb_caseD_8;
  }
  FUN_00453d90(pvVar7,iVar9);
  FUN_0043ef40(4);
  return 1;
}


