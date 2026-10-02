/* undefined4 __fastcall FUN_00445fc0(void * param_1) @ 00445fc0  995 bytes */
#include "th12.h"

/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall FUN_00445fc0(void *param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int in_EAX;
  uint uVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar12;
  undefined4 extraout_ECX_01;
  int iVar13;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  void *extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int iVar14;
  undefined4 extraout_EDX;
  void *local_4;
  
  local_4 = param_1;
  switch(*(undefined4 *)((int)in_EAX + 0x24)) {
  case 0:
    *(undefined4 *)((int)in_EAX + 0x30) = 6;
    iVar13 = *(int *)((int)in_EAX + 0x30);
    uVar11 = DAT_004ce8b8;
    if (iVar13 != 0) {
      if ((int)DAT_004ce8b8 < iVar13) {
        uVar11 = ((int)DAT_004ce8b8 < 0) - 1 & DAT_004ce8b8;
      }
      else {
        uVar11 = iVar13 - 1;
      }
    }
    *(uint *)((int)in_EAX + 0x28) = uVar11;
    FUN_004615a0((void *)0x0,*(void **)((int)in_EAX + 0x14),&local_4,0x76,0);
    *(void **)((int)in_EAX + 0x4a0) = local_4;
    FUN_004615a0((void *)0x0,*(void **)((int)in_EAX + 0x14),&local_4,0x78,0);
    *(void **)((int)in_EAX + 0x4a8) = local_4;
    FUN_0043ef40(1);
  case 1:
    if (10 < *(int *)((int)in_EAX + 0x2b8)) {
      FUN_0043ef40(2);
      return 1;
    }
    break;
  case 2:
    uVar12 = *(undefined4 *)((int)in_EAX + 0x28);
    puVar1 = (uint *)((int)in_EAX + 0x28);
    *(undefined4 *)((int)in_EAX + 0x2c) = uVar12;
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
      uVar12 = extraout_ECX;
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
      uVar12 = extraout_ECX_00;
    }
    if (*(uint *)((int)in_EAX + 0x2c) != *puVar1) {
      FUN_00453d90(uVar12,10);
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
      FUN_0043ef40(4);
      FUN_00453d90(extraout_ECX_01,9);
      DAT_004ce8b8 = *puVar1;
      return 1;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      iVar13 = (DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + DAT_004b451c;
      if (*(char *)(iVar13 + 0x5b1 + (*puVar1 + DAT_004b0ca8 * 6) * 8) == '\0') {
        iVar14 = 0x11;
      }
      else {
        FUN_0043ef40(3);
        iVar14 = 7;
        iVar13 = extraout_ECX_02;
      }
      FUN_00453d90(iVar13,iVar14);
      DAT_004ce8b8 = *puVar1;
      DAT_004b0cec = 0;
      iVar13 = FUN_00463910();
      bVar2 = DAT_004d4ca3;
      bVar3 = DAT_004d4ca4;
      bVar4 = DAT_004d4ca5;
      bVar5 = DAT_004d4ca6;
      bVar6 = DAT_004d4ca7;
      bVar7 = DAT_004d4ca8;
      bVar8 = DAT_004d4ca9;
      bVar9 = DAT_004d4caa;
      bVar10 = DAT_004d4ca2;
      if (iVar13 == 0) {
        bVar2 = DAT_004d4cd2;
        bVar3 = DAT_004d4cd3;
        bVar4 = DAT_004d4cd4;
        bVar5 = DAT_004d4cd5;
        bVar6 = DAT_004d4cd6;
        bVar7 = DAT_004d4cd7;
        bVar8 = DAT_004d4cd8;
        bVar9 = DAT_004d4cd9;
        bVar10 = DAT_004d4cd1;
      }
      if ((bVar10 & 0x80) != 0) {
        DAT_004b0cec = 1;
        return 1;
      }
      if ((bVar2 & 0x80) != 0) {
        DAT_004b0cec = 2;
        return 1;
      }
      if ((bVar3 & 0x80) != 0) {
        DAT_004b0cec = 3;
        return 1;
      }
      if ((bVar4 & 0x80) != 0) {
        DAT_004b0cec = 4;
        return 1;
      }
      if ((bVar5 & 0x80) != 0) {
        DAT_004b0cec = 5;
        return 1;
      }
      if ((bVar6 & 0x80) != 0) {
        DAT_004b0cec = 6;
        return 1;
      }
      if ((bVar7 & 0x80) != 0) {
        DAT_004b0cec = 7;
        return 1;
      }
      if ((bVar8 & 0x80) != 0) {
        DAT_004b0cec = 8;
        return 1;
      }
      if ((bVar9 & 0x80) != 0) {
        DAT_004b0cec = 9;
        return 1;
      }
    }
    break;
  case 3:
    if (*(int *)((int)in_EAX + 0x2b8) == 10) {
      FUN_00411b80(0x43f00000,0x43c40000);
      FUN_004529a0(5,0x20,0,0,0,0x3b);
    }
    if (0x27 < *(int *)((int)in_EAX + 0x2b8)) {
      FUN_00464900();
      FUN_0043eee0(extraout_ECX_03,2);
      DAT_004b0cb0 = *(int *)((int)in_EAX + 0x28) + 1;
      DAT_004b452c = ((char *)&DAT_004aebf0 + DAT_004b0cb0 * 0x40);
      DAT_004b0cb4 = DAT_004b0cb0;
      FUN_00430270(DAT_004b452c,extraout_EDX,0x40c00000);
      DAT_004cee40 = 7;
      return 1;
    }
    break;
  case 4:
    if (5 < *(int *)((int)in_EAX + 0x2b8)) {
      FUN_0043efd0(param_1);
      FUN_0043efd0(extraout_ECX_04);
      FUN_0043eee0(extraout_ECX_05,7);
      FUN_00464940();
    }
  }
  return 1;
}


