/* undefined __thiscall FUN_00413570(void * this, undefined4 * param_1) @ 00413570  384 bytes */
#include "th12.h"

void __thiscall FUN_00413570(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00497408;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *param_1 = &PTR_LAB_0049fc50;
  local_4 = 0;
  FUN_00412be0(this,(int)param_1);
  if ((param_1[0x9be] & 0x400000) != 0) {
    *(undefined4 *)(DAT_004b43dc + 0x1c + param_1[0x9c1] * 4) = 0;
  }
  iVar7 = DAT_004ce8cc;
  piVar5 = param_1 + 0x448;
  local_10 = 0x10;
LAB_004135e1:
  iVar1 = *piVar5;
  if (iVar1 != 0) {
    for (puVar2 = *(undefined4 **)(iVar7 + 0x8856b8); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      piVar6 = (int *)*puVar2;
      if (*piVar6 == iVar1) goto LAB_00413617;
    }
    for (puVar2 = *(undefined4 **)(iVar7 + 0x8856c0); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      piVar6 = (int *)*puVar2;
      if (*piVar6 == iVar1) goto LAB_00413617;
    }
  }
  goto LAB_0041363f;
LAB_00413617:
  if ((piVar6 != (int *)0x0) && (piVar6[0x11f] = piVar6[0x11f] | 0x10000000, piVar6[6] == 0)) {
    for (piVar6 = (int *)piVar6[5]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
      *(uint *)(*piVar6 + 0x47c) = *(uint *)(*piVar6 + 0x47c) | 0x10000000;
    }
  }
LAB_0041363f:
  *piVar5 = 0;
  iVar1 = DAT_004b4514;
  piVar5 = piVar5 + 1;
  local_10 = local_10 + -1;
  if (local_10 == 0) {
    if (DAT_004b4514 != 0) {
      if (*(undefined4 **)(DAT_004b4514 + 0x8980) == param_1) {
        *(undefined4 *)(DAT_004b4514 + 0x8980) = 0;
        *(undefined *)(iVar1 + 0x8984) = 0;
      }
      piVar5 = (int *)(iVar1 + 0xaac);
      iVar7 = 0x100;
      do {
        if ((undefined4 *)*piVar5 == param_1) {
          *piVar5 = 0;
        }
        piVar5 = piVar5 + 0x1e;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    pvVar3 = (void *)param_1[0x9e4];
    if (pvVar3 != (void *)0x0) {
      FUN_00402870();
      FUN_0046ca4f(pvVar3);
    }
    local_4 = 0xffffffff;
    param_1[0x9e4] = 0;
    *param_1 = &PTR_LAB_0049fc34;
    puVar2 = (undefined4 *)param_1[0x40d];
    while (puVar2 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar2[1];
      FUN_0046ca4f((void *)*puVar2);
      FUN_0046ca4f(puVar2);
      puVar2 = puVar4;
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  goto LAB_004135e1;
}


