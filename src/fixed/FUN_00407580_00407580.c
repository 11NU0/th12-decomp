/* undefined4 __stdcall FUN_00407580(void) @ 00407580  384 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00407580(void)

{
  float local_c [3];
  
  local_c[0] = 32.0;
  local_c[1] = 480.0;
  local_c[2] = 0.0;
  FUN_0040cd00(local_c,~*(uint *)((int)DAT_004b43cc + 0x7c) & 1);
  FUN_004285f0(~*(uint *)((int)DAT_004b43cc + 0x7c) & 1);
  local_c[0] = 128.0;
  local_c[1] = 448.0;
  FUN_0040cd00(local_c,~*(uint *)((int)DAT_004b43cc + 0x7c) & 1);
  FUN_004285f0(~*(uint *)((int)DAT_004b43cc + 0x7c) & 1);
  local_c[0] = 256.0;
  local_c[1] = 416.0;
  FUN_0040cd00(local_c,~*(uint *)((int)DAT_004b43cc + 0x7c) & 1);
  FUN_004285f0(~*(uint *)((int)DAT_004b43cc + 0x7c) & 1);
  return 0;
}


