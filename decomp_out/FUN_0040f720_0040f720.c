/* undefined __fastcall FUN_0040f720(undefined4 param_1) @ 0040f720  30 bytes */
#include "th12.h"

void __fastcall FUN_0040f720(undefined4 param_1)

{
  int in_EAX;
  
  if ((*(uint *)(in_EAX + 0x590) & 0x2000) == 0) {
    *(undefined4 *)(in_EAX + 0x558) = param_1;
    return;
  }
  *(undefined4 *)(in_EAX + 0x558) = 2;
  return;
}


