/* undefined __stdcall FUN_00460e70(void) @ 00460e70  138 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00460e70(void)

{
  void *extraout_ECX;
  
  DAT_004cee34 = &DAT_004cec04;
  FUN_00430910();
  (**(code **)(*DAT_004ce8f0 + 0xbc))(DAT_004ce8f0,DAT_004cee34 + 0xcc);
  _DAT_004cee38 = 1;
  FUN_0045a3c0();
  (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0xe,0);
  FUN_0045a3c0();
  (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x17,8);
  FUN_004611d0(extraout_ECX);
  return;
}


