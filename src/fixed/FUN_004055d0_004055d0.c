/* undefined __fastcall FUN_004055d0(undefined4 param_1, int param_2) @ 004055d0  113 bytes */
#include "th12.h"

void __fastcall FUN_004055d0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_004b43c0;
  piVar3 = *(int **)((int)DAT_004b43c0 + 0x1c);
  if (-1 < *piVar3) {
    while ((*(short *)((int)piVar3 + 1) != 0x10 || (piVar3[2] != param_2))) {
      piVar3 = (int *)((int)piVar3 + (int)*(short *)((int)piVar3 + 6));
      if (*piVar3 < 0) {
        return;
      }
    }
    piVar3 = (int *)((int)piVar3 + (int)*(short *)((int)piVar3 + 6));
    *(int **)((int)DAT_004b43c0 + 0x4c) = piVar3;
    iVar1 = *piVar3;
    if ((*(uint *)((int)iVar2 + 0x48) & 1) == 0) {
      *(undefined4 *)((int)iVar2 + 0x40) = 0;
      *(undefined4 *)((int)iVar2 + 0x3c) = 0;
      *(undefined4 *)((int)iVar2 + 0x38) = 0xfff0bdc1;
      *(undefined4 **)((int)iVar2 + 0x44) = &DAT_004b2ed0;
      *(uint *)((int)iVar2 + 0x48) = *(uint *)((int)iVar2 + 0x48) | 1;
    }
    *(int *)((int)iVar2 + 0x3c) = iVar1;
    *(int *)((int)iVar2 + 0x38) = iVar1 + -1;
    *(float *)((int)iVar2 + 0x40) = (float)iVar1;
  }
  return;
}


