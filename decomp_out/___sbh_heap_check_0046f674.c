/* undefined4 __stdcall ___sbh_heap_check(void) @ 0046f674  740 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___sbh_heap_check
   
   Library: Visual Studio 2008 Release */

undefined4 ___sbh_heap_check(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  int local_13c [64];
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  if (DAT_004d6444 == (uint *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_38 = DAT_004d6444;
    local_20 = 0;
    if (0 < DAT_004d6440) {
      do {
        uVar3 = local_38[4];
        if (uVar3 == 0) {
          return 0xfffffffe;
        }
        local_c = (uint *)local_38[3];
        local_28 = (uint *)(uVar3 + 0x144);
        puVar2 = (uint *)(uVar3 + 0xc4);
        local_24 = local_38[2];
        local_14 = 0;
        local_18 = 0;
        local_10 = 0;
        local_3c = puVar2;
        puVar7 = local_38;
        do {
          uVar3 = local_24;
          iVar8 = 0;
          local_2c = 0;
          local_1c = 0;
          local_8 = 0;
          piVar10 = local_13c;
          local_3c = puVar2;
          for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar10 = 0;
            piVar10 = piVar10 + 1;
          }
          if (-1 < (int)uVar3) {
            if (local_c == (uint *)0x0) {
              return 0xfffffffc;
            }
            puVar2 = local_c + 0x3ff;
            do {
              puVar7 = puVar2 + -0x3fc;
              if ((puVar2[-0x3fd] != 0xffffffff) || (*puVar2 != 0xffffffff)) {
                return 0xfffffffb;
              }
              do {
                uVar3 = *puVar7;
                if ((uVar3 & 1) == 0) {
                  iVar4 = ((int)uVar3 >> 4) + -1;
                  if (0x3f < iVar4) {
                    iVar4 = 0x3f;
                  }
                  local_13c[iVar4] = local_13c[iVar4] + 1;
                  uVar5 = uVar3;
                }
                else {
                  if (0x400 < (int)(uVar3 - 1)) {
                    return 0xfffffffa;
                  }
                  local_8 = local_8 + 1;
                  uVar5 = uVar3 - 1;
                }
                if ((((int)uVar5 < 0x10) || ((uVar5 & 0xf) != 0)) || (0xff0 < (int)uVar5)) {
                  return 0xfffffff9;
                }
                puVar7 = (uint *)(uVar5 + (int)puVar7);
                if (puVar7[-1] != uVar3) {
                  return 0xfffffff8;
                }
              } while (puVar7 < puVar2);
              if (puVar7 != puVar2) {
                return 0xfffffff8;
              }
              puVar2 = puVar2 + 0x400;
              iVar8 = iVar8 + 1;
            } while (iVar8 < 8);
            if (*local_28 != local_8) {
              return 0xfffffff7;
            }
            iVar4 = 0;
            puVar11 = local_28;
            do {
              local_8 = 0;
              local_34 = puVar11 + 2;
              puVar2 = (uint *)puVar11[1];
              local_30 = puVar11;
              puVar9 = local_34;
              if (puVar2 != puVar11) {
                do {
                  if (local_8 == local_13c[iVar4]) break;
                  if ((puVar2 < local_c) || (local_c + 0x2000 <= puVar2)) {
                    return 0xfffffff6;
                  }
                  puVar6 = (uint *)(((uint)puVar2 & 0xfffff000) + 0xc);
                  puVar7 = (uint *)(((uint)puVar2 & 0xfffff000) + 0xffc);
                  if (puVar6 == puVar7) {
                    return 0xfffffff5;
                  }
                  do {
                    if (puVar6 == puVar2) break;
                    puVar6 = (uint *)((int)puVar6 + (*puVar6 & 0xfffffffe));
                    puVar9 = local_34;
                  } while (puVar6 != puVar7);
                  if (puVar6 == puVar7) {
                    return 0xfffffff5;
                  }
                  iVar8 = ((int)*puVar2 >> 4) + -1;
                  if (0x3f < iVar8) {
                    iVar8 = 0x3f;
                  }
                  if (iVar8 != iVar4) {
                    return 0xfffffff4;
                  }
                  if ((uint *)puVar2[2] != local_30) {
                    return 0xfffffff3;
                  }
                  local_8 = local_8 + 1;
                  local_30 = puVar2;
                  puVar2 = (uint *)puVar2[1];
                } while (puVar2 != puVar11);
                if (local_8 != 0) {
                  if (iVar4 < 0x20) {
                    uVar3 = 0x80000000 >> ((byte)iVar4 & 0x1f);
                    local_2c = local_2c | uVar3;
                    local_14 = local_14 | uVar3;
                  }
                  else {
                    uVar3 = 0x80000000 >> ((byte)iVar4 - 0x20 & 0x1f);
                    local_1c = local_1c | uVar3;
                    local_18 = local_18 | uVar3;
                  }
                }
              }
              if (((uint *)local_30[1] != puVar11) || (local_8 != local_13c[iVar4])) {
                return 0xfffffff2;
              }
              if ((uint *)*puVar9 != local_30) {
                return 0xfffffff1;
              }
              iVar4 = iVar4 + 1;
              puVar7 = local_38;
              puVar2 = local_3c;
              puVar11 = puVar9;
            } while (iVar4 < 0x40);
          }
          if ((local_2c != puVar2[-0x20]) || (local_1c != *puVar2)) {
            return 0xfffffff0;
          }
          local_c = local_c + 0x2000;
          local_28 = local_28 + 0x81;
          local_24 = local_24 << 1;
          local_10 = local_10 + 1;
          puVar2 = puVar2 + 1;
          local_3c = puVar2;
        } while (local_10 < 0x20);
        if ((local_14 != *puVar7) || (local_18 != puVar7[1])) {
          return 0xffffffef;
        }
        local_20 = local_20 + 1;
        local_38 = puVar7 + 5;
      } while (local_20 < DAT_004d6440);
    }
    uVar1 = 0;
  }
  return uVar1;
}


