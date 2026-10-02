/* undefined4 __cdecl FUN_0046ea29(ulong * param_1) @ 0046ea29  47 bytes */
#include "th12.h"

undefined4 __cdecl FUN_0046ea29(ulong *param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (ulong *)0x0) {
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0x16;
  }
  else {
    puVar1 = ___doserrno();
    *param_1 = *puVar1;
    uVar2 = 0;
  }
  return uVar2;
}


