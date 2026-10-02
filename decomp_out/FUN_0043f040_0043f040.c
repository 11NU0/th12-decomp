/* undefined __thiscall FUN_0043f040(void * this, int param_1) @ 0043f040  90 bytes */
#include "th12.h"

void __thiscall FUN_0043f040(void *this,int param_1)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  piVar1 = FUN_00461920(this,DAT_004ce8cc,*(int *)(in_EAX + 0x2c8));
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(in_EAX + 0x2c8) = 0;
  }
  iVar2 = FUN_00462020(extraout_ECX,param_1);
  if (*(code **)(iVar2 + 0x494) != (code *)0x0) {
    (**(code **)(iVar2 + 0x494))();
    *(undefined2 *)(iVar2 + 0x3c4) = 0x1d;
    return;
  }
  *(undefined2 *)(iVar2 + 0x3c4) = 0x1d;
  return;
}


