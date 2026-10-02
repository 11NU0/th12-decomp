/* undefined4 __stdcall FUN_00401790(float param_1, int param_2) @ 00401790  340 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00401790(float param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte *pbVar5;
  int local_4;
  
  fVar3 = param_1;
  piVar1 = (int *)((int)param_1 + 0x18f7c);
  param_1 = 1.4013e-45;
  pbVar5 = (byte *)((int)fVar3 + 0x97c);
  local_4 = 0;
  if (0 < *piVar1) {
    fVar4 = 1.4013e-45;
    do {
      if (*(int *)((int)pbVar5 + 0x128) == param_2) {
        fVar2 = *(float *)((int)pbVar5 + 0x11c);
        if (fVar4 != fVar2) {
          FUN_0045a3c0();
          param_1 = fVar2;
          if (fVar2 == 0.0) {
            DAT_004cee34 = &DAT_004cec04;
            FUN_00430a70();
            (**(code **)(*DAT_004ce8f0 + 0xbc))(DAT_004ce8f0,DAT_004cee34 + 0xcc);
            _DAT_004cee38 = 1;
          }
          else {
            DAT_004cee34 = &DAT_004ceaec;
            FUN_00430a70();
            (**(code **)(*DAT_004ce8f0 + 0xbc))(DAT_004ce8f0,DAT_004cee34 + 0xcc);
            _DAT_004cee38 = 0;
          }
        }
        FUN_004018f0(fVar3,pbVar5);
        fVar4 = param_1;
      }
      local_4 = local_4 + 1;
      pbVar5 = pbVar5 + 0x138;
    } while (local_4 < *(int *)((int)fVar3 + 0x18f7c));
    if (fVar4 == 0.0) {
      return 1;
    }
  }
  FUN_0045a3c0();
  DAT_004cee34 = &DAT_004cec04;
  FUN_00430a70();
  (**(code **)(*DAT_004ce8f0 + 0xbc))(DAT_004ce8f0,DAT_004cee34 + 0xcc);
  _DAT_004cee38 = 1;
  return 1;
}


