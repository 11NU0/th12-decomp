/* uint __cdecl FUN_00493a48(int param_1, undefined4 param_2) @ 00493a48  158 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_00493a48(int param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  bool in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_0049568c();
    }
    if (DAT_004b4110 == 0) {
      __startOneArgErrorHandling(&DAT_004b35b0,0x12,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return uVar1;
    }
  }
  else {
    fVar2 = (float10)fcos(in_ST0);
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - (fVar2 / _DAT_004a5dda) * _DAT_004a5dda;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_004b4110 == 0) {
      uVar1 = __math_exit(&DAT_004b35b0,0x12,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}


