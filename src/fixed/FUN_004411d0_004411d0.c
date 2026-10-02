/* undefined4 __fastcall FUN_004411d0(void * param_1) @ 004411d0  839 bytes */
#include "th12.h"

undefined4 __fastcall FUN_004411d0(void *param_1)

{
  int *piVar1;
  int iVar2;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  undefined4 extraout_ECX_01;
  void *extraout_ECX_02;
  void *this_01;
  undefined4 extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 uVar3;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int unaff_ESI;
  void *local_4;
  
  local_4 = param_1;
  switch(*(undefined4 *)((int)unaff_ESI + 0x24)) {
  case 0:
    *(undefined4 *)((int)unaff_ESI + 0x30) = 5;
    iVar2 = *(int *)((int)unaff_ESI + 0x30);
    if (iVar2 == 0) {
      *(undefined4 *)((int)unaff_ESI + 0x28) = 0;
    }
    else if (iVar2 < 1) {
      *(int *)((int)unaff_ESI + 0x28) = iVar2 + -1;
    }
    else {
      *(undefined4 *)((int)unaff_ESI + 0x28) = 0;
    }
    FUN_004615a0((void *)0x0,*(void **)((int)unaff_ESI + 0x14),&local_4,1,0);
    *(void **)((int)unaff_ESI + 0x2cc) = local_4;
    FUN_004426b0();
    FUN_0043ef40(1);
  case 1:
    if (6 < *(int *)((int)unaff_ESI + 0x2b8)) {
      FUN_0043ef40(2);
      FUN_004619e0(this,*(int *)((int)unaff_ESI + 0x2cc));
LAB_00441348:
      FUN_00461970(*(void **)((int)unaff_ESI + 0x2cc),(int)*(void **)((int)unaff_ESI + 0x2cc));
      FUN_00441530(extraout_ECX_03,extraout_EDX_00,unaff_ESI);
      return 1;
    }
    break;
  case 2:
    piVar1 = (int *)((int)unaff_ESI + 0x28);
    *(undefined4 *)((int)unaff_ESI + 0x2c) = *(undefined4 *)((int)unaff_ESI + 0x28);
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
      param_1 = extraout_ECX;
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
      param_1 = extraout_ECX_00;
    }
    if (*(int *)((int)unaff_ESI + 0x2c) != *piVar1) {
      FUN_00453d90(param_1,10);
      FUN_004619e0(*(void **)((int)unaff_ESI + 0x2cc),(int)*(void **)((int)unaff_ESI + 0x2cc));
      FUN_00461970(this_00,*(int *)((int)unaff_ESI + 0x2cc));
      FUN_00441530(extraout_ECX_01,extraout_EDX,unaff_ESI);
      param_1 = extraout_ECX_02;
    }
    if ((DAT_004d48c4 & 0x102) == 0) {
      if ((*piVar1 == 1) &&
         (iVar2 = FUN_00407700((void *)((int)unaff_ESI + 0x2b4),0x3c), param_1 = extraout_ECX_04,
         iVar2 != 0)) {
        FUN_00453d90(extraout_ECX_04,2);
        param_1 = extraout_ECX_05;
      }
      if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
        param_1 = (void *)0x0;
        if (*piVar1 == 0) {
          if (DAT_004cead0 < '\x05') {
            DAT_004cead0 = '\0';
          }
          else {
            DAT_004cead0 = DAT_004cead0 + -5;
          }
        }
        else {
          if (*piVar1 != 1) goto LAB_004413db;
          if (DAT_004cead1 < '\x05') {
            DAT_004cead1 = '\0';
          }
          else {
            DAT_004cead1 = DAT_004cead1 + -5;
          }
        }
        FUN_004426b0();
        param_1 = extraout_ECX_06;
      }
LAB_004413db:
      if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
        if (*piVar1 == 0) {
          DAT_004cead0 = DAT_004cead0 + '\x05';
          if ('d' < DAT_004cead0) {
            DAT_004cead0 = 'd';
          }
        }
        else {
          if (*piVar1 != 1) goto LAB_00441430;
          DAT_004cead1 = DAT_004cead1 + '\x05';
          if ('d' < DAT_004cead1) {
            DAT_004cead1 = 'd';
          }
        }
        FUN_004426b0();
        param_1 = extraout_ECX_07;
      }
LAB_00441430:
      if ((DAT_004d48c4 & 0x80001) == 0) {
        return 1;
      }
      iVar2 = *piVar1;
      if (iVar2 == 2) {
        FUN_00461970(param_1,*(int *)((int)unaff_ESI + 0x2cc));
        iVar2 = 7;
        uVar3 = extraout_ECX_10;
        goto LAB_004414ae;
      }
      if (iVar2 == 3) {
        DAT_004cead0 = 100;
        DAT_004cead1 = 0x50;
        DAT_004cead2 = 0;
        FUN_004426b0();
        FUN_00453d90(extraout_ECX_09,7);
        return 1;
      }
      if (iVar2 != 4) {
        return 1;
      }
    }
    else if (*piVar1 != 4) {
      FUN_00453d90(param_1,9);
      iVar2 = *(int *)((int)unaff_ESI + 0x30);
      if (iVar2 == 0) {
        *piVar1 = 4;
      }
      else if (iVar2 < 5) {
        *piVar1 = iVar2 + -1;
      }
      else {
        *piVar1 = 4;
      }
      FUN_004619e0(this_01,*(int *)((int)unaff_ESI + 0x2cc));
      goto LAB_00441348;
    }
    FUN_00461970(param_1,*(int *)((int)unaff_ESI + 0x2cc));
    iVar2 = 9;
    uVar3 = extraout_ECX_08;
LAB_004414ae:
    FUN_00453d90(uVar3,iVar2);
    FUN_0043ef40(4);
    return 1;
  case 4:
    if (9 < *(int *)((int)unaff_ESI + 0x2b8)) {
      if (*(int *)((int)unaff_ESI + 0x28) == 2) {
        FUN_0043eee0(param_1,4);
        FUN_00464900();
      }
      else if (*(int *)((int)unaff_ESI + 0x28) == 4) {
        FUN_0043eee0(param_1,1);
        FUN_00464940();
        return 1;
      }
    }
  }
  return 1;
}


