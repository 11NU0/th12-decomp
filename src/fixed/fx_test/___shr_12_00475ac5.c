/* undefined __cdecl ___shr_12(uint * param_1) @ 00475ac5  50 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___shr_12
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___shr_12(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}


