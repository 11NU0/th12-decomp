/* undefined __fastcall FUN_0041c550(int param_1) @ 0041c550  19 bytes */
#include "th12.h"

void __fastcall FUN_0041c550(int param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x78);
  *(int *)(in_EAX + 0x78) = param_1;
  if (iVar1 != param_1) {
    *(undefined4 *)(in_EAX + 0x80) = 0;
  }
  return;
}


