/* float10 __fastcall FUN_00468ec0(float param_1) @ 00468ec0  175 bytes */

#include "th12.h"

float10 __fastcall FUN_00468ec0(float param_1)

{
  float *pfVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  float10 fVar4;
  ulonglong uVar5;
  undefined4 local_4;
  
  iVar2 = *(int *)(in_EAX + 4);
  uVar3 = (uint)*(ushort *)(iVar2 + 8);
  if ((1 << (SUB41(param_1,0) & 0x1f) & uVar3) == 0) {
    return (float10)*(float *)(iVar2 + 0x10 + (int)param_1 * 4);
  }
  pfVar1 = (float *)(iVar2 + 0x10 + (int)param_1 * 4);
  if (0.0 < *pfVar1 != (*pfVar1 == 0.0)) {
    uVar5 = FUN_004931e0(pfVar1,uVar3);
    return (float10)*(float *)((int)uVar5 + *(int *)(in_EAX + 0x100c) + 8 + in_EAX);
  }
  if (NAN(*pfVar1) != (*pfVar1 == -1.0)) {
    iVar2 = *(int *)(in_EAX + 0x1008);
    local_4 = param_1;
    if (-1 < iVar2 + -4) {
      *(int *)(in_EAX + 0x1008) = iVar2 + -4;
      local_4 = *(float *)(iVar2 + 4 + in_EAX);
      *(int *)(in_EAX + 0x1008) = iVar2 + -8;
      if ((*(char *)(iVar2 + in_EAX) != 'f') && (*(char *)(iVar2 + in_EAX) == 'i')) {
        local_4 = (float)(int)local_4;
      }
    }
    return (float10)local_4;
  }
  iVar2 = **(int **)(in_EAX + 0x1014);
  uVar5 = FUN_004931e0(pfVar1,uVar3);
  fVar4 = (float10)(**(code **)(iVar2 + 0xc))((int)uVar5);
  return fVar4;
}


