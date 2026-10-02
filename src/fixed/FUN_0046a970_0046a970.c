/* undefined4 __fastcall FUN_0046a970(undefined4 param_1) @ 0046a970  581 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0046a970(undefined4 param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_EDI;
  
  piVar5 = FUN_00461920(param_1,DAT_004ce8cc,*(int *)((int)unaff_EDI + 0x40));
  iVar8 = 0;
  if (piVar5 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EDI + 0x40) = 0;
  }
  FUN_00406f60(0x28);
  pvVar2 = DAT_004b4514;
  if (piVar5 != (int *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_004b4514 + 0x97c);
    *(undefined4 *)((int)DAT_004b4514 + 0x825c) = 0x3f000000;
    *(undefined4 *)((int)unaff_EDI + 0x508) = *puVar1;
    *(undefined4 *)((int)unaff_EDI + 0x50c) = *(undefined4 *)((int)pvVar2 + 0x980);
    *(undefined4 *)((int)unaff_EDI + 0x510) = *(undefined4 *)((int)pvVar2 + 0x984);
    piVar5[0x10c] = *(int *)((int)pvVar2 + 0x97c);
    piVar5[0x10d] = *(int *)((int)pvVar2 + 0x980);
    piVar5[0x10e] = *(int *)((int)pvVar2 + 0x984);
    FUN_00410020(*(float *)((int)unaff_EDI + 0x508) - 60.0,0.0,128.0,448.0);
    iVar7 = *(int *)(*(int *)((int)unaff_EDI + 0x504) + 0x10);
    if (0 < *(int *)(*(int *)((int)unaff_EDI + 0x504) + 4)) {
      do {
        *(undefined4 *)(iVar7 + 0x10 + *(int *)(*(int *)((int)unaff_EDI + 0x504) + 4) * 0x1c) =
             0xff7070a0;
        *(undefined4 *)(iVar7 + 0x10 + *(int *)(*(int *)((int)unaff_EDI + 0x504) + 4) * 0x38) =
             0xff7070a0;
        iVar6 = FUN_00464440();
        fVar4 = (float)iVar6;
        if (iVar6 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        iVar6 = *(int *)(*(int *)((int)unaff_EDI + 0x504) + 4);
        *(float *)(iVar7 + iVar6 * 0x1c) =
             (*(float *)(*(int *)(*(int *)((int)unaff_EDI + 0x504) + 0x14) + (iVar6 + iVar8) * 0xc) -
             16.0) + (fVar4 * 4.656613e-10 - 1.0) * 8.0;
        iVar6 = FUN_00464440();
        fVar4 = (float)iVar6;
        if (iVar6 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        iVar3 = *(int *)(*(int *)((int)unaff_EDI + 0x504) + 4);
        iVar6 = iVar8 + iVar3 * 2;
        iVar8 = iVar8 + 1;
        *(float *)(iVar7 + iVar3 * 0x38) =
             *(float *)(*(int *)(*(int *)((int)unaff_EDI + 0x504) + 0x14) + iVar6 * 0xc) + 16.0 +
             (fVar4 * 4.656613e-10 - 1.0) * 8.0;
        iVar7 = iVar7 + 0x1c;
      } while (iVar8 < *(int *)(*(int *)((int)unaff_EDI + 0x504) + 4));
    }
    FUN_0046abe0();
    return 0;
  }
  pvVar2 = *(void **)((int)unaff_EDI + 0x504);
  if (pvVar2 != (void *)0x0) {
    FUN_00402870();
    FUN_0046ca4f(pvVar2);
  }
  pvVar2 = DAT_004b4514;
  *(undefined4 *)((int)unaff_EDI + 0x504) = 0;
  *(undefined4 *)((int)pvVar2 + 0x825c) = 0x3f800000;
  FUN_00461970(pvVar2,*(int *)((int)unaff_EDI + 0x48));
  return 0xffffffff;
}


