/* uint __cdecl __clearfp(void) @ 0048fdce  217 bytes */

#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x0048fe5a) */
/* WARNING: Removing unreachable block (ram,0x0048fe4a) */
/* WARNING: Removing unreachable block (ram,0x0048fe3a) */
/* WARNING: Removing unreachable block (ram,0x0048fe35) */
/* WARNING: Removing unreachable block (ram,0x0048fe3d) */
/* WARNING: Removing unreachable block (ram,0x0048fe42) */
/* WARNING: Removing unreachable block (ram,0x0048fe45) */
/* WARNING: Removing unreachable block (ram,0x0048fe4d) */
/* WARNING: Removing unreachable block (ram,0x0048fe52) */
/* WARNING: Removing unreachable block (ram,0x0048fe55) */
/* WARNING: Removing unreachable block (ram,0x0048fe5d) */
/* WARNING: Removing unreachable block (ram,0x0048fe62) */
/* Library Function - Single Match
    __clearfp
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  if (DAT_004d52dc == 0) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    return uVar1;
  }
  uVar1 = 0;
  if ((in_FPUStatusWord & 0x3f) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((in_FPUStatusWord & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1;
}


