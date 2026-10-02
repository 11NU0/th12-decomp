/* ulonglong __fastcall FUN_0040c170(undefined4 param_1, undefined4 param_2) @ 0040c170  191 bytes */

#include "th12.h"

ulonglong __fastcall FUN_0040c170(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  float10 fVar1;
  ulonglong uVar2;
  float fVar3;
  
  if (*(int *)(in_EAX + 0x8c8) <= *(int *)(in_EAX + 0x8a4)) {
    *(uint *)(in_EAX + 0x528) = *(uint *)(in_EAX + 0x528) & 0xff7fffff;
    return CONCAT44(param_2,1);
  }
  fVar3 = *(float *)(in_EAX + 0x4d8);
  fVar1 = FUN_004377a0((float *)(in_EAX + 0x4bc));
  fVar1 = FUN_00464640(*(float *)(in_EAX + 0x8b8),(float)fVar1);
  fVar1 = FUN_0040d4f0((float)fVar1,fVar3);
  fVar1 = FUN_00464640(*(float *)(in_EAX + 0x4d8),
                       (float)(fVar1 * (float10)*(float *)(in_EAX + 0x8b4) * (float10)DAT_004b2ed0))
  ;
  *(float *)(in_EAX + 0x4d8) = (float)fVar1;
  FUN_0040d640((void *)(in_EAX + 0x4c8),(float)fVar1,*(float *)(in_EAX + 0x4d4));
  uVar2 = FUN_00464a80();
  return uVar2 & 0xffffffff00000000;
}


