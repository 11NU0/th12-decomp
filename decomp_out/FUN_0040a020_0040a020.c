/* undefined4 __stdcall FUN_0040a020(void) @ 0040a020  265 bytes */
#include "th12.h"

undefined4 FUN_0040a020(void)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  uint *puVar4;
  int unaff_ESI;
  float *pfVar5;
  ulonglong uVar6;
  int local_10;
  
  puVar4 = (uint *)(unaff_ESI + 100);
  *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  pfVar5 = (float *)(unaff_ESI + 0x550);
  local_10 = 2000;
  do {
    if ((*(short *)((int)pfVar5 + 0x46) != 0) &&
       ((((DAT_004b44e8 != 0 && ((*(uint *)(DAT_004b44e8 + 0x60) & 2) != 0)) &&
         ((*(uint *)(DAT_004b44e8 + 0x60) & 0x400) != 0)) ||
        (iVar3 = FUN_004099e0((void *)0x0,puVar4), iVar3 == 0)))) {
      fVar1 = pfVar5[0x18];
      if (*(int *)(unaff_ESI + 0x14 + (int)fVar1 * 4) == 0) {
        *(uint **)(unaff_ESI + 0x14 + (int)fVar1 * 4) = puVar4;
      }
      else {
        *(uint **)(*(int *)(unaff_ESI + 0x2c + (int)fVar1 * 4) + 0x538) = puVar4;
      }
      *(uint **)(unaff_ESI + 0x2c + (int)pfVar5[0x18] * 4) = puVar4;
      pfVar5[0x13] = 0.0;
      *(int *)(unaff_ESI + 0x5c) = *(int *)(unaff_ESI + 0x5c) + 1;
      fVar1 = pfVar5[-1];
      pfVar2 = (float *)pfVar5[1];
      pfVar5[-2] = fVar1;
      if ((*pfVar2 <= 0.99) || (1.01 <= *pfVar2)) {
        *pfVar5 = *pfVar5 + *pfVar2;
        uVar6 = FUN_004931e0(pfVar2,fVar1);
        pfVar5[-1] = (float)uVar6;
      }
      else {
        pfVar5[-1] = (float)((int)fVar1 + 1);
        *pfVar5 = *pfVar5 + 1.0;
      }
    }
    puVar4 = puVar4 + 0x27e;
    pfVar5 = pfVar5 + 0x27e;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  return 1;
}


