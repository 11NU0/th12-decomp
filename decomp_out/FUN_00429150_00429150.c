/* undefined4 __fastcall FUN_00429150(int param_1) @ 00429150  677 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00429150(int param_1)

{
  float *pfVar1;
  bool bVar2;
  uint extraout_ECX;
  uint uVar3;
  float10 fVar4;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  FUN_0042e880(&local_c,*(float *)(param_1 + 0x68),*(float *)(param_1 + 0x6c));
  local_c = *(float *)(param_1 + 0x50) + local_c;
  local_8 = *(float *)(param_1 + 0x54) + local_8;
  local_4 = 0;
  if ((((local_c + 0.0 < -192.0 == (local_c + 0.0 == -192.0)) && (local_c - 0.0 < 192.0)) &&
      (local_8 + 0.0 < 0.0 == (local_8 + 0.0 == 0.0))) && (local_8 - 0.0 < 448.0)) {
    return 0;
  }
  bVar2 = false;
  if (((*(uint *)(param_1 + 0x184) & 1) != 0) && (local_8 < 0.0 != NAN(local_8))) {
    if ((*(uint *)(param_1 + 0x184) & 0x10) == 0) {
      *(float *)(param_1 + 0x454) = local_c;
      *(float *)(param_1 + 0x458) = local_8;
      *(undefined4 *)(param_1 + 0x45c) = 0;
      *(float *)(param_1 + 0x458) = -*(float *)(param_1 + 0x458);
      *(float *)(param_1 + 0x460) = -*(float *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x168);
      FUN_00428450(0);
    }
    bVar2 = true;
  }
  if (((*(uint *)(param_1 + 0x184) & 2) != 0) && (448.0 < local_8)) {
    if ((*(uint *)(param_1 + 0x184) & 0x10) == 0) {
      *(float *)(param_1 + 0x454) = local_c;
      *(float *)(param_1 + 0x458) = local_8;
      *(undefined4 *)(param_1 + 0x45c) = local_4;
      *(float *)(param_1 + 0x458) = 896.0 - *(float *)(param_1 + 0x458);
      *(float *)(param_1 + 0x460) = -*(float *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x168);
      FUN_00428450(0);
    }
    bVar2 = true;
  }
  if (((*(uint *)(param_1 + 0x184) & 4) != 0) && (local_c < -192.0)) {
    if ((*(uint *)(param_1 + 0x184) & 0x10) == 0) {
      pfVar1 = (float *)(param_1 + 0x454);
      *pfVar1 = local_c;
      *(float *)(param_1 + 0x458) = local_8;
      *(undefined4 *)(param_1 + 0x45c) = local_4;
      *pfVar1 = -*pfVar1 - 384.0;
      fVar4 = FUN_004646e0(-*(float *)(param_1 + 0x68) - 3.1415927);
      *(float *)(param_1 + 0x460) = (float)fVar4;
      *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x168);
      FUN_00428450(0);
    }
    bVar2 = true;
  }
  uVar3 = *(uint *)(param_1 + 0x184);
  if (((uVar3 & 8) == 0) || (192.0 < local_c == NAN(local_c))) {
    if (!bVar2) {
      return 0;
    }
  }
  else if ((uVar3 & 0x10) == 0) {
    pfVar1 = (float *)(param_1 + 0x454);
    *pfVar1 = local_c;
    *(float *)(param_1 + 0x458) = local_8;
    *(undefined4 *)(param_1 + 0x45c) = local_4;
    *pfVar1 = 384.0 - *pfVar1;
    fVar4 = FUN_004646e0(-*(float *)(param_1 + 0x68) - 3.1415927);
    *(float *)(param_1 + 0x460) = (float)fVar4;
    *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x168);
    FUN_00428450(0);
    uVar3 = extraout_ECX;
  }
  *(uint *)(param_1 + 0x430) = *(uint *)(param_1 + 0x430) & 0xfffffeff;
  if (-1 < *(int *)(param_1 + 0x638)) {
    FUN_00453d90(uVar3,*(int *)(param_1 + 0x638));
  }
  return 1;
}


