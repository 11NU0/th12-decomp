/* ulonglong __fastcall FUN_0040b6f0(undefined4 param_1, undefined4 param_2) @ 0040b6f0  270 bytes */

#include "th12.h"

ulonglong __fastcall FUN_0040b6f0(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  float10 fVar3;
  ulonglong uVar4;
  
  if (*(int *)(in_EAX + 0x738) < *(int *)(in_EAX + 0x75c)) {
    *(float *)(in_EAX + 0x4d4) =
         *(float *)(in_EAX + 0x748) * DAT_004b2ed0 + *(float *)(in_EAX + 0x4d4);
    fVar1 = *(float *)(in_EAX + 0x754) * DAT_004b2ed0;
    fVar2 = DAT_004b2ed0 * *(float *)(in_EAX + 0x758);
    *(float *)(in_EAX + 0x4c8) =
         *(float *)(in_EAX + 0x4c8) + DAT_004b2ed0 * *(float *)(in_EAX + 0x750);
    *(float *)(in_EAX + 0x4cc) = *(float *)(in_EAX + 0x4cc) + fVar1;
    *(float *)(in_EAX + 0x4d0) = fVar2 + *(float *)(in_EAX + 0x4d0);
    if ((0.0001 < ABS(*(float *)(in_EAX + 0x4c8)) != NAN(ABS(*(float *)(in_EAX + 0x4c8)))) ||
       (0.0001 < ABS(*(float *)(in_EAX + 0x4cc)))) {
      fVar3 = (float10)FUN_004937aa(param_1);
      *(float *)(in_EAX + 0x4d8) = (float)fVar3;
    }
    uVar4 = FUN_00464a80();
    return uVar4 & 0xffffffff00000000;
  }
  *(uint *)(in_EAX + 0x528) = *(uint *)(in_EAX + 0x528) & 0xfffffffb;
  return CONCAT44(param_2,1);
}


