/* undefined __stdcall FUN_00463980(void) @ 00463980  75 bytes */

#include "th12.h"

void __stdcall FUN_00463980(void)

{
  int iVar1;
  byte local_104 [256];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)local_104;
  GetKeyboardState(local_104);
  iVar1 = 0;
  do {
    local_104[iVar1] = local_104[iVar1] & 0x7f;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  SetKeyboardState(local_104);
  ___security_check_cookie_4(local_4 ^ (uint)local_104);
  return;
}


