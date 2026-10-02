/* undefined4 __stdcall FUN_00463910(void) @ 00463910  101 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00463910(void)

{
  int iVar1;
  PBYTE unaff_ESI;
  
  _memset(unaff_ESI,0,0x100);
  if (DAT_004cf3fc == 0) {
    return 0;
  }
  if ((DAT_004cee78 & 0x400) == 0) {
    GetKeyboardState(unaff_ESI);
    return 2;
  }
  iVar1 = (**(code **)(*DAT_004ce908 + 0x24))(DAT_004ce908,0x100);
  if ((iVar1 == -0x7ff8ffe2) || (iVar1 != 0)) {
    (**(code **)(*DAT_004ce908 + 0x1c))(DAT_004ce908);
  }
  return 1;
}


