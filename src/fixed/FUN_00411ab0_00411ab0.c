/* undefined4 __stdcall FUN_00411ab0(void) @ 00411ab0  78 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00411ab0(void)

{
  void *this;
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0045fe60(*(int *)((int)in_EAX + 0xec) + 0x1c);
  this = *(void **)((int)in_EAX + 0xec);
  *(int *)(in_EAX + 0x80 + (int)this * 4) = iVar1;
  *(uint *)((int)in_EAX + 0x74) = *(uint *)((int)in_EAX + 0x74) & 0xfffffffb;
  puVar2 = (undefined4 *)((int)DAT_004b43b8 + 0x18fbc);
  FUN_00461970(this,*(int *)((int)DAT_004b43b8 + 0x18fbc));
  *puVar2 = 0;
  return 0;
}


