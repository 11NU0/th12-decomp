/* undefined __stdcall FUN_0040d6e0(void) @ 0040d6e0  25 bytes */
#include "th12.h"

void FUN_0040d6e0(void)

{
  int unaff_ESI;
  undefined2 unaff_DI;
  
  if (*(code **)(unaff_ESI + 0x494) != (code *)0x0) {
    (**(code **)(unaff_ESI + 0x494))();
  }
  *(undefined2 *)(unaff_ESI + 0x3c4) = unaff_DI;
  return;
}


