/* undefined4 __stdcall FUN_004044f0(int param_1) @ 004044f0  297 bytes */

#include "th12.h"

undefined4 __stdcall FUN_004044f0(int param_1)

{
  int *piVar1;
  char cVar2;
  short *psVar3;
  char *in_EAX;
  char *pcVar4;
  byte *pbVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (*(int *)(param_1 + 0x3604) == 0) {
    DAT_004d4f38 = 0;
    pcVar4 = in_EAX;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    pcVar10 = (char *)0x4d4f37;
    do {
      pcVar9 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar9 != '\0');
    pcVar9 = in_EAX;
    for (uVar8 = (uint)((int)pcVar4 - (int)in_EAX) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = (int)pcVar4 - (int)in_EAX & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pbVar5 = FUN_00463c10((size_t *)(param_1 + 0x3608),0);
    *(byte **)(param_1 + 0x3604) = pbVar5;
    if (pbVar5 == (byte *)0x0) {
      return 0xffffffff;
    }
  }
  pvVar6 = _malloc(*(size_t *)(param_1 + 0x3608));
  *(void **)(param_1 + 0x10) = pvVar6;
  _memcpy(pvVar6,*(void **)(param_1 + 0x3604),*(size_t *)(param_1 + 0x3608));
  iVar7 = FUN_0045fe60((*(uint *)(param_1 + 0x35d4) & 1) + 3);
  *(int *)(param_1 + 0x1c4) = iVar7;
  if (iVar7 == 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_0049f588);
    return 0xffffffff;
  }
  psVar3 = *(short **)(param_1 + 0x10);
  *(short **)(param_1 + 0x14) = psVar3 + 0x48;
  *(int *)(param_1 + 0x18) = *(int *)(psVar3 + 2) + (int)psVar3;
  *(int *)(param_1 + 0x1c) = *(int *)(psVar3 + 4) + (int)psVar3;
  iVar7 = 0;
  if (0 < *psVar3) {
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x14) + iVar7 * 4);
      *piVar1 = *piVar1 + *(int *)(param_1 + 0x10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < **(short **)(param_1 + 0x10));
  }
  pvVar6 = _malloc(*(short *)(*(int *)(param_1 + 0x10) + 2) * 0x4b4);
  *(void **)(param_1 + 0x1c8) = pvVar6;
  return 0;
}


