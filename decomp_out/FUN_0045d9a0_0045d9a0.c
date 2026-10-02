/* undefined4 __stdcall FUN_0045d9a0(void) @ 0045d9a0  805 bytes */
#include "th12.h"

undefined4 FUN_0045d9a0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int unaff_EBX;
  float *pfVar7;
  float *this;
  float local_28;
  float local_24;
  int local_20;
  float local_c;
  float local_8;
  
  if (*(void **)(unaff_EBX + 0x478) != (void *)0x0) {
    _free(*(void **)(unaff_EBX + 0x478));
    *(undefined4 *)(unaff_EBX + 0x478) = 0;
  }
  pfVar5 = (float *)_malloc(0x4b0);
  *(float **)(unaff_EBX + 0x478) = pfVar5;
  *(code **)(unaff_EBX + 0x488) = FUN_0045dcd0;
  *(undefined **)(unaff_EBX + 0x48c) = &LAB_0045df30;
  iVar6 = FUN_00464440();
  fVar1 = (float)iVar6;
  if (iVar6 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  pfVar5[0x129] = (fVar1 * 4.656613e-10 - 1.0) * 0.008333334;
  iVar6 = FUN_00464440();
  fVar1 = (float)iVar6;
  if (iVar6 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  pfVar5[0x12a] = (fVar1 * 4.656613e-10 - 1.0) * 0.008333334;
  local_24 = -3.1415927;
  fVar1 = *(float *)(unaff_EBX + 0x434);
  fVar2 = *(float *)(unaff_EBX + 0x428);
  fVar3 = *(float *)(unaff_EBX + 0x438);
  fVar4 = *(float *)(unaff_EBX + 0x42c);
  *pfVar5 = *(float *)(unaff_EBX + 0x424) + *(float *)(unaff_EBX + 0x430);
  pfVar5[1] = fVar1 + fVar2;
  pfVar5[2] = fVar3 + fVar4;
  pfVar5[3] = 1.0;
  pfVar5[5] = 0.5;
  pfVar5[6] = 0.5;
  iVar6 = FUN_00464440();
  fVar1 = (float)iVar6;
  if (iVar6 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  pfVar7 = pfVar5 + 0xe8;
  local_20 = 0x1f;
  local_28 = (fVar1 * 4.656613e-10 - 1.0) * 0.06666667;
  do {
    this = pfVar5 + 7;
    if (3.1415927 <= local_24) {
      local_24 = local_24 - 6.2831855;
    }
    pfVar5[10] = 1.0;
    FUN_0045df50(&local_c,local_24,0.5);
    pfVar5[0xc] = local_c + 0.5;
    pfVar5[0xd] = local_8 + 0.5;
    pfVar5[9] = 0.0;
    iVar6 = FUN_00464440();
    fVar1 = (float)iVar6;
    if (iVar6 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *pfVar7 = (fVar1 * 4.656613e-10 - 1.0) * 8.0 + 80.0;
    pfVar7[0x21] = local_28;
    iVar6 = FUN_00464440();
    fVar1 = (float)iVar6;
    if (iVar6 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    local_28 = (fVar1 * 4.656613e-10 - 1.0) * 0.033333335 + local_28;
    if (local_28 < -0.06666667 == NAN(local_28)) {
      if (0.06666667 < local_28 != NAN(local_28)) {
        local_28 = 0.06666667;
      }
    }
    else {
      local_28 = -0.06666667;
    }
    FUN_0045df50(this,local_24,*pfVar7);
    pfVar7 = pfVar7 + 1;
    local_20 = local_20 + -1;
    fVar1 = *(float *)(unaff_EBX + 0x434);
    fVar2 = *(float *)(unaff_EBX + 0x428);
    fVar3 = *(float *)(unaff_EBX + 0x438);
    fVar4 = *(float *)(unaff_EBX + 0x42c);
    *this = *this + *(float *)(unaff_EBX + 0x430) + *(float *)(unaff_EBX + 0x424);
    pfVar5[8] = pfVar5[8] + fVar1 + fVar2;
    pfVar5[9] = pfVar5[9] + fVar3 + fVar4;
    local_24 = local_24 + 0.2026834;
    pfVar5 = this;
  } while (local_20 != 0);
  return 0;
}


