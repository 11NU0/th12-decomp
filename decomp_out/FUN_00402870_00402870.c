/* undefined __stdcall FUN_00402870(void) @ 00402870  231 bytes */
#include "th12.h"

void FUN_00402870(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *unaff_ESI;
  
  if ((void *)unaff_ESI[4] != (void *)0x0) {
    _free((void *)unaff_ESI[4]);
    unaff_ESI[4] = 0;
  }
  if ((void *)unaff_ESI[5] != (void *)0x0) {
    _free((void *)unaff_ESI[5]);
    unaff_ESI[5] = 0;
  }
  iVar4 = 0;
  if (*unaff_ESI == 1 || *unaff_ESI + -1 < 0) {
LAB_0040292f:
    if ((void *)unaff_ESI[2] != (void *)0x0) {
      _free((void *)unaff_ESI[2]);
      unaff_ESI[2] = 0;
    }
    if ((void *)unaff_ESI[3] != (void *)0x0) {
      _free((void *)unaff_ESI[3]);
      unaff_ESI[3] = 0;
    }
    return;
  }
LAB_004028a8:
  piVar1 = (int *)(unaff_ESI[2] + iVar4 * 4);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    for (puVar3 = *(undefined4 **)(DAT_004ce8cc + 0x8856b8); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      piVar5 = (int *)*puVar3;
      if (*piVar5 == iVar2) goto LAB_004028f0;
    }
    for (puVar3 = *(undefined4 **)(DAT_004ce8cc + 0x8856c0); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      piVar5 = (int *)*puVar3;
      if (*piVar5 == iVar2) goto LAB_004028f0;
    }
  }
  goto LAB_0040291f;
LAB_004028f0:
  if ((piVar5 != (int *)0x0) && (piVar5[0x11f] = piVar5[0x11f] | 0x10000000, piVar5[6] == 0)) {
    for (piVar5 = (int *)piVar5[5]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      *(uint *)(*piVar5 + 0x47c) = *(uint *)(*piVar5 + 0x47c) | 0x10000000;
    }
  }
LAB_0040291f:
  *piVar1 = 0;
  iVar4 = iVar4 + 1;
  if (*unaff_ESI + -1 <= iVar4) goto LAB_0040292f;
  goto LAB_004028a8;
}


