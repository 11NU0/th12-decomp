/* undefined __fastcall FUN_00447b20(int param_1) @ 00447b20  741 bytes */
#include "th12.h"

void __fastcall FUN_00447b20(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *local_b8;
  int local_b4;
  int local_b0;
  char local_ac [168];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&local_b8;
  iVar10 = 0;
  iVar8 = 0;
  if (0 < *(int *)((int)param_1 + 0x1d8) * 10 + -10) {
    do {
      if ((int)(char)(&DAT_004af208)[iVar10] == *(int *)((int)param_1 + 0x100)) {
        iVar8 = iVar8 + 1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar8 < *(int *)((int)param_1 + 0x1d8) * 10 + -10);
  }
  local_b8 = (int *)((int)param_1 + 0x670);
  *(undefined4 *)((int)param_1 + 0x2b0) = 0;
  local_b4 = 0;
  local_b0 = param_1;
LAB_00447b90:
  if (iVar10 < 0x71) {
    while ((int)(char)(&DAT_004af208)[iVar10] != *(int *)((int)local_b0 + 0x100)) {
      iVar10 = iVar10 + 1;
      if (0x70 < iVar10) goto LAB_00447bb1;
    }
    if (0x70 < iVar10) goto LAB_00447bb1;
    iVar8 = iVar10 * 0x90;
    if (*(int *)(iVar8 + 0x1aaa8 + DAT_004b451c) != 0) {
      pcVar5 = (char *)(iVar8 + 0x1aa24 + DAT_004b451c);
      iVar9 = -(int)pcVar5;
      do {
        cVar2 = *pcVar5;
        pcVar5[(int)(local_ac + iVar9)] = cVar2;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      pcVar5 = local_ac;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      iVar9 = (int)pcVar5 - (int)(local_ac + 1);
      if (iVar9 < 0x2a) {
        _memset(local_ac + iVar9,0x20,0x2aU - iVar9);
        iVar9 = iVar9 + (0x2aU - iVar9);
      }
      iVar1 = *(int *)((int)local_b0 + 0x28) * 0x45f4 + 0x6ec + DAT_004b451c;
      iVar3 = *local_b8;
      local_ac[iVar9] = '\0';
      if (iVar3 != 0) {
        for (puVar4 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)puVar4[1]) {
          piVar6 = (int *)*puVar4;
          if (*piVar6 == iVar3) goto LAB_00447cb5;
        }
        for (puVar4 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)puVar4[1]) {
          piVar6 = (int *)*puVar4;
          if (*piVar6 == iVar3) goto LAB_00447cb5;
        }
      }
      goto LAB_00447cb9;
    }
    piVar6 = FUN_00461920(*local_b8,DAT_004ce8cc,*local_b8);
    if (piVar6 == (int *)0x0) {
      *local_b8 = 0;
    }
    FUN_004608f0(0x808080,0,0,0,&DAT_004a1fd8);
    goto LAB_00447d5e;
  }
LAB_00447bb1:
  if (local_b4 < 10) {
    piVar6 = (int *)(local_b0 + 0x670 + local_b4 * 4);
    iVar8 = 10 - local_b4;
    goto LAB_00447bd0;
  }
  goto LAB_00447df3;
LAB_00447cb5:
  if (piVar6 == (int *)0x0) {
LAB_00447cb9:
    *local_b8 = 0;
  }
  FUN_004608f0((-(uint)(*(int *)(iVar8 + iVar1) != 0) & 0x100f91) + 0xefefef,0,0,0,
               "No.%3d %s %4d/%4d");
LAB_00447d5e:
  iVar10 = iVar10 + 1;
  *(int *)((int)local_b0 + 0x2b0) = *(int *)((int)local_b0 + 0x2b0) + 1;
  local_b8 = local_b8 + 1;
  local_b4 = local_b4 + 1;
  if (9 < local_b4) goto LAB_00447df3;
  goto LAB_00447b90;
LAB_00447bd0:
  iVar10 = *piVar6;
  if (iVar10 != 0) {
    for (puVar4 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar7 = (int *)*puVar4;
      if (*piVar7 == iVar10) goto LAB_00447dc6;
    }
    for (puVar4 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar7 = (int *)*puVar4;
      if (*piVar7 == iVar10) goto LAB_00447dc6;
    }
  }
  goto LAB_00447dca;
LAB_00447dc6:
  if (piVar7 == (int *)0x0) {
LAB_00447dca:
    *piVar6 = 0;
  }
  FUN_004608f0(0xffffffff,0,0,0," ");
  piVar6 = piVar6 + 1;
  iVar8 = iVar8 + -1;
  if (iVar8 == 0) {
LAB_00447df3:
    ___security_check_cookie_4(local_4 ^ (uint)&local_b8);
    return;
  }
  goto LAB_00447bd0;
}


