/* undefined __fastcall FUN_00412900(int param_1) @ 00412900  27 bytes */

#include "th12.h"

void __fastcall FUN_00412900(int param_1)

{
  undefined4 *in_EAX;
  
  *(undefined4 *)(param_1 + 0x460) = *in_EAX;
  *(undefined4 *)(param_1 + 0x464) = in_EAX[1];
  *(undefined4 *)(param_1 + 0x468) = in_EAX[2];
  return;
}


