/* undefined __stdcall FUN_0040d990(void) @ 0040d990  35 bytes */
#include "th12.h"

void FUN_0040d990(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_004b43cc;
  if (*(int *)(DAT_004b43cc + 8) != 0) {
    puVar1 = (uint *)(*(int *)(DAT_004b43cc + 8) + 4);
    *puVar1 = *puVar1 | 2;
  }
  if (*(int *)(iVar2 + 0xc) != 0) {
    puVar1 = (uint *)(*(int *)(iVar2 + 0xc) + 4);
    *puVar1 = *puVar1 | 2;
  }
  return;
}


