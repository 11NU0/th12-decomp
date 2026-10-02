/* ulonglong __fastcall FUN_0046a300(int param_1, undefined4 param_2) @ 0046a300  368 bytes */
#include "th12.h"

ulonglong __fastcall FUN_0046a300(int param_1,undefined4 param_2)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar1 = *(float **)((int)param_1 + 0x478);
  if ((int)pfVar1[4] < 300) {
    *pfVar1 = *(float *)((int)param_1 + 0x430);
    pfVar1[1] = *(float *)((int)param_1 + 0x434);
    fVar2 = *(float *)((int)param_1 + 0x438);
    pfVar1[2] = fVar2;
    if (pfVar1[4] != pfVar1[3]) {
      uVar3 = (uint)pfVar1[4] & 0x80000003;
      bVar4 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar4 = (uVar3 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if (bVar4) {
        FUN_00453e20(fVar2,pfVar1[4],*pfVar1);
        local_14 = *pfVar1;
        local_c = pfVar1[2];
        local_20 = local_14 + pfVar1[9];
        local_1c = pfVar1[1];
        local_18 = 0xbfc90fdb;
        fVar2 = pfVar1[9];
        pfVar1[9] = pfVar1[0xb] + fVar2;
        local_24 = ABS(pfVar1[0xb] + fVar2);
        if (24.0 <= local_24) {
          pfVar1[0xb] = pfVar1[0xb] * -1.0;
        }
        local_10 = local_1c;
        FUN_0040fbe0((int *)&local_24,(void *)0x3);
        local_14 = *pfVar1;
        local_c = pfVar1[2];
        local_1c = pfVar1[1];
        local_20 = pfVar1[8] + local_14;
        local_18 = 0xbfc90fdb;
        pfVar1[8] = pfVar1[10] + pfVar1[8];
        local_24 = ABS(pfVar1[9]);
        if (24.0 <= local_24) {
          pfVar1[10] = pfVar1[10] * -1.0;
        }
        local_10 = local_1c;
        FUN_0040fbe0((int *)&local_24,(void *)0x3);
      }
    }
    uVar5 = FUN_00464a80();
    return uVar5 & 0xffffffff00000000;
  }
  return CONCAT44(param_2,1);
}


