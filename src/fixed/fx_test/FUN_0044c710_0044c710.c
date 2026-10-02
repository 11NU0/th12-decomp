/* undefined FUN_0044c710(undefined4 param_1, undefined4 param_2, undefined4 param_3) @ 0044c710  464 bytes */

#include "th12.h"

undefined * FUN_0044c710(byte *param_1,int param_2,undefined *param_3)

{
  byte bVar1;
  undefined uVar2;
  size_t in_EAX;
  uint uVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined *local_8;
  uint local_4;
  
  bVar6 = 0x80;
  bVar1 = 0;
  if ((param_3 == (undefined *)0x0) &&
     (param_3 = (undefined *)_malloc(in_EAX), param_3 == (undefined *)0x0)) {
    return (undefined *)0x0;
  }
  local_8 = param_3;
  local_4 = 1;
  pbVar9 = param_1;
  while( true ) {
    while( true ) {
      if (bVar6 == 0x80) {
        bVar1 = *pbVar9;
        if ((int)pbVar9 - (int)param_1 < param_2) {
          pbVar9 = pbVar9 + 1;
        }
        else {
          bVar1 = 0;
        }
      }
      bVar4 = bVar6 & bVar1;
      bVar6 = bVar6 >> 1;
      if (bVar6 == 0) {
        bVar6 = 0x80;
      }
      if (bVar4 == 0) break;
      uVar3 = 0;
      uVar7 = 0x80;
      iVar5 = (int)pbVar9 - (int)param_1;
      do {
        if (bVar6 == 0x80) {
          bVar1 = *pbVar9;
          if (iVar5 < param_2) {
            pbVar9 = pbVar9 + 1;
            iVar5 = iVar5 + 1;
          }
          else {
            bVar1 = 0;
          }
        }
        if ((bVar1 & bVar6) != 0) {
          uVar3 = uVar3 | uVar7;
        }
        uVar7 = uVar7 >> 1;
        bVar6 = bVar6 >> 1;
        if (bVar6 == 0) {
          bVar6 = 0x80;
        }
      } while (uVar7 != 0);
      *local_8 = (char)uVar3;
      local_8 = local_8 + 1;
      (&DAT_004cc550)[local_4] = (char)uVar3;
      local_4 = local_4 + 1 & 0x1fff;
    }
    uVar3 = 0;
    uVar7 = 0x1000;
    iVar5 = (int)pbVar9 - (int)param_1;
    do {
      if (bVar6 == 0x80) {
        bVar1 = *pbVar9;
        if (iVar5 < param_2) {
          pbVar9 = pbVar9 + 1;
          iVar5 = iVar5 + 1;
        }
        else {
          bVar1 = 0;
        }
      }
      if ((bVar1 & bVar6) != 0) {
        uVar3 = uVar3 | uVar7;
      }
      uVar7 = uVar7 >> 1;
      bVar6 = bVar6 >> 1;
      if (bVar6 == 0) {
        bVar6 = 0x80;
      }
    } while (uVar7 != 0);
    if (uVar3 == 0) break;
    uVar7 = 0;
    uVar8 = 8;
    iVar5 = (int)pbVar9 - (int)param_1;
    do {
      if (bVar6 == 0x80) {
        bVar1 = *pbVar9;
        if (iVar5 < param_2) {
          pbVar9 = pbVar9 + 1;
          iVar5 = iVar5 + 1;
        }
        else {
          bVar1 = 0;
        }
      }
      if ((bVar1 & bVar6) != 0) {
        uVar7 = uVar7 | uVar8;
      }
      uVar8 = uVar8 >> 1;
      bVar6 = bVar6 >> 1;
      if (bVar6 == 0) {
        bVar6 = 0x80;
      }
    } while (uVar8 != 0);
    iVar5 = 0;
    do {
      uVar2 = (&DAT_004cc550)[iVar5 + uVar3 & 0x1fff];
      *local_8 = uVar2;
      local_8 = local_8 + 1;
      (&DAT_004cc550)[local_4] = uVar2;
      local_4 = local_4 + 1 & 0x1fff;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= (int)(uVar7 + 2));
  }
  do {
    if (bVar6 == 0x80) {
      return param_3;
    }
    bVar6 = bVar6 >> 1;
  } while (bVar6 != 0);
  return param_3;
}


