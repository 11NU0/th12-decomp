/* undefined __stdcall FUN_0042f4b0(void) @ 0042f4b0  174 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_0042f4b0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  size_t local_88;
  char local_84 [128];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&local_88;
  uVar1 = FUN_0044b610(0x4d4c90);
  if ((char)uVar1 == '\0') {
    pcVar2 = &DAT_004a0954;
  }
  else {
    _sprintf(local_84,"th12_%.4x%c.ver",0x100,0x62);
    DAT_004cf28c = FUN_00463c10(&local_88,0);
    _DAT_004cf288 = local_88;
    if (DAT_004cf28c != (byte *)0x0) {
      ___security_check_cookie_4(local_4 ^ (uint)&local_88);
      return;
    }
    pcVar2 = &DAT_004a092c;
    DAT_004cf28c = (byte *)0x0;
  }
  FUN_00464300(pcVar2);
  ___security_check_cookie_4(local_4 ^ (uint)&local_88);
  return;
}


