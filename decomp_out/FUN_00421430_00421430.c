/* undefined __fastcall FUN_00421430(void * param_1) @ 00421430  126 bytes */
#include "th12.h"

void __fastcall FUN_00421430(void *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004b43e4;
  FUN_00461970(param_1,*(int *)(DAT_004b43e4 + 0x6cac));
  FUN_00461970(*(void **)(iVar1 + 0x6cb0),(int)*(void **)(iVar1 + 0x6cb0));
  *(uint *)(iVar1 + 0x6d18) = *(uint *)(iVar1 + 0x6d18) & 0xfffffdff;
  if ((*(uint *)(iVar1 + 0x6d2c) & 1) == 0) {
    *(undefined4 *)(iVar1 + 0x6d24) = 0;
    *(undefined4 *)(iVar1 + 0x6d20) = 0;
    *(undefined4 *)(iVar1 + 0x6d1c) = 0xfff0bdc1;
    *(undefined4 **)(iVar1 + 0x6d28) = &DAT_004b2ed0;
    *(uint *)(iVar1 + 0x6d2c) = *(uint *)(iVar1 + 0x6d2c) | 1;
  }
  *(undefined4 *)(iVar1 + 0x6d24) = 0;
  *(undefined4 *)(iVar1 + 0x6d20) = 0;
  *(undefined4 *)(iVar1 + 0x6d1c) = 0xffffffff;
  return;
}


