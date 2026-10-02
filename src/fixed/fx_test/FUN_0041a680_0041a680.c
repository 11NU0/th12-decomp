/* undefined __fastcall FUN_0041a680(undefined4 param_1, int param_2) @ 0041a680  32 bytes */

#include "th12.h"

void __fastcall FUN_0041a680(undefined4 param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  undefined4 unaff_EDI;
  
  iVar1 = in_EAX * 0x10 + param_2;
  *(undefined4 *)((in_EAX + 0x271) * 0x10 + param_2) = unaff_EDI;
  *(undefined4 *)(iVar1 + 0x2714) = param_1;
  *(undefined4 *)(iVar1 + 0x2718) = param_1;
  return;
}


