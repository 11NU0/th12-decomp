/* int __fastcall FUN_004690b0(int param_1, int param_2) @ 004690b0  89 bytes */

#include "th12.h"

int __fastcall FUN_004690b0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((1 << ((byte)param_1 & 0x1f) & (uint)*(ushort *)(*(int *)(param_2 + 4) + 8)) == 0) {
    return 0;
  }
  pfVar1 = (float *)(*(int *)(param_2 + 4) + 0x10 + param_1 * 4);
  if (0.0 < *pfVar1 != (*pfVar1 == 0.0)) {
    uVar3 = FUN_004931e0(pfVar1,param_2);
    return *(int *)(param_2 + 0x100c) + (int)uVar3 + param_2 + 8;
  }
  iVar2 = **(int **)(param_2 + 0x1014);
  uVar3 = FUN_004931e0(pfVar1,param_2);
  iVar2 = (**(code **)(iVar2 + 0x10))((int)uVar3);
  return iVar2;
}


