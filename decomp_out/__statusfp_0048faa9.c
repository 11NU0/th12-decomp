/* uint __cdecl __statusfp(void) @ 0048faa9  146 bytes */
#include "th12.h"

/* Library Function - Single Match
    __statusfp
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __cdecl __statusfp(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  
  uVar2 = 0;
  if ((in_FPUStatusWord & 0x3f) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((in_FPUStatusWord & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  if (DAT_004d52dc != 0) {
    uVar1 = 0;
    if ((MXCSR & 0x3f) != 0) {
      if ((MXCSR & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((MXCSR & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((MXCSR & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((MXCSR & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((MXCSR & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((MXCSR & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    uVar2 = uVar1 | uVar2;
  }
  return uVar2;
}


