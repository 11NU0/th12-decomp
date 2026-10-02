/* undefined4 __fastcall FUN_004696c0(int param_1) @ 004696c0  64 bytes */

#include "th12.h"

undefined4 __fastcall FUN_004696c0(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0x1000);
  iVar2 = param_1 + iVar1;
  if (0xfff < iVar2) {
    return 0xffffffff;
  }
  *(int *)(in_EAX + 0x1000) = iVar2;
  if (iVar2 + 4 < 0x1000) {
    *(undefined4 *)(iVar2 + in_EAX) = *(undefined4 *)(in_EAX + 0x1004);
    *(int *)(in_EAX + 0x1000) = *(int *)(in_EAX + 0x1000) + 4;
  }
  *(int *)(in_EAX + 0x1004) = iVar1;
  return 0;
}


