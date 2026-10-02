/* undefined4 __stdcall FUN_00428450(int param_1) @ 00428450  208 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00428450(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  
  iVar2 = DAT_004b44f4;
  if (0xff < *(int *)((int)DAT_004b44f4 + 0x468)) {
    return 0;
  }
  *(int *)((int)DAT_004b44f4 + 0x46c) = *(int *)((int)DAT_004b44f4 + 0x46c) + 1;
  if (*(int *)((int)iVar2 + 0x46c) < 0x10000) {
    *(undefined4 *)((int)iVar2 + 0x46c) = 0x10000;
  }
  if (param_1 == 0) {
    pvVar3 = operator_new(0xfa4);
    if (pvVar3 == (void *)0x0) {
LAB_004284e5:
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (( int * (__stdcall *)())FUN_00428520)();
    }
  }
  else if (param_1 == 1) {
    pvVar3 = operator_new(0xfc8);
    if (pvVar3 == (void *)0x0) goto LAB_004284e5;
    piVar4 = (( int * (__stdcall *)())FUN_00428560)();
  }
  else {
    if (param_1 != 2) goto LAB_00428515;
    pvVar3 = operator_new(0xfa4);
    if (pvVar3 == (void *)0x0) goto LAB_004284e5;
    piVar4 = (( int * (__stdcall *)())FUN_004285b0)();
  }
  piVar4[0x20] = *(int *)((int)iVar2 + 0x46c);
  iVar1 = *(int *)((int)iVar2 + 0x464);
  piVar4[1] = iVar1;
  *(int **)((int)iVar1 + 8) = piVar4;
  *(int *)((int)iVar2 + 0x468) = *(int *)((int)iVar2 + 0x468) + 1;
  *(int **)((int)iVar2 + 0x464) = piVar4;
  (**(code **)(*piVar4 + 4))();
LAB_00428515:
  return *(undefined4 *)((int)iVar2 + 0x46c);
}


