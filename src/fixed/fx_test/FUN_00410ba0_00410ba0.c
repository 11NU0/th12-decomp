/* undefined4 __stdcall FUN_00410ba0(void) @ 00410ba0  84 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00410ba0(void)

{
  int iVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(DAT_004b43d8 + 0x18);
  iVar2 = FUN_0045fe60(*(int *)(iVar1 + 0xec) + 0x1c);
  this = *(void **)(iVar1 + 0xec);
  *(int *)(iVar1 + 0x80 + (int)this * 4) = iVar2;
  *(uint *)(iVar1 + 0x74) = *(uint *)(iVar1 + 0x74) & 0xfffffffb;
  puVar3 = (undefined4 *)(DAT_004b43b8 + 0x18fbc);
  FUN_00461970(this,*(int *)(DAT_004b43b8 + 0x18fbc));
  *puVar3 = 0;
  return 0;
}


