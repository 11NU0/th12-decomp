/* undefined4 __stdcall FUN_0040bde0(void) @ 0040bde0  103 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0040bde0(void)

{
  int unaff_ESI;
  float10 fVar1;
  
  if (192.0 < *(float *)((int)unaff_ESI + 0x4bc) != (*(float *)((int)unaff_ESI + 0x4bc) == 192.0)) {
    if ((*(byte *)((int)unaff_ESI + 0x800) & 0x10) == 0) {
      fVar1 = FUN_00464640(-*(float *)((int)unaff_ESI + 0x4d8) - 3.1415927,0.0);
      *(float *)((int)unaff_ESI + 0x4d8) = (float)fVar1;
      *(float *)((int)unaff_ESI + 0x4bc) = 384.0 - *(float *)((int)unaff_ESI + 0x4bc);
    }
    return 1;
  }
  return 0;
}


