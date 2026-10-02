/* undefined8 __fastcall FUN_004525d0(int param_1) @ 004525d0  172 bytes */

#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x00452609) */

undefined8 __fastcall FUN_004525d0(int param_1)

{
  ulonglong uVar1;
  int local_8;
  
  if (DAT_004ce55c != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x1c)) {
    local_8 = (int)(longlong)
                   ROUND(((float)(uint)*(byte *)(param_1 + 0x27) * *(float *)(param_1 + 0x38)) /
                         (float)*(int *)(param_1 + 0x1c));
    local_8 = (uint)*(byte *)(param_1 + 0x27) - local_8;
    *(int *)(param_1 + 0x18) = local_8;
    if (local_8 < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      uVar1 = FUN_00464a80();
      return CONCAT44((int)(uVar1 >> 0x20),1);
    }
  }
  else {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) < 1) {
      return 0;
    }
    FUN_004067e0(0);
  }
  uVar1 = FUN_00464a80();
  return CONCAT44((int)(uVar1 >> 0x20),1);
}


