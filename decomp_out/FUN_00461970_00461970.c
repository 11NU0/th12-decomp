/* undefined __thiscall FUN_00461970(void * this, int param_1) @ 00461970  102 bytes */
#include "th12.h"

void __thiscall FUN_00461970(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined2 unaff_BX;
  
  piVar3 = FUN_00461920(this,DAT_004ce8cc,param_1);
  if (piVar3 != (int *)0x0) {
    if ((code *)piVar3[0x125] != (code *)0x0) {
      (*(code *)piVar3[0x125])();
    }
    *(undefined2 *)(piVar3 + 0xf1) = unaff_BX;
    if (piVar3[6] == 0) {
      for (piVar3 = (int *)piVar3[5]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        iVar1 = *piVar3;
        pcVar2 = *(code **)(iVar1 + 0x494);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)();
        }
        *(undefined2 *)(iVar1 + 0x3c4) = unaff_BX;
      }
    }
  }
  return;
}


