/* undefined4 __cdecl FUN_00472ccc(int * param_1) @ 00472ccc  60 bytes */

#include "th12.h"

undefined4 __cdecl FUN_00472ccc(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (DAT_004b3d94 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_004b3d94;
    uVar2 = 0;
  }
  return uVar2;
}


