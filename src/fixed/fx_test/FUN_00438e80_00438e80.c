/* undefined __fastcall FUN_00438e80(undefined4 param_1) @ 00438e80  495 bytes */

#include "th12.h"

void __fastcall FUN_00438e80(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar3;
  int unaff_EDI;
  float10 fVar4;
  ulonglong uVar5;
  undefined auStack_14 [16];
  
  iVar2 = DAT_004b4514;
  if (((*(int *)(unaff_EDI + 0xd0) == 0) && (*(int *)(DAT_004b4514 + 0xc598) == 0)) &&
     ((0.001 < ABS(*(float *)(DAT_004b4514 + 0x9a0)) != NAN(ABS(*(float *)(DAT_004b4514 + 0x9a0)))
      || (0.001 < ABS(*(float *)(DAT_004b4514 + 0x9a4)) !=
          NAN(ABS(*(float *)(DAT_004b4514 + 0x9a4))))))) {
    fVar4 = (float10)FUN_004937aa(param_1);
    fVar1 = (float)fVar4;
    fVar4 = FUN_0042e770(fVar1,*(float *)(iVar2 + 0xc48c));
    fVar4 = FUN_004646e0((float)fVar4);
    if ((float)ABS(fVar4) < 0.19634955 == NAN((float)ABS(fVar4))) {
      fVar4 = FUN_0042e770(fVar1,*(float *)(iVar2 + 0xc48c));
      fVar4 = FUN_004646e0((float)fVar4);
      fVar1 = (float)fVar4;
      if (ABS(fVar1) < 0.7853982 == NAN(ABS(fVar1))) {
        fVar4 = FUN_004646e0(fVar1 / 5.0);
        fVar4 = fVar4 + (float10)*(float *)(iVar2 + 0xc48c);
      }
      else {
        fVar4 = FUN_004646e0(fVar1 / 3.0);
        fVar4 = fVar4 + (float10)*(float *)(iVar2 + 0xc48c);
      }
      fVar4 = FUN_004646e0((float)fVar4);
    }
    else {
      fVar4 = (float10)fVar1;
    }
    *(float *)(iVar2 + 0xc48c) = (float)fVar4;
  }
  fVar4 = FUN_004646e0(*(float *)(unaff_EDI + 0x1c + *(int *)(iVar2 + 0xc598) * 8) +
                       *(float *)(iVar2 + 0xc48c));
  *(float *)(unaff_EDI + 0xa8) = (float)fVar4;
  FUN_004393d0(auStack_14,(float)fVar4,*(float *)(unaff_EDI + 0x20 + *(int *)(iVar2 + 0xc598) * 8));
  uVar5 = FUN_004931e0(extraout_ECX,extraout_EDX);
  iVar2 = DAT_004b4514;
  iVar3 = *(int *)(DAT_004b4514 + 0x988) - (int)uVar5;
  *(int *)(unaff_EDI + 0x54) = iVar3;
  uVar5 = FUN_004931e0(extraout_ECX_00,iVar3);
  *(int *)(unaff_EDI + 0x58) = *(int *)(iVar2 + 0x98c) - (int)uVar5;
  return;
}


