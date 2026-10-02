/* undefined4 __thiscall FUN_00445a40(void * this, int param_1) @ 00445a40  1360 bytes */
#include "th12.h"

undefined4 __thiscall FUN_00445a40(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *this_00;
  int iVar6;
  int extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  void *this_01;
  undefined4 extraout_ECX_04;
  void *extraout_ECX_05;
  undefined4 extraout_ECX_06;
  void *extraout_ECX_07;
  undefined4 extraout_ECX_08;
  void *extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_EDX;
  void *this_02;
  void *local_4;
  
  this_02 = (void *)((-(uint)(DAT_004b0ca8 != 4) & 0xfffffffd) + 0xb2);
  local_4 = this;
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    *(undefined4 *)(param_1 + 0x30) = 2;
    iVar1 = DAT_004b451c;
    if (DAT_004b0ca8 == 4) {
      if ((*(byte *)(DAT_004b451c + 0x1e9d0 + DAT_004b0c90 * 2) & 0x10) == 0) {
        if (*(int *)(param_1 + 0x28) == 0) {
          iVar6 = *(int *)(param_1 + 0x30);
          if (iVar6 == 0) {
            *(undefined4 *)(param_1 + 0x28) = 1;
          }
          else if (iVar6 < 2) {
            *(int *)(param_1 + 0x28) = iVar6 + -1;
          }
          else {
            *(undefined4 *)(param_1 + 0x28) = 1;
          }
        }
        *(undefined4 *)(param_1 + 0xb8 + *(int *)(param_1 + 0xfc) * 4) = 0;
        *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
      }
      if ((*(byte *)(iVar1 + 0x1e9d1 + DAT_004b0c90 * 2) & 0x10) == 0) {
        if (*(int *)(param_1 + 0x28) == 1) {
          iVar1 = *(int *)(param_1 + 0x30);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x28) = 0;
          }
          else if (iVar1 < 1) {
            *(int *)(param_1 + 0x28) = iVar1 + -1;
          }
          else {
            *(undefined4 *)(param_1 + 0x28) = 0;
          }
        }
        *(undefined4 *)(param_1 + 0xb8 + *(int *)(param_1 + 0xfc) * 4) = 1;
        *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
      }
    }
    FUN_004615a0((void *)0x0,*(void **)(param_1 + 0x14),&local_4,0x70,0);
    *(void **)(param_1 + 0x488) = local_4;
    iVar1 = DAT_004b0c90 + (int)this_02;
    pvVar2 = *(void **)(param_1 + 0x2c8 + iVar1 * 4);
    FUN_00461970(pvVar2,(int)pvVar2);
    *(undefined4 *)(param_1 + 0x2c8 + iVar1 * 4) = 0;
    FUN_0043efa0();
    pvVar2 = *(void **)(param_1 + 0x2c8 + (DAT_004b0c90 + (int)this_02) * 4);
    FUN_004619e0(pvVar2,(int)pvVar2);
    FUN_00461970(this_00,*(int *)(param_1 + 0x2c8 + (DAT_004b0c90 + (int)this_02) * 4));
    FUN_0043ef40(1);
    iVar1 = DAT_004b451c;
    iVar6 = DAT_004b0c90 * 0x22fa + DAT_004b0ca8;
    if (*(int *)(DAT_004b451c + 0x598 + iVar6 * 4) == 0) {
      iVar3 = DAT_004b0c90 + (int)this_02;
      piVar4 = FUN_00461920(iVar6,DAT_004ce8cc,*(int *)(param_1 + 0x2c8 + iVar3 * 4));
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x2c8 + iVar3 * 4) = 0;
      }
      for (piVar4 = piVar4 + 4; (piVar4 != (int *)0x0 && (*(short *)(*piVar4 + 0x3ea) != 0xa8));
          piVar4 = (int *)piVar4[1]) {
      }
      FUN_00461d80();
      iVar6 = extraout_ECX;
    }
    if (*(int *)(iVar1 + 0x4b8c + (DAT_004b0c90 * 0x22fa + DAT_004b0ca8) * 4) == 0) {
      piVar4 = (int *)(param_1 + 0x2c8 + (DAT_004b0c90 + (int)this_02) * 4);
      piVar5 = FUN_00461920(iVar6,DAT_004ce8cc,*piVar4);
      if (piVar5 == (int *)0x0) {
        *piVar4 = 0;
      }
      for (piVar5 = piVar5 + 4; (piVar5 != (int *)0x0 && (*(short *)(*piVar5 + 0x3ea) != 0xa9));
          piVar5 = (int *)piVar5[1]) {
      }
      FUN_00461d80();
    }
  case 1:
    if (6 < *(int *)(param_1 + 0x2b8)) {
      FUN_0043ef40(2);
      return 1;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
      this = extraout_ECX_00;
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
      this = extraout_ECX_01;
    }
    if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
      FUN_00453d90(this,10);
      FUN_004619e0((void *)(DAT_004b0c90 + (int)this_02),
                   *(int *)(param_1 + 0x2c8 + (DAT_004b0c90 + (int)this_02) * 4));
      FUN_00461970(this_02,*(int *)(param_1 + 0x2c8 + (DAT_004b0c90 + (int)this_02) * 4));
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
      FUN_0043ef40(4);
      FUN_00453d90(extraout_ECX_02,9);
      return 1;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      FUN_0043ef40(3);
      FUN_00453d90(extraout_ECX_03,7);
      FUN_00462060(*(int *)(param_1 + 0x28));
      FUN_00461970(this_01,(int)this_02);
      if (((byte)DAT_004b0ce0 & 0x10) == 0) {
        FUN_00430270(extraout_ECX_04,extraout_EDX,0x3f800000);
        return 1;
      }
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x2b8) == 10) {
      if (((byte)DAT_004b0ce0 & 0x10) == 0) {
        FUN_00411b80(0x43f00000,0x43c40000);
        FUN_004529a0(5,0x20,0,0,0,0x40);
      }
      else {
        DAT_004b0c94 = *(undefined4 *)(param_1 + 0x28);
        DAT_004ce8c0 = DAT_004b0c94;
        FUN_00464900();
        FUN_0043efd0(extraout_ECX_05);
        FUN_0043eee0(extraout_ECX_06,8);
      }
    }
    if (0x27 < *(int *)(param_1 + 0x2b8)) {
      DAT_004b0c94 = *(undefined4 *)(param_1 + 0x28);
      DAT_004ce8c0 = DAT_004b0c94;
      FUN_00464900();
      if (((byte)DAT_004b0ce0 & 0x10) != 0) {
        FUN_0043efd0(extraout_ECX_07);
        FUN_0043eee0(extraout_ECX_08,8);
        return 1;
      }
      FUN_0043eee0(extraout_ECX_07,2);
      if (DAT_004b0ca8 < 4) {
        DAT_004cee40 = 7;
        DAT_004b452c = &DAT_004aec30;
        DAT_004b0cb0 = 1;
        DAT_004b0cb4 = 1;
        return 1;
      }
      DAT_004b0cb0 = 7;
      DAT_004b0cb4 = 7;
      DAT_004cee40 = 7;
      DAT_004b452c = &DAT_004aedb0;
      return 1;
    }
    break;
  case 4:
    if (5 < *(int *)(param_1 + 0x2b8)) {
      DAT_004b0c94 = *(undefined4 *)(param_1 + 0x28);
      DAT_004ce8c0 = DAT_004b0c94;
      FUN_0043efd0(this);
      FUN_0043efd0(extraout_ECX_09);
      FUN_0043eee0(extraout_ECX_10,6);
      FUN_00464940();
    }
  }
  return 1;
}


