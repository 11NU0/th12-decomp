/* uint __cdecl FID_conflict:__abstract_sw(byte param_1) @ 0048f8d7  67 bytes */
#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    ___abstract_sw_sse2
    __abstract_sw
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __cdecl FID_conflict___abstract_sw(byte param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x3f) != 0) {
    if ((param_1 & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((param_1 & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((param_1 & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((param_1 & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((param_1 & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((param_1 & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  return uVar1;
}


