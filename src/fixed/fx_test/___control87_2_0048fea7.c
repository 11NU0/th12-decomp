/* int __cdecl ___control87_2(uint _NewValue, uint _Mask, uint * _X86_cw, uint * _Sse2_cw) @ 0048fea7  788 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___control87_2
   
   Library: Visual Studio 2008 Release */

int __cdecl ___control87_2(uint _NewValue,uint _Mask,uint *_X86_cw,uint *_Sse2_cw)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort in_FPUControlWord;
  
  uVar3 = 0;
  if (_X86_cw != (uint *)0x0) {
    if ((in_FPUControlWord & 1) != 0) {
      uVar3 = 0x10;
    }
    if ((in_FPUControlWord & 4) != 0) {
      uVar3 = uVar3 | 8;
    }
    if ((in_FPUControlWord & 8) != 0) {
      uVar3 = uVar3 | 4;
    }
    if ((in_FPUControlWord & 0x10) != 0) {
      uVar3 = uVar3 | 2;
    }
    if ((in_FPUControlWord & 0x20) != 0) {
      uVar3 = uVar3 | 1;
    }
    if ((in_FPUControlWord & 2) != 0) {
      uVar3 = uVar3 | 0x80000;
    }
    uVar2 = in_FPUControlWord & 0xc00;
    if ((in_FPUControlWord & 0xc00) != 0) {
      if (uVar2 == 0x400) {
        uVar3 = uVar3 | 0x100;
      }
      else if (uVar2 == 0x800) {
        uVar3 = uVar3 | 0x200;
      }
      else if (uVar2 == 0xc00) {
        uVar3 = uVar3 | 0x300;
      }
    }
    if ((in_FPUControlWord & 0x300) == 0) {
      uVar3 = uVar3 | 0x20000;
    }
    else if ((in_FPUControlWord & 0x300) == 0x200) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((in_FPUControlWord & 0x1000) != 0) {
      uVar3 = uVar3 | 0x40000;
    }
    uVar4 = ~_Mask & uVar3 | _NewValue & _Mask;
    if (uVar4 != uVar3) {
      uVar3 = __hw_cw();
      uVar4 = 0;
      if ((uVar3 & 1) != 0) {
        uVar4 = 0x10;
      }
      if ((uVar3 & 4) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((uVar3 & 8) != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((uVar3 & 0x10) != 0) {
        uVar4 = uVar4 | 2;
      }
      if ((uVar3 & 0x20) != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((uVar3 & 2) != 0) {
        uVar4 = uVar4 | 0x80000;
      }
      uVar1 = uVar3 & 0xc00;
      if (uVar1 != 0) {
        if (uVar1 == 0x400) {
          uVar4 = uVar4 | 0x100;
        }
        else if (uVar1 == 0x800) {
          uVar4 = uVar4 | 0x200;
        }
        else if (uVar1 == 0xc00) {
          uVar4 = uVar4 | 0x300;
        }
      }
      if ((uVar3 & 0x300) == 0) {
        uVar4 = uVar4 | 0x20000;
      }
      else if ((uVar3 & 0x300) == 0x200) {
        uVar4 = uVar4 | 0x10000;
      }
      if ((uVar3 & 0x1000) != 0) {
        uVar4 = uVar4 | 0x40000;
      }
    }
    *_X86_cw = uVar4;
  }
  if (_Sse2_cw != (uint *)0x0) {
    uVar3 = 0;
    if (DAT_004d52dc == 0) {
      *_Sse2_cw = 0;
    }
    else {
      if ((char)MXCSR < '\0') {
        uVar3 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar3 = uVar3 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar3 = uVar3 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar3 = uVar3 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar3 = uVar3 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar3 = uVar3 | 0x80000;
      }
      uVar4 = MXCSR & 0x6000;
      if (uVar4 != 0) {
        if (uVar4 == 0x2000) {
          uVar3 = uVar3 | 0x100;
        }
        else if (uVar4 == 0x4000) {
          uVar3 = uVar3 | 0x200;
        }
        else if (uVar4 == 0x6000) {
          uVar3 = uVar3 | 0x300;
        }
      }
      uVar1 = MXCSR & 0x8040;
      if (uVar1 == 0x40) {
        uVar3 = uVar3 | 0x2000000;
      }
      else if (uVar1 == 0x8000) {
        uVar3 = uVar3 | 0x3000000;
      }
      else if (uVar1 == 0x8040) {
        uVar3 = uVar3 | 0x1000000;
      }
      uVar1 = ~(_Mask & 0x308031f) & uVar3 | _Mask & 0x308031f & _NewValue;
      if (uVar1 != uVar3) {
        uVar3 = ___hw_cw_sse2(uVar4,uVar1);
        ___set_fpsr_sse2(uVar3);
        uVar3 = 0;
        if ((char)MXCSR < '\0') {
          uVar3 = 0x10;
        }
        if ((MXCSR & 0x200) != 0) {
          uVar3 = uVar3 | 8;
        }
        if ((MXCSR & 0x400) != 0) {
          uVar3 = uVar3 | 4;
        }
        if ((MXCSR & 0x800) != 0) {
          uVar3 = uVar3 | 2;
        }
        if ((MXCSR & 0x1000) != 0) {
          uVar3 = uVar3 | 1;
        }
        if ((MXCSR & 0x100) != 0) {
          uVar3 = uVar3 | 0x80000;
        }
        uVar4 = MXCSR & 0x6000;
        if (uVar4 != 0) {
          if (uVar4 == 0x2000) {
            uVar3 = uVar3 | 0x100;
          }
          else if (uVar4 == 0x4000) {
            uVar3 = uVar3 | 0x200;
          }
          else if (uVar4 == 0x6000) {
            uVar3 = uVar3 | 0x300;
          }
        }
        uVar4 = MXCSR & 0x8040;
        if (uVar4 == 0x40) {
          uVar3 = uVar3 | 0x2000000;
        }
        else if (uVar4 == 0x8000) {
          uVar3 = uVar3 | 0x3000000;
        }
        else if (uVar4 == 0x8040) {
          uVar3 = uVar3 | 0x1000000;
        }
      }
      *_Sse2_cw = uVar3;
    }
  }
  return 1;
}


