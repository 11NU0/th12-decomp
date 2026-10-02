/* undefined4 __stdcall FUN_0041d3b0(int param_1) @ 0041d3b0  331 bytes */
#include "th12.h"

undefined4 FUN_0041d3b0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar4 = FUN_0045fe60(0x1b);
  *(int *)(param_1 + 0x6ce4) = iVar4;
  if (iVar4 == 0) {
LAB_0041d3d4:
    FUN_00464220(&DAT_004b0ec8,&DAT_0049f434);
    return 0xffffffff;
  }
  if (DAT_004ce8a0 == 0) {
    pcVar2 = *(char **)(DAT_004b452c + (DAT_004b0c94 + 6 + DAT_004b0c90 * 2) * 4);
    DAT_004d4f38 = 0;
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar9 = (char *)0x4d4f37;
    do {
      pcVar8 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar8 != '\0');
    pcVar8 = pcVar2;
    for (uVar7 = (uint)((int)pcVar5 - (int)pcVar2) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (int)pcVar5 - (int)pcVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    pbVar6 = FUN_00463c10((size_t *)0x0,0);
    *(byte **)(param_1 + 0x6d34) = pbVar6;
    if (pbVar6 == (byte *)0x0) goto LAB_0041d3d4;
  }
  else {
    *(int *)(param_1 + 0x6d34) = DAT_004ce8a0;
    FUN_00421980();
    DAT_004ce8a0 = 0;
  }
  if ((*(uint *)(param_1 + 0x6cd0) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x6cc8) = 0;
    *(undefined4 *)(param_1 + 0x6cc4) = 0;
    *(undefined4 *)(param_1 + 0x6cc0) = 0xfff0bdc1;
    *(undefined4 **)(param_1 + 0x6ccc) = &DAT_004b2ed0;
    *(uint *)(param_1 + 0x6cd0) = *(uint *)(param_1 + 0x6cd0) | 1;
  }
  *(undefined4 *)(param_1 + 0x6cc4) = 0;
  *(undefined4 *)(param_1 + 0x6cc8) = 0;
  *(undefined4 *)(param_1 + 0x6cc0) = 0xffffffff;
  uVar3 = DAT_004b0c44;
  *(undefined4 *)(param_1 + 0x6d38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6d40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6cdc) = uVar3;
  return 0;
}


