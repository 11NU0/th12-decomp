/* undefined4 __stdcall FUN_0044d8b0(uint param_1) @ 0044d8b0  872 bytes */
#include "th12.h"

undefined4 FUN_0044d8b0(uint param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint local_18;
  ushort *local_14;
  uint local_10;
  uint local_8;
  uint local_4;
  
  uVar4 = DAT_004b0e48;
  if (DAT_004b0e48 == 0x15) {
    local_14 = DAT_004b0e68;
    local_18 = 0;
    uVar7 = DAT_004b0e4c;
    puVar8 = DAT_004b0e68;
    if (param_1 != 0) {
      do {
        uVar4 = uVar7;
        local_10 = 0;
        if (uVar4 != 0) {
          puVar5 = puVar8 + -1;
          do {
            uVar7 = 0;
            if (*(byte *)((int)puVar5 + 5) == 0) {
              uVar6 = 0;
              local_4 = 0;
              local_8 = 0;
              if ((local_10 != 0) && (*(byte *)((int)puVar5 + 1) != 0)) {
                local_8 = (uint)*(byte *)((int)puVar5 + -1);
                uVar7 = (uint)*(byte *)puVar5;
                local_4 = (uint)*(byte *)(puVar5 + -1);
                uVar6 = 1;
              }
              if ((local_10 < uVar4 - 1) && (*(byte *)((int)puVar5 + 9) != 0)) {
                local_8 = local_8 + *(byte *)((int)puVar5 + 7);
                uVar7 = uVar7 + *(byte *)(puVar5 + 4);
                local_4 = local_4 + *(byte *)(puVar5 + 3);
                uVar6 = uVar6 + 1;
              }
              if ((local_18 != 0) &&
                 (puVar2 = puVar8 + ((int)(DAT_004b0e58 + (DAT_004b0e58 >> 0x1f & 3U)) >> 2) * -2,
                 *(byte *)((int)puVar2 + 3) != 0)) {
                uVar7 = uVar7 + *(byte *)(puVar2 + 1);
                local_8 = local_8 + *(byte *)((int)puVar2 + 1);
                local_4 = local_4 + *(byte *)puVar2;
                uVar6 = uVar6 + 1;
                puVar8 = local_14;
              }
              if ((local_18 < DAT_004b0e50 - 1U) &&
                 (iVar3 = (int)(DAT_004b0e58 + (DAT_004b0e58 >> 0x1f & 3U)) >> 2,
                 puVar2 = puVar8 + iVar3 * 2, *(char *)((int)puVar8 + iVar3 * 4 + 3) != '\0')) {
                uVar7 = uVar7 + *(byte *)(puVar2 + 1);
                local_8 = local_8 + *(byte *)((int)puVar2 + 1);
                local_4 = local_4 + *(byte *)puVar2;
                uVar6 = uVar6 + 1;
              }
              if (1 < uVar6) {
                uVar7 = uVar7 / uVar6;
                local_8 = local_8 / uVar6;
                local_4 = local_4 / uVar6;
              }
              *(byte *)(puVar5 + 2) = (byte)uVar7;
              *(byte *)((int)puVar5 + 3) = (byte)local_8;
              *(undefined *)puVar8 = (undefined)local_4;
              uVar4 = DAT_004b0e4c;
            }
            local_10 = local_10 + 1;
            puVar8 = puVar8 + 2;
            puVar5 = puVar5 + 2;
            local_14 = puVar8;
          } while (local_10 < uVar4);
        }
        local_18 = local_18 + 1;
        uVar7 = uVar4;
      } while (local_18 < param_1);
    }
  }
  else if ((DAT_004b0e48 == 0x1a) &&
          (local_18 = 0, puVar8 = DAT_004b0e68, uVar7 = DAT_004b0e4c, param_1 != 0)) {
    do {
      local_14 = (ushort *)0x0;
      if (uVar7 != 0) {
        do {
          if ((*puVar8 & 0xf000) == 0) {
            uVar9 = 0;
            uVar6 = 0;
            uVar4 = 0;
            local_4 = 0;
            if (local_14 != (ushort *)0x0) {
              uVar1 = puVar8[-1];
              if ((uVar1 & 0xf000) != 0) {
                uVar4 = uVar1 >> 8 & 0xf;
                uVar6 = uVar1 >> 4 & 0xf;
                local_4 = uVar1 & 0xf;
                uVar9 = 1;
              }
            }
            if (local_14 < uVar7 - 1) {
              uVar1 = puVar8[1];
              if ((uVar1 & 0xf000) != 0) {
                local_4 = local_4 + (uVar1 & 0xf);
                uVar4 = uVar4 + (uVar1 >> 8 & 0xf);
                uVar6 = uVar6 + (uVar1 >> 4 & 0xf);
                uVar9 = uVar9 + 1;
              }
            }
            if (local_18 != 0) {
              uVar1 = puVar8[-(DAT_004b0e58 / 2)];
              if ((uVar1 & 0xf000) != 0) {
                uVar4 = uVar4 + (uVar1 >> 8 & 0xf);
                local_4 = local_4 + (uVar1 & 0xf);
                uVar6 = uVar6 + (uVar1 >> 4 & 0xf);
                uVar9 = uVar9 + 1;
              }
            }
            if (local_18 < DAT_004b0e50 - 1U) {
              uVar1 = puVar8[DAT_004b0e58 / 2];
              if ((uVar1 & 0xf000) != 0) {
                uVar4 = uVar4 + (uVar1 >> 8 & 0xf);
                local_4 = local_4 + (uVar1 & 0xf);
                uVar6 = uVar6 + (uVar1 >> 4 & 0xf);
                uVar9 = uVar9 + 1;
              }
            }
            if (1 < uVar9) {
              uVar4 = uVar4 / uVar9;
              uVar6 = uVar6 / uVar9;
              local_4 = local_4 / uVar9;
            }
            *puVar8 = ((ushort)((byte)(uVar4 >> 1) & 0xf) << 4 | (ushort)(uVar6 >> 1) & 0xf) << 4 |
                      *puVar8 & 0xf000 | (ushort)((byte)(local_4 >> 1) & 0xf);
            uVar7 = DAT_004b0e4c;
          }
          local_14 = (ushort *)((int)local_14 + 1);
          puVar8 = puVar8 + 1;
        } while (local_14 < uVar7);
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_1);
    return CONCAT31((int3)(local_18 >> 8),1);
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


