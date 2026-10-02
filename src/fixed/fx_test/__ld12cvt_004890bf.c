/* undefined4 __cdecl __ld12cvt(ushort * param_1, uint * param_2, int * param_3) @ 004890bf  1323 bytes */

#include "th12.h"

/* Library Function - Single Match
    __ld12cvt
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl __ld12cvt(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  byte bVar6;
  uint *puVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  ushort *local_8;
  
  local_24[3] = param_1[5] & 0x8000;
  uVar10 = *(uint *)(param_1 + 3);
  local_24[0] = uVar10;
  uVar2 = *(uint *)(param_1 + 1);
  uVar1 = *param_1;
  uVar11 = param_1[5] & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  local_24[1] = uVar2;
  local_24[2] = (uint)uVar1 << 0x10;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar3 = 0;
    do {
      if (local_24[iVar3] != 0) goto LAB_00489231;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
LAB_004895a7:
    uVar5 = 0;
  }
  else {
    param_1 = (ushort *)0x0;
    uVar8 = param_3[2];
    iVar13 = uVar8 - 1;
    iVar3 = (int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = uVar8 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar3;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar4 = local_24 + iVar3;
    bVar6 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar4 & 1 << (bVar6 & 0x1f)) != 0) {
      uVar8 = local_24[iVar3] & ~(-1 << (bVar6 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar3 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (ushort *)0x0;
          puVar9 = (ushort *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar7 = local_24 + iVar3;
          param_1 = (ushort *)(*puVar7 + (int)puVar9);
          if (param_1 < (ushort *)*puVar7) goto LAB_004891e6;
          bVar14 = param_1 < puVar9;
          do {
            local_8 = (ushort *)0x0;
            if (!bVar14) goto LAB_004891ed;
LAB_004891e6:
            do {
              local_8 = (ushort *)0x1;
LAB_004891ed:
              iVar3 = iVar3 + -1;
              *puVar7 = (uint)param_1;
              if ((iVar3 < 0) || (local_8 == (ushort *)0x0)) {
                param_1 = local_8;
                goto LAB_004891fb;
              }
              local_8 = (ushort *)0x0;
              puVar7 = local_24 + iVar3;
              param_1 = (ushort *)((int)*puVar7 + 1);
            } while (param_1 < (ushort *)*puVar7);
            bVar14 = param_1 == (ushort *)0x0;
          } while( true );
        }
        iVar3 = iVar3 + 1;
        if (2 < iVar3) break;
        uVar8 = local_24[iVar3];
      }
    }
LAB_004891fb:
    *puVar4 = *puVar4 & -1 << ((byte)local_c & 0x1f);
    iVar3 = local_10 + 1;
    if (iVar3 < 3) {
      puVar4 = local_24 + iVar3;
      for (iVar13 = 3 - iVar3; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    if (param_1 != (ushort *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    iVar3 = param_3[1];
    if (iVar12 < iVar3 - param_3[2]) {
LAB_00489231:
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (iVar3 < iVar12) {
        if (*param_3 <= iVar12) {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          uVar10 = param_3[3];
          iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = uVar10 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          param_1 = (ushort *)0x0;
          local_8 = (ushort *)(0x20 - uVar10);
          do {
            uVar2 = local_24[(int)param_1];
            local_14 = uVar2 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)param_1] = uVar2 >> ((byte)uVar10 & 0x1f) | local_10;
            param_1 = (ushort *)((int)param_1 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)param_1 < 3);
          iVar3 = 2;
          puVar4 = local_24 + (2 - iVar12);
          do {
            if (iVar3 < iVar12) {
              local_24[iVar3] = 0;
            }
            else {
              local_24[iVar3] = *puVar4;
            }
            iVar3 = iVar3 + -1;
            puVar4 = puVar4 + -1;
          } while (-1 < iVar3);
          iVar12 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_004895a9;
        }
        local_24[0] = local_24[0] & 0x7fffffff;
        uVar10 = param_3[3];
        iVar12 = param_3[5] + iVar12;
        iVar3 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
        uVar10 = uVar10 & 0x8000001f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
        }
        local_10 = 0;
        param_1 = (ushort *)0x0;
        local_8 = (ushort *)(0x20 - uVar10);
        do {
          local_14 = local_24[(int)param_1] & ~(-1 << ((byte)uVar10 & 0x1f));
          local_24[(int)param_1] = local_24[(int)param_1] >> ((byte)uVar10 & 0x1f) | local_10;
          param_1 = (ushort *)((int)param_1 + 1);
          local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
        } while ((int)param_1 < 3);
        iVar13 = 2;
        puVar4 = local_24 + (2 - iVar3);
        do {
          if (iVar13 < iVar3) {
            local_24[iVar13] = 0;
          }
          else {
            local_24[iVar13] = *puVar4;
          }
          iVar13 = iVar13 + -1;
          puVar4 = puVar4 + -1;
        } while (-1 < iVar13);
        goto LAB_004895a7;
      }
      local_14 = iVar3 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar2;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      param_1 = (ushort *)0x0;
      local_8 = (ushort *)(0x20 - uVar10);
      do {
        uVar2 = local_24[(int)param_1];
        local_14 = uVar2 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)param_1] = uVar2 >> ((byte)uVar10 & 0x1f) | local_10;
        param_1 = (ushort *)((int)param_1 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)param_1 < 3);
      iVar3 = 2;
      puVar4 = local_24 + (2 - iVar12);
      do {
        if (iVar3 < iVar12) {
          local_24[iVar3] = 0;
        }
        else {
          local_24[iVar3] = *puVar4;
        }
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -1;
      } while (-1 < iVar3);
      uVar10 = param_3[2];
      iVar3 = uVar10 - 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar6 = (byte)(0x1f - uVar10);
      puVar4 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar4 & 1 << (bVar6 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar6 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_0048939c;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar11 = 1 << (0x1f - ((byte)iVar3 & 0x1f) & 0x1f);
        uVar2 = local_24[iVar12];
        uVar10 = uVar2 + uVar11;
        if ((uVar10 < uVar2) || (uVar10 < uVar11)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar2 = local_24[iVar12];
          uVar10 = uVar2 + 1;
          bVar14 = false;
          if ((uVar10 < uVar2) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_0048939c:
      *puVar4 = *puVar4 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar4 = local_24 + iVar12;
        for (iVar3 = 3 - iVar12; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      uVar10 = param_3[3] + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      param_1 = (ushort *)0x0;
      local_8 = (ushort *)(0x20 - uVar10);
      do {
        uVar2 = local_24[(int)param_1];
        local_14 = uVar2 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)param_1] = uVar2 >> ((byte)uVar10 & 0x1f) | local_10;
        param_1 = (ushort *)((int)param_1 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)param_1 < 3);
      iVar3 = 2;
      puVar4 = local_24 + (2 - iVar12);
      do {
        if (iVar3 < iVar12) {
          local_24[iVar3] = 0;
        }
        else {
          local_24[iVar3] = *puVar4;
        }
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -1;
      } while (-1 < iVar3);
    }
    iVar12 = 0;
    uVar5 = 2;
  }
LAB_004895a9:
  local_24[0] = iVar12 << (0x1fU - (char)param_3[3] & 0x1f) | -(uint)(local_24[3] != 0) & 0x80000000
                | local_24[0];
  if (param_3[4] == 0x40) {
    param_2[1] = local_24[0];
    *param_2 = local_24[1];
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_24[0];
  }
  return uVar5;
}


