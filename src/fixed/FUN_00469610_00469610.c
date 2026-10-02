/* undefined4 __fastcall FUN_00469610(undefined4 param_1, char param_2, undefined4 * param_3) @ 00469610  71 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00469610(undefined4 param_1,char param_2,undefined4 *param_3)

{
  int in_EAX;
  
  if (0xfff < *(int *)((int)in_EAX + 0x1000) + 4) {
    return 0xffffffff;
  }
  if (param_2 != '\0') {
    *(char *)(*(int *)((int)in_EAX + 0x1000) + in_EAX) = param_2;
    *(int *)((int)in_EAX + 0x1000) = *(int *)((int)in_EAX + 0x1000) + 4;
  }
  *(undefined4 *)(*(int *)((int)in_EAX + 0x1000) + in_EAX) = *param_3;
  *(int *)((int)in_EAX + 0x1000) = *(int *)((int)in_EAX + 0x1000) + 4;
  return 0;
}


