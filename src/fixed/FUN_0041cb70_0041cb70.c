/* undefined4 __stdcall FUN_0041cb70(void) @ 0041cb70  257 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0041cb70(void)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar3 = DAT_004b43e0;
  fVar5 = FUN_004508b0();
  if (fVar5 < (float10)*(double *)((int)iVar3 + 0x14) !=
      (NANP(fVar5) || NANP((float10)*(double *)((int)iVar3 + 0x14)))) {
    *(double *)((int)iVar3 + 0x14) = (double)fVar5;
  }
  fVar5 = fVar5 - (float10)*(double *)((int)iVar3 + 0x14);
  if ((float10)1 < fVar5 != ((float10)1 == fVar5)) {
    *(double *)((int)iVar3 + 0x14) = (double)(fVar5 + (float10)*(double *)((int)iVar3 + 0x14));
    fVar6 = (float10)*(int *)((int)iVar3 + 0x20);
    if (*(int *)((int)iVar3 + 0x20) < 0) {
      fVar6 = fVar6 + (float10)4294967296.0;
    }
    fVar2 = (float)(fVar6 / fVar5);
    *(float *)((int)iVar3 + 0x34) = fVar2;
    if (65.0 < fVar2 == NANP(fVar2)) {
      *(undefined4 *)((int)iVar3 + 0x1c) = 0;
    }
    else {
      *(int *)((int)iVar3 + 0x1c) = *(int *)((int)iVar3 + 0x1c) + 1;
    }
    iVar4 = DAT_004b44e8;
    if (DAT_004b44e8 == 0) {
      *(undefined4 *)((int)iVar3 + 0x20) = 0;
    }
    else if ((*(byte *)((int)DAT_004b44e8 + 0x60) & 0x14) == 0) {
      *(double *)((int)iVar3 + 0x2c) = *(double *)((int)iVar3 + 0x2c) + 60.0;
      if (fVar2 <= 57.0) {
        *(double *)((int)iVar3 + 0x24) = (double)(fVar2 + (float)*(double *)((int)iVar3 + 0x24));
        puVar1 = (uint *)((int)iVar4 + 0x60);
        *puVar1 = *puVar1 & 0xffffff7f;
        *(undefined4 *)((int)iVar3 + 0x20) = 0;
      }
      else {
        *(double *)((int)iVar3 + 0x24) = *(double *)((int)iVar3 + 0x24) + 60.0;
        puVar1 = (uint *)((int)iVar4 + 0x60);
        *puVar1 = *puVar1 & 0xffffff7f;
        *(undefined4 *)((int)iVar3 + 0x20) = 0;
      }
    }
    else {
      *(uint *)((int)DAT_004b44e8 + 0x60) = *(uint *)((int)DAT_004b44e8 + 0x60) & 0xffffff7f;
      *(undefined4 *)((int)iVar3 + 0x20) = 0;
    }
  }
  *(int *)((int)iVar3 + 0x20) = *(int *)((int)iVar3 + 0x20) + DAT_004ceace + 1;
  return 1;
}


