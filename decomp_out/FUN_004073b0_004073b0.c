/* int __fastcall FUN_004073b0(int param_1) @ 004073b0  464 bytes */
#include "th12.h"

int __fastcall FUN_004073b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_EAX;
  uint uVar8;
  int iVar9;
  float *unaff_ESI;
  
  if (*(uint *)(param_1 + 0x18) != *(uint *)(param_1 + 0x14)) {
    uVar8 = *(uint *)(param_1 + 0x18) & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    if (uVar8 == 0) {
      iVar9 = 0;
      fVar1 = *in_EAX - *unaff_ESI * 0.5;
      fVar3 = in_EAX[1] - unaff_ESI[1] * 0.5;
      fVar2 = *in_EAX + *unaff_ESI * 0.5;
      fVar4 = unaff_ESI[1] * 0.5 + in_EAX[1];
      fVar5 = *(float *)(param_1 + 0x508) - 16.0;
      fVar6 = *(float *)(param_1 + 0x508) + 16.0;
      fVar7 = *(float *)(param_1 + 0x50c) + 32.0;
      if ((((fVar2 < fVar5 == (NAN(fVar2) || NAN(fVar5))) &&
           (*(float *)(param_1 + 0x50c) - 480.0 <= fVar4)) &&
          (fVar6 < fVar1 == (NAN(fVar6) || NAN(fVar1)))) &&
         (fVar7 < fVar3 == (NAN(fVar7) || NAN(fVar3)))) {
        iVar9 = 0x1e;
      }
      fVar5 = *(float *)(param_1 + 0x508) + 64.0;
      if (((*(float *)(param_1 + 0x508) - 64.0 <= fVar2) &&
          (*(float *)(param_1 + 0x50c) - 448.0 <= fVar4)) &&
         ((fVar5 < fVar1 == (NAN(fVar5) || NAN(fVar1)) &&
          (*(float *)(param_1 + 0x50c) < fVar3 == (NAN(*(float *)(param_1 + 0x50c)) || NAN(fVar3))))
         )) {
        iVar9 = iVar9 + 0x14;
      }
      fVar6 = *(float *)(param_1 + 0x508) + 128.0;
      fVar5 = *(float *)(param_1 + 0x50c) - 32.0;
      if (((*(float *)(param_1 + 0x508) - 128.0 <= fVar2) &&
          (*(float *)(param_1 + 0x50c) - 416.0 <= fVar4)) &&
         ((fVar6 < fVar1 == (NAN(fVar6) || NAN(fVar1)) &&
          (fVar5 < fVar3 == (NAN(fVar5) || NAN(fVar3)))))) {
        return iVar9 + 0x14;
      }
      return iVar9;
    }
  }
  return 0;
}


