/* undefined4 __cdecl __set_amblksiz(int param_1) @ 0046ecee  75 bytes */
#include "th12.h"

/* Library Function - Single Match
    __set_amblksiz
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl __set_amblksiz(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    piVar1 = __errno();
  }
  else {
    if (DAT_004b3c04 != 0) {
      DAT_004ad2b0 = param_1;
      return 0;
    }
    piVar1 = __errno();
  }
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


