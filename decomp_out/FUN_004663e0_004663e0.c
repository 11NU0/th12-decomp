/* undefined __fastcall FUN_004663e0(int param_1, undefined4 param_2) @ 004663e0  125 bytes */
#include "th12.h"

void __fastcall FUN_004663e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  ulonglong uVar3;
  
  if (DAT_004d477c != 0) {
    piVar1 = (int *)**(undefined4 **)(in_EAX + 4);
    iVar2 = *piVar1;
    uVar3 = FUN_004931e0(param_1 + 5000,param_2);
    (**(code **)(iVar2 + 0x3c))(piVar1,(int)uVar3 + -5000);
    return;
  }
  piVar1 = (int *)**(undefined4 **)(in_EAX + 4);
  (**(code **)(*piVar1 + 0x3c))(piVar1,0xffffd8f0,param_1);
  return;
}


