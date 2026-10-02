/* ulonglong __fastcall FUN_0040b920(undefined4 param_1, undefined4 param_2) @ 0040b920  155 bytes */
#include "th12.h"

ulonglong __fastcall FUN_0040b920(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  int in_EAX;
  float10 fVar2;
  ulonglong uVar3;
  
  if (*(int *)((int)in_EAX + 0x790) <= *(int *)((int)in_EAX + 0x76c)) {
    *(uint *)((int)in_EAX + 0x528) = *(uint *)((int)in_EAX + 0x528) & 0xfffffff7;
    return CONCAT44(param_2,1);
  }
  fVar2 = FUN_00464640(*(float *)((int)in_EAX + 0x4d8),*(float *)((int)in_EAX + 0x780) * DAT_004b2ed0);
  *(float *)((int)in_EAX + 0x4d8) = (float)fVar2;
  fVar1 = *(float *)((int)in_EAX + 0x77c) * DAT_004b2ed0 + *(float *)((int)in_EAX + 0x4d4);
  *(float *)((int)in_EAX + 0x4d4) = fVar1;
  FUN_0040d640((void *)((int)in_EAX + 0x4c8),*(float *)((int)in_EAX + 0x4d8),fVar1);
  uVar3 = FUN_00464a80();
  return uVar3 & 0xffffffff00000000;
}


