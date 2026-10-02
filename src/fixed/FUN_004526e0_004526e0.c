/* undefined8 __fastcall FUN_004526e0(int param_1) @ 004526e0  265 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_004526e0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 in_EDX;
  int iVar4;
  ulonglong uVar5;
  
  if (DAT_004ce55c != 0) {
    return CONCAT44(in_EDX,7);
  }
  uVar5 = FUN_00464a80();
  if (*(int *)((int)param_1 + 0x1c) <= *(int *)((int)param_1 + 0x34)) {
    return CONCAT44((int)(uVar5 >> 0x20),7);
  }
  fVar1 = ((float)(*(int *)((int)param_1 + 0x24) - *(int *)((int)param_1 + 0x20)) * *(float *)((int)param_1 + 0x38)
          ) / (float)*(int *)((int)param_1 + 0x1c) + (float)*(int *)((int)param_1 + 0x20);
  uVar3 = FUN_00464440();
  uVar3 = uVar3 % 3;
  if (uVar3 == 0) {
    _DAT_004cee04 = 0.0;
    fVar2 = _DAT_004cee04;
  }
  else {
    fVar2 = fVar1;
    if ((uVar3 != 1) && (fVar2 = _DAT_004cee04, uVar3 == 2)) {
      fVar2 = -fVar1;
    }
  }
  _DAT_004cee04 = fVar2;
  uVar3 = FUN_00464440();
  uVar3 = uVar3 % 3;
  if (uVar3 == 0) {
    _DAT_004cee08 = 0.0;
    iVar4 = 0;
  }
  else {
    if (uVar3 == 1) {
      _DAT_004cee08 = fVar1;
      return 1;
    }
    iVar4 = uVar3 - 2;
    if (iVar4 == 0) {
      _DAT_004cee08 = -fVar1;
      return 1;
    }
  }
  return CONCAT44(iVar4,1);
}


