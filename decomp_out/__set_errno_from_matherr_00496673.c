/* undefined __cdecl __set_errno_from_matherr(int param_1) @ 00496673  45 bytes */
#include "th12.h"

/* Library Function - Single Match
    __set_errno_from_matherr
   
   Library: Visual Studio 2008 Release */

void __cdecl __set_errno_from_matherr(int param_1)

{
  int *piVar1;
  
  if (param_1 == 1) {
    piVar1 = __errno();
    *piVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    piVar1 = __errno();
    *piVar1 = 0x22;
    return;
  }
  return;
}


