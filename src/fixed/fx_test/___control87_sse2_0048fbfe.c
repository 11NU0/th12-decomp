/* uint __cdecl ___control87_sse2(uint param_1, uint param_2) @ 0048fbfe  374 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___control87_sse2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __cdecl ___control87_sse2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if ((char)MXCSR < '\0') {
    uVar1 = 0x10;
  }
  if ((MXCSR & 0x200) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((MXCSR & 0x400) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((MXCSR & 0x800) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((MXCSR & 0x1000) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((MXCSR & 0x100) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = MXCSR & 0x6000;
  if (uVar2 != 0) {
    if (uVar2 == 0x2000) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x4000) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0x6000) {
      uVar1 = uVar1 | 0x300;
    }
  }
  uVar2 = MXCSR & 0x8040;
  if (uVar2 == 0x40) {
    uVar1 = uVar1 | 0x2000000;
  }
  else if (uVar2 == 0x8000) {
    uVar1 = uVar1 | 0x3000000;
  }
  else if (uVar2 == 0x8040) {
    uVar1 = uVar1 | 0x1000000;
  }
  uVar2 = param_1 & param_2 & 0x308031f;
  uVar3 = ~(param_2 & 0x308031f) & uVar1 | uVar2;
  if (uVar3 != uVar1) {
    uVar1 = ___hw_cw_sse2(uVar2,uVar3);
    ___set_fpsr_sse2(uVar1);
    uVar1 = 0;
    if ((char)MXCSR < '\0') {
      uVar1 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
    uVar2 = MXCSR & 0x6000;
    if (uVar2 != 0) {
      if (uVar2 == 0x2000) {
        uVar1 = uVar1 | 0x100;
      }
      else if (uVar2 == 0x4000) {
        uVar1 = uVar1 | 0x200;
      }
      else if (uVar2 == 0x6000) {
        uVar1 = uVar1 | 0x300;
      }
    }
    uVar2 = MXCSR & 0x8040;
    if (uVar2 == 0x40) {
      uVar1 = uVar1 | 0x2000000;
    }
    else if (uVar2 == 0x8000) {
      uVar1 = uVar1 | 0x3000000;
    }
    else if (uVar2 == 0x8040) {
      uVar1 = uVar1 | 0x1000000;
    }
  }
  return uVar1;
}


