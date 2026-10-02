/* undefined __stdcall FUN_00493440(void) @ 00493440  79 bytes */
#include "th12.h"

void FUN_00493440(void)

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
      FUN_004950a0();
      return;
    }
  }
  dVar2 = (double)in_ST0;
  FUN_004956e8(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  FUN_00493498(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  return;
}


