/* ulonglong __fastcall FUN_0040b800(undefined4 param_1, undefined4 param_2) @ 0040b800  273 bytes */
#include "th12.h"

ulonglong __fastcall FUN_0040b800(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  float10 fVar3;
  ulonglong uVar4;
  
  if (*(int *)((int)in_EAX + 0x940) < *(int *)((int)in_EAX + 0x964)) {
    *(float *)((int)in_EAX + 0x4d4) =
         *(float *)((int)in_EAX + 0x950) * DAT_004b2ed0 + *(float *)((int)in_EAX + 0x4d4);
    fVar1 = *(float *)((int)in_EAX + 0x95c) * DAT_004b2ed0;
    fVar2 = DAT_004b2ed0 * *(float *)((int)in_EAX + 0x960);
    *(float *)((int)in_EAX + 0x4c8) =
         *(float *)((int)in_EAX + 0x4c8) + DAT_004b2ed0 * *(float *)((int)in_EAX + 0x958);
    *(float *)((int)in_EAX + 0x4cc) = *(float *)((int)in_EAX + 0x4cc) + fVar1;
    *(float *)((int)in_EAX + 0x4d0) = fVar2 + *(float *)((int)in_EAX + 0x4d0);
    if ((0.0001 < ABS(*(float *)((int)in_EAX + 0x4c8)) != NANP(ABS(*(float *)((int)in_EAX + 0x4c8)))) ||
       (0.0001 < ABS(*(float *)((int)in_EAX + 0x4cc)))) {
      fVar3 = (( float10 (__fastcall *)())FUN_004937aa)(param_1);
      *(float *)((int)in_EAX + 0x4d8) = (float)fVar3;
    }
    uVar4 = FUN_00464a80();
    return uVar4 & 0xffffffff00000000;
  }
  *(uint *)((int)in_EAX + 0x528) = *(uint *)((int)in_EAX + 0x528) & 0xdfffffff;
  return CONCAT44(param_2,1);
}


