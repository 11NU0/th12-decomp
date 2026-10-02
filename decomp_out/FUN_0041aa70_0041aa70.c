/* undefined4 __fastcall FUN_0041aa70(int param_1) @ 0041aa70  291 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0041aa70(int param_1)

{
  float fVar1;
  undefined4 extraout_ECX;
  int iVar2;
  float *pfVar3;
  byte *pbVar4;
  float10 fVar5;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  pbVar4 = (byte *)(DAT_004b43c8 + 100);
  pfVar3 = (float *)(DAT_004b43c8 + 0x524);
  iVar2 = 2000;
  do {
    if (((*pbVar4 & 1) != 0) && (*(short *)((int)pfVar3 + 0x72) == 1)) {
      fVar5 = (float10)FUN_004937c0();
      if ((float)fVar5 < 128.0) {
        local_1c = *(float *)(param_1 + 0x34) - pfVar3[-1];
        local_18 = *(float *)(param_1 + 0x38) - *pfVar3;
        local_14 = local_1c;
        local_10 = local_18;
        D3DXVec2Normalize(&local_1c,&local_1c);
        fVar1 = (128.0 - (float)fVar5) / 4800.0;
        pfVar3[2] = pfVar3[2] + fVar1 * local_1c;
        pfVar3[3] = pfVar3[3] + local_18 * fVar1;
        fVar5 = (float10)FUN_004937aa(extraout_ECX);
        pfVar3[6] = (float)fVar5;
      }
    }
    pbVar4 = pbVar4 + 0x9f8;
    pfVar3 = pfVar3 + 0x27e;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}


