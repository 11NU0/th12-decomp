/* undefined __stdcall FUN_004219e0(void) @ 004219e0  45 bytes */
#include "th12.h"

void FUN_004219e0(void)

{
  int unaff_ESI;
  
  if (*(code **)(unaff_ESI + 0x494) != (code *)0x0) {
    (**(code **)(unaff_ESI + 0x494))();
    *(undefined2 *)(unaff_ESI + 0x3c4) = 3;
    return;
  }
  *(undefined2 *)(unaff_ESI + 0x3c4) = 3;
  return;
}


