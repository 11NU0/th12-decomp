/* undefined4 __fastcall FUN_0045dcd0(int param_1) @ 0045dcd0  592 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0045dcd0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int extraout_EDX;
  float *pfVar9;
  float *this;
  float local_18;
  
  local_18 = -3.1415927;
  pfVar9 = *(float **)(param_1 + 0x478);
  fVar1 = *(float *)(param_1 + 0x434);
  fVar2 = *(float *)(param_1 + 0x428);
  fVar3 = *(float *)(param_1 + 0x438);
  fVar4 = *(float *)(param_1 + 0x42c);
  *pfVar9 = *(float *)(param_1 + 0x430) + *(float *)(param_1 + 0x424);
  pfVar9[1] = fVar1 + fVar2;
  pfVar9[2] = fVar3 + fVar4;
  fVar1 = pfVar9[5];
  pfVar9[5] = pfVar9[0x129] + fVar1;
  if (pfVar9[0x129] + fVar1 < 0.0) {
    iVar7 = 0xb;
    pfVar5 = pfVar9 + 0xc;
    do {
      iVar7 = iVar7 + -1;
      pfVar5[-7] = pfVar5[-7] + 1.0;
      *pfVar5 = *pfVar5 + 1.0;
      pfVar5[7] = pfVar5[7] + 1.0;
      pfVar5 = pfVar5 + 0x15;
    } while (iVar7 != 0);
  }
  fVar1 = pfVar9[0x129] + pfVar9[6];
  pfVar9[6] = fVar1;
  if (fVar1 < 0.0 != NAN(fVar1)) {
    iVar7 = 0xb;
    pfVar5 = pfVar9 + 0xd;
    do {
      iVar7 = iVar7 + -1;
      pfVar5[-7] = pfVar5[-7] + 1.0;
      *pfVar5 = *pfVar5 + 1.0;
      pfVar5[7] = pfVar5[7] + 1.0;
      pfVar5 = pfVar5 + 0x15;
    } while (iVar7 != 0);
  }
  pfVar9[4] = *(float *)(param_1 + 0x3bc);
  pfVar5 = pfVar9 + 0xe8;
  iVar7 = 0x1f;
  this = pfVar9 + 7;
  do {
    fVar1 = pfVar9[0x129] + this[5];
    this[5] = fVar1;
    if (fVar1 < 0.0 != NAN(fVar1)) {
      iVar8 = 0xb;
      pfVar6 = pfVar9 + 0xc;
      do {
        iVar8 = iVar8 + -1;
        pfVar6[-7] = pfVar6[-7] + 1.0;
        *pfVar6 = *pfVar6 + 1.0;
        pfVar6[7] = pfVar6[7] + 1.0;
        pfVar6 = pfVar6 + 0x15;
      } while (iVar8 != 0);
    }
    fVar1 = pfVar9[0x129] + this[6];
    this[6] = fVar1;
    if (fVar1 < 0.0 != NAN(fVar1)) {
      iVar8 = 0xb;
      pfVar6 = pfVar9 + 0xd;
      do {
        iVar8 = iVar8 + -1;
        pfVar6[-7] = pfVar6[-7] + 1.0;
        *pfVar6 = *pfVar6 + 1.0;
        pfVar6[7] = pfVar6[7] + 1.0;
        pfVar6 = pfVar6 + 0x15;
      } while (iVar8 != 0);
    }
    this[4] = *(float *)(param_1 + 0x3bc);
    *(undefined *)((int)this + 0x13) = 0;
    fVar1 = *pfVar5;
    *pfVar5 = pfVar5[0x21] + fVar1;
    FUN_0045df50(this,local_18,pfVar5[0x21] + fVar1);
    pfVar6 = this + 7;
    pfVar5 = pfVar5 + 1;
    iVar7 = iVar7 + -1;
    fVar1 = *(float *)(extraout_EDX + 0x434);
    fVar2 = *(float *)(extraout_EDX + 0x428);
    fVar3 = *(float *)(extraout_EDX + 0x438);
    fVar4 = *(float *)(extraout_EDX + 0x42c);
    *this = *this + *(float *)(extraout_EDX + 0x430) + *(float *)(extraout_EDX + 0x424);
    this[1] = this[1] + fVar1 + fVar2;
    this[2] = this[2] + fVar3 + fVar4;
    local_18 = local_18 + 0.2026834;
    param_1 = extraout_EDX;
    this = pfVar6;
  } while (iVar7 != 0);
  pfVar9 = pfVar9 + 7;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar6 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar6 = pfVar6 + 1;
  }
  return 0;
}


