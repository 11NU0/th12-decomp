/* undefined4 __stdcall FUN_00410c60(void * param_1) @ 00410c60  568 bytes */
#include "th12.h"

undefined4 FUN_00410c60(void *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 *puVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined4 uVar9;
  void *pvVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  int *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  pvVar5 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004975ab;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar6 = (undefined4 *)operator_new(0x24);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = puVar6[1] & 0xfffffffe;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *puVar6 = 0;
    puVar6[5] = puVar6;
    puVar6[6] = 0;
    puVar6[7] = 0;
  }
  puVar6[1] = puVar6[1] | 3;
  puVar6[2] = &LAB_00411190;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[8] = pvVar5;
  FUN_00462380();
  *(undefined4 **)((int)pvVar5 + 8) = puVar6;
  puVar6 = (undefined4 *)operator_new(0x24);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = puVar6[1] & 0xfffffffe;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *puVar6 = 0;
    puVar6[5] = puVar6;
    puVar6[6] = 0;
    puVar6[7] = 0;
  }
  puVar6[1] = puVar6[1] | 3;
  puVar6[2] = &LAB_004111a0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[8] = pvVar5;
  FUN_00462420();
  iVar2 = DAT_004b43b8;
  local_18 = 0x43f00000;
  *(undefined4 **)((int)pvVar5 + 0xc) = puVar6;
  local_14 = 0x43c40000;
  piVar1 = (int *)(iVar2 + 0x18fbc);
  local_10 = 0;
  if (*piVar1 == 0) {
    FUN_004615a0(&local_18,*(void **)(iVar2 + 0x18fb4),&param_1,0x12,0);
    *piVar1 = (int)param_1;
  }
  iVar2 = DAT_004b0c94 + DAT_004b0c90 * 2;
  *(int *)((int)pvVar5 + 0x1c) = iVar2;
  if (DAT_004b0cc4 == 0) {
    *(int *)((int)pvVar5 + 0x1c) = iVar2 + 6;
  }
  iVar2 = DAT_004b451c;
  if (*(char *)(*(int *)((int)pvVar5 + 0x1c) + 0x1e9ca + DAT_004b451c) == '\0') {
    *(uint *)((int)pvVar5 + 0x20) = *(uint *)((int)pvVar5 + 0x20) | 1;
  }
  if (*(char *)(iVar2 + 0x1e9d6) == '\0') {
    *(uint *)((int)pvVar5 + 0x20) = *(uint *)((int)pvVar5 + 0x20) | 2;
  }
  pbVar8 = (byte *)(*(int *)((int)pvVar5 + 0x1c) + 0x1e9ca + iVar2);
  *pbVar8 = *pbVar8 | 1;
  if (0 < DAT_004b0ca8) {
    pbVar8 = (byte *)(*(int *)((int)pvVar5 + 0x1c) + 0x1e9ca + iVar2);
    *pbVar8 = *pbVar8 | 0x10;
  }
  if (5 < *(int *)((int)pvVar5 + 0x1c)) {
    *(undefined *)(iVar2 + 0x1e9d6) = 1;
  }
  pcVar4 = (&PTR_s_e00_msg_004af128)[*(int *)((int)pvVar5 + 0x1c)];
  DAT_004d4f38 = 0;
  pcVar7 = pcVar4;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  pcVar13 = (char *)0x4d4f37;
  do {
    pcVar12 = pcVar13 + 1;
    pcVar13 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  pcVar12 = pcVar4;
  for (uVar11 = (uint)((int)pcVar7 - (int)pcVar4) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar11 = (int)pcVar7 - (int)pcVar4 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar13 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar13 = pcVar13 + 1;
  }
  pbVar8 = FUN_00463c10((size_t *)0x0,0);
  *(byte **)((int)pvVar5 + 0x14) = pbVar8;
  if (pbVar8 == (byte *)0x0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_0049f434);
    uVar9 = 0xffffffff;
  }
  else {
    param_1 = operator_new(0xf0);
    local_4 = 0;
    if (param_1 == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = FUN_004111b0(param_1,*(int *)(*(int *)((int)pvVar5 + 0x14) + 4) +
                                     *(int *)((int)pvVar5 + 0x14));
    }
    *(void **)((int)pvVar5 + 0x18) = pvVar10;
    uVar9 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}


