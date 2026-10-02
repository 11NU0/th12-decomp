/* undefined4 __fastcall FUN_0040bc20(undefined4 param_1) @ 0040bc20  329 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0040bc20(undefined4 param_1)

{
  int in_EAX;
  float10 fVar1;
  float fVar2;
  float local_4;
  
  if (*(int *)((int)in_EAX + 0x7a0) < *(int *)((int)in_EAX + 0x7c4)) {
    local_4 = *(float *)((int)in_EAX + 0x4d4) -
              (*(float *)((int)in_EAX + 0x7a4) * *(float *)((int)in_EAX + 0x4d4)) /
              (float)*(int *)((int)in_EAX + 0x7c4);
  }
  else {
    if (-1 < *(int *)((int)in_EAX + 0x544)) {
      FUN_00453d90(param_1,*(int *)((int)in_EAX + 0x544));
    }
    fVar2 = *(float *)((int)in_EAX + 0x7b4);
    *(int *)((int)in_EAX + 0x7cc) = *(int *)((int)in_EAX + 0x7cc) + 1;
    fVar1 = FUN_004377a0((float *)((int)in_EAX + 0x4bc));
    fVar1 = FUN_00464640((float)fVar1,fVar2);
    *(float *)((int)in_EAX + 0x4d8) = (float)fVar1;
    local_4 = *(float *)((int)in_EAX + 0x7b0);
    *(float *)((int)in_EAX + 0x4d4) = local_4;
    if ((*(uint *)((int)in_EAX + 0x7ac) & 1) == 0) {
      *(undefined4 *)((int)in_EAX + 0x7a4) = 0;
      *(undefined4 *)((int)in_EAX + 0x7a0) = 0;
      *(undefined4 *)((int)in_EAX + 0x79c) = 0xfff0bdc1;
      *(undefined4 **)((int)in_EAX + 0x7a8) = &DAT_004b2ed0;
      *(uint *)((int)in_EAX + 0x7ac) = *(uint *)((int)in_EAX + 0x7ac) | 1;
    }
    *(undefined4 *)((int)in_EAX + 0x7a4) = 0;
    *(undefined4 *)((int)in_EAX + 0x7a0) = 0;
    *(undefined4 *)((int)in_EAX + 0x79c) = 0xffffffff;
    if (*(int *)((int)in_EAX + 0x7c8) <= *(int *)((int)in_EAX + 0x7cc)) {
      FUN_0040d640((void *)((int)in_EAX + 0x4c8),*(float *)((int)in_EAX + 0x4d8),local_4);
      *(uint *)((int)in_EAX + 0x528) = *(uint *)((int)in_EAX + 0x528) & 0xffffffdf;
      return 1;
    }
  }
  FUN_0040d640((void *)((int)in_EAX + 0x4c8),*(float *)((int)in_EAX + 0x4d8),local_4);
  FUN_00464a80();
  return 0;
}


