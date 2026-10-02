/* int * __thiscall FUN_004619e0(void * this, int param_1) @ 004619e0  123 bytes */
#include "th12.h"

int * __fastcall FUN_004619e0(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *extraout_EDX_01;
  short *psVar6;
  undefined2 unaff_BX;
  longlong lVar7;
  
  piVar3 = FUN_00461920(this,DAT_004ce8cc,param_1);
  piVar4 = piVar3;
  if (piVar3 != (int *)0x0) {
    uVar5 = extraout_ECX;
    psVar6 = extraout_EDX;
    if ((code *)piVar3[0x125] != (code *)0x0) {
      (*(code *)piVar3[0x125])();
      uVar5 = extraout_ECX_00;
      psVar6 = extraout_EDX_00;
    }
    *(undefined2 *)((int)piVar3 + 0xf1) = unaff_BX;
    lVar7 = FUN_00455630(uVar5,psVar6,(uint)piVar3);
    piVar4 = (int *)lVar7;
    if (piVar3[6] == 0) {
      piVar3 = (int *)piVar3[5];
      while( true ) {
        psVar6 = (short *)((ulonglong)lVar7 >> 0x20);
        piVar4 = (int *)lVar7;
        if (piVar3 == (int *)0x0) break;
        iVar1 = *piVar3;
        pcVar2 = *(code **)((int)iVar1 + 0x494);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)();
          psVar6 = extraout_EDX_01;
        }
        *(undefined2 *)((int)iVar1 + 0x3c4) = unaff_BX;
        lVar7 = FUN_00455630(*piVar3,psVar6,*piVar3);
        piVar3 = (int *)piVar3[1];
      }
    }
  }
  return piVar4;
}


