/* undefined __stdcall FUN_004691e0(void) @ 004691e0  31 bytes */
#include "th12.h"

void __stdcall FUN_004691e0(void)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  
  piVar2 = *(int **)((int)in_EAX + 0x1034);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[1];
    *(undefined4 *)(*piVar2 + 4) = 0;
    piVar2 = piVar1;
  }
  return;
}


