/* undefined4 __fastcall FUN_0040baf0(undefined4 param_1) @ 0040baf0  297 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0040baf0(undefined4 param_1)

{
  int in_EAX;
  float local_4;
  
  if (*(int *)(in_EAX + 0x7a0) < *(int *)(in_EAX + 0x7c4)) {
    local_4 = *(float *)(in_EAX + 0x4d4) -
              (*(float *)(in_EAX + 0x7a4) * *(float *)(in_EAX + 0x4d4)) /
              (float)*(int *)(in_EAX + 0x7c4);
  }
  else {
    if (-1 < *(int *)(in_EAX + 0x544)) {
      FUN_00453d90(param_1,*(int *)(in_EAX + 0x544));
    }
    *(int *)(in_EAX + 0x7cc) = *(int *)(in_EAX + 0x7cc) + 1;
    *(undefined4 *)(in_EAX + 0x4d8) = *(undefined4 *)(in_EAX + 0x7b4);
    local_4 = *(float *)(in_EAX + 0x7b0);
    *(float *)(in_EAX + 0x4d4) = local_4;
    if ((*(uint *)(in_EAX + 0x7ac) & 1) == 0) {
      *(undefined4 *)(in_EAX + 0x7a4) = 0;
      *(undefined4 *)(in_EAX + 0x7a0) = 0;
      *(undefined4 *)(in_EAX + 0x79c) = 0xfff0bdc1;
      *(undefined4 **)(in_EAX + 0x7a8) = &DAT_004b2ed0;
      *(uint *)(in_EAX + 0x7ac) = *(uint *)(in_EAX + 0x7ac) | 1;
    }
    *(undefined4 *)(in_EAX + 0x7a4) = 0;
    *(undefined4 *)(in_EAX + 0x7a0) = 0;
    *(undefined4 *)(in_EAX + 0x79c) = 0xffffffff;
    if (*(int *)(in_EAX + 0x7c8) <= *(int *)(in_EAX + 0x7cc)) {
      FUN_0040d640((void *)(in_EAX + 0x4c8),*(float *)(in_EAX + 0x4d8),local_4);
      *(uint *)(in_EAX + 0x528) = *(uint *)(in_EAX + 0x528) & 0xffffffbf;
      return 1;
    }
  }
  FUN_0040d640((void *)(in_EAX + 0x4c8),*(float *)(in_EAX + 0x4d8),local_4);
  FUN_00464a80();
  return 0;
}


