/* undefined __cdecl ___set_fpsr_sse2(uint param_1) @ 00491220  68 bytes */

#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2008 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_004d52dc != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_004ae448 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}


