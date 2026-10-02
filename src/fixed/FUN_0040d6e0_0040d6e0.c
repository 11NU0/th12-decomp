/* undefined __stdcall FUN_0040d6e0(void) @ 0040d6e0  25 bytes */
#include "th12.h"

void __stdcall FUN_0040d6e0(void)

{
  int unaff_ESI;
  undefined2 unaff_DI;
  
  if (*(code **)((int)unaff_ESI + 0x494) != (code *)0x0) {
    (**(code **)((int)unaff_ESI + 0x494))();
  }
  *(undefined2 *)((int)unaff_ESI + 0x3c4) = unaff_DI;
  return;
}


