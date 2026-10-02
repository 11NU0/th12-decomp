/* undefined __stdcall FUN_00450810(void) @ 00450810  156 bytes */

#include "th12.h"

void __stdcall FUN_00450810(void)

{
  int iVar1;
  int iVar2;
  undefined auStack_110 [4];
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)auStack_110;
  FUN_0044f4b0();
  if ((DAT_004d48c4 & 0x40000) != 0) {
    FUN_0046d585("snapshot");
    iVar2 = 0;
    while( true ) {
      _sprintf(local_10c,"snapshot/th%.3d.bmp",iVar2);
      iVar1 = FUN_00463df0(local_10c);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      if (999 < iVar2) {
        ___security_check_cookie_4(local_8 ^ (uint)auStack_110);
        return;
      }
    }
    if (iVar2 < 1000) {
      FUN_0042fca0();
    }
  }
  ___security_check_cookie_4(local_8 ^ (uint)auStack_110);
  return;
}


