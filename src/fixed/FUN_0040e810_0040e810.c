/* undefined __stdcall FUN_0040e810(void) @ 0040e810  30 bytes */
#include "th12.h"

void __stdcall FUN_0040e810(void)

{
  uint *puVar1;
  int in_EAX;
  
  if (*(int *)((int)in_EAX + 8) != 0) {
    puVar1 = (uint *)(*(int *)((int)in_EAX + 8) + 4);
    *puVar1 = *puVar1 | 2;
  }
  if (*(int *)((int)in_EAX + 0xc) != 0) {
    puVar1 = (uint *)(*(int *)((int)in_EAX + 0xc) + 4);
    *puVar1 = *puVar1 | 2;
  }
  return;
}


