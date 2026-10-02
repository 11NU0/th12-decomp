/* undefined __cdecl ___ld12mul(int * param_1, int * param_2) @ 00475af7  635 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___ld12mul
   
   Library: Visual Studio 2008 Release */

void __cdecl ___ld12mul(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  ushort *puVar11;
  ushort uVar12;
  short *psVar13;
  int local_30;
  int local_2c;
  ushort *local_28;
  int local_20;
  int local_1c;
  uint local_18;
  byte local_14;
  undefined uStack_13;
  ushort uStack_12;
  short local_10;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  local_30 = 0;
  local_10 = 0;
  iVar5 = 0;
  uStack_e._0_2_ = 0;
  uStack_e._2_2_ = 0;
  iVar6 = 0;
  uStack_a = 0;
  uVar3 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar8 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar12 = uVar10 + uVar8;
  iVar2 = 0;
  iVar4 = 0;
  if (((uVar8 < 0x7fff) && (iVar2 = 0, iVar4 = 0, uVar10 < 0x7fff)) &&
     (iVar2 = iVar5, iVar4 = iVar6, uVar12 < 0xbffe)) {
    if (0x3fbf < uVar12) {
      if (((uVar8 == 0) && (uVar12 = uVar12 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
         ((param_1[1] == 0 && (*param_1 == 0)))) {
        *(undefined2 *)((int)param_1 + 10) = 0;
        goto LAB_00475d63;
      }
      if (((uVar10 == 0) && (uVar12 = uVar12 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
         ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_00475b78;
      local_20 = 0;
      psVar13 = &local_10;
      local_1c = 5;
      do {
        local_2c = local_1c;
        if (0 < local_1c) {
          local_28 = (ushort *)(param_2 + 2);
          puVar11 = (ushort *)((int)param_1 + local_20 * 2);
          do {
            bVar7 = false;
            uVar1 = *(uint *)(psVar13 + -2) + (uint)*puVar11 * (uint)*local_28;
            if ((uVar1 < *(uint *)(psVar13 + -2)) || (uVar1 < (uint)*puVar11 * (uint)*local_28)) {
              bVar7 = true;
            }
            *(uint *)(psVar13 + -2) = uVar1;
            if (bVar7) {
              *psVar13 = *psVar13 + 1;
            }
            local_28 = local_28 + -1;
            puVar11 = puVar11 + 1;
            local_2c = local_2c + -1;
          } while (0 < local_2c);
        }
        uVar1 = CONCAT22((ushort)uStack_e,local_10);
        psVar13 = psVar13 + 1;
        local_20 = local_20 + 1;
        local_1c = local_1c + -1;
      } while (0 < local_1c);
      uVar12 = uVar12 + 0xc002;
      uVar9 = uVar1;
      if ((short)uVar12 < 1) {
LAB_00475c81:
        uStack_12 = 0;
        uStack_13 = 0;
        local_14 = 0;
        uVar12 = uVar12 - 1;
        uVar9 = uVar1;
        if ((short)uVar12 < 0) {
          local_18 = (uint)(ushort)-uVar12;
          uVar12 = 0;
          do {
            if ((local_14 & 1) != 0) {
              local_30 = local_30 + 1;
            }
            iVar2 = CONCAT22(uStack_a,uStack_e._2_2_);
            uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
            uStack_a = uStack_a >> 1;
            uStack_e._0_2_ = (ushort)(uVar1 >> 0x11) | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
            uVar9 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
            uStack_12 = uStack_12 >> 1 | (ushort)((uVar1 << 0x1f) >> 0x10);
            local_18 = local_18 - 1;
            local_10 = (short)(uVar1 >> 1);
            uVar1 = CONCAT22((ushort)uStack_e,local_10);
            local_14 = (byte)uVar9;
            uStack_13 = (undefined)(uVar9 >> 8);
          } while (local_18 != 0);
          uVar9 = CONCAT22((ushort)uStack_e,local_10);
          if (local_30 != 0) {
            local_14 = local_14 | 1;
            uVar9 = uVar1;
          }
        }
      }
      else {
        do {
          uVar1 = uVar9;
          if ((uStack_a & 0x8000) != 0) break;
          uVar1 = uVar9 * 2;
          iVar2 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
          uStack_e._2_2_ = (ushort)iVar2 | (ushort)(uVar9 >> 0x1f);
          uVar12 = uVar12 - 1;
          uStack_a = (ushort)((uint)iVar2 >> 0x10);
          uVar9 = uVar1;
        } while (0 < (short)uVar12);
        uStack_12 = 0;
        uStack_13 = 0;
        local_14 = 0;
        uVar9 = uVar1;
        if ((short)uVar12 < 1) goto LAB_00475c81;
      }
      uStack_e._0_2_ = (ushort)(uVar9 >> 0x10);
      local_10 = (short)uVar9;
      if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
         (iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e), iVar2 = CONCAT22(local_10,uStack_12),
         (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_10,uStack_12) == -1) {
          iVar2 = 0;
          if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
            if (uStack_a == 0xffff) {
              uStack_a = 0x8000;
              uVar12 = uVar12 + 1;
              iVar4 = 0;
              iVar2 = 0;
            }
            else {
              uStack_a = uStack_a + 1;
              iVar4 = 0;
              iVar2 = 0;
            }
          }
          else {
            iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
          }
        }
        else {
          iVar2 = CONCAT22(local_10,uStack_12) + 1;
          iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
        }
      }
      local_10 = (short)((uint)iVar2 >> 0x10);
      uStack_12 = (ushort)iVar2;
      uStack_e._2_2_ = (ushort)((uint)iVar4 >> 0x10);
      uStack_e._0_2_ = (ushort)iVar4;
      if (uVar12 < 0x7fff) {
        *(ushort *)param_1 = uStack_12;
        *(uint *)((int)param_1 + 2) = CONCAT22((ushort)uStack_e,local_10);
        *(uint *)((int)param_1 + 6) = CONCAT22(uStack_a,uStack_e._2_2_);
        *(ushort *)((int)param_1 + 10) = uVar12 | uVar3;
        goto LAB_00475d63;
      }
      goto LAB_00475d43;
    }
LAB_00475b78:
    param_1[2] = 0;
  }
  else {
LAB_00475d43:
    param_1[2] = ((uVar3 == 0) - 1 & 0x80000000) + 0x7fff8000;
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00475d63:
  local_10 = (short)((uint)iVar2 >> 0x10);
  uStack_e = iVar4;
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


