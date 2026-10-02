/* undefined4 __cdecl FUN_0046e9d9(int * param_1) @ 0046e9d9  47 bytes */
#include "th12.h"

undefined4 __cdecl FUN_0046e9d9(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0x16;
  }
  else {
    piVar1 = __errno();
    *param_1 = *piVar1;
    uVar2 = 0;
  }
  return uVar2;
}


