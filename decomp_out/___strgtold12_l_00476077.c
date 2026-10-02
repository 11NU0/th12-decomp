/* uint __cdecl ___strgtold12_l(_LDBL12 * pld12, char * * p_end_ptr, char * str, int mult12, int scale, int decpt, int implicit_E, _locale_t _Locale) @ 00476077  1735 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___strgtold12_l
   
   Library: Visual Studio 2008 Release */

uint __cdecl
___strgtold12_l(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
               int implicit_E,_locale_t _Locale)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  undefined **ppuVar16;
  ushort uVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined **ppuVar20;
  ushort uVar21;
  undefined4 uVar22;
  char *pcVar23;
  short *psVar24;
  int local_6c;
  int local_68;
  undefined **local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  undefined2 local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  byte local_30;
  undefined uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  iVar15 = 0;
  pcVar23 = local_24;
  uVar7 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  local_68 = 0;
  local_54 = 0;
  if (_Locale != (_locale_t)0x0) {
    local_58 = str;
    for (; (((cVar8 = *str, cVar8 == ' ' || (cVar8 == '\t')) || (cVar8 == '\n')) || (cVar8 == '\r'))
        ; str = str + 1) {
    }
LAB_004760fe:
    cVar8 = *str;
    pcVar18 = str + 1;
    switch(iVar15) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_0047611b:
        iVar15 = 3;
        goto LAB_0047611d;
      }
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) {
LAB_00476132:
        iVar15 = 5;
        str = pcVar18;
      }
      else if (cVar8 == '+') {
        uVar7 = 0;
        iVar15 = 2;
        str = pcVar18;
      }
      else {
        if (cVar8 != '-') {
          if (cVar8 == '0') goto LAB_0047614c;
          goto LAB_004762d7;
        }
        iVar15 = 2;
        uVar7 = 0x8000;
        str = pcVar18;
      }
      goto LAB_004760fe;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_0047611b;
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_00476183;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_004761b3;
      if (cVar8 == '0') goto LAB_0047614c;
      goto LAB_00476193;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_0047611b;
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_00476132;
      str = local_58;
      if (cVar8 != '0') goto LAB_00476302;
LAB_0047614c:
      iVar15 = 1;
      str = pcVar18;
      goto LAB_004760fe;
    case 3:
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar8 + -0x30;
          pcVar23 = pcVar23 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar8 != **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_00476226;
LAB_00476183:
      bVar4 = true;
      iVar15 = 4;
      str = pcVar18;
      goto LAB_004760fe;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while (cVar8 == '0') {
          local_54 = local_54 + -1;
          cVar8 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar8 + -0x30;
          pcVar23 = pcVar23 + 1;
          local_54 = local_54 + -1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_00476226:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_004761b3:
        bVar4 = true;
        iVar15 = 0xb;
        str = pcVar18 + -1;
      }
      else {
LAB_00476193:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_004762d7;
        iVar15 = 6;
        str = pcVar18;
      }
      goto LAB_004760fe;
    case 5:
      bVar6 = true;
      str = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar15 = 4;
        goto LAB_0047611d;
      }
      goto LAB_00476302;
    case 6:
      local_58 = str + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_004762be;
        if (cVar8 == '-') goto LAB_004762b2;
LAB_004762a5:
        str = local_58;
        if (cVar8 != '0') goto LAB_00476302;
        iVar15 = 8;
        str = pcVar18;
        goto LAB_004760fe;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_004762a5;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_004762d7;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_00476364;
    default:
      goto switchD_0047610a_caseD_a;
    case 0xb:
      if (implicit_E != 0) {
        local_58 = str;
        if (cVar8 == '+') {
LAB_004762be:
          iVar15 = 7;
          str = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_00476302;
LAB_004762b2:
          local_6c = -1;
          iVar15 = 7;
          str = pcVar18;
        }
        goto LAB_004760fe;
      }
      iVar15 = 10;
      pcVar18 = str;
switchD_0047610a_caseD_a:
      str = pcVar18;
      if (iVar15 != 10) goto LAB_004760fe;
      goto LAB_00476302;
    }
    iVar15 = 9;
LAB_0047611d:
    str = pcVar18 + -1;
    goto LAB_004760fe;
  }
  piVar9 = __errno();
  *piVar9 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  uVar12 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
  goto LAB_0047672f;
LAB_00476364:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_0047637f;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_00476364;
  }
  local_68 = 0x1451;
LAB_0047637f:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_004762d7:
  str = pcVar18 + -1;
LAB_00476302:
  *p_end_ptr = str;
  if (bVar4) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar23 = pcVar23 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_00476711;
    while (pcVar23 = pcVar23 + -1, *pcVar23 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar2 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    uVar13 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    uVar12 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    uVar11 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar5) {
      local_58 = (char *)((int)local_58 + scale);
    }
    if (!bVar6) {
      local_58 = (char *)((int)local_58 - decpt);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_00476711;
      ppuVar16 = &PTR_DAT_004adf80;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          ppuVar16 = (undefined **)&DAT_004ae0e0;
        }
        if (mult12 == 0) {
          local_40._0_2_ = 0;
        }
        iVar15 = uStack_4a;
        uVar11 = uVar12;
        uVar13 = uStack_2e;
        iVar1 = uStack_2a;
        uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar2 = local_3c;
joined_r0x0047640c:
        if (local_58 != (char *)0x0) {
          uStack_38._2_2_ = (ushort)(uVar11 >> 0x10);
          uVar12 = (int)local_58 >> 3;
          ppuVar16 = ppuVar16 + 0x15;
          uVar10 = (uint)local_58 & 7;
          local_58 = (char *)uVar12;
          if (uVar10 != 0) {
            ppuVar20 = ppuVar16 + uVar10 * 3;
            if (0x7fff < *(ushort *)ppuVar20) {
              local_4c = SUB42(*ppuVar20,0);
              uStack_4a._0_2_ = (undefined2)((uint)*ppuVar20 >> 0x10);
              uStack_4a._2_2_ = SUB42(ppuVar20[1],0);
              uStack_46 = (undefined2)((uint)ppuVar20[1] >> 0x10);
              local_44 = ppuVar20[2];
              iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar15;
              uStack_4a._2_2_ = (undefined2)((uint)iVar15 >> 0x10);
              ppuVar20 = (undefined **)&local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            uVar13 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar1 = 0;
            uStack_26 = 0;
            uVar14 = *(ushort *)((int)ppuVar20 + 10) & 0x7fff;
            uVar21 = (*(ushort *)((int)ppuVar20 + 10) ^ uStack_38._2_2_) & 0x8000;
            uVar17 = uVar14 + (uStack_38._2_2_ & 0x7fff);
            if ((((uStack_38._2_2_ & 0x7fff) < 0x7fff) && (uVar14 < 0x7fff)) && (uVar17 < 0xbffe)) {
              if (0x3fbf < uVar17) {
                if ((((uVar11 & 0x7fff0000) == 0) &&
                    (uVar17 = uVar17 + 1, (uVar11 & 0x7fffffff) == 0)) &&
                   ((iVar2 == 0 && (uVar3 == 0)))) {
                  uStack_38._2_2_ = 0;
                  uVar11 = uVar11 & 0xffff;
                  uVar13 = 0;
                  iVar1 = 0;
                }
                else if (((uVar14 == 0) &&
                         (uVar17 = uVar17 + 1, ((uint)ppuVar20[2] & 0x7fffffff) == 0)) &&
                        ((ppuVar20[1] == (undefined *)0x0 && (*ppuVar20 == (undefined *)0x0)))) {
                  uStack_38._0_2_ = 0;
                  uStack_38._2_2_ = 0;
                  uVar11 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  uVar3 = 0;
                  iVar2 = 0;
                }
                else {
                  local_6c = 0;
                  psVar24 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = ppuVar20 + 2;
                      do {
                        bVar4 = false;
                        uVar13 = *(uint *)(psVar24 + -2) +
                                 (uint)*(ushort *)local_64 * (uint)*local_60;
                        if ((uVar13 < *(uint *)(psVar24 + -2)) ||
                           (uVar13 < (uint)*(ushort *)local_64 * (uint)*local_60)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar24 + -2) = uVar13;
                        if (bVar4) {
                          *psVar24 = *psVar24 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = (undefined **)((int)local_64 + -2);
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar24 = psVar24 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar17 = uVar17 + 0xc002;
                  if ((short)uVar17 < 1) {
LAB_004765c7:
                    uVar17 = uVar17 - 1;
                    if ((short)uVar17 < 0) {
                      uVar13 = (uint)(ushort)-uVar17;
                      uVar17 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar2 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar11 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                        uVar12 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar13 = uVar13 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar11 >> 1);
                        local_30 = (byte)uVar12;
                        uStack_2f = (undefined)(uVar12 >> 8);
                      } while (uVar13 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar14 = (ushort)uStack_2e;
                      if ((short)uStack_26 < 0) break;
                      iVar1 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar1;
                      uStack_2f = (undefined)((uint)iVar1 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar1 | uVar14 >> 0xf;
                      iVar2 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar2 | (ushort)uStack_2a >> 0xf;
                      uVar17 = uVar17 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar2 >> 0x10);
                    } while (0 < (short)uVar17);
                    if ((short)uVar17 < 1) goto LAB_004765c7;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar13 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      uVar13 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar17 = uVar17 + 1;
                          iVar1 = 0;
                          uVar13 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar1 = 0;
                          uVar13 = 0;
                        }
                      }
                      else {
                        iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar1;
                        uStack_2a._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      }
                    }
                    else {
                      uVar13 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)uVar13;
                      uStack_2e._2_2_ = (ushort)(uVar13 >> 0x10);
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (uVar17 < 0x7fff) {
                    local_40 = uVar13;
                    local_3c = iVar1;
                    uStack_38._0_2_ = uStack_26;
                    uStack_38._2_2_ = uVar17 | uVar21;
                    uVar11 = CONCAT22(uVar17 | uVar21,uStack_26);
                    uVar3 = uVar13;
                    iVar2 = iVar1;
                  }
                  else {
                    local_3c._0_2_ = 0;
                    local_3c._2_2_ = 0;
                    local_40._0_2_ = 0;
                    local_40._2_2_ = 0;
                    uVar11 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
                    uStack_38._0_2_ = (ushort)uVar11;
                    uStack_38._2_2_ = (ushort)(uVar11 >> 0x10);
                    uVar3 = 0;
                    iVar2 = 0;
                  }
                }
                goto joined_r0x0047640c;
              }
              uVar11 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              uVar11 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38._0_2_ = (ushort)uVar11;
            uStack_38._2_2_ = (ushort)(uVar11 >> 0x10);
            uVar13 = 0;
            iVar1 = 0;
            uVar3 = 0;
            iVar2 = 0;
          }
          goto joined_r0x0047640c;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar2;
      local_40._2_2_ = (undefined2)(uVar3 >> 0x10);
      local_40._0_2_ = (undefined2)uVar3;
      uStack_38._2_2_ = (ushort)(uVar11 >> 0x10);
      uStack_38._0_2_ = (ushort)uVar11;
      uVar22 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar19 = CONCAT22((ushort)uStack_38,local_3c._2_2_);
      uStack_4a = iVar15;
      uVar12 = uVar11;
      uStack_2e = uVar13;
      uStack_2a = iVar1;
      local_3c = iVar2;
    }
    else {
      uVar22 = 0;
      uStack_38._2_2_ = 0x7fff;
      uVar19 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_00476711:
    uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    uVar12 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    local_40._0_2_ = 0;
    uStack_38._2_2_ = 0;
    uVar19 = 0;
    uVar22 = 0;
  }
  *(undefined2 *)pld12->ld12 = (undefined2)local_40;
  *(ushort *)(pld12->ld12 + 10) = uStack_38._2_2_ | uVar7;
  *(undefined4 *)(pld12->ld12 + 2) = uVar22;
  *(undefined4 *)(pld12->ld12 + 6) = uVar19;
LAB_0047672f:
  uStack_38 = uVar12;
  local_40 = uVar3;
  uVar13 = ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return uVar13;
}


