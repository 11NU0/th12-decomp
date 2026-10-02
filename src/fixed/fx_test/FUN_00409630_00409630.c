/* undefined __fastcall FUN_00409630(undefined4 param_1) @ 00409630  62 bytes */

#include "th12.h"

void __fastcall FUN_00409630(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004b43c8;
  FUN_00461be0(param_1,*(int *)(&DAT_004debdc + DAT_004b43c8));
  _memset((void *)(iVar1 + 100),0,0x4deb78);
  *(void **)(iVar1 + 0x10) = (void *)(iVar1 + 100);
  *(undefined2 *)(&DAT_004de716 + iVar1) = 5;
  return;
}


