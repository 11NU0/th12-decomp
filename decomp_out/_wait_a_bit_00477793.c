/* uint __cdecl _wait_a_bit(DWORD param_1) @ 00477793  38 bytes */
#include "th12.h"

/* Library Function - Single Match
    _wait_a_bit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

uint __cdecl _wait_a_bit(DWORD param_1)

{
  uint uVar1;
  
  Sleep(param_1);
  uVar1 = param_1 + 1000;
  if (DAT_004b41d0 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


