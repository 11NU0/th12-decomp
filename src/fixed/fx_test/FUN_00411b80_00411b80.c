/* undefined __stdcall FUN_00411b80(undefined4 param_1, undefined4 param_2) @ 00411b80  88 bytes */

#include "th12.h"

void __stdcall FUN_00411b80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = DAT_004b43b8;
  local_c = param_1;
  local_8 = param_2;
  local_4 = 0;
  if (*(int *)(DAT_004b43b8 + 0x18fbc) == 0) {
    FUN_004615a0(&local_c,*(void **)(DAT_004b43b8 + 0x18fb4),&param_1,0x12,0);
    *(undefined4 *)(iVar1 + 0x18fbc) = param_1;
  }
  return;
}


