/* int __fastcall FUN_00421a60(undefined4 param_1, short * param_2) @ 00421a60  219 bytes */
#include "th12.h"

int __fastcall FUN_00421a60(undefined4 param_1,short *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  short *extraout_EDX;
  short *psVar5;
  short *extraout_EDX_00;
  short *extraout_EDX_01;
  int iVar6;
  longlong lVar7;
  
  iVar3 = DAT_004b43e4;
  uVar1 = (*(int *)((int)DAT_004b43e4 + 0x6788) + 1) * 0x4b4 + 0x54b8 + DAT_004b43e4;
  iVar6 = *(int *)((int)DAT_004b43e4 + 0x6788) + 2;
  if (*(code **)((int)uVar1 + 0x494) != (code *)0x0) {
    (**(code **)((int)uVar1 + 0x494))();
    param_2 = extraout_EDX;
  }
  *(undefined2 *)((int)uVar1 + 0x3c4) = 9;
  FUN_00455630(9,param_2,uVar1);
  if (3 < iVar6) {
    iVar6 = 1;
  }
  psVar5 = (short *)(iVar6 * 0x4b4);
  pcVar2 = *(code **)((int)psVar5 + iVar3 + 0x594c);
  uVar1 = (int)psVar5 + iVar3 + 0x54b8;
  iVar6 = iVar6 + 1;
  uVar4 = extraout_ECX;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
    uVar4 = extraout_ECX_00;
    psVar5 = extraout_EDX_00;
  }
  *(undefined2 *)((int)uVar1 + 0x3c4) = 7;
  lVar7 = FUN_00455630(uVar4,psVar5,uVar1);
  psVar5 = (short *)((ulonglong)lVar7 >> 0x20);
  if (3 < iVar6) {
    iVar6 = 1;
  }
  pcVar2 = *(code **)(iVar6 * 0x4b4 + 0x594c + iVar3);
  uVar1 = iVar6 * 0x4b4 + 0x54b8 + iVar3;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
    psVar5 = extraout_EDX_01;
  }
  *(undefined2 *)((int)uVar1 + 0x3c4) = 8;
  FUN_00455630(8,psVar5,uVar1);
  iVar6 = *(int *)((int)iVar3 + 0x6788) + 1;
  *(int *)((int)iVar3 + 0x6788) = iVar6 % 3;
  return iVar6 / 3;
}


