/* wchar_t * __cdecl __GET_RTERRMSG(int param_1) @ 00473138  38 bytes */

#include "th12.h"

/* Library Function - Single Match
    __GET_RTERRMSG
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_004ad3f8)[uVar1 * 2]) {
      return (wchar_t *)(&PTR_s_R6002___floating_point_support_n_004ad3fc)[uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x17);
  return (wchar_t *)0x0;
}


