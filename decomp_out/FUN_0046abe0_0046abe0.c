/* undefined4 __stdcall FUN_0046abe0(void) @ 0046abe0  119 bytes */
#include "th12.h"

undefined4 FUN_0046abe0(void)

{
  int in_EAX;
  float local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  local_18[0] = 160.0;
  local_18[1] = 448.0;
  local_18[2] = 0.0;
  local_18[3] = *(float *)(in_EAX + 0x508);
  local_8 = 0x43600000;
  local_4 = 0;
  FUN_0040cd00(local_18,~*(uint *)(DAT_004b43cc + 0x7c) & 1);
  FUN_004285f0(~*(uint *)(DAT_004b43cc + 0x7c) & 1);
  return 0;
}


