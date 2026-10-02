/* undefined __fastcall FUN_00422d30(int param_1) @ 00422d30  64 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00422d30(int param_1)

{
  int in_EAX;
  
  if (8 < *(int *)(in_EAX + 0x58)) {
    *(undefined4 *)(in_EAX + 0x5c) = 0;
    return;
  }
  *(int *)(in_EAX + 0x5c) = *(int *)(in_EAX + 0x5c) + param_1;
  if (4 < *(int *)(in_EAX + 0x5c)) {
    *(undefined4 *)(in_EAX + 0x5c) = 0;
    FUN_00422ce0();
  }
  FUN_0041ce60(DAT_004b43e4,_DAT_004b0c98,(short)_DAT_004b0c9c);
  return;
}


