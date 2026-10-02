/* undefined __fastcall FUN_004127b0(void * param_1) @ 004127b0  29 bytes */
#include "th12.h"

void __fastcall FUN_004127b0(void *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004b43cc;
  *(uint *)((int)DAT_004b43cc + 0x7c) = *(uint *)((int)DAT_004b43cc + 0x7c) | 0x10;
  FUN_00461a70(param_1,*(int *)((int)iVar1 + 0x20));
  *(undefined4 *)((int)iVar1 + 0x20) = 0;
  return;
}


