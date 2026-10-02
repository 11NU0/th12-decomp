/* undefined __stdcall FUN_00412ee0(void) @ 00412ee0  35 bytes */
#include "th12.h"

void __stdcall FUN_00412ee0(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_004b43dc;
  if (*(int *)((int)DAT_004b43dc + 8) != 0) {
    puVar1 = (uint *)(*(int *)((int)DAT_004b43dc + 8) + 4);
    *puVar1 = *puVar1 | 2;
  }
  if (*(int *)((int)iVar2 + 0xc) != 0) {
    puVar1 = (uint *)(*(int *)((int)iVar2 + 0xc) + 4);
    *puVar1 = *puVar1 | 2;
  }
  return;
}


