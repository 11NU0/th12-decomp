/* undefined4 __fastcall FUN_0043ab60(undefined4 param_1, int param_2) @ 0043ab60  141 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0043ab60(undefined4 param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  
  if (*(int *)((int)param_2 + 0x48) != 2) {
    if (*(int *)((int)DAT_004b43c4 + 0x3c) == 0) {
      fVar1 = 0.38;
    }
    else {
      fVar1 = 0.6;
    }
    *(float *)((int)param_2 + 0x24) = *(float *)((int)param_2 + 0x24) - fVar1;
    *(float *)((int)param_2 + 0x20) = *(float *)((int)param_2 + 0x70) + *(float *)((int)param_2 + 0x20);
    fVar2 = (( float10 (__fastcall *)())FUN_004937aa)(param_1);
    fVar2 = FUN_004646e0((float)fVar2);
    fVar2 = FUN_004646e0((float)fVar2);
    *(float *)((int)param_2 + 0x30) = (float)fVar2;
    fVar2 = (( float10 (__stdcall *)())FUN_004937c0)();
    *(float *)((int)param_2 + 0x2c) = (float)fVar2;
  }
  return 0;
}


