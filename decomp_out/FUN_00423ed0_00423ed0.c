/* undefined __stdcall FUN_00423ed0(void) @ 00423ed0  681 bytes */
#include "th12.h"

void FUN_00423ed0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int unaff_EDI;
  int local_1c;
  undefined local_18;
  
  if (*(int *)(unaff_EDI + 0xd8) != DAT_004b0cb8) {
    *(undefined4 *)(unaff_EDI + 0x14) = 0;
  }
  FUN_004237e0(unaff_EDI);
  fVar1 = *(float *)(DAT_004b4514 + 0x97c);
  pfVar10 = (float *)(unaff_EDI + 0x17c);
  pfVar9 = (float *)(unaff_EDI + 0x108);
  local_1c = 10;
  fVar2 = *(float *)(DAT_004b4514 + 0x980);
LAB_00423f47:
  fVar3 = pfVar10[-0x28];
  if (fVar3 == 0.0) {
LAB_00423f51:
    pfVar8 = (float *)0x0;
  }
  else {
    for (puVar7 = *(undefined4 **)(DAT_004ce8cc + 0x8856b8); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      pfVar8 = (float *)*puVar7;
      if (*pfVar8 == fVar3) goto LAB_00423f92;
    }
    puVar7 = *(undefined4 **)(DAT_004ce8cc + 0x8856c0);
    if (puVar7 == (undefined4 *)0x0) goto LAB_00423f51;
    do {
      pfVar8 = (float *)*puVar7;
      if (*pfVar8 == fVar3) goto LAB_00423f92;
      puVar7 = (undefined4 *)puVar7[1];
    } while (puVar7 != (undefined4 *)0x0);
    pfVar8 = (float *)0x0;
  }
  goto LAB_00423f98;
LAB_00423f92:
  if (pfVar8 == (float *)0x0) {
LAB_00423f98:
    pfVar10[-0x28] = 0.0;
    if (pfVar8 == (float *)0x0) goto LAB_00424155;
  }
  if (pfVar8[0x56] == 0.0) {
    fVar3 = ABS((fVar1 + 32.0 + 192.0) - pfVar9[-1]);
    fVar4 = ABS((fVar2 + 16.0) - *pfVar9);
    fVar5 = *pfVar10 * 0.5;
    if ((fVar3 < fVar5 == (NAN(fVar3) || NAN(fVar5))) ||
       (pfVar8[0x17] * pfVar8[0x11] * 0.5 <= fVar4)) {
      if ((fVar5 + 32.0 <= fVar3) || (pfVar8[0x17] * pfVar8[0x11] * 0.5 <= fVar4)) {
        if ((fVar3 < fVar5 != (NAN(fVar3) || NAN(fVar5))) &&
           (fVar3 = pfVar8[0x17] * pfVar8[0x11] * 0.5 + 32.0, fVar4 < fVar3)) {
          iVar6 = (int)pfVar8[0x100] * 3;
          local_18 = (undefined)
                     (int)ROUND((float)(int)pfVar8[0x100] -
                                (float)((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) * (fVar3 - fVar4)
                                * 0.03125);
          *(undefined *)((int)pfVar8 + 0x3bf) = local_18;
          goto LAB_00424155;
        }
        local_18 = *(undefined *)(pfVar8 + 0x100);
      }
      else {
        iVar6 = (int)pfVar8[0x100] * 3;
        local_18 = (undefined)
                   (int)ROUND((float)(int)pfVar8[0x100] -
                              ((fVar5 + 32.0) - fVar3) *
                              (float)((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) * 0.03125);
      }
      *(undefined *)((int)pfVar8 + 0x3bf) = local_18;
    }
    else {
      *(byte *)((int)pfVar8 + 0x3bf) = *(byte *)(pfVar8 + 0x100) >> 2;
    }
  }
LAB_00424155:
  pfVar10 = pfVar10 + 1;
  pfVar9 = pfVar9 + 3;
  local_1c = local_1c + -1;
  if (local_1c == 0) {
    *(int *)(unaff_EDI + 0x10) = *(int *)(unaff_EDI + 0x10) + 1;
    *(int *)(unaff_EDI + 0x14) = *(int *)(unaff_EDI + 0x14) + 1;
    return;
  }
  goto LAB_00423f47;
}


