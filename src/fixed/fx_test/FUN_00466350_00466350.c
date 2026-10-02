/* int __fastcall FUN_00466350(uint param_1) @ 00466350  133 bytes */

#include "th12.h"

int __fastcall FUN_00466350(uint param_1)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  
  if (*(int *)(in_EAX + 4) == 0) {
    return -0x7ffbfe10;
  }
  piVar1 = (int *)FUN_00466280(param_1);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_00466220();
    if (-1 < iVar2) {
      uVar3 = extraout_EDX;
      if (param_1 != 0) {
        iVar2 = FUN_00465fe0(piVar1);
        if (iVar2 < 0) {
          return iVar2;
        }
        FUN_004665c0();
        uVar3 = extraout_EDX_00;
      }
      *(undefined4 *)(in_EAX + 0x1c) = 0;
      *(undefined4 *)(in_EAX + 0x14) = 0;
      *(undefined4 *)(in_EAX + 0x18) = 0;
      FUN_004663e0(0,uVar3);
      *(undefined4 *)(in_EAX + 0x30) = 1;
      *(undefined4 *)(in_EAX + 0x20) = 0;
      *(undefined4 *)(in_EAX + 0x24) = 1;
      *(undefined4 *)(in_EAX + 0x2c) = 0;
      iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,0,0,1);
    }
    return iVar2;
  }
  return -0x7fffbffb;
}


