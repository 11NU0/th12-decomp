/* undefined __stdcall FUN_00410a50(void) @ 00410a50  178 bytes */
#include "th12.h"

void FUN_00410a50(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  FUN_00464c40();
  iVar3 = DAT_004ce8cc;
  piVar4 = (int *)(in_EAX + 0x40);
  iVar5 = 5;
LAB_00410a80:
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    for (puVar2 = *(undefined4 **)(iVar3 + 0x8856b8); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      piVar6 = (int *)*puVar2;
      if (*piVar6 == iVar1) goto LAB_00410ab6;
    }
    for (puVar2 = *(undefined4 **)(iVar3 + 0x8856c0); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      piVar6 = (int *)*puVar2;
      if (*piVar6 == iVar1) goto LAB_00410ab6;
    }
  }
  goto LAB_00410adf;
LAB_00410ab6:
  if ((piVar6 != (int *)0x0) && (piVar6[0x11f] = piVar6[0x11f] | 0x10000000, piVar6[6] == 0)) {
    for (piVar6 = (int *)piVar6[5]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
      *(uint *)(*piVar6 + 0x47c) = *(uint *)(*piVar6 + 0x47c) | 0x10000000;
    }
  }
LAB_00410adf:
  *piVar4 = 0;
  piVar4 = piVar4 + 1;
  iVar5 = iVar5 + -1;
  if (iVar5 == 0) {
    *(undefined ***)(in_EAX + 0xd0) = &PTR_FUN_004a3738;
    FUN_00464c40();
    return;
  }
  goto LAB_00410a80;
}


