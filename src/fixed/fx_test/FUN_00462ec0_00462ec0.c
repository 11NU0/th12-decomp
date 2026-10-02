/* undefined __stdcall FUN_00462ec0(void) @ 00462ec0  888 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00462ec0(void)

{
  int iVar1;
  undefined4 uVar2;
  BYTE local_104 [256];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)local_104;
  if (DAT_004cf3fc != 0) {
    if ((DAT_004cee78 & 0x400) == 0) {
      GetKeyboardState(local_104);
    }
    else {
      iVar1 = (**(code **)(*DAT_004ce908 + 0x24))(DAT_004ce908,0x100,local_104);
      if ((iVar1 == -0x7ff8ffe2) || (iVar1 != 0)) {
        (**(code **)(*DAT_004ce908 + 0x1c))(DAT_004ce908);
      }
    }
  }
  uVar2 = FUN_00462a80();
  _DAT_004d48bc = _DAT_004d48b8;
  _DAT_004d48b8 = uVar2;
  FUN_00465440((uint *)&DAT_004d48b8);
  ___security_check_cookie_4(local_4 ^ (uint)local_104);
  return;
}


