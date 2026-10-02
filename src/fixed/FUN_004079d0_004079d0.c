/* undefined4 __fastcall FUN_004079d0(undefined4 param_1, int param_2, int param_3) @ 004079d0  94 bytes */
#include "th12.h"

undefined4 __fastcall FUN_004079d0(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)param_2 + 0x18) < 0x1e) {
    return 0;
  }
  if (*(int *)((int)param_2 + 0x18) < 0x5a) {
    fVar1 = 448.0 - ((*(float *)((int)param_2 + 0x1c) - 30.0) * 448.0) / 60.0;
  }
  else {
    fVar1 = 0.0;
  }
  if (fVar1 < *(float *)((int)param_3 + 4) != (fVar1 == *(float *)((int)param_3 + 4))) {
    uVar2 = 0x10;
  }
  return uVar2;
}


