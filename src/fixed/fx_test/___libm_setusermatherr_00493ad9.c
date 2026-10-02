/* undefined __cdecl ___libm_setusermatherr(int param_1) @ 00493ad9  46 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___libm_setusermatherr
   
   Library: Visual Studio 2008 Release */

void __cdecl ___libm_setusermatherr(int param_1)

{
  if (param_1 == 0) {
    DAT_004d52d0 = 0;
    return;
  }
  DAT_004d52d8 = __encode_pointer(param_1);
  DAT_004d52d0 = 1;
  return;
}


