/* undefined4 __stdcall FUN_0043b7e0(void) @ 0043b7e0  368 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_0043b7e0(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  int in_EAX;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined local_4;
  
  if (DAT_004b44e8 != 0) {
    _DAT_004d49d4 = DAT_004d49d0;
    DAT_004d49d0 = (uint)DAT_004d48b8;
    if ((_DAT_004ceae8 & 0x200) == 0) {
      if (((((DAT_004d48b8 & 1) != 0) && (DAT_004d494c < 5)) && ((DAT_004d48b8 & 8) != 0)) &&
         (DAT_004d4958 < 5)) {
        DAT_004d49d0 = DAT_004d49d0 | 0x400;
      }
    }
    else {
      if ((DAT_004d48b8 & 8) != 0) {
        DAT_004d49d0 = DAT_004d49d0 | 0x400;
      }
      if ((DAT_004d49d0 & 1) == 0) {
        DAT_004d49cc = 0;
      }
      else {
        DAT_004d49cc = DAT_004d49cc + 1;
        if (7 < DAT_004d49cc) {
          DAT_004d49d0 = DAT_004d49d0 | 8;
          DAT_004d49cc = 8;
        }
      }
    }
    FUN_0040f690(0x4d48b8);
    if (-1 < *(int *)(in_EAX + 0x1d0)) {
      if (*(int *)(in_EAX + 0x1d0) % 0x1e == 0) {
        fVar3 = *(float *)(DAT_004b43e0 + 0x34) + 0.5;
        if (256.0 < fVar3 == (fVar3 == 256.0)) {
          local_4 = (undefined)(int)ROUND(fVar3);
        }
        else {
          local_4 = 0xff;
        }
        iVar2 = **(int **)(in_EAX + 0xa0);
        **(undefined **)(iVar2 + 0x18a0) = local_4;
        piVar1 = (int *)(iVar2 + 0x18a0);
        *piVar1 = *piVar1 + 1;
      }
      bVar4 = FUN_0043c9b0((uint)DAT_004d49e0,(short)DAT_004d49d0,DAT_004d49dc,DAT_004d49e0);
      if (CONCAT31(extraout_var,bVar4) != 0) {
        uVar5 = FUN_0043cbb0();
        *(undefined4 *)(in_EAX + 0xa0) = uVar5;
      }
      *(int *)(in_EAX + 0x1d0) = *(int *)(in_EAX + 0x1d0) + 1;
      return 1;
    }
  }
  return 1;
}


