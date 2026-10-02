/* undefined __cdecl ___shl_12(uint * param_1) @ 00475a92  51 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___shl_12
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___shl_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] * 2 | uVar2 >> 0x1f;
  return;
}


