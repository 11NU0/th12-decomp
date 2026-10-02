/* undefined __fastcall FUN_004938c0(undefined4 param_1) @ 004938c0  79 bytes */

#include "th12.h"

void __fastcall FUN_004938c0(undefined4 param_1)

{
  bool bVar1;
  ushort in_FPUControlWord;
  float10 in_ST0;
  double dVar2;
  
  if (DAT_004d52d4 != 0) {
    bVar1 = (MXCSR & 0x1f80) == 0x1f80;
    if (bVar1) {
      bVar1 = (in_FPUControlWord & 0x7f) == 0x7f;
    }
    if (bVar1) {
      FUN_00495df0(param_1);
      return;
    }
  }
  dVar2 = (double)in_ST0;
  FUN_004956e8(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  FUN_00493918(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
  return;
}


