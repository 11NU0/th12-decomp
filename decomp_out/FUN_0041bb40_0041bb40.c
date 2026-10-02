/* undefined4 __stdcall FUN_0041bb40(void) @ 0041bb40  476 bytes */
#include "th12.h"

undefined4 FUN_0041bb40(void)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined2 local_1ca;
  uint local_1c4;
  undefined local_1c0 [8];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_10;
  undefined4 local_c;
  
  pbVar8 = (byte *)(DAT_004b43c8 + 100);
  _memset(&local_1f0,0,0x1e8);
  _memset(local_1c0,0,0x1b0);
  local_1f4 = 2000;
  iVar6 = DAT_004b44f4;
  do {
    if ((((*pbVar8 & 1) != 0) && (*(short *)(pbVar8 + 0x532) == 1)) &&
       (*(int *)(pbVar8 + 0x630) == 1)) {
      local_1e4 = *(undefined4 *)(pbVar8 + 0x628);
      local_1f0 = *(undefined4 *)(pbVar8 + 0x4bc);
      local_1ec = *(undefined4 *)(pbVar8 + 0x4c0);
      local_1d0 = *(undefined4 *)(pbVar8 + 0x62c);
      local_1c4 = local_1c4 | 1;
      local_1e8 = *(undefined4 *)(pbVar8 + 0x4c4);
      local_1dc = 0x43000000;
      local_1e0 = 0x43000000;
      local_1d8 = 0;
      piVar1 = (int *)(iVar6 + 0x468);
      local_1d4 = 0x41600000;
      local_1cc = 7;
      local_1ca = 6;
      local_10 = 0x13;
      local_c = 0xffffffff;
      local_1b0 = 0x200;
      local_1b8 = 0x4b0;
      if (*piVar1 < 0x100) {
        *(int *)(iVar6 + 0x46c) = *(int *)(iVar6 + 0x46c) + 1;
        piVar2 = (int *)(iVar6 + 0x46c);
        if (*(int *)(iVar6 + 0x46c) < 0x10000) {
          *piVar2 = 0x10000;
        }
        pvVar3 = operator_new(0xfa4);
        if (pvVar3 == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_00428520();
        }
        piVar4[0x20] = *piVar2;
        iVar7 = *(int *)(iVar6 + 0x464);
        piVar4[1] = iVar7;
        *(int **)(iVar7 + 8) = piVar4;
        *piVar1 = *piVar1 + 1;
        *(int **)(iVar6 + 0x464) = piVar4;
        (**(code **)(*piVar4 + 4))(&local_1f0);
        iVar7 = *piVar2;
        iVar6 = DAT_004b44f4;
      }
      else {
        iVar7 = 0;
      }
      iVar5 = *(int *)(iVar6 + 0x18);
      if (iVar7 != 0) {
        for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
          if (*(int *)(iVar5 + 0x80) == iVar7) goto LAB_0041bce8;
        }
      }
      iVar5 = 0;
LAB_0041bce8:
      *(undefined4 *)(iVar5 + 0x454) = *(undefined4 *)(pbVar8 + 0x640);
      *(undefined4 *)(iVar5 + 0x458) = *(undefined4 *)(pbVar8 + 0x644);
    }
    pbVar8 = pbVar8 + 0x9f8;
    local_1f4 = local_1f4 + -1;
    if (local_1f4 == 0) {
      return 0;
    }
  } while( true );
}


