/* undefined __cdecl ___set_statfp_sse2(uint param_1) @ 00491311  27 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___set_statfp_sse2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___set_statfp_sse2(uint param_1)

{
  uint uVar1;
  
  uVar1 = ___get_fpsr_sse2();
  ___set_fpsr_sse2(uVar1 | param_1 & 0x3f);
  return;
}


