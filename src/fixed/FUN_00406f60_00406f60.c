/* undefined __stdcall FUN_00406f60(int param_1) @ 00406f60  93 bytes */
#include "th12.h"

void __stdcall FUN_00406f60(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_004b4514;
  uVar1 = *(uint *)((int)DAT_004b4514 + 0xc410);
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)((int)DAT_004b4514 + 0xc408) = 0;
    *(undefined4 *)((int)iVar2 + 0xc404) = 0;
    *(undefined4 *)((int)iVar2 + 0xc400) = 0xfff0bdc1;
    *(undefined4 **)((int)iVar2 + 0xc40c) = &DAT_004b2ed0;
    *(uint *)((int)iVar2 + 0xc410) = uVar1 | 1;
  }
  *(int *)((int)iVar2 + 0xc404) = param_1;
  *(int *)((int)iVar2 + 0xc400) = param_1 + -1;
  *(float *)((int)iVar2 + 0xc408) = (float)param_1;
  return;
}


