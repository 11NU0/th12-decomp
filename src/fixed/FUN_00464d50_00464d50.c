/* undefined __stdcall FUN_00464d50(void) @ 00464d50  84 bytes */
#include "th12.h"

void __stdcall FUN_00464d50(void)

{
  int unaff_ESI;
  float10 fVar1;
  
  if ((*(byte *)((int)unaff_ESI + 0x30) & 1) == 0) {
    FUN_00465390((void *)((int)unaff_ESI + 0xc),*(float *)((int)unaff_ESI + 0x1c),*(float *)((int)unaff_ESI + 0x18)
                );
    *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
    return;
  }
  *(float *)((int)unaff_ESI + 0x20) = *(float *)((int)unaff_ESI + 0x24) + *(float *)((int)unaff_ESI + 0x20);
  fVar1 = FUN_004646e0(*(float *)((int)unaff_ESI + 0x18) + *(float *)((int)unaff_ESI + 0x1c));
  fVar1 = FUN_004646e0((float)fVar1);
  *(float *)((int)unaff_ESI + 0x1c) = (float)fVar1;
  return;
}


