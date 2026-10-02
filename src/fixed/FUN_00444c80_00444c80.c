/* undefined4 __stdcall FUN_00444c80(void * param_1) @ 00444c80  1555 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00444c80(void *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *pvVar5;
  uint *puVar6;
  void *this;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar7;
  undefined4 *puVar8;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  undefined4 extraout_ECX_06;
  void *extraout_ECX_07;
  undefined4 extraout_ECX_08;
  void *extraout_ECX_09;
  void *extraout_ECX_10;
  void *pvVar9;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  
  pvVar5 = param_1;
  pvVar9 = DAT_004b0ca8;
  pvVar3 = (void *)((3 < (int)DAT_004b0ca8) + 0x83);
  switch(*(undefined4 *)((int)param_1 + 0x24)) {
  case 0:
    if (*(int *)((int)param_1 + 0x66c) == 0) {
      FUN_004615a0((void *)0x0,*(void **)((int)DAT_004b43b8 + 0x18fb4),&param_1,0x14,0);
      *(void **)((int)pvVar5 + 0x66c) = param_1;
      pvVar9 = param_1;
    }
    DAT_004b0ca8 = DAT_004aebd0;
    *(uint *)((int)pvVar5 + 0x30) = ((3 < (int)DAT_004aebd0) - 1 & 3) + 1;
    FUN_00461970(pvVar9,*(int *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8));
    *(undefined4 *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8) = 0;
    FUN_0043efa0();
    pvVar9 = *(void **)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8);
    FUN_004619e0(pvVar9,(int)pvVar9);
    FUN_00461970(this,*(int *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8));
    FUN_004615a0((void *)0x0,*(void **)((int)pvVar5 + 0x14),&param_1,0x6e,0);
    *(void **)((int)pvVar5 + 0x480) = param_1;
    FUN_0043ef40(1);
    iVar1 = DAT_004b451c;
    if ((int)DAT_004b0ca8 < 4) {
      if ((((*(int *)((int)DAT_004b451c + 0x598) == 0) || (*(int *)((int)DAT_004b451c + 0x4b8c) == 0)) ||
          (*(int *)((int)DAT_004b451c + 0x9180) == 0)) ||
         (((*(int *)((int)DAT_004b451c + 0xd774) == 0 || (*(int *)((int)DAT_004b451c + 0x11d68) == 0)) ||
          (uVar7 = extraout_ECX, *(int *)((int)DAT_004b451c + 0x1635c) == 0)))) {
        piVar4 = FUN_00461920(extraout_ECX,DAT_004ce8cc,
                              *(int *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8));
        if (piVar4 == (int *)0x0) {
          *(undefined4 *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8) = 0;
        }
        for (piVar4 = piVar4 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
          if (*(short *)(*piVar4 + 0x3ea) == 0xaa) {
            param_1 = *(void **)*piVar4;
            goto LAB_00444e0f;
          }
        }
        param_1 = (void *)0x0;
LAB_00444e0f:
        FUN_00461d80();
        uVar7 = extraout_ECX_00;
      }
      if (((*(int *)((int)iVar1 + 0x59c) == 0) || (*(int *)((int)iVar1 + 0x4b90) == 0)) ||
         ((*(int *)((int)iVar1 + 0x9184) == 0 ||
          (((*(int *)((int)iVar1 + 0xd778) == 0 || (*(int *)((int)iVar1 + 0x11d6c) == 0)) ||
           (*(int *)((int)iVar1 + 0x16360) == 0)))))) {
        piVar4 = FUN_00461920(uVar7,DAT_004ce8cc,*(int *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8));
        if (piVar4 == (int *)0x0) {
          *(undefined4 *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8) = 0;
        }
        for (piVar4 = piVar4 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
          if (*(short *)(*piVar4 + 0x3ea) == 0xab) {
            param_1 = *(void **)*piVar4;
            goto LAB_00444e8f;
          }
        }
        param_1 = (void *)0x0;
LAB_00444e8f:
        FUN_00461d80();
        uVar7 = extraout_ECX_01;
      }
      if ((((*(int *)((int)iVar1 + 0x5a0) == 0) || (*(int *)((int)iVar1 + 0x4b94) == 0)) ||
          ((*(int *)((int)iVar1 + 0x9188) == 0 ||
           ((*(int *)((int)iVar1 + 0xd77c) == 0 || (*(int *)((int)iVar1 + 0x11d70) == 0)))))) ||
         (*(int *)((int)iVar1 + 0x16364) == 0)) {
        piVar4 = FUN_00461920(uVar7,DAT_004ce8cc,*(int *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8));
        if (piVar4 == (int *)0x0) {
          *(undefined4 *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8) = 0;
        }
        for (piVar4 = piVar4 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
          if (*(short *)(*piVar4 + 0x3ea) == 0xac) {
            param_1 = *(void **)*piVar4;
            goto LAB_00444f0f;
          }
        }
        param_1 = (void *)0x0;
LAB_00444f0f:
        FUN_00461d80();
        uVar7 = extraout_ECX_02;
      }
      if (((((*(int *)((int)iVar1 + 0x5a4) == 0) || (*(int *)((int)iVar1 + 0x4b98) == 0)) ||
           (*(int *)((int)iVar1 + 0x918c) == 0)) ||
          ((*(int *)((int)iVar1 + 0xd780) == 0 || (*(int *)((int)iVar1 + 0x11d74) == 0)))) ||
         (*(int *)((int)iVar1 + 0x16368) == 0)) {
        piVar4 = FUN_00461920(uVar7,DAT_004ce8cc,*(int *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8));
        if (piVar4 == (int *)0x0) {
          *(undefined4 *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8) = 0;
        }
        for (piVar4 = piVar4 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
          puVar8 = (undefined4 *)*piVar4;
          if (*(short *)((int)puVar8 + 0x3ea) == 0xad) goto LAB_00445079;
        }
        param_1 = (void *)0x0;
        goto LAB_0044504b;
      }
    }
    else if (((*(int *)((int)DAT_004b451c + 0x5a8) == 0) || (*(int *)((int)DAT_004b451c + 0x4b9c) == 0)) ||
            ((*(int *)((int)DAT_004b451c + 0x9190) == 0 ||
             (((*(int *)((int)DAT_004b451c + 0xd784) == 0 || (*(int *)((int)DAT_004b451c + 0x11d78) == 0)) ||
              (*(int *)((int)DAT_004b451c + 0x1636c) == 0)))))) {
      piVar4 = FUN_00461920(extraout_ECX,DAT_004ce8cc,
                            *(int *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8));
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8) = 0;
      }
      for (piVar4 = piVar4 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
        puVar8 = (undefined4 *)*piVar4;
        if (*(short *)((int)puVar8 + 0x3ea) == 0xae) goto LAB_00445079;
      }
      param_1 = (void *)0x0;
LAB_0044504b:
      FUN_00461d80();
    }
  case 1:
    if (6 < *(int *)((int)pvVar5 + 0x2b8)) {
      FUN_0043ef40(2);
      return 1;
    }
    break;
  case 2:
    if ((int)DAT_004b0ca8 < 4) {
      piVar4 = (int *)((int)param_1 + 0x28);
      *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)param_1 + 0x28);
      if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
        FUN_00464970(-1);
        pvVar9 = extraout_ECX_03;
      }
      if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
        FUN_00464970(1);
        pvVar9 = extraout_ECX_04;
      }
      if (*(int *)((int)pvVar5 + 0x2c) != *piVar4) {
        FUN_00453d90(pvVar9,10);
        FUN_0043f010(pvVar3);
        pvVar9 = *(void **)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8);
        FUN_00461970(pvVar9,(int)pvVar9);
        pvVar9 = extraout_ECX_05;
      }
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
      FUN_0043ef40(4);
      FUN_00453d90(extraout_ECX_06,9);
      FUN_0043efd0(extraout_ECX_07);
      return 1;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      puVar8 = (undefined4 *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8);
      FUN_00461970(pvVar9,*(int *)((int)pvVar5 + (int)pvVar3 * 4 + 0x2c8));
      if ((int)DAT_004b0ca8 < 4) {
        FUN_00462060(extraout_ECX_08);
        pvVar5 = param_1;
        pvVar9 = extraout_ECX_09;
      }
      else {
        uVar7 = *puVar8;
        piVar4 = FUN_00461920(uVar7,DAT_004ce8cc,uVar7);
        if (piVar4 == (int *)0x0) {
          *puVar8 = 0;
        }
        piVar4 = piVar4 + 4;
        pvVar9 = extraout_ECX_10;
        if (piVar4 != (int *)0x0) {
          pvVar9 = (void *)0x7d;
          do {
            if (*(short *)(*piVar4 + 0x3ea) == 0x7d) {
              pvVar5 = *(void **)*piVar4;
              goto LAB_004451a4;
            }
            piVar4 = (int *)piVar4[1];
          } while (piVar4 != (int *)0x0);
        }
        pvVar5 = (void *)0x0;
      }
LAB_004451a4:
      FUN_00461970(pvVar9,(int)pvVar5);
      FUN_0043ef40(3);
      FUN_00453d90(extraout_ECX_11,7);
      return 1;
    }
    break;
  case 3:
    if (0xd < *(int *)((int)param_1 + 0x2b8)) {
      FUN_0043efd0(DAT_004b0ca8);
      FUN_0043eee0(extraout_ECX_12,6);
      if ((int)DAT_004b0ca8 < 4) {
        DAT_004b0ca8 = *(void **)((int)pvVar5 + 0x28);
      }
      DAT_004aebd0 = DAT_004b0ca8;
      puVar6 = (( uint * (__stdcall *)())FUN_00464900)();
      uVar2 = DAT_004ce8bc;
      *(undefined4 *)((int)pvVar5 + 0xf8) = 1;
      *(undefined4 *)((int)pvVar5 + 0x30) = 3;
      FUN_0040f790(uVar2,puVar6);
      DAT_004b0c90 = uVar2;
      return 1;
    }
    break;
  case 4:
    if (5 < *(int *)((int)param_1 + 0x2b8)) {
      FUN_0043efd0(DAT_004b0ca8);
      FUN_00461970(*(void **)((int)pvVar5 + 0x66c),(int)*(void **)((int)pvVar5 + 0x66c));
      *(undefined4 *)((int)pvVar5 + 0x66c) = 0;
      FUN_0043eee0(extraout_ECX_13,1);
      if ((int)DAT_004b0ca8 < 4) {
        DAT_004aebd0 = *(void **)((int)pvVar5 + 0x28);
      }
      else {
        DAT_004aebd0 = *(void **)((int)pvVar5 + 0x598c);
      }
      DAT_004b0ca8 = DAT_004aebd0;
      FUN_00464940();
    }
  }
  return 1;
LAB_00445079:
  param_1 = (void *)*puVar8;
  goto LAB_0044504b;
}


