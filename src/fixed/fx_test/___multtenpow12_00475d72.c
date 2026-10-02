/* undefined __cdecl ___multtenpow12(int * param_1, uint param_2, int param_3) @ 00475d72  773 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___multtenpow12
   
   Library: Visual Studio 2008 Release */

void __cdecl ___multtenpow12(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  undefined **ppuVar9;
  ushort uVar10;
  short *psVar11;
  uint uVar12;
  ushort uVar13;
  undefined **local_44;
  ushort *local_40;
  int local_3c;
  int local_38;
  int local_30;
  undefined **local_28;
  int local_24;
  undefined2 local_20;
  undefined4 uStack_1e;
  undefined2 uStack_1a;
  undefined *local_18;
  byte local_14;
  undefined uStack_13;
  undefined4 uStack_12;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  iVar1 = CONCAT22(uStack_1e._2_2_,(undefined2)uStack_1e);
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  local_28 = &PTR_DAT_004adf80;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      local_28 = (undefined **)&DAT_004ae0e0;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
joined_r0x00475dba:
    if (param_2 != 0) {
      local_28 = local_28 + 0x15;
      uVar12 = (int)param_2 >> 3;
      uVar6 = param_2 & 7;
      param_2 = uVar12;
      if (uVar6 != 0) {
        ppuVar9 = local_28 + uVar6 * 3;
        if (0x7fff < *(ushort *)ppuVar9) {
          local_20 = SUB42(*ppuVar9,0);
          uStack_1e._0_2_ = (undefined2)((uint)*ppuVar9 >> 0x10);
          uStack_1e._2_2_ = SUB42(ppuVar9[1],0);
          uStack_1a = (undefined2)((uint)ppuVar9[1] >> 0x10);
          local_18 = ppuVar9[2];
          iVar1 = CONCAT22(uStack_1e._2_2_,(undefined2)uStack_1e) + -1;
          uStack_1e._0_2_ = (undefined2)iVar1;
          uStack_1e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
          ppuVar9 = (undefined **)&local_20;
        }
        local_3c = 0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12._0_2_ = 0;
        uStack_12._2_2_ = 0;
        uStack_12 = 0;
        uStack_e._0_2_ = 0;
        uStack_e._2_2_ = 0;
        uStack_e = 0;
        uStack_a = 0;
        uVar10 = (*(ushort *)((int)ppuVar9 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
        uVar5 = *(ushort *)((int)param_1 + 10) & 0x7fff;
        uVar8 = *(ushort *)((int)ppuVar9 + 10) & 0x7fff;
        uVar13 = uVar8 + uVar5;
        iVar2 = 0;
        iVar3 = 0;
        if (((uVar5 < 0x7fff) && (iVar2 = 0, iVar3 = 0, uVar8 < 0x7fff)) &&
           (iVar2 = uStack_12, iVar3 = uStack_e, uVar13 < 0xbffe)) {
          if (0x3fbf < uVar13) {
            if (((uVar5 == 0) && (uVar13 = uVar13 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
               ((param_1[1] == 0 && (*param_1 == 0)))) {
              *(undefined2 *)((int)param_1 + 10) = 0;
            }
            else if (((uVar8 == 0) && (uVar13 = uVar13 + 1, ((uint)ppuVar9[2] & 0x7fffffff) == 0))
                    && ((ppuVar9[1] == (undefined *)0x0 && (*ppuVar9 == (undefined *)0x0)))) {
              param_1[2] = 0;
              param_1[1] = 0;
              *param_1 = 0;
            }
            else {
              local_38 = 0;
              psVar11 = (short *)((int)&uStack_12 + 2);
              local_24 = 5;
              do {
                local_30 = local_24;
                if (0 < local_24) {
                  local_44 = ppuVar9 + 2;
                  local_40 = (ushort *)(local_38 * 2 + (int)param_1);
                  do {
                    bVar4 = false;
                    uVar12 = *(uint *)(psVar11 + -2) + (uint)*local_40 * (uint)*(ushort *)local_44;
                    if ((uVar12 < *(uint *)(psVar11 + -2)) ||
                       (uVar12 < (uint)*local_40 * (uint)*(ushort *)local_44)) {
                      bVar4 = true;
                    }
                    *(uint *)(psVar11 + -2) = uVar12;
                    if (bVar4) {
                      *psVar11 = *psVar11 + 1;
                    }
                    local_40 = local_40 + 1;
                    local_44 = (undefined **)((int)local_44 + -2);
                    local_30 = local_30 + -1;
                  } while (0 < local_30);
                }
                psVar11 = psVar11 + 1;
                local_38 = local_38 + 1;
                local_24 = local_24 + -1;
              } while (0 < local_24);
              uVar13 = uVar13 + 0xc002;
              if ((short)uVar13 < 1) {
LAB_00475f78:
                uVar13 = uVar13 - 1;
                if ((short)uVar13 < 0) {
                  uVar12 = (uint)(ushort)-uVar13;
                  uVar13 = 0;
                  do {
                    if ((local_14 & 1) != 0) {
                      local_3c = local_3c + 1;
                    }
                    iVar3 = CONCAT22(uStack_a,uStack_e._2_2_);
                    uVar6 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    iVar2 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
                    uStack_a = uStack_a >> 1;
                    uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10)
                    ;
                    uVar7 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                    uStack_12._0_2_ =
                         (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                    uVar12 = uVar12 - 1;
                    uStack_12._2_2_ = (ushort)(uVar6 >> 1);
                    local_14 = (byte)uVar7;
                    uStack_13 = (undefined)(uVar7 >> 8);
                  } while (uVar12 != 0);
                  if (local_3c != 0) {
                    local_14 = local_14 | 1;
                  }
                }
              }
              else {
                do {
                  uVar5 = (ushort)uStack_12;
                  if ((uStack_a & 0x8000) != 0) break;
                  iVar2 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                  local_14 = (byte)iVar2;
                  uStack_13 = (undefined)((uint)iVar2 >> 8);
                  uStack_12._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                  iVar2 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
                  uStack_12._2_2_ = (ushort)iVar2 | uVar5 >> 0xf;
                  iVar3 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
                  uStack_e._2_2_ = (ushort)iVar3 | (ushort)uStack_e >> 0xf;
                  uVar13 = uVar13 - 1;
                  uStack_e._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                  uStack_a = (ushort)((uint)iVar3 >> 0x10);
                } while (0 < (short)uVar13);
                if ((short)uVar13 < 1) goto LAB_00475f78;
              }
              if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
                 (iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
                 iVar2 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
                 (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
                if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
                  iVar2 = 0;
                  if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
                    if (uStack_a == 0xffff) {
                      uStack_a = 0x8000;
                      uVar13 = uVar13 + 1;
                      iVar3 = 0;
                      iVar2 = 0;
                    }
                    else {
                      uStack_a = uStack_a + 1;
                      iVar3 = 0;
                      iVar2 = 0;
                    }
                  }
                  else {
                    iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
                  }
                }
                else {
                  iVar2 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
                  iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
                }
              }
              uStack_12._2_2_ = (ushort)((uint)iVar2 >> 0x10);
              uStack_12._0_2_ = (ushort)iVar2;
              uStack_e._2_2_ = (ushort)((uint)iVar3 >> 0x10);
              uStack_e._0_2_ = (ushort)iVar3;
              if (0x7ffe < uVar13) goto LAB_0047603d;
              *(ushort *)param_1 = (ushort)uStack_12;
              *(uint *)((int)param_1 + 2) = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              *(uint *)((int)param_1 + 6) = CONCAT22(uStack_a,uStack_e._2_2_);
              *(ushort *)((int)param_1 + 10) = uVar13 | uVar10;
              uStack_12 = iVar2;
              uStack_e = iVar3;
            }
            goto joined_r0x00475dba;
          }
          param_1[2] = 0;
        }
        else {
LAB_0047603d:
          param_1[2] = ((uVar10 == 0) - 1 & 0x80000000) + 0x7fff8000;
        }
        param_1[1] = 0;
        *param_1 = 0;
        uStack_12 = iVar2;
        uStack_e = iVar3;
      }
      goto joined_r0x00475dba;
    }
  }
  uStack_1e = iVar1;
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


