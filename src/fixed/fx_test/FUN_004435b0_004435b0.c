/* undefined4 __fastcall FUN_004435b0(undefined4 param_1) @ 004435b0  849 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004435b0(undefined4 param_1)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  void *this;
  void *this_00;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  void *this_01;
  undefined4 extraout_ECX_02;
  int iVar3;
  int extraout_ECX_03;
  undefined4 uVar4;
  undefined4 extraout_ECX_04;
  void *this_02;
  uint uVar5;
  undefined4 extraout_ECX_05;
  int *extraout_EDX;
  int *extraout_EDX_00;
  undefined4 local_4;
  
  local_4 = param_1;
  switch(*(undefined4 *)(in_EAX + 0x24)) {
  case 0:
    *(undefined4 *)(in_EAX + 0x30) = 7;
    iVar3 = *(int *)(in_EAX + 0x30);
    if (iVar3 == 0) {
      *(undefined4 *)(in_EAX + 0x28) = 0;
    }
    else if (iVar3 < 1) {
      *(int *)(in_EAX + 0x28) = iVar3 + -1;
    }
    else {
      *(undefined4 *)(in_EAX + 0x28) = 0;
    }
    FUN_004615a0((void *)0x0,*(void **)(in_EAX + 0x14),&local_4,2,0);
    *(undefined4 *)(in_EAX + 0x2d0) = local_4;
    FUN_0043ef40(1);
    *(short *)(in_EAX + 0x5a68) = (short)_DAT_004d49ec;
    *(short *)(in_EAX + 0x5a6a) = (short)((uint)_DAT_004d49ec >> 0x10);
    *(undefined2 *)(in_EAX + 0x5a6c) = DAT_004d49f0;
    *(short *)(in_EAX + 0x5a6e) = (short)((uint)_DAT_004d49f0 >> 0x10);
    uVar5 = (uint)DAT_004d49fc;
    *(ushort *)(in_EAX + 0x5a70) = DAT_004d49fc;
    FUN_00443920(uVar5);
  case 1:
    if (6 < *(int *)(in_EAX + 0x2b8)) {
      FUN_0043ef40(2);
      FUN_004619e0(this,*(int *)(in_EAX + 0x2d0));
      FUN_00461970(this_00,*(int *)(in_EAX + 0x2d0));
      FUN_00444380(extraout_ECX,extraout_EDX,in_EAX);
      return 1;
    }
    break;
  case 2:
    uVar4 = *(undefined4 *)(in_EAX + 0x28);
    piVar1 = (int *)(in_EAX + 0x28);
    *(undefined4 *)(in_EAX + 0x2c) = uVar4;
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
      uVar4 = extraout_ECX_00;
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
      uVar4 = extraout_ECX_01;
    }
    if (*(int *)(in_EAX + 0x2c) != *piVar1) {
      FUN_00453d90(uVar4,10);
      FUN_004619e0(this_01,*(int *)(in_EAX + 0x2d0));
      FUN_00461970(*(void **)(in_EAX + 0x2d0),(int)*(void **)(in_EAX + 0x2d0));
      FUN_00444380(extraout_ECX_02,extraout_EDX_00,in_EAX);
    }
    iVar2 = FUN_00462db0();
    iVar3 = 0;
    do {
      if ((*(byte *)(iVar3 + iVar2) & 0x80) != 0) {
        if (*piVar1 < 5) {
          FUN_004442b0(iVar3,in_EAX);
          iVar3 = extraout_ECX_03;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1f);
    if (((DAT_004d48c4 & 0x102) != 0) && (*piVar1 == 6)) {
      *(short *)(in_EAX + 0x5a68) = (short)_DAT_004d49ec;
      *(short *)(in_EAX + 0x5a6a) = (short)((uint)_DAT_004d49ec >> 0x10);
      uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_004d49f0);
      *(undefined2 *)(in_EAX + 0x5a6c) = DAT_004d49f0;
      *(short *)(in_EAX + 0x5a6e) = (short)((uint)_DAT_004d49f0 >> 0x10);
      *(ushort *)(in_EAX + 0x5a70) = DAT_004d49fc;
      FUN_00443920(uVar4);
      uVar4 = extraout_ECX_04;
LAB_0044384c:
      FUN_00453d90(uVar4,9);
      FUN_00461970(this_02,*(int *)(in_EAX + 0x2d0));
      FUN_0043ef40(4);
      return 1;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      if (*piVar1 == 5) {
        *(short *)(in_EAX + 0x5a68) = (short)_DAT_004d49ec;
        *(short *)(in_EAX + 0x5a6a) = (short)((uint)_DAT_004d49ec >> 0x10);
        *(undefined2 *)(in_EAX + 0x5a6c) = DAT_004d49f0;
        *(short *)(in_EAX + 0x5a6e) = (short)((uint)_DAT_004d49f0 >> 0x10);
        uVar5 = (uint)DAT_004d49fc;
        *(ushort *)(in_EAX + 0x5a70) = DAT_004d49fc;
        FUN_00443920(uVar5);
        FUN_00453d90(extraout_ECX_05,7);
        return 1;
      }
      if (*piVar1 == 6) {
        DAT_004ceab4 = *(undefined4 *)(in_EAX + 0x5a68);
        DAT_004ceab8 = *(undefined4 *)(in_EAX + 0x5a6c);
        DAT_004ceac4 = *(ushort *)(in_EAX + 0x5a70);
        DAT_004ceabc = DAT_004d49f4;
        DAT_004ceac0 = DAT_004d49f8;
        uVar4 = DAT_004d49f8;
        _DAT_004d49ec = DAT_004ceab4;
        _DAT_004d49f0 = DAT_004ceab8;
        DAT_004d49fc = DAT_004ceac4;
        goto LAB_0044384c;
      }
    }
    break;
  case 4:
    if (9 < *(int *)(in_EAX + 0x2b8)) {
      FUN_0043eee0(param_1,3);
      FUN_00464940();
    }
  }
  return 1;
}


