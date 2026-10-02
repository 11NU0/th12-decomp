/* uint __cdecl FUN_004937dd(int param_1, uint param_2) @ 004937dd  157 bytes */
#include "th12.h"

uint __cdecl FUN_004937dd(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_EDX;
  bool in_ZF;
  short in_FPUControlWord;
  undefined4 unaff_retaddr;
  ushort uVar2;
  undefined4 uVar3;
  
  uVar3 = CONCAT22((short)((uint)in_EDX >> 0x10),in_FPUControlWord);
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_0049568c();
      uVar2 = (ushort)uVar3;
      goto LAB_0049385b;
    }
    uVar1 = param_2 & 0x80000000;
    if (uVar1 == 0) goto LAB_004937fe;
  }
  else {
    uVar1 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar1 = FUN_00495675(uVar3);
    }
    if (((uVar1 & 0x80000000) == 0) ||
       ((((uVar1 & 0x7ff00000) == 0 && ((uVar1 & 0xfffff) == 0)) && (param_1 == 0)))) {
LAB_004937fe:
      if (DAT_004b4110 != 0) {
        return uVar1;
      }
      uVar1 = __math_exit(&DAT_004b3590,5,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  uVar2 = (ushort)uVar3;
  uVar1 = 1;
LAB_0049385b:
  if (DAT_004b4110 != 0) {
    return uVar1;
  }
  __startOneArgErrorHandling(&DAT_004b3590,5,uVar2,unaff_retaddr,param_1,param_2);
  return uVar1;
}


