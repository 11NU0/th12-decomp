/* undefined __cdecl _$I10_OUTPUT(int param_1, uint param_2, ushort param_3, int param_4, byte param_5, short * param_6) @ 0048ee11  2334 bytes */

#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x0048f34c) */
/* WARNING: Removing unreachable block (ram,0x0048f356) */
/* WARNING: Removing unreachable block (ram,0x0048f35b) */
/* Library Function - Single Match
    _$I10_OUTPUT
   
   Library: Visual Studio 2008 Release */

void __cdecl
typedef struct local_2c__u { undefined4 _; undefined1 _0_1_; undefined1 _1_1_; } local_2c__u;
typedef struct local_24__u { undefined4 _; undefined1 _2_2_; undefined1 _0_2_; } local_24__u;
typedef struct local_10__u { undefined4 _; undefined1 _0_2_; undefined1 _2_2_; } local_10__u;
__cdecl __I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  local_2c__u *local_2c__u_alias;
  local_24__u *local_24__u_alias;
  local_10__u *local_10__u_alias;
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  errno_t eVar6;
  undefined **ppuVar7;
  ushort *puVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  ushort uVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  short *psVar16;
  short *psVar17;
  ushort uVar18;
  ushort uVar19;
  short *psVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  char *pcVar25;
  ushort *local_70;
  undefined **local_6c;
  undefined **local_68;
  int local_5c;
  int local_58;
  int local_54;
  short local_50;
  ushort *local_4c;
  int local_48;
  int local_44;
  undefined2 local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined uStack_2a;
  undefined uStack_29;
  undefined4 local_24;
  ushort uStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  undefined local_1a;
  byte bStack_19;
  byte local_14;
  undefined uStack_13;
  ushort uStack_12;
  undefined4 local_10;
  ushort local_c;
  ushort uStack_a;
  uint local_8;
  
  local_24__u_alias = (local_24__u *)&local_24;
  uVar15 = CONCAT22(local_24__u_alias->_2_2_,(undefined2)local_24);
  iVar3 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined)((uint)param_1 >> 8);
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_10__u_alias = (local_10__u *)&local_10;
  local_10__u_alias->_0_2_ = (ushort)param_2;
  iVar21 = CONCAT22((ushort)local_10,uStack_12);
  local_10__u_alias = (local_10__u *)&local_10;
  local_10__u_alias->_2_2_ = (ushort)(param_2 >> 0x10);
  local_c = param_3;
  uVar9 = param_3 & 0x8000;
  uVar13 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c__u_alias = (local_2c__u *)&local_2c;
  local_2c__u_alias->_0_1_ = 0xcc;
  local_2c__u_alias = (local_2c__u *)&local_2c;
  local_2c__u_alias->_1_1_ = 0xcc;
  uStack_2a = 0xfb;
  uStack_29 = 0x3f;
  if (uVar9 == 0) {
    *(undefined *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar13 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar9 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined *)((int)param_6 + 3) = 1;
    *(undefined *)(param_6 + 2) = 0x30;
    *(undefined *)((int)param_6 + 5) = 0;
    iVar1 = iVar3;
    goto LAB_0048f6e9;
  }
  if ((short)uVar13 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar9 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_0048ef47;
        pcVar25 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_0048ef47:
          pcVar25 = "1#QNAN";
          goto LAB_0048ef4c;
        }
        pcVar25 = "1#IND";
      }
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar25 = "1#SNAN";
LAB_0048ef4c:
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined *)((int)param_6 + 3) = 6;
    }
  local_10__u_alias = (local_10__u *)&local_10;
    param_2 = CONCAT22(local_10__u_alias->_2_2_,(ushort)local_10);
  local_24__u_alias = (local_24__u *)&local_24;
    uVar15 = CONCAT22(local_24__u_alias->_2_2_,(undefined2)local_24);
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    goto LAB_0048f6e9;
  }
  local_50 = (short)(((uVar13 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar13 * 0x4d10
                    >> 0x10);
  uVar15 = (uint)local_50;
  local_24__u_alias = (local_24__u *)&local_24;
  local_24__u_alias->_0_2_ = 0;
  local_1a = (undefined)uVar13;
  bStack_19 = (byte)(uVar13 >> 8);
  uStack_1e = (ushort)local_10;
  local_10__u_alias = (local_10__u *)&local_10;
  uStack_1c = local_10__u_alias->_2_2_;
  local_24__u_alias = (local_24__u *)&local_24;
  local_24__u_alias->_2_2_ = (ushort)param_1;
  local_68 = &PTR_DAT_004adf80;
  uStack_20 = uStack_12;
  if (-uVar15 != 0) {
    iVar4 = param_1;
    uVar13 = -uVar15;
    iVar1 = iVar3;
    if (0 < (int)uVar15) {
      local_68 = (undefined **)&DAT_004ae0e0;
      uVar13 = uVar15;
    }
    while (uVar13 != 0) {
      uStack_20 = (ushort)((uint)iVar4 >> 0x10);
  local_24__u_alias = (local_24__u *)&local_24;
      local_24__u_alias->_2_2_ = (ushort)iVar4;
  local_10__u_alias = (local_10__u *)&local_10;
      iVar3 = CONCAT22(local_c,local_10__u_alias->_2_2_);
      local_68 = local_68 + 0x15;
      if ((uVar13 & 7) != 0) {
        ppuVar7 = local_68 + (uVar13 & 7) * 3;
        if (0x7fff < *(ushort *)ppuVar7) {
          local_40 = SUB42(*ppuVar7,0);
          uStack_3e._0_2_ = (undefined2)((uint)*ppuVar7 >> 0x10);
          ppuVar2 = ppuVar7 + 2;
          uStack_3e._2_2_ = SUB42(ppuVar7[1],0);
          uStack_3a = (ushort)((uint)ppuVar7[1] >> 0x10);
          ppuVar7 = (undefined **)&local_40;
          local_38 = *ppuVar2;
          iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
          uStack_3e._0_2_ = (undefined2)iVar1;
          uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
        }
        local_58 = 0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12 = 0;
  local_10__u_alias = (local_10__u *)&local_10;
        local_10__u_alias->_0_2_ = 0;
        iVar21 = 0;
  local_10__u_alias = (local_10__u *)&local_10;
        local_10__u_alias->_2_2_ = 0;
        local_c = 0;
        iVar3 = 0;
        uStack_a = 0;
        uVar18 = (*(ushort *)((int)ppuVar7 + 10) ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
        uVar10 = CONCAT11(bStack_19,local_1a) & 0x7fff;
        uVar12 = *(ushort *)((int)ppuVar7 + 10) & 0x7fff;
        uVar19 = uVar12 + uVar10;
        if (((uVar10 < 0x7fff) && (uVar12 < 0x7fff)) && (uVar19 < 0xbffe)) {
          if (0x3fbf < uVar19) {
            if (((uVar10 == 0) &&
                (uVar19 = uVar19 + 1,
                (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
               ((CONCAT22(uStack_1e,uStack_20) == 0 &&
  local_24__u_alias = (local_24__u *)&local_24;
                (CONCAT22(local_24__u_alias->_2_2_,(undefined2)local_24) == 0)))) {
              local_1a = 0;
              bStack_19 = 0;
              goto LAB_0048f25d;
            }
            if ((((uVar12 == 0) && (uVar19 = uVar19 + 1, ((uint)ppuVar7[2] & 0x7fffffff) == 0)) &&
                (ppuVar7[1] == (undefined *)0x0)) && (*ppuVar7 == (undefined *)0x0))
            goto LAB_0048f07c;
            local_5c = 0;
            psVar20 = (short *)&local_10;
            local_44 = 5;
            do {
              local_54 = local_44;
              if (0 < local_44) {
                local_70 = (ushort *)((int)&local_24 + local_5c * 2);
                local_6c = ppuVar7 + 2;
                do {
                  bVar5 = false;
                  uVar15 = *(uint *)(psVar20 + -2) + (uint)*local_70 * (uint)*(ushort *)local_6c;
                  if ((uVar15 < *(uint *)(psVar20 + -2)) ||
                     (uVar15 < (uint)*local_70 * (uint)*(ushort *)local_6c)) {
                    bVar5 = true;
                  }
                  *(uint *)(psVar20 + -2) = uVar15;
                  if (bVar5) {
                    *psVar20 = *psVar20 + 1;
                  }
                  local_70 = local_70 + 1;
                  local_6c = (undefined **)((int)local_6c + -2);
                  local_54 = local_54 + -1;
                } while (0 < local_54);
              }
              psVar20 = psVar20 + 1;
              local_5c = local_5c + 1;
              local_44 = local_44 + -1;
            } while (0 < local_44);
            uVar19 = uVar19 + 0xc002;
            if ((short)uVar19 < 1) {
LAB_0048f18d:
              uVar19 = uVar19 - 1;
              if ((short)uVar19 < 0) {
                uVar15 = (uint)(ushort)-uVar19;
                uVar19 = 0;
                do {
                  if ((local_14 & 1) != 0) {
                    local_58 = local_58 + 1;
                  }
                  iVar3 = CONCAT22(uStack_a,local_c);
  local_10__u_alias = (local_10__u *)&local_10;
                  uVar22 = CONCAT22(local_10__u_alias->_2_2_,(ushort)local_10);
  local_10__u_alias = (local_10__u *)&local_10;
                  iVar21 = CONCAT22(local_10__u_alias->_2_2_,(ushort)local_10);
                  local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
                  uStack_a = uStack_a >> 1;
  local_10__u_alias = (local_10__u *)&local_10;
                  local_10__u_alias->_2_2_ = local_10__u_alias->_2_2_ >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
                  uVar23 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                  uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar21 << 0x1f) >> 0x10);
                  uVar15 = uVar15 - 1;
  local_10__u_alias = (local_10__u *)&local_10;
                  local_10__u_alias->_0_2_ = (ushort)(uVar22 >> 1);
                  local_14 = (byte)uVar23;
                  uStack_13 = (undefined)(uVar23 >> 8);
                } while (uVar15 != 0);
                if (local_58 != 0) {
                  local_14 = local_14 | 1;
                }
              }
            }
            else {
              do {
  local_10__u_alias = (local_10__u *)&local_10;
                uVar12 = local_10__u_alias->_2_2_;
                uVar10 = uStack_12;
                if ((uStack_a & 0x8000) != 0) break;
                iVar21 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                local_14 = (byte)iVar21;
                uStack_13 = (undefined)((uint)iVar21 >> 8);
                uStack_12 = (ushort)((uint)iVar21 >> 0x10);
  local_10__u_alias = (local_10__u *)&local_10;
                iVar21 = CONCAT22(local_10__u_alias->_2_2_,(ushort)local_10) * 2;
  local_10__u_alias = (local_10__u *)&local_10;
                local_10__u_alias->_0_2_ = (ushort)iVar21 | uVar10 >> 0xf;
  local_10__u_alias = (local_10__u *)&local_10;
                local_10__u_alias->_2_2_ = (ushort)((uint)iVar21 >> 0x10);
                iVar21 = CONCAT22(uStack_a,local_c) * 2;
                local_c = (ushort)iVar21 | uVar12 >> 0xf;
                uVar19 = uVar19 - 1;
                uStack_a = (ushort)((uint)iVar21 >> 0x10);
              } while (0 < (short)uVar19);
              if ((short)uVar19 < 1) goto LAB_0048f18d;
            }
            if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
  local_10__u_alias = (local_10__u *)&local_10;
               (iVar3 = CONCAT22(local_c,local_10__u_alias->_2_2_),
               iVar21 = CONCAT22((ushort)local_10,uStack_12),
               (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
              if (CONCAT22((ushort)local_10,uStack_12) == -1) {
                uStack_12 = 0;
  local_10__u_alias = (local_10__u *)&local_10;
                local_10__u_alias->_0_2_ = 0;
                iVar21 = 0;
  local_10__u_alias = (local_10__u *)&local_10;
                if (CONCAT22(local_c,local_10__u_alias->_2_2_) == -1) {
  local_10__u_alias = (local_10__u *)&local_10;
                  local_10__u_alias->_2_2_ = 0;
                  local_c = 0;
                  if (uStack_a == 0xffff) {
                    uStack_a = 0x8000;
                    uVar19 = uVar19 + 1;
                    iVar3 = 0;
                    iVar21 = 0;
                  }
                  else {
                    uStack_a = uStack_a + 1;
                    iVar3 = 0;
                    iVar21 = 0;
                  }
                }
                else {
  local_10__u_alias = (local_10__u *)&local_10;
                  iVar3 = CONCAT22(local_c,local_10__u_alias->_2_2_) + 1;
  local_10__u_alias = (local_10__u *)&local_10;
                  local_10__u_alias->_2_2_ = (ushort)iVar3;
                  local_c = (ushort)((uint)iVar3 >> 0x10);
                }
              }
              else {
                iVar21 = CONCAT22((ushort)local_10,uStack_12) + 1;
                uStack_12 = (ushort)iVar21;
  local_10__u_alias = (local_10__u *)&local_10;
                local_10__u_alias->_0_2_ = (ushort)((uint)iVar21 >> 0x10);
  local_10__u_alias = (local_10__u *)&local_10;
                iVar3 = CONCAT22(local_c,local_10__u_alias->_2_2_);
              }
            }
  local_10__u_alias = (local_10__u *)&local_10;
            local_10__u_alias->_0_2_ = (ushort)((uint)iVar21 >> 0x10);
            uStack_12 = (ushort)iVar21;
            local_c = (ushort)((uint)iVar3 >> 0x10);
  local_10__u_alias = (local_10__u *)&local_10;
            local_10__u_alias->_2_2_ = (ushort)iVar3;
            if (uVar19 < 0x7fff) {
              bStack_19 = (byte)(uVar19 >> 8) | (byte)(uVar18 >> 8);
  local_24__u_alias = (local_24__u *)&local_24;
              local_24__u_alias->_0_2_ = uStack_12;
  local_24__u_alias = (local_24__u *)&local_24;
              local_24__u_alias->_2_2_ = (ushort)local_10;
  local_10__u_alias = (local_10__u *)&local_10;
              uStack_20 = local_10__u_alias->_2_2_;
  local_10__u_alias = (local_10__u *)&local_10;
              iVar4 = CONCAT22(local_10__u_alias->_2_2_,(ushort)local_10);
              uStack_1e = local_c;
              uStack_1c = uStack_a;
              local_1a = (undefined)uVar19;
            }
            else {
              uStack_20 = 0;
              uStack_1e = 0;
  local_24__u_alias = (local_24__u *)&local_24;
              local_24__u_alias->_0_2_ = 0;
  local_24__u_alias = (local_24__u *)&local_24;
              local_24__u_alias->_2_2_ = 0;
              iVar4 = 0;
              iVar11 = ((uVar18 == 0) - 1 & 0x80000000) + 0x7fff8000;
              uStack_1c = (ushort)iVar11;
              local_1a = (undefined)((uint)iVar11 >> 0x10);
              bStack_19 = (byte)((uint)iVar11 >> 0x18);
            }
            goto LAB_0048f25d;
          }
LAB_0048f07c:
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
        }
        else {
          iVar21 = ((uVar18 == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar21;
          local_1a = (undefined)((uint)iVar21 >> 0x10);
          bStack_19 = (byte)((uint)iVar21 >> 0x18);
        }
        uStack_20 = 0;
        uStack_1e = 0;
  local_24__u_alias = (local_24__u *)&local_24;
        local_24__u_alias->_0_2_ = 0;
  local_24__u_alias = (local_24__u *)&local_24;
        local_24__u_alias->_2_2_ = 0;
        iVar4 = 0;
        iVar21 = 0;
        iVar3 = 0;
      }
LAB_0048f25d:
      uStack_20 = (ushort)((uint)iVar4 >> 0x10);
  local_24__u_alias = (local_24__u *)&local_24;
      local_24__u_alias->_2_2_ = (ushort)iVar4;
      local_c = (ushort)((uint)iVar3 >> 0x10);
  local_10__u_alias = (local_10__u *)&local_10;
      local_10__u_alias->_2_2_ = (ushort)iVar3;
  local_10__u_alias = (local_10__u *)&local_10;
      local_10__u_alias->_0_2_ = (ushort)((uint)iVar21 >> 0x10);
      uStack_12 = (ushort)iVar21;
  local_24__u_alias = (local_24__u *)&local_24;
      param_1 = CONCAT22(uStack_12,local_24__u_alias->_2_2_);
  local_10__u_alias = (local_10__u *)&local_10;
      param_2 = CONCAT22(local_10__u_alias->_2_2_,(ushort)local_10);
      uVar13 = (int)uVar13 >> 3;
    }
  }
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_24__u_alias = (local_24__u *)&local_24;
  local_24__u_alias->_2_2_ = (ushort)param_1;
  uVar13 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  local_24__u_alias = (local_24__u *)&local_24;
  uVar15 = CONCAT22(local_24__u_alias->_2_2_,(undefined2)local_24);
  if (0x3ffe < (ushort)(uVar13 >> 0x10)) {
    local_50 = local_50 + 1;
    local_54 = 0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12 = 0;
  local_10__u_alias = (local_10__u *)&local_10;
    local_10__u_alias->_0_2_ = 0;
  local_10__u_alias = (local_10__u *)&local_10;
    local_10__u_alias->_2_2_ = 0;
    local_c = 0;
    uStack_a = 0;
    uVar15 = uVar13 >> 0x10 & 0x7fff;
    iVar21 = uVar15 + 0x3ffb;
    if (((ushort)uVar15 < 0x7fff) && ((ushort)iVar21 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar21) {
        if (((((ushort)uVar15 == 0) &&
             (iVar21 = uVar15 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (CONCAT22(uStack_1e,uStack_20) == 0)) &&
  local_24__u_alias = (local_24__u *)&local_24;
           (CONCAT22(local_24__u_alias->_2_2_,(undefined2)local_24) == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          param_2 = 0;
  local_24__u_alias = (local_24__u *)&local_24;
          uVar15 = CONCAT22(local_24__u_alias->_2_2_,(undefined2)local_24);
          goto LAB_0048f521;
        }
        local_5c = 0;
        psVar20 = (short *)&local_10;
        local_44 = 5;
        do {
          local_58 = local_44;
          if (0 < local_44) {
            local_4c = &local_2c;
            puVar8 = (ushort *)((int)&local_24 + local_5c * 2);
            do {
              bVar5 = false;
              uVar15 = *(uint *)(psVar20 + -2) + (uint)*local_4c * (uint)*puVar8;
              if ((uVar15 < *(uint *)(psVar20 + -2)) || (uVar15 < (uint)*local_4c * (uint)*puVar8))
              {
                bVar5 = true;
              }
              *(uint *)(psVar20 + -2) = uVar15;
              if (bVar5) {
                *psVar20 = *psVar20 + 1;
              }
              local_4c = local_4c + -1;
              puVar8 = puVar8 + 1;
              local_58 = local_58 + -1;
            } while (0 < local_58);
          }
          psVar20 = psVar20 + 1;
          local_5c = local_5c + 1;
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar21 = iVar21 + 0xc002;
        if ((short)iVar21 < 1) {
LAB_0048f41a:
          uVar19 = (ushort)(iVar21 + 0xffff);
          if ((short)uVar19 < 0) {
            uVar15 = -(iVar21 + 0xffff);
            uVar13 = uVar15 & 0xffff;
            uVar19 = uVar19 + (short)uVar15;
            do {
              if ((local_14 & 1) != 0) {
                local_54 = local_54 + 1;
              }
              iVar3 = CONCAT22(uStack_a,local_c);
  local_10__u_alias = (local_10__u *)&local_10;
              uVar15 = CONCAT22(local_10__u_alias->_2_2_,(ushort)local_10);
  local_10__u_alias = (local_10__u *)&local_10;
              iVar21 = CONCAT22(local_10__u_alias->_2_2_,(ushort)local_10);
              local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
              uStack_a = uStack_a >> 1;
  local_10__u_alias = (local_10__u *)&local_10;
              local_10__u_alias->_2_2_ = local_10__u_alias->_2_2_ >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
              uVar22 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar21 << 0x1f) >> 0x10);
              uVar13 = uVar13 - 1;
  local_10__u_alias = (local_10__u *)&local_10;
              local_10__u_alias->_0_2_ = (ushort)(uVar15 >> 1);
              local_14 = (byte)uVar22;
              uStack_13 = (undefined)(uVar22 >> 8);
            } while (uVar13 != 0);
            if (local_54 != 0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
  local_10__u_alias = (local_10__u *)&local_10;
            uVar10 = local_10__u_alias->_2_2_;
            uVar19 = uStack_12;
            if ((short)uStack_a < 0) break;
            iVar3 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar3;
            uStack_13 = (undefined)((uint)iVar3 >> 8);
            uStack_12 = (ushort)((uint)iVar3 >> 0x10);
  local_10__u_alias = (local_10__u *)&local_10;
            iVar3 = CONCAT22(local_10__u_alias->_2_2_,(ushort)local_10) * 2;
  local_10__u_alias = (local_10__u *)&local_10;
            local_10__u_alias->_0_2_ = (ushort)iVar3 | uVar19 >> 0xf;
  local_10__u_alias = (local_10__u *)&local_10;
            local_10__u_alias->_2_2_ = (ushort)((uint)iVar3 >> 0x10);
            iVar3 = CONCAT22(uStack_a,local_c) * 2;
            local_c = (ushort)iVar3 | uVar10 >> 0xf;
            iVar21 = iVar21 + 0xffff;
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar21);
          uVar19 = (ushort)iVar21;
          if ((short)uVar19 < 1) goto LAB_0048f41a;
        }
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
  local_10__u_alias = (local_10__u *)&local_10;
           (iVar21 = CONCAT22(local_c,local_10__u_alias->_2_2_), uVar15 = CONCAT22((ushort)local_10,uStack_12)
           , (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22((ushort)local_10,uStack_12) == -1) {
            uVar15 = 0;
  local_10__u_alias = (local_10__u *)&local_10;
            if (CONCAT22(local_c,local_10__u_alias->_2_2_) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar19 = uVar19 + 1;
                iVar21 = 0;
                uVar15 = 0;
              }
              else {
                uStack_a = uStack_a + 1;
                iVar21 = 0;
                uVar15 = 0;
              }
            }
            else {
  local_10__u_alias = (local_10__u *)&local_10;
              iVar21 = CONCAT22(local_c,local_10__u_alias->_2_2_) + 1;
            }
          }
          else {
            uVar15 = CONCAT22((ushort)local_10,uStack_12) + 1;
  local_10__u_alias = (local_10__u *)&local_10;
            iVar21 = CONCAT22(local_c,local_10__u_alias->_2_2_);
          }
        }
  local_10__u_alias = (local_10__u *)&local_10;
        local_10__u_alias->_0_2_ = (ushort)(uVar15 >> 0x10);
        uStack_12 = (ushort)uVar15;
        local_c = (ushort)((uint)iVar21 >> 0x10);
  local_10__u_alias = (local_10__u *)&local_10;
        local_10__u_alias->_2_2_ = (ushort)iVar21;
  local_10__u_alias = (local_10__u *)&local_10;
        param_2 = CONCAT22(local_10__u_alias->_2_2_,(ushort)local_10);
        if (uVar19 < 0x7fff) {
          bStack_19 = (byte)(uVar19 >> 8) | bStack_19 & 0x80;
  local_10__u_alias = (local_10__u *)&local_10;
          uStack_20 = local_10__u_alias->_2_2_;
          uStack_1e = local_c;
          uStack_1c = uStack_a;
          local_1a = (undefined)uVar19;
        }
        else {
          uStack_20 = 0;
          uStack_1e = 0;
          uVar15 = 0;
          iVar21 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar21;
          local_1a = (undefined)((uint)iVar21 >> 0x10);
          bStack_19 = (byte)((uint)iVar21 >> 0x18);
  local_10__u_alias = (local_10__u *)&local_10;
          param_2 = CONCAT22(local_10__u_alias->_2_2_,(ushort)local_10);
        }
        goto LAB_0048f521;
      }
      iVar21 = 0;
    }
    else {
      iVar21 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
    }
    uStack_1e = 0;
    uStack_20 = 0;
    uStack_1c = (ushort)iVar21;
    local_1a = (undefined)((uint)iVar21 >> 0x10);
    bStack_19 = (byte)((uint)iVar21 >> 0x18);
    param_2 = 0;
    uVar15 = 0;
  }
LAB_0048f521:
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar21 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    local_48 = 8;
    uVar13 = uVar15;
    do {
      uVar15 = uVar13 << 1;
      iVar3 = CONCAT22(uStack_1e,uStack_20) * 2;
      uStack_20 = (ushort)iVar3 | (ushort)(uVar13 >> 0x1f);
      iVar4 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar4 | uStack_1e >> 0xf;
      local_48 = local_48 + -1;
      uStack_1e = (ushort)((uint)iVar3 >> 0x10);
      local_1a = (undefined)((uint)iVar4 >> 0x10);
      bStack_19 = (byte)((uint)iVar4 >> 0x18);
      uVar13 = uVar15;
    } while (local_48 != 0);
    if ((iVar21 < 0) && (uVar22 = -iVar21 & 0xff, uVar22 != 0)) {
      do {
        iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar23 = CONCAT22(uStack_1e,uStack_20);
        iVar21 = CONCAT22(uStack_1e,uStack_20);
        uVar15 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar15;
        local_1a = (undefined)(uVar15 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uStack_1e = uStack_1e >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
        uVar15 = uVar13 >> 1 | iVar21 << 0x1f;
        uVar22 = uVar22 - 1;
        uStack_20 = (ushort)(uVar23 >> 1);
  local_24__u_alias = (local_24__u *)&local_24;
        local_24__u_alias->_0_2_ = (undefined2)(uVar13 >> 1);
  local_24__u_alias = (local_24__u *)&local_24;
        local_24__u_alias->_2_2_ = (ushort)(uVar15 >> 0x10);
  local_24__u_alias = (local_24__u *)&local_24;
        uVar13 = CONCAT22(local_24__u_alias->_2_2_,(undefined2)local_24);
      } while (0 < (int)uVar22);
    }
    psVar20 = param_6 + 2;
    psVar16 = psVar20;
    uVar19 = uStack_1e;
    for (iVar21 = param_4 + 1; 0 < iVar21; iVar21 = iVar21 + -1) {
  local_24__u_alias = (local_24__u *)&local_24;
      local_24__u_alias->_2_2_ = (ushort)(uVar15 >> 0x10);
  local_24__u_alias = (local_24__u *)&local_24;
      local_24__u_alias->_0_2_ = (undefined2)uVar15;
  local_24__u_alias = (local_24__u *)&local_24;
      iVar1 = CONCAT22(uStack_20,local_24__u_alias->_2_2_);
      local_38 = (undefined *)CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar13 = CONCAT22(uVar19,uStack_20) * 2;
      uVar22 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar19 >> 0xf)) * 2 |
               uVar13 >> 0x1f;
  local_24__u_alias = (local_24__u *)&local_24;
      uVar23 = (uVar13 | local_24__u_alias->_2_2_ >> 0xf) * 2 | (uVar15 << 1) >> 0x1f;
      uVar13 = uVar15 * 5;
      if ((uVar13 < uVar15 * 4) || (uVar24 = uVar23, uVar13 < uVar15)) {
        uVar24 = uVar23 + 1;
        bVar5 = false;
        if ((uVar24 < uVar23) || (uVar24 == 0)) {
          bVar5 = true;
        }
        if (bVar5) {
          uVar22 = uVar22 + 1;
        }
      }
      uVar23 = CONCAT22(uVar19,uStack_20) + uVar24;
      if ((uVar23 < uVar24) || (uVar23 < CONCAT22(uVar19,uStack_20))) {
        uVar22 = uVar22 + 1;
      }
      iVar3 = (int)(local_38 + uVar22) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)(uVar23 >> 0x1f);
      uVar15 = uVar15 * 10;
      local_1a = (undefined)((uint)iVar3 >> 0x10);
      uStack_20 = (ushort)(uVar23 * 2) | (ushort)(uVar13 >> 0x1f);
      *(char *)psVar16 = (char)((uint)iVar3 >> 0x18) + '0';
      psVar16 = (short *)((int)psVar16 + 1);
      uStack_1e = (ushort)(uVar23 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (undefined2)local_24;
      uStack_3a = uVar19;
      uVar19 = uStack_1e;
    }
    psVar17 = psVar16 + -1;
    uStack_1e = uVar19;
    if (*(char *)((int)psVar16 + -1) < '5') {
      for (; (psVar20 <= psVar17 && (*(char *)psVar17 == '0'));
          psVar17 = (short *)((int)psVar17 + -1)) {
      }
      if (psVar17 < psVar20) {
        *param_6 = 0;
        *(undefined *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((uVar9 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar20 = '0';
        *(undefined *)((int)param_6 + 5) = 0;
        goto LAB_0048f6e9;
      }
    }
    else {
      for (; (psVar20 <= psVar17 && (*(char *)psVar17 == '9'));
          psVar17 = (short *)((int)psVar17 + -1)) {
        *(char *)psVar17 = '0';
      }
      if (psVar17 < psVar20) {
        psVar17 = (short *)((int)psVar17 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar17 = *(char *)psVar17 + '\x01';
    }
    cVar14 = ((char)psVar17 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar14;
    *(undefined *)(cVar14 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 1) = ((uVar9 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined *)(param_6 + 2) = 0x30;
    *(undefined *)((int)param_6 + 5) = 0;
  }
LAB_0048f6e9:
  uStack_3e = iVar1;
  local_24 = uVar15;
  local_10 = param_2;
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


