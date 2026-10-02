/* uint __cdecl ___ctrlfp_sse2(uint param_1, uint param_2) @ 004912da  55 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___ctrlfp_sse2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __cdecl ___ctrlfp_sse2(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_004d52dc != 0) {
    uVar1 = ___get_fpsr_sse2();
    ___set_fpsr_sse2((~param_2 | 0xffff807f) & uVar1 | param_1 & param_2);
  }
  return uVar1;
}


