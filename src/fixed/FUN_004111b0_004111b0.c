/* void * __stdcall FUN_004111b0(void * param_1, undefined4 param_2) @ 004111b0  585 bytes */
#include "th12.h"

void * __stdcall FUN_004111b0(void *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint local_14;
  int local_10;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = ((void *)0x004974de);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *(uint *)((int)param_1 + 0x14) = *(uint *)((int)param_1 + 0x14) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x28) = *(uint *)((int)param_1 + 0x28) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x3c) = *(uint *)((int)param_1 + 0x3c) & 0xfffffffe;
  *(undefined ***)((int)param_1 + 0xd0) = &PTR_FUN_004a3738;
  *(undefined4 *)((int)param_1 + 0xd4) = 0;
  *(undefined4 *)((int)param_1 + 0xd8) = 0;
  *(undefined4 *)((int)param_1 + 0xdc) = 0;
  *(undefined4 *)((int)param_1 + 0xe0) = 0;
  local_4 = 0;
  _memset(param_1,0,0xf0);
  local_14 = 0;
  piVar5 = (int *)((int)param_1 + 0x40);
LAB_00411230:
  FUN_004615a0((void *)0x0,DAT_004cee70,&local_10,local_14 + 0x44,0);
  *piVar5 = local_10;
  iVar2 = DAT_004ce8cc;
  if (local_10 == 0) {
LAB_0041125f:
    piVar3 = (int *)0x0;
  }
  else {
    for (puVar4 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == local_10) goto LAB_00411298;
    }
    puVar4 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0);
    if (puVar4 == (undefined4 *)0x0) goto LAB_0041125f;
    do {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == local_10) goto LAB_00411298;
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
    piVar3 = (int *)0x0;
  }
  goto LAB_0041129e;
LAB_00411298:
  if (piVar3 == (int *)0x0) {
LAB_0041129e:
    *piVar5 = 0;
  }
  *(undefined *)((int)piVar3 + 0x127) = 0x10;
  iVar1 = *piVar5;
  if (iVar1 != 0) {
    for (puVar4 = *(undefined4 **)((int)iVar2 + 0x8856b8); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar1) goto LAB_004112e8;
    }
    puVar4 = *(undefined4 **)((int)iVar2 + 0x8856c0);
    if (puVar4 != (undefined4 *)0x0) {
      do {
        piVar3 = (int *)*puVar4;
        if (*piVar3 == iVar1) goto LAB_004112e8;
        puVar4 = (undefined4 *)puVar4[1];
      } while (puVar4 != (undefined4 *)0x0);
      piVar3 = (int *)0x0;
      goto LAB_004112ee;
    }
  }
  piVar3 = (int *)0x0;
LAB_004112ee:
  *piVar5 = 0;
LAB_004112f0:
  *(undefined *)((int)piVar3 + 0x49d) = 0x10;
  iVar1 = *piVar5;
  if (iVar1 == 0) {
LAB_004112fd:
    piVar3 = (int *)0x0;
  }
  else {
    for (puVar4 = *(undefined4 **)((int)iVar2 + 0x8856b8); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar1) goto LAB_0041133e;
    }
    puVar4 = *(undefined4 **)((int)iVar2 + 0x8856c0);
    if (puVar4 == (undefined4 *)0x0) goto LAB_004112fd;
    do {
      piVar3 = (int *)*puVar4;
      if (*piVar3 == iVar1) goto LAB_0041133e;
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
    piVar3 = (int *)0x0;
  }
LAB_00411342:
  *piVar5 = 0;
LAB_00411344:
  piVar3[0x120] = piVar3[0x120] | 8;
  local_14 = local_14 + 1;
  piVar5 = piVar5 + 1;
  if (4 < local_14) {
    *(undefined4 *)((int)param_1 + 0x54) = param_2;
    if ((*(uint *)((int)param_1 + 0x14) & 1) == 0) {
      *(undefined4 *)((int)param_1 + 0xc) = 0;
      *(undefined4 *)((int)param_1 + 8) = 0;
      *(undefined4 *)((int)param_1 + 4) = 0xfff0bdc1;
      *(undefined4 **)((int)param_1 + 0x10) = &DAT_004b2ed0;
      *(uint *)((int)param_1 + 0x14) = *(uint *)((int)param_1 + 0x14) | 1;
    }
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    *(undefined4 *)((int)param_1 + 8) = 0;
    *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
    if ((*(uint *)((int)param_1 + 0x28) & 1) == 0) {
      *(undefined4 *)((int)param_1 + 0x20) = 0;
      *(undefined4 *)((int)param_1 + 0x1c) = 0;
      *(undefined4 *)((int)param_1 + 0x18) = 0xfff0bdc1;
      *(undefined4 **)((int)param_1 + 0x24) = &DAT_004b2ed0;
      *(uint *)((int)param_1 + 0x28) = *(uint *)((int)param_1 + 0x28) | 1;
    }
    *(undefined4 *)((int)param_1 + 0x20) = 0;
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    *(undefined4 *)((int)param_1 + 0x18) = 0xffffffff;
    if ((*(uint *)((int)param_1 + 0x3c) & 1) == 0) {
      *(undefined4 *)((int)param_1 + 0x34) = 0;
      *(undefined4 *)((int)param_1 + 0x30) = 0;
      *(undefined4 *)((int)param_1 + 0x2c) = 0xfff0bdc1;
      *(undefined4 **)((int)param_1 + 0x38) = &DAT_004b2ed0;
      *(uint *)((int)param_1 + 0x3c) = *(uint *)((int)param_1 + 0x3c) | 1;
    }
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    *(undefined4 *)((int)param_1 + 0x30) = 0;
    *(undefined4 *)((int)param_1 + 0x2c) = 0xffffffff;
    *(uint *)((int)param_1 + 0x74) = *(uint *)((int)param_1 + 0x74) | 1;
    *(undefined4 *)((int)param_1 + 0x7c) = 0xffffff;
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
  goto LAB_00411230;
LAB_004112e8:
  if (piVar3 == (int *)0x0) goto LAB_004112ee;
  goto LAB_004112f0;
LAB_0041133e:
  if (piVar3 != (int *)0x0) goto LAB_00411344;
  goto LAB_00411342;
}


