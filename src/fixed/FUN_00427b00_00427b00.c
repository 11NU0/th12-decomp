/* undefined4 __stdcall FUN_00427b00(void) @ 00427b00  72 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00427b00(void)

{
  int iVar1;
  void *this;
  int iVar2;
  void *in_EAX;
  
  iVar2 = DAT_004b43c8;
  iVar1 = *(int *)((int)in_EAX + 0x9b4);
  *(undefined4 *)((int)in_EAX + 0x9b0) = 2;
  this = *(void **)(&DAT_004debdc + iVar2);
  FUN_00402520();
  *(undefined *)((int)in_EAX + 0x49d) = 0x10;
  *(undefined *)((int)in_EAX + 0x49c) = 0x10;
  FUN_00454d10(this,in_EAX,iVar1 + 0xa5);
  return 0;
}


