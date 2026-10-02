/* undefined __stdcall FUN_0040d5d0(void) @ 0040d5d0  45 bytes */

#include "th12.h"

void __stdcall FUN_0040d5d0(void)

{
  int unaff_ESI;
  
  if (*(code **)(unaff_ESI + 0x494) != (code *)0x0) {
    (**(code **)(unaff_ESI + 0x494))();
    *(undefined2 *)(unaff_ESI + 0x3c4) = 2;
    return;
  }
  *(undefined2 *)(unaff_ESI + 0x3c4) = 2;
  return;
}


