/* uint * __stdcall FUN_0041df40(void) @ 0041df40  150 bytes */
#include "th12.h"

uint * FUN_0041df40(void)

{
  uint *puVar1;
  int iVar2;
  void *this;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004977db;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (uint *)operator_new(0x6d50);
  local_4 = 0;
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = FUN_0041d150(puVar1);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_0041d250((int)puVar1);
  if (iVar2 != 0) {
    if (puVar1 != (uint *)0x0) {
      FUN_0041dc50(this,(int)puVar1);
      FUN_0046ca4f(puVar1);
    }
    *unaff_FS_OFFSET = local_c;
    return (uint *)0x0;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar1;
}


