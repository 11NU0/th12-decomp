/* undefined4 __cdecl FUN_0046ed39(undefined4 * param_1) @ 0046ed39  65 bytes */
#include "th12.h"

undefined4 __cdecl FUN_0046ed39(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_1 == (undefined4 *)0x0) || (DAT_004b3c04 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_004ad2b0;
    uVar2 = 0;
  }
  return uVar2;
}


