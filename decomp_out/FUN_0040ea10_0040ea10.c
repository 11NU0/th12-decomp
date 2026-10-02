/* undefined __stdcall FUN_0040ea10(void) @ 0040ea10  31 bytes */
#include "th12.h"

void FUN_0040ea10(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_004b4514;
  puVar1 = (uint *)(*(int *)(DAT_004b4514 + 8) + 4);
  *puVar1 = *puVar1 | 2;
  puVar1 = (uint *)(*(int *)(iVar2 + 0xc) + 4);
  *puVar1 = *puVar1 | 2;
  FUN_004385b0(iVar2);
  return;
}


