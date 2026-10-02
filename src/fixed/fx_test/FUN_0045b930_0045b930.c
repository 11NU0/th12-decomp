/* undefined4 __stdcall FUN_0045b930(int param_1) @ 0045b930  338 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0045b930(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBX;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 local_40 [12];
  float local_10;
  float local_c;
  float local_8;
  
  uVar4 = *(uint *)(unaff_EBX + 0x47c);
  if (((uVar4 & 0x8000) == 0) && ((uVar4 & 0xc) != 0)) {
    fVar2 = *(float *)(unaff_EBX + 0x40);
    pfVar1 = (float *)(unaff_EBX + 0x33c);
    pfVar6 = (float *)(unaff_EBX + 0x2fc);
    pfVar8 = pfVar1;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    *pfVar1 = fVar2 * *pfVar1;
    *(float *)(unaff_EBX + 0x350) = *(float *)(unaff_EBX + 0x44) * *(float *)(unaff_EBX + 0x350);
    *(uint *)(unaff_EBX + 0x47c) = uVar4 & 0xfffffff7;
    if (NAN(*(float *)(unaff_EBX + 0x24)) == (*(float *)(unaff_EBX + 0x24) == 0.0)) {
      D3DXMatrixRotationX(local_40,*(undefined4 *)(unaff_EBX + 0x24));
      D3DXMatrixMultiply(pfVar1,pfVar1,&stack0xffffffb8);
    }
    if (NAN(*(float *)(unaff_EBX + 0x28)) == (*(float *)(unaff_EBX + 0x28) == 0.0)) {
      D3DXMatrixRotationY(local_40,*(undefined4 *)(unaff_EBX + 0x28));
      D3DXMatrixMultiply(pfVar1,pfVar1,&stack0xffffffb8);
    }
    if (NAN(*(float *)(unaff_EBX + 0x2c)) == (*(float *)(unaff_EBX + 0x2c) == 0.0)) {
      D3DXMatrixRotationZ(local_40,*(undefined4 *)(unaff_EBX + 0x2c));
      D3DXMatrixMultiply(pfVar1,pfVar1,&stack0xffffffb8);
    }
    *(uint *)(unaff_EBX + 0x47c) = *(uint *)(unaff_EBX + 0x47c) & 0xfffffffb;
  }
  fVar2 = *(float *)(unaff_EBX + 0x430);
  fVar3 = *(float *)(unaff_EBX + 0x424);
  puVar7 = (undefined4 *)(unaff_EBX + 0x33c);
  puVar9 = local_40;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  local_10 = fVar2 + fVar3 + *(float *)(unaff_EBX + 0x43c) + local_10;
  local_c = *(float *)(unaff_EBX + 0x434) + *(float *)(unaff_EBX + 0x428) +
            *(float *)(unaff_EBX + 0x440) + local_c;
  local_8 = *(float *)(unaff_EBX + 0x438) + *(float *)(unaff_EBX + 0x42c) +
            *(float *)(unaff_EBX + 0x444);
  puVar7 = local_40;
  puVar9 = (undefined4 *)(&DAT_004b5140 + param_1);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  return 0;
}


