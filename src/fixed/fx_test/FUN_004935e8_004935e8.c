/* undefined __cdecl FUN_004935e8(int param_1, undefined4 param_2) @ 004935e8  125 bytes */

#include "th12.h"

void __cdecl FUN_004935e8(int param_1,undefined4 param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  unkbyte10 in_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_0049568c();
      if (DAT_004b4110 != 0) {
        return;
      }
      __startOneArgErrorHandling(&DAT_004b3570,0xf,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    fpatan(in_ST0,(float10)1);
  }
  if (DAT_004b4110 != 0) {
    return;
  }
  __math_exit(&DAT_004b3570,0xf,unaff_retaddr,param_1,param_2);
  return;
}


