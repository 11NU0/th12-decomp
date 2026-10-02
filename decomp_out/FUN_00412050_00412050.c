/* int __fastcall FUN_00412050(int * param_1) @ 00412050  61 bytes */
#include "th12.h"

int __fastcall FUN_00412050(int *param_1)

{
  int in_EAX;
  int iVar1;
  
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    param_1[3] = param_1[3] - in_EAX;
    iVar1 = (param_1[3] + param_1[4] * -7) / 7 + param_1[4];
    *param_1 = iVar1;
    return iVar1;
  }
  *param_1 = *param_1 - in_EAX;
  return *param_1;
}


