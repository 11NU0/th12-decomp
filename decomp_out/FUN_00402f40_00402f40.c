/* uint * __stdcall FUN_00402f40(undefined4 param_1) @ 00402f40  159 bytes */
#include "th12.h"

uint * FUN_00402f40(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049766b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (uint *)operator_new(0x3724);
  local_4 = 0;
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = FUN_00402970(puVar1);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00402a40((int)puVar1);
  if (iVar2 != 0) {
    if (puVar1 != (uint *)0x0) {
      FUN_00402cc0((int)puVar1);
      FUN_0046ca4f(puVar1);
    }
    *unaff_FS_OFFSET = local_c;
    return (uint *)0x0;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar1;
}


