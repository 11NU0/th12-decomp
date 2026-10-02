/* undefined __stdcall FUN_0044c3f0(byte * param_1, int param_2, int * param_3) @ 0044c3f0  768 bytes */

#include "th12.h"

void __stdcall FUN_0044c3f0(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  int iVar5;
  byte bVar6;
  byte local_21;
  byte *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  byte *local_4;
  
  local_21 = 0x80;
  bVar6 = 0;
  pbVar3 = (byte *)_malloc(param_2 * 2);
  if (pbVar3 == (byte *)0x0) {
    return;
  }
  *param_3 = 0;
  local_4 = pbVar3;
  FUN_0044c920();
  local_14 = 0;
  local_1c = 1;
  iVar5 = 0;
  local_20 = param_1;
  do {
    if (param_2 <= iVar5) break;
    bVar1 = *local_20;
    local_20 = local_20 + 1;
    iVar5 = iVar5 + 1;
    if (bVar1 == 0xffffffff) break;
    (&DAT_004cc551)[local_14] = bVar1;
    local_14 = local_14 + 1;
  } while (local_14 < 0x12);
  DAT_004cc548 = 1;
  DAT_004b454c = 0x2000;
  DAT_004b4554 = 0;
  DAT_004b4550 = 0;
  local_18 = 0;
  local_c = 0;
  iVar5 = 0;
joined_r0x0044c492:
  if (local_14 < 1) {
    local_21 = local_21 >> 1;
    if (local_21 == 0) {
      *pbVar3 = bVar6;
      pbVar3 = pbVar3 + 1;
      bVar6 = 0;
      local_21 = 0x80;
    }
    uVar4 = 0x1000;
    do {
      local_21 = local_21 >> 1;
      if (local_21 == 0) {
        *pbVar3 = bVar6;
        pbVar3 = pbVar3 + 1;
        bVar6 = 0;
        local_21 = 0x80;
      }
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
    *param_3 = (int)pbVar3 - (int)local_4;
    return;
  }
  local_8 = iVar5;
  if (local_14 < iVar5) {
    local_8 = local_14;
    local_18 = local_14;
  }
  if (2 < local_8) goto LAB_0044c506;
  bVar6 = bVar6 | local_21;
  local_21 = local_21 >> 1;
  local_8 = 1;
  if (local_21 == 0) {
    *pbVar3 = bVar6;
    pbVar3 = pbVar3 + 1;
    bVar6 = 0;
    local_21 = 0x80;
  }
  uVar4 = 0x80;
  do {
    if (((&DAT_004cc550)[local_1c] & (byte)uVar4) != 0) {
      bVar6 = bVar6 | local_21;
    }
    local_21 = local_21 >> 1;
    if (local_21 == 0) {
      *pbVar3 = bVar6;
      pbVar3 = pbVar3 + 1;
      bVar6 = 0;
      local_21 = 0x80;
    }
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  goto LAB_0044c574;
LAB_0044c506:
  local_21 = local_21 >> 1;
  if (local_21 == 0) {
    *pbVar3 = bVar6;
    local_21 = 0x80;
    pbVar3 = pbVar3 + 1;
    bVar6 = 0;
  }
  uVar4 = 0x1000;
  do {
    if ((local_c & uVar4) != 0) {
      bVar6 = bVar6 | local_21;
    }
    local_21 = local_21 >> 1;
    if (local_21 == 0) {
      *pbVar3 = bVar6;
      local_21 = 0x80;
      pbVar3 = pbVar3 + 1;
      bVar6 = 0;
    }
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  uVar4 = 8;
  do {
    if ((uVar4 & local_8 - 3U) != 0) {
      bVar6 = bVar6 | local_21;
    }
    local_21 = local_21 >> 1;
    if (local_21 == 0) {
      *pbVar3 = bVar6;
      local_21 = 0x80;
      pbVar3 = pbVar3 + 1;
      bVar6 = 0;
    }
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  iVar5 = local_8;
  if (0 < local_8) {
LAB_0044c574:
    local_10 = (int)local_20 - (int)param_1;
    do {
      uVar4 = local_1c + 0x12 & 0x1fff;
      if ((&DAT_004b4540)[uVar4 * 3] != 0) {
        iVar5 = (&DAT_004b4548)[uVar4 * 3];
        if (iVar5 == 0) {
          iVar5 = (&DAT_004b4544)[uVar4 * 3];
        }
        else {
          iVar2 = (&DAT_004b4544)[uVar4 * 3];
          if (iVar2 != 0) {
            iVar5 = (&DAT_004b4548)[iVar2 * 3];
            while (iVar5 != 0) {
              iVar2 = (&DAT_004b4548)[iVar2 * 3];
              iVar5 = (&DAT_004b4548)[iVar2 * 3];
            }
            FUN_0044cb00(iVar2);
            FUN_0044cba0(extraout_ECX,iVar2);
            goto LAB_0044c656;
          }
        }
        (&DAT_004b4540)[iVar5 * 3] = (&DAT_004b4540)[uVar4 * 3];
        iVar2 = (&DAT_004b4540)[uVar4 * 3];
        if ((&DAT_004b4548)[iVar2 * 3] == uVar4) {
          (&DAT_004b4548)[iVar2 * 3] = iVar5;
          (&DAT_004b4540)[uVar4 * 3] = 0;
        }
        else {
          (&DAT_004b4544)[iVar2 * 3] = iVar5;
          (&DAT_004b4540)[uVar4 * 3] = 0;
        }
      }
LAB_0044c656:
      if (local_10 < param_2) {
        bVar1 = *local_20;
        local_10 = local_10 + 1;
        local_20 = local_20 + 1;
        if (bVar1 == 0xffffffff) goto LAB_0044c67b;
        (&DAT_004cc550)[uVar4] = bVar1;
      }
      else {
LAB_0044c67b:
        local_14 = local_14 + -1;
      }
      local_1c = local_1c + 1 & 0x1fff;
      if (local_14 != 0) {
        local_18 = FUN_0044c960(&local_c,local_1c,(int *)&local_c);
      }
      local_8 = local_8 + -1;
      iVar5 = local_18;
    } while (local_8 != 0);
  }
  goto joined_r0x0044c492;
}


