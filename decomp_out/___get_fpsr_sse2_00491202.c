/* undefined4 __stdcall ___get_fpsr_sse2(void) @ 00491202  30 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___get_fpsr_sse2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 ___get_fpsr_sse2(void)

{
  undefined4 local_8;
  
  if (DAT_004d52dc == 0) {
    local_8 = 0;
  }
  else {
    local_8 = MXCSR;
  }
  return local_8;
}


