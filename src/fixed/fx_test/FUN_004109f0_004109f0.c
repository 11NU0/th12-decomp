/* undefined __fastcall FUN_004109f0(undefined4 param_1, int param_2) @ 004109f0  50 bytes */

#include "th12.h"

void __fastcall FUN_004109f0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  
  piVar1 = (int *)(in_EAX + 4);
  iVar2 = *(int *)(in_EAX + 4);
  while (iVar2 != 0) {
    in_EAX = *piVar1;
    piVar1 = (int *)(in_EAX + 4);
    iVar2 = *(int *)(in_EAX + 4);
  }
  if (*(int *)(in_EAX + 4) != 0) {
    *(int *)(param_2 + 4) = *(int *)(in_EAX + 4);
    *(int *)(*(int *)(in_EAX + 4) + 8) = param_2;
  }
  *(int *)(in_EAX + 4) = param_2;
  *(int *)(param_2 + 8) = in_EAX;
  return;
}


