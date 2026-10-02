/* longlong __thiscall FUN_0043f0a0(void * this, int param_1) @ 0043f0a0  80 bytes */
#include "th12.h"

longlong __fastcall FUN_0043f0a0(void *this,int param_1)

{
  int in_EAX;
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *psVar4;
  undefined2 unaff_BX;
  int unaff_EDI;
  longlong lVar5;
  
  piVar1 = FUN_00461920(this,DAT_004ce8cc,*(int *)(unaff_EDI + 0x2c8 + in_EAX * 4));
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(unaff_EDI + 0x2c8 + in_EAX * 4) = 0;
  }
  uVar2 = FUN_00462020(extraout_ECX,param_1);
  uVar3 = extraout_ECX_00;
  psVar4 = extraout_EDX;
  if (*(code **)((int)uVar2 + 0x494) != (code *)0x0) {
    (**(code **)((int)uVar2 + 0x494))();
    uVar3 = extraout_ECX_01;
    psVar4 = extraout_EDX_00;
  }
  *(undefined2 *)((int)uVar2 + 0x3c4) = unaff_BX;
  lVar5 = FUN_00455630(uVar3,psVar4,uVar2);
  return lVar5;
}


