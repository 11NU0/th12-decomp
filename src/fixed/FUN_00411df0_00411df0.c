/* undefined __stdcall FUN_00411df0(void) @ 00411df0  45 bytes */
#include "th12.h"

void __stdcall FUN_00411df0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EAX;
  
  puVar2 = *(undefined4 **)((int)in_EAX + 0x1034);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[1];
    FUN_0046ca4f((void *)*puVar2);
    FUN_0046ca4f(puVar2);
    puVar2 = puVar1;
  }
  return;
}


