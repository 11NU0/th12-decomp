/* int __cdecl __input_s_l(FILE * _File, uchar * param_2, _locale_t _Locale, va_list _ArgList) @ 00478e16  4388 bytes */

#include "th12.h"

/* Library Function - Single Match
    __input_s_l
   
   Library: Visual Studio 2008 Release */

typedef struct local_204__u { undefined4 _; undefined4 locinfo; } local_204__u;
typedef struct local_1bc__u { undefined4 _; undefined1 _4_4_; } local_1bc__u;
int __cdecl __input_s_l(FILE *_File,uchar *param_2,_locale_t _Locale,va_list _ArgList)

{
  local_204__u *local_204__u_alias;
  local_1bc__u *local_1bc__u_alias;
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  va_list pcVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar11;
  undefined4 extraout_ECX_04;
  FILE *extraout_ECX_05;
  FILE *pFVar12;
  FILE *extraout_ECX_06;
  int extraout_ECX_07;
  undefined4 extraout_ECX_08;
  uint uVar13;
  uint extraout_ECX_09;
  byte bVar14;
  void *_C;
  size_t sVar15;
  size_t sVar16;
  wchar_t *pwVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  bool bVar21;
  FILE *pFVar22;
  localeinfo_struct *plVar23;
  localeinfo_struct local_204;
  int local_1fc;
  char local_1f8;
  int local_1f4;
  wchar_t local_1f0 [2];
  va_list local_1ec;
  uint local_1e8;
  va_list local_1e4;
  byte local_1e0;
  undefined local_1df;
  undefined4 local_1dc;
  byte local_1d5;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  wchar_t *local_1c0;
  undefined8 local_1bc;
  wchar_t *local_1b4;
  byte *local_1b0;
  int local_1ac;
  undefined *local_1a8;
  char local_1a3;
  byte local_1a2;
  char local_1a1;
  FILE *local_1a0;
  char local_19a;
  char local_199;
  int local_198;
  char local_193;
  char local_192;
  char local_191;
  int local_190;
  uint local_18c;
  undefined local_188 [352];
  byte local_28 [32];
  uint local_8;
  void *pvVar5;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  local_1e4 = _ArgList;
  local_1a8 = local_188;
  local_1a0 = _File;
  local_1b0 = param_2;
  local_1dc = 0x15e;
  local_1d4 = 0;
  local_1f0[0] = L'\0';
  local_1f0[1] = L'\0';
  local_18c = 0;
  local_1f4 = 0;
  if ((param_2 == (uchar *)0x0) || (_File == (FILE *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_00479f2c;
  }
  if ((*(byte *)&_File->_flag & 0x40) == 0) {
    uVar4 = __fileno(_File);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar10 = &DAT_004adbb0;
    }
    else {
      puVar10 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_004d6320)[(int)uVar4 >> 5]);
    }
    if ((puVar10[0x24] & 0x7f) == 0) {
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar10 = &DAT_004adbb0;
      }
      else {
        puVar10 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_004d6320)[(int)uVar4 >> 5]);
      }
      if ((puVar10[0x24] & 0x80) == 0) goto LAB_00478f21;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
LAB_00478f21:
    _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_204,_Locale);
    bVar1 = *param_2;
    local_1a1 = '\0';
    local_190 = 0;
    local_1c8 = 0;
    if (bVar1 != 0) {
      do {
        pvVar5 = (void *)(uint)bVar1;
        iVar9 = _isspace((int)pvVar5);
        pFVar22 = local_1a0;
        if (iVar9 == 0) {
          pbVar20 = local_1b0;
          if (*local_1b0 == 0x25) {
            if (local_1b0[1] == 0x25) {
              if (local_1b0[1] == 0x25) {
                pbVar20 = local_1b0 + 1;
              }
              goto LAB_00479d7c;
            }
            local_1cc = 0;
            local_1d5 = 0;
            local_1ac = 0;
            local_1c4 = 0;
            local_198 = 0;
            local_1d0 = 0;
            local_1a2 = 0;
            local_1a3 = '\0';
            local_193 = '\0';
            local_191 = '\0';
            local_19a = '\0';
            local_192 = '\0';
            local_199 = '\x01';
            local_1b4 = (wchar_t *)0x0;
            do {
              pbVar19 = pbVar20 + 1;
              _C = (void *)(uint)*pbVar19;
              pvVar5 = _C;
              iVar9 = _isdigit((int)_C);
              pbVar18 = pbVar19;
              if (iVar9 == 0) {
                if (_C < (void *)0x4f) {
                  if (_C != (void *)0x4e) {
                    if (_C == (void *)0x2a) {
                      local_193 = local_193 + '\x01';
                    }
                    else if (_C != (void *)0x46) {
                      if (_C == (void *)0x49) {
                        bVar1 = pbVar20[2];
                        pvVar5 = (void *)CONCAT31((int3)((uint)pvVar5 >> 8),bVar1);
                        if ((bVar1 == 0x36) && (pbVar18 = pbVar20 + 3, *pbVar18 == 0x34))
                        goto LAB_00479089;
                        if ((((((bVar1 != 0x33) || (pbVar18 = pbVar20 + 3, *pbVar18 != 0x32)) &&
                              (pbVar18 = pbVar19, bVar1 != 100)) &&
                             ((bVar1 != 0x69 && (bVar1 != 0x6f)))) && (bVar1 != 0x78)) &&
                           (bVar1 != 0x58)) goto LAB_004790e2;
                      }
                      else if (_C == (void *)0x4c) {
                        local_199 = local_199 + '\x01';
                      }
                      else {
LAB_004790e2:
                        local_191 = local_191 + '\x01';
                        pbVar18 = pbVar19;
                      }
                    }
                  }
                }
                else if (_C == (void *)0x68) {
                  local_199 = local_199 + -1;
                  local_192 = local_192 + -1;
                }
                else {
                  if (_C == (void *)0x6c) {
                    pbVar18 = pbVar20 + 2;
                    if (*pbVar18 == 0x6c) {
LAB_00479089:
                      local_1b4 = (wchar_t *)((int)local_1b4 + 1);
                      local_1bc = 0;
                      goto LAB_0047910c;
                    }
                    local_199 = local_199 + '\x01';
                  }
                  else if (_C != (void *)0x77) goto LAB_004790e2;
                  local_192 = local_192 + '\x01';
                  pbVar18 = pbVar19;
                }
              }
              else {
                local_1c4 = local_1c4 + 1;
                local_198 = local_198 * 10 + -0x30 + (int)_C;
              }
LAB_0047910c:
              pbVar20 = pbVar18;
            } while (local_191 == '\0');
            if (local_193 == '\0') {
              local_1c0 = *(wchar_t **)local_1e4;
              local_1ec = local_1e4;
              local_1e4 = local_1e4 + 4;
            }
            else {
              local_1c0 = (wchar_t *)0x0;
            }
            local_191 = '\0';
            if ((local_192 == '\0') && ((*pbVar18 == 0x53 || (local_192 = -1, *pbVar18 == 0x43)))) {
              local_192 = '\x01';
            }
            uVar4 = *pbVar18 | 0x20;
            local_1e8 = uVar4;
            local_1b0 = pbVar18;
            if (uVar4 != 0x6e) {
              if ((uVar4 == 99) || (uVar4 == 0x7b)) {
                local_190 = local_190 + 1;
                local_18c = __inc(pvVar5,local_1a0);
              }
              else {
                local_18c = __whiteout(pvVar5,local_1a0);
              }
              if (local_18c == 0xffffffff) break;
            }
            if ((local_1c4 != 0) && (pFVar22 = local_1a0, local_198 == 0)) goto LAB_00479e1b;
            if ((local_193 == '\0') && (((uVar4 == 99 || (uVar4 == 0x73)) || (uVar4 == 0x7b)))) {
              local_1c0 = *(wchar_t **)local_1ec;
              pcVar6 = local_1ec + 4;
              local_1e4 = local_1ec + 8;
              local_1d0 = *(int *)(local_1ec + 4);
              local_1ec = pcVar6;
              if (local_1d0 == 0) {
                if (local_192 < '\x01') {
                  *(byte *)local_1c0 = 0;
                }
                else {
                  *local_1c0 = L'\0';
                }
                piVar3 = __errno();
                *piVar3 = 0xc;
                break;
              }
            }
            if (uVar4 < 0x70) {
              if (uVar4 == 0x6f) {
LAB_00479a4e:
                if (local_18c == 0x2d) {
                  local_1a3 = '\x01';
                }
                else if (local_18c != 0x2b) goto LAB_00479a95;
                local_198 = local_198 + -1;
                if ((local_198 == 0) && (local_1c4 != 0)) {
                  local_191 = '\x01';
                }
                else {
                  local_190 = local_190 + 1;
                  local_18c = __inc(local_1c4,local_1a0);
                }
                goto LAB_00479a95;
              }
              if (uVar4 == 99) {
                if (local_1c4 == 0) {
                  local_198 = local_198 + 1;
                  local_1c4 = 1;
                }
LAB_0047965e:
                if ('\0' < local_192) {
                  local_19a = '\x01';
                }
LAB_0047966e:
                pFVar22 = local_1a0;
                pwVar17 = local_1c0;
                local_190 = local_190 + -1;
                pFVar12 = local_1a0;
                local_1b4 = local_1c0;
                __un_inc(local_18c,local_1a0);
                if (uVar4 == 99) goto LAB_00479699;
LAB_00479693:
                local_1d0 = local_1d0 + -1;
LAB_00479699:
                do {
                  if ((local_1c4 != 0) &&
                     (iVar9 = local_198 + -1, bVar21 = local_198 == 0, local_198 = iVar9, bVar21)) {
LAB_004799f8:
                    if (local_1b4 == pwVar17) goto LAB_00479ea7;
                    if ((local_193 == '\0') && (local_1c8 = local_1c8 + 1, uVar4 != 99)) {
                      if (local_19a == '\0') {
                        *(byte *)local_1c0 = 0;
                      }
                      else {
                        *local_1c0 = L'\0';
                      }
                    }
                    goto LAB_00479d59;
                  }
                  local_190 = local_190 + 1;
                  local_18c = __inc(pFVar12,pFVar22);
                  if (local_18c == 0xffffffff) {
LAB_004799e9:
                    local_190 = local_190 + -1;
                    __un_inc(local_18c,pFVar22);
                    goto LAB_004799f8;
                  }
                  bVar1 = (byte)local_18c;
                  pFVar12 = extraout_ECX_05;
                  if (uVar4 != 99) {
                    if (uVar4 == 0x73) {
                      if ((8 < (int)local_18c) && ((int)local_18c < 0xe)) goto LAB_004799e9;
                      if (local_18c != 0x20) goto LAB_00479723;
                    }
                    if ((uVar4 != 0x7b) ||
                       (pFVar12 = (FILE *)(int)(char)(local_28[(int)local_18c >> 3] ^ local_1a2),
                       uVar4 = local_1e8, ((uint)pFVar12 & 1 << (bVar1 & 7)) == 0))
                    goto LAB_004799e9;
                  }
LAB_00479723:
                  if (local_193 == '\0') goto code_r0x00479730;
                  local_1b4 = (wchar_t *)((int)local_1b4 + 1);
                } while( true );
              }
              if (uVar4 == 100) goto LAB_00479a4e;
              if (100 < uVar4) {
                if (0x67 < uVar4) {
                  if (uVar4 == 0x69) {
                    uVar4 = 100;
                    goto LAB_00479282;
                  }
                  if (uVar4 != 0x6e) goto LAB_004797df;
                  iVar9 = local_190;
                  if (local_193 != '\0') goto LAB_00479d59;
                  goto LAB_00479c2a;
                }
                sVar15 = 0;
                if (local_18c == 0x2d) {
                  *local_1a8 = 0x2d;
                  sVar15 = 1;
LAB_004792bb:
                  local_198 = local_198 + -1;
                  local_190 = local_190 + 1;
                  local_18c = __inc(local_1c4,local_1a0);
                }
                else if (local_18c == 0x2b) goto LAB_004792bb;
                if (local_1c4 == 0) {
                  local_198 = -1;
                }
                while( true ) {
                  uVar4 = local_18c & 0xff;
                  iVar9 = _isdigit(uVar4);
                  if ((iVar9 == 0) ||
                     (iVar9 = local_198 + -1, bVar21 = local_198 == 0, local_198 = iVar9, bVar21))
                  break;
                  local_1ac = local_1ac + 1;
                  local_1a8[sVar15] = (byte)local_18c;
                  sVar15 = sVar15 + 1;
                  iVar9 = ___check_float_string(sVar15,local_188,&local_1d4);
                  if (iVar9 == 0) goto LAB_00479ea7;
                  local_190 = local_190 + 1;
                  local_18c = __inc(extraout_ECX,local_1a0);
                }
  local_204__u_alias = (local_204__u *)&local_204;
                local_1a2 = **(byte **)local_204__u_alias->locinfo[1].lc_codepage;
                if ((local_1a2 == (byte)local_18c) &&
                   (iVar9 = local_198 + -1, bVar21 = local_198 != 0, local_198 = iVar9, bVar21)) {
                  local_190 = local_190 + 1;
                  local_18c = __inc(uVar4,local_1a0);
                  local_1a8[sVar15] = local_1a2;
                  sVar15 = sVar15 + 1;
                  iVar9 = ___check_float_string(sVar15,local_188,&local_1d4);
                  if (iVar9 == 0) break;
                  while ((iVar9 = _isdigit(local_18c & 0xff), iVar9 != 0 &&
                         (iVar9 = local_198 + -1, bVar21 = local_198 != 0, local_198 = iVar9, bVar21
                         ))) {
                    local_1ac = local_1ac + 1;
                    local_1a8[sVar15] = (byte)local_18c;
                    sVar15 = sVar15 + 1;
                    iVar9 = ___check_float_string(sVar15,local_188,&local_1d4);
                    if (iVar9 == 0) goto LAB_00479ea7;
                    local_190 = local_190 + 1;
                    local_18c = __inc(extraout_ECX_00,local_1a0);
                  }
                }
                sVar16 = sVar15;
                if ((local_1ac != 0) &&
                   (((local_18c == 0x65 || (local_18c == 0x45)) &&
                    (iVar9 = local_198 + -1, bVar21 = local_198 != 0, local_198 = iVar9, bVar21))))
                {
                  local_1a8[sVar15] = 0x65;
                  sVar16 = sVar15 + 1;
                  iVar9 = ___check_float_string(sVar16,local_188,&local_1d4);
                  if (iVar9 == 0) break;
                  local_190 = local_190 + 1;
                  local_18c = __inc(extraout_ECX_01,local_1a0);
                  if (local_18c == 0x2d) {
                    local_1a8[sVar16] = 0x2d;
                    sVar16 = sVar15 + 2;
                    iVar9 = ___check_float_string(sVar16,local_188,&local_1d4);
                    uVar11 = extraout_ECX_03;
                    if (iVar9 == 0) break;
LAB_0047952c:
                    if (local_198 == 0) {
                      local_198 = 0;
                    }
                    else {
                      local_190 = local_190 + 1;
                      local_198 = local_198 + -1;
                      local_18c = __inc(uVar11,local_1a0);
                    }
                  }
                  else {
                    uVar11 = extraout_ECX_02;
                    if (local_18c == 0x2b) goto LAB_0047952c;
                  }
                  while ((iVar9 = _isdigit(local_18c & 0xff), iVar9 != 0 &&
                         (iVar9 = local_198 + -1, bVar21 = local_198 != 0, local_198 = iVar9, bVar21
                         ))) {
                    local_1ac = local_1ac + 1;
                    local_1a8[sVar16] = (byte)local_18c;
                    sVar16 = sVar16 + 1;
                    iVar9 = ___check_float_string(sVar16,local_188,&local_1d4);
                    if (iVar9 == 0) goto LAB_00479ea7;
                    local_190 = local_190 + 1;
                    local_18c = __inc(extraout_ECX_04,local_1a0);
                  }
                }
                local_190 = local_190 + -1;
                __un_inc(local_18c,local_1a0);
                if (local_1ac != 0) {
                  if (local_193 == '\0') {
                    local_1c8 = local_1c8 + 1;
                    plVar23 = &local_204;
                    local_1a8[sVar16] = 0;
                    iVar9 = local_199 + -1;
                    pwVar17 = local_1c0;
                    puVar10 = local_1a8;
                    pcVar7 = (code *)__decode_pointer((int)PTR_LAB_004ade8c);
                    (*pcVar7)(iVar9,pwVar17,puVar10,plVar23);
                  }
                  goto LAB_00479d59;
                }
                break;
              }
LAB_004797df:
              if (*local_1b0 != local_18c) {
                __un_inc(local_18c,local_1a0);
                local_1f4 = 1;
                break;
              }
              local_1a1 = local_1a1 + -1;
              if (local_193 == '\0') {
                local_1e4 = local_1ec;
              }
            }
            else {
              if (uVar4 == 0x70) {
                local_199 = '\x01';
                goto LAB_00479a4e;
              }
              if (uVar4 == 0x73) goto LAB_0047965e;
              if (uVar4 == 0x75) goto LAB_00479a4e;
              if (uVar4 != 0x78) {
                if (uVar4 == 0x7b) {
                  if ('\0' < local_192) {
                    local_19a = '\x01';
                  }
                  pbVar20 = local_1b0 + 1;
                  if (*pbVar20 == 0x5e) {
                    pbVar20 = local_1b0 + 2;
                    local_1a2 = 0xff;
                  }
                  _memset(local_28,0,0x20);
                  if (*pbVar20 == 0x5d) {
                    local_28[0xb] = 0x20;
                    uVar13 = 0x5d;
                    pbVar20 = pbVar20 + 1;
                  }
                  else {
                    uVar13 = (uint)local_1d5;
                  }
                  while( true ) {
                    bVar1 = *pbVar20;
                    local_1b0 = pbVar20;
                    if (bVar1 == 0x5d) break;
                    if (((bVar1 == 0x2d) && (bVar14 = (byte)uVar13, bVar14 != 0)) &&
                       (bVar2 = pbVar20[1], bVar2 != 0x5d)) {
                      if (bVar2 <= bVar14) {
                        uVar13 = (uint)bVar2;
                        bVar2 = bVar14;
                      }
                      if ((byte)uVar13 <= bVar2) {
                        uVar8 = (uint)(byte)((bVar2 - (byte)uVar13) + 1);
                        do {
                          local_28[uVar13 >> 3] =
                               local_28[uVar13 >> 3] | '\x01' << ((byte)uVar13 & 7);
                          uVar13 = uVar13 + 1;
                          uVar8 = uVar8 - 1;
                          uVar4 = local_1e8;
                        } while (uVar8 != 0);
                      }
                      uVar13 = 0;
                      pbVar20 = pbVar20 + 2;
                    }
                    else {
                      local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
                      uVar13 = (uint)bVar1;
                      pbVar20 = pbVar20 + 1;
                      uVar4 = local_1e8;
                    }
                  }
                  goto LAB_0047966e;
                }
                goto LAB_004797df;
              }
LAB_00479282:
              iVar9 = local_1c4;
              if (local_18c == 0x2d) {
                local_1a3 = '\x01';
LAB_004798e8:
                local_198 = local_198 + -1;
                if ((local_198 == 0) && (local_1c4 != 0)) {
                  local_191 = '\x01';
                }
                else {
                  local_190 = local_190 + 1;
                  local_18c = __inc(local_1c4,local_1a0);
                  iVar9 = extraout_ECX_07;
                }
              }
              else if (local_18c == 0x2b) goto LAB_004798e8;
              if (local_18c == 0x30) {
                local_190 = local_190 + 1;
                local_18c = __inc(iVar9,local_1a0);
                if (((char)local_18c == 'x') || ((char)local_18c == 'X')) {
                  local_190 = local_190 + 1;
                  local_18c = __inc(extraout_ECX_08,local_1a0);
                  if ((local_1c4 != 0) && (local_198 = local_198 + -2, local_198 < 1)) {
                    local_191 = local_191 + '\x01';
                  }
                  uVar4 = 0x78;
                }
                else {
                  local_1ac = 1;
                  if (uVar4 == 0x78) {
                    local_190 = local_190 + -1;
                    __un_inc(local_18c,local_1a0);
                    local_18c = 0x30;
                  }
                  else {
                    if ((local_1c4 != 0) && (local_198 = local_198 + -1, local_198 == 0)) {
                      local_191 = local_191 + '\x01';
                    }
                    uVar4 = 0x6f;
                  }
                }
              }
LAB_00479a95:
              if (local_1b4 == (wchar_t *)0x0) {
                if (local_191 == '\0') {
                  while ((uVar4 != 0x78 && (uVar4 != 0x70))) {
                    iVar9 = _isdigit(local_18c & 0xff);
                    if (iVar9 == 0) goto LAB_00479d16;
                    if (uVar4 == 0x6f) {
                      if (0x37 < (int)local_18c) goto LAB_00479d16;
                      local_1cc = local_1cc << 3;
                    }
                    else {
                      local_1cc = local_1cc * 10;
                    }
LAB_00479cd3:
                    local_1ac = local_1ac + 1;
                    local_1cc = local_1cc + -0x30 + local_18c;
                    if ((local_1c4 != 0) && (local_198 = local_198 + -1, local_198 == 0))
                    goto LAB_00479d2f;
                    local_190 = local_190 + 1;
                    local_18c = __inc(local_18c,local_1a0);
                  }
                  iVar9 = _isxdigit(local_18c & 0xff);
                  if (iVar9 != 0) {
                    local_1cc = local_1cc << 4;
                    local_18c = __hextodec((byte)local_18c);
                    goto LAB_00479cd3;
                  }
LAB_00479d16:
                  local_190 = local_190 + -1;
                  __un_inc(local_18c,local_1a0);
                }
LAB_00479d2f:
                iVar9 = local_1cc;
                if (local_1a3 != '\0') {
                  iVar9 = -local_1cc;
                }
              }
              else {
                if (local_191 == '\0') {
                  while ((uVar4 != 0x78 && (uVar4 != 0x70))) {
                    iVar9 = _isdigit(local_18c & 0xff);
                    if (iVar9 == 0) goto LAB_00479bb1;
                    if (uVar4 == 0x6f) {
                      if (0x37 < (int)local_18c) goto LAB_00479bb1;
  local_1bc__u_alias = (local_1bc__u *)&local_1bc;
                      uVar13 = local_1bc__u_alias->_4_4_ << 3 | (uint)local_1bc >> 0x1d;
                      local_1bc = CONCAT44(uVar13,(uint)local_1bc << 3);
                    }
                    else {
  local_1bc__u_alias = (local_1bc__u *)&local_1bc;
                      local_1bc = __allmul((uint)local_1bc,local_1bc__u_alias->_4_4_,10,0);
                      uVar13 = extraout_ECX_09;
                    }
LAB_00479b68:
                    local_1ac = local_1ac + 1;
                    uVar8 = local_18c - 0x30;
  local_1bc__u_alias = (local_1bc__u *)&local_1bc;
                    local_1bc = CONCAT44(local_1bc__u_alias->_4_4_ + ((int)uVar8 >> 0x1f) +
                                         (uint)CARRY4((uint)local_1bc,uVar8),(uint)local_1bc + uVar8
                                        );
                    if ((local_1c4 != 0) && (local_198 = local_198 + -1, local_198 == 0))
                    goto LAB_00479bca;
                    local_190 = local_190 + 1;
                    local_18c = __inc(uVar13,local_1a0);
                  }
                  iVar9 = _isxdigit(local_18c & 0xff);
                  if (iVar9 != 0) {
  local_1bc__u_alias = (local_1bc__u *)&local_1bc;
                    local_1bc = CONCAT44(local_1bc__u_alias->_4_4_ << 4 | (uint)local_1bc >> 0x1c,
                                         (uint)local_1bc << 4);
                    uVar13 = local_18c;
                    local_18c = __hextodec((byte)local_18c);
                    goto LAB_00479b68;
                  }
LAB_00479bb1:
                  local_190 = local_190 + -1;
                  __un_inc(local_18c,local_1a0);
                }
LAB_00479bca:
                iVar9 = local_1cc;
                if (local_1a3 != '\0') {
  local_1bc__u_alias = (local_1bc__u *)&local_1bc;
                  local_1bc = CONCAT44(-(local_1bc__u_alias->_4_4_ + (uint)((uint)local_1bc != 0)),
                                       -(uint)local_1bc);
                }
              }
              if (uVar4 == 0x46) {
                local_1ac = 0;
              }
              if (local_1ac == 0) break;
              if (local_193 == '\0') {
                local_1c8 = local_1c8 + 1;
LAB_00479c2a:
                if (local_1b4 == (wchar_t *)0x0) {
                  if (local_199 == '\0') {
                    *local_1c0 = (wchar_t)iVar9;
                  }
                  else {
                    *(int *)local_1c0 = iVar9;
                  }
                }
                else {
                  *(uint *)local_1c0 = (uint)local_1bc;
  local_1bc__u_alias = (local_1bc__u *)&local_1bc;
                  *(int *)(local_1c0 + 2) = local_1bc__u_alias->_4_4_;
                }
              }
            }
LAB_00479d59:
            local_1a1 = local_1a1 + '\x01';
            pbVar18 = local_1b0 + 1;
            local_1b0 = pbVar18;
          }
          else {
LAB_00479d7c:
            local_190 = local_190 + 1;
            uVar4 = __inc(pvVar5,local_1a0);
            pbVar18 = pbVar20 + 1;
            local_1b0 = pbVar18;
            local_18c = uVar4;
            if (*pbVar20 != uVar4) {
LAB_00479e1b:
              __un_inc(local_18c,pFVar22);
              break;
            }
            uVar13 = uVar4 & 0xff;
            iVar9 = _isleadbyte(uVar13);
            if (iVar9 != 0) {
              local_190 = local_190 + 1;
              uVar13 = __inc(uVar13,pFVar22);
              bVar1 = *pbVar18;
              pbVar18 = pbVar20 + 2;
              local_1b0 = pbVar18;
              if (bVar1 != uVar13) {
                __un_inc(uVar13,pFVar22);
                __un_inc(uVar4,pFVar22);
                break;
              }
              local_190 = local_190 + -1;
            }
          }
          pbVar20 = local_1b0;
          if ((local_18c == 0xffffffff) &&
             ((*pbVar18 != 0x25 || (pbVar18 = local_1b0, local_1b0[1] != 0x6e)))) break;
        }
        else {
          local_190 = local_190 + -1;
          uVar4 = __whiteout(pvVar5,local_1a0);
          __un_inc(uVar4,pFVar22);
          pbVar18 = local_1b0;
          do {
            pbVar18 = pbVar18 + 1;
            iVar9 = _isspace((uint)*pbVar18);
            pbVar20 = pbVar18;
          } while (iVar9 != 0);
        }
        local_1b0 = pbVar20;
        bVar1 = *pbVar18;
      } while (bVar1 != 0);
LAB_00479ea7:
      if (local_1d4 == 1) {
        _free(local_1a8);
      }
      if (local_18c == 0xffffffff) {
        if (local_1f8 != '\0') {
          *(uint *)(local_1fc + 0x70) = *(uint *)(local_1fc + 0x70) & 0xfffffffd;
        }
        goto LAB_00479f2c;
      }
      if (local_1f4 == 1) {
        piVar3 = __errno();
        *piVar3 = 0x16;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    if (local_1f8 != '\0') {
      *(uint *)(local_1fc + 0x70) = *(uint *)(local_1fc + 0x70) & 0xfffffffd;
    }
  }
LAB_00479f2c:
  iVar9 = ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return iVar9;
code_r0x00479730:
  if (local_1d0 == 0) {
    piVar3 = __errno();
    *piVar3 = 0xc;
    if (local_19a == '\0') {
      *(byte *)local_1b4 = 0;
    }
    else {
      *local_1b4 = L'\0';
    }
    goto LAB_00479ea7;
  }
  if (local_19a == '\0') {
    *(byte *)pwVar17 = bVar1;
    pwVar17 = (wchar_t *)((int)pwVar17 + 1);
    local_1c0 = pwVar17;
  }
  else {
    uVar13 = local_18c & 0xff;
    local_1e0 = bVar1;
    iVar9 = _isleadbyte(uVar13);
    if (iVar9 != 0) {
      local_190 = local_190 + 1;
      uVar13 = __inc(uVar13,pFVar22);
      local_1df = (undefined)uVar13;
    }
    local_1f0[0] = L'?';
    local_1f0[1] = L'\0';
  local_204__u_alias = (local_204__u *)&local_204;
    __mbtowc_l(local_1f0,(char *)&local_1e0,(size_t)(local_204__u_alias->locinfo)->locale_name[3],&local_204);
    *pwVar17 = local_1f0[0];
    pwVar17 = pwVar17 + 1;
    pFVar12 = extraout_ECX_06;
    local_1c0 = pwVar17;
  }
  goto LAB_00479693;
}


