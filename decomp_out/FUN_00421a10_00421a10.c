/* undefined __stdcall FUN_00421a10(void) @ 00421a10  33 bytes */
#include "th12.h"

void FUN_00421a10(void)

{
  short in_AX;
  int unaff_ESI;
  
  if (*(code **)(unaff_ESI + 0x494) != (code *)0x0) {
    (**(code **)(unaff_ESI + 0x494))();
  }
  *(short *)(unaff_ESI + 0x3c4) = in_AX + 7;
  return;
}


