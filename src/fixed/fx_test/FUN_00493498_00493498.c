/* undefined __cdecl FUN_00493498(int param_1, uint param_2) @ 00493498  174 bytes */

#include "th12.h"

void __cdecl FUN_00493498(int param_1,uint param_2)

{
  uint in_EAX;
  undefined4 in_EDX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  ushort uVar1;
  undefined4 uVar2;
  
  uVar2 = CONCAT22((short)((uint)in_EDX >> 0x10),in_FPUControlWord);
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
LAB_0049351a:
      uVar1 = (ushort)uVar2;
    }
    else {
      FUN_0049568c();
      uVar1 = (ushort)uVar2;
    }
    if (DAT_004b4110 == 0) {
      __startOneArgErrorHandling(&DAT_004b3560,0xd,uVar1,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_00495675(uVar2);
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_0049351a;
    if (DAT_004b4110 == 0) {
      __math_exit(&DAT_004b3560,0xd,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}


