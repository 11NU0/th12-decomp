/* undefined __stdcall FUN_0040dd50(void) @ 0040dd50  381 bytes */

#include "th12.h"

void __stdcall FUN_0040dd50(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined2 unaff_DI;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  
  iVar2 = DAT_004b43cc;
  uVar1 = *(uint *)(DAT_004b43cc + 0x7c);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x40) != 0) {
      *(undefined4 *)(DAT_004b43cc + 0x94) = *(undefined4 *)(DAT_004b43cc + 0x90);
      fVar6 = FUN_004508b0();
      fVar6 = fVar6 - (float10)*(double *)(iVar2 + 0x98);
      *(double *)(iVar2 + 0xa0) = (double)fVar6;
      fVar7 = (float10)FUN_004933ca(extraout_ECX);
      fVar6 = (float10)(double)fVar6 - fVar7;
      *(double *)(iVar2 + 0xa0) = (double)fVar6;
      if ((float10)0.00835 < fVar7 != ((float10)0.00835 == fVar7)) {
        *(double *)(iVar2 + 0xa0) = (double)(fVar6 + (float10)0.0167);
      }
      FUN_00493290(*(double *)(iVar2 + 0xa0),unaff_DI);
      uVar8 = FUN_004931e0(extraout_ECX_00,extraout_EDX);
      iVar5 = (int)uVar8;
      if (999 < iVar5) {
        iVar5 = 999;
      }
      uVar8 = FUN_004931e0(extraout_ECX_01,(int)(uVar8 >> 0x20));
      *(undefined8 *)(iVar2 + 0xa0) = 0;
      *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) & 0xffffffbf;
      iVar3 = DAT_004b44e8;
      iVar5 = (((int)uVar8 + 0x16 + iVar5) * 1000 + (iVar5 + 0x42) % 1000) * 100 +
              ((int)uVar8 + 0x21) % 100;
      *(int *)(iVar2 + 0xa8) = iVar5;
      if (*(int *)(iVar3 + 0x74) == 0) {
        *(int *)(*(int *)(DAT_004b4518 + 0x20 + DAT_004b0cb0 * 4) + 0x4c +
                *(int *)(iVar2 + 0x8c) * 4) = iVar5;
        *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + 1;
        return;
      }
      *(undefined4 *)(iVar2 + 0xa8) =
           *(undefined4 *)
            (*(int *)(DAT_004b4518 + 0xb8 + DAT_004b0cb0 * 0x24) + 0x4c + *(int *)(iVar2 + 0x8c) * 4
            );
      bVar4 = FUN_0040d710();
      if (CONCAT31(extraout_var,bVar4) != 0) {
        FUN_0040d770((void *)0x63,iVar2);
      }
      *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + 1;
    }
  }
  else if ((uVar1 & 0x40) == 0) {
    fVar6 = FUN_004508b0();
    *(double *)(iVar2 + 0x98) = (double)fVar6;
    *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) | 0x40;
    return;
  }
  return;
}


