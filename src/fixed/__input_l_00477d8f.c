/* int __cdecl __input_l(FILE * _File, uchar * param_2, _locale_t _Locale, va_list _ArgList) @ 00477d8f  4029 bytes */
#include "th12.h"

/* Library Function - Single Match
    __input_l
   
   Library: Visual Studio 2008 Release */

typedef struct local_1fc__u { undefined4 _; pthreadlocinfo locinfo; } local_1fc__u;
typedef struct local_1d0__u { undefined4 _; undefined1 _4_4_; } local_1d0__u;
int __cdecl __input_l(FILE *_File,uchar *param_2,_locale_t _Locale,va_list _ArgList)

{
  undefined4 stack0xfffffffc;
  byte bVar1;
  local_1d0__u *local_1d0__u_alias;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  code *pcVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar9;
  undefined4 extraout_ECX_04;
  FILE *extraout_ECX_05;
  FILE *pFVar10;
  FILE *extraout_ECX_06;
  int extraout_ECX_07;
  undefined4 extraout_ECX_08;
  uint extraout_ECX_09;
  byte bVar11;
  uint uVar12;
  char cVar13;
  void *_C;
  size_t sVar14;
  size_t sVar15;
  byte *pbVar16;
  wchar_t *pwVar17;
  byte *pbVar18;
  bool bVar19;
  longlong lVar20;
  FILE *pFVar21;
  localeinfo_struct *plVar22;
  va_list local_200;
  localeinfo_struct local_1fc;
  int local_1f4;
  char local_1f0;
  wchar_t local_1ec [2];
  va_list local_1e8;
  byte local_1e4;
  undefined local_1e3;
  undefined4 local_1e0;
  int local_1dc;
  byte local_1d5;
  int local_1d4;
  undefined8 local_1d0;
  int local_1c8;
  wchar_t *local_1c4;
  wchar_t *local_1c0;
  byte *local_1bc;
  int local_1b8;
  char local_1b1;
  undefined *local_1b0;
  int local_1ac;
  uint local_1a8;
  char local_1a4;
  byte local_1a3;
  char local_1a2;
  char local_1a1;
  FILE *local_1a0;
  char local_19a;
  char local_199;
  int local_198;
  char local_191;
  wchar_t *local_190;
  uint local_18c;
  undefined local_188 [352];
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  local_1e8 = _ArgList;
  local_1b0 = local_188;
  local_1a0 = _File;
  local_1e0 = 0x15e;
  local_1d4 = 0;
  local_1ec[0] = L'\0';
  local_1ec[1] = L'\0';
  local_18c = 0;
  if ((param_2 == (uchar *)0x0) || (_File == (FILE *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_00478d3e;
  }
  if ((*(byte *)&_File->_flag & 0x40) == 0) {
    uVar4 = __fileno(_File);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar8 = &DAT_004adbb0;
    }
    else {
      puVar8 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_004d6320)[(int)uVar4 >> 5]);
    }
    if ((puVar8[0x24] & 0x7f) == 0) {
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar8 = &DAT_004adbb0;
      }
      else {
        puVar8 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_004d6320)[(int)uVar4 >> 5]);
      }
      if ((puVar8[0x24] & 0x80) == 0) goto LAB_00477e8e;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_00478d3e;
  }
LAB_00477e8e:
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_1fc,_Locale);
  bVar1 = *param_2;
  local_1a1 = '\0';
  local_190 = (wchar_t *)0x0;
  local_1c8 = 0;
  if (bVar1 != 0) {
LAB_00477eb9:
    pFVar21 = local_1a0;
    pvVar5 = (void *)(uint)bVar1;
    iVar7 = _isspace((int)pvVar5);
    if (iVar7 != 0) {
      local_190 = (wchar_t *)((int)local_190 + -1);
      uVar4 = __whiteout(pvVar5,pFVar21);
      __un_inc(uVar4,pFVar21);
      do {
        param_2 = param_2 + 1;
        iVar7 = _isspace((uint)*param_2);
      } while (iVar7 != 0);
      goto LAB_00478ca6;
    }
    if (*param_2 == 0x25) {
      if (param_2[1] == 0x25) {
        if (param_2[1] == 0x25) {
          param_2 = param_2 + 1;
        }
        goto LAB_00478c38;
      }
      local_1c4 = (wchar_t *)0x0;
      local_1d5 = 0;
      local_1ac = 0;
      local_1b8 = 0;
      local_198 = 0;
      local_1a3 = 0;
      local_1a4 = '\0';
      local_19a = '\0';
      local_1b1 = '\0';
      local_1a2 = '\0';
      local_191 = '\0';
      local_199 = '\x01';
      local_1dc = 0;
      do {
        pbVar16 = param_2 + 1;
        _C = (void *)(uint)*pbVar16;
        pvVar5 = _C;
        iVar7 = _isdigit((int)_C);
        pbVar18 = pbVar16;
        if (iVar7 == 0) {
          if (_C < (void *)0x4f) {
            if (_C != (void *)0x4e) {
              if (_C == (void *)0x2a) {
                local_19a = local_19a + '\x01';
              }
              else if (_C != (void *)0x46) {
                if (_C == (void *)0x49) {
                  bVar1 = param_2[2];
                  pvVar5 = (void *)CONCAT31((int3)((uint)pvVar5 >> 8),bVar1);
                  if ((bVar1 == 0x36) && (pbVar18 = param_2 + 3, *pbVar18 == 0x34))
                  goto LAB_00477fda;
                  if ((((((bVar1 != 0x33) || (pbVar18 = param_2 + 3, *pbVar18 != 0x32)) &&
                        (pbVar18 = pbVar16, bVar1 != 100)) && ((bVar1 != 0x69 && (bVar1 != 0x6f))))
                      && (bVar1 != 0x78)) && (bVar1 != 0x58)) goto LAB_00478033;
                }
                else if (_C == (void *)0x4c) {
                  local_199 = local_199 + '\x01';
                }
                else {
LAB_00478033:
                  local_1b1 = local_1b1 + '\x01';
                  pbVar18 = pbVar16;
                }
              }
            }
          }
          else if (_C == (void *)0x68) {
            local_199 = local_199 + -1;
            local_191 = local_191 + -1;
          }
          else {
            if (_C == (void *)0x6c) {
              pbVar18 = param_2 + 2;
              if (*pbVar18 == 0x6c) {
LAB_00477fda:
                local_1dc = local_1dc + 1;
                local_1d0 = 0;
                goto LAB_0047805d;
              }
              local_199 = local_199 + '\x01';
            }
            else if (_C != (void *)0x77) goto LAB_00478033;
            local_191 = local_191 + '\x01';
            pbVar18 = pbVar16;
          }
        }
        else {
          local_1b8 = local_1b8 + 1;
          local_198 = local_198 * 10 + -0x30 + (int)_C;
        }
LAB_0047805d:
        param_2 = pbVar18;
      } while (local_1b1 == '\0');
      if (local_19a == '\0') {
        local_1c0 = *(wchar_t **)local_1e8;
        local_200 = local_1e8;
        local_1e8 = local_1e8 + 4;
      }
      else {
        local_1c0 = (wchar_t *)0x0;
      }
      cVar13 = '\0';
      if ((local_191 == '\0') && ((*pbVar18 == 0x53 || (local_191 = -1, *pbVar18 == 0x43)))) {
        local_191 = '\x01';
      }
      local_1a8 = *pbVar18 | 0x20;
      local_1bc = pbVar18;
      if (local_1a8 != 0x6e) {
        if ((local_1a8 == 99) || (local_1a8 == 0x7b)) {
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc(pvVar5,local_1a0);
        }
        else {
          local_18c = __whiteout(pvVar5,local_1a0);
        }
        if (local_18c == 0xffffffff) goto LAB_00478cdc;
      }
      pFVar21 = local_1a0;
      if ((local_1b8 != 0) && (local_198 == 0)) goto LAB_00478cbe;
      if ((int)local_1a8 < 0x70) {
        if (local_1a8 == 0x6f) {
LAB_00478944:
          if (local_18c == 0x2d) {
            local_1a4 = '\x01';
          }
          else if (local_18c != 0x2b) goto LAB_00478986;
          local_198 = local_198 + -1;
          if ((local_198 == 0) && (local_1b8 != 0)) {
            cVar13 = '\x01';
          }
          else {
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc(local_1b8,local_1a0);
          }
          goto LAB_00478986;
        }
        if (local_1a8 == 99) {
          if (local_1b8 == 0) {
            local_198 = local_198 + 1;
            local_1b8 = 1;
          }
LAB_0047856a:
          if ('\0' < local_191) {
            local_1a2 = '\x01';
          }
LAB_0047857a:
          pFVar21 = local_1a0;
          pwVar17 = local_1c0;
          local_190 = (wchar_t *)((int)local_190 + -1);
          pFVar10 = local_1a0;
          local_1c4 = local_1c0;
          __un_inc(local_18c,local_1a0);
          do {
            if ((local_1b8 != 0) &&
               (iVar7 = local_198 + -1, bVar19 = local_198 == 0, local_198 = iVar7, bVar19))
            goto LAB_004788ea;
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc(pFVar10,pFVar21);
            if (local_18c == 0xffffffff) goto LAB_004788db;
            bVar1 = (byte)local_18c;
            pFVar10 = extraout_ECX_05;
            if (local_1a8 != 99) {
              if (local_1a8 == 0x73) {
                if ((8 < (int)local_18c) && ((int)local_18c < 0xe)) goto LAB_004788db;
                if (local_18c != 0x20) goto LAB_0047862a;
              }
              if ((local_1a8 != 0x7b) ||
                 (pFVar10 = (FILE *)(int)(char)(local_28[(int)local_18c >> 3] ^ local_1a3),
                 ((uint)pFVar10 & 1 << (bVar1 & 7)) == 0)) goto LAB_004788db;
            }
LAB_0047862a:
            if (local_19a == '\0') {
              if (local_1a2 == '\0') {
                *(byte *)pwVar17 = bVar1;
                pwVar17 = (wchar_t *)((int)pwVar17 + 1);
                local_1c0 = pwVar17;
              }
              else {
                uVar4 = local_18c & 0xff;
                local_1e4 = bVar1;
                iVar7 = _isleadbyte(uVar4);
                if (iVar7 != 0) {
                  local_190 = (wchar_t *)((int)local_190 + 1);
                  uVar4 = __inc(uVar4,pFVar21);
                  local_1e3 = (undefined)uVar4;
                }
                local_1ec[0] = L'?';
                local_1ec[1] = L'\0';
                __mbtowc_l(local_1ec,(char *)&local_1e4,(size_t)(((local_1fc__u *)&local_1fc)->locinfo)->mb_cur_max,
                           &local_1fc);
                *pwVar17 = local_1ec[0];
                pwVar17 = pwVar17 + 1;
                pFVar10 = extraout_ECX_06;
                local_1c0 = pwVar17;
              }
            }
            else {
              local_1c4 = (wchar_t *)((int)local_1c4 + 1);
            }
          } while( true );
        }
        if (local_1a8 == 100) goto LAB_00478944;
        if ((int)local_1a8 < 0x65) {
LAB_004786d7:
          if (*local_1bc != local_18c) goto LAB_00478cbe;
          local_1a1 = local_1a1 + -1;
          if (local_19a == '\0') {
            local_1e8 = local_200;
          }
          goto LAB_00478c15;
        }
        if (0x67 < (int)local_1a8) {
          if (local_1a8 == 0x69) {
            local_1a8 = 100;
            goto LAB_0047818e;
          }
          if (local_1a8 != 0x6e) goto LAB_004786d7;
          pwVar17 = local_190;
          if (local_19a != '\0') goto LAB_00478c15;
          goto LAB_00478be9;
        }
        sVar14 = 0;
        if (local_18c == 0x2d) {
          *local_1b0 = 0x2d;
          sVar14 = 1;
LAB_004781c7:
          local_198 = local_198 + -1;
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc(local_1b8,local_1a0);
        }
        else if (local_18c == 0x2b) goto LAB_004781c7;
        if (local_1b8 == 0) {
          local_198 = -1;
        }
        while( true ) {
          uVar4 = local_18c & 0xff;
          iVar7 = _isdigit(uVar4);
          if ((iVar7 == 0) ||
             (iVar7 = local_198 + -1, bVar19 = local_198 == 0, local_198 = iVar7, bVar19)) break;
          local_1ac = local_1ac + 1;
          local_1b0[sVar14] = (byte)local_18c;
          sVar14 = sVar14 + 1;
          iVar7 = ___check_float_string(sVar14,local_188,&local_1d4);
          if (iVar7 == 0) goto LAB_00478cdc;
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc(extraout_ECX,local_1a0);
        }
        local_1a3 = **(byte **)((local_1fc__u *)&local_1fc)->locinfo[1].lc_codepage;
        if ((local_1a3 == (byte)local_18c) &&
           (iVar7 = local_198 + -1, bVar19 = local_198 != 0, local_198 = iVar7, bVar19)) {
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc(uVar4,local_1a0);
          local_1b0[sVar14] = local_1a3;
          sVar14 = sVar14 + 1;
          iVar7 = ___check_float_string(sVar14,local_188,&local_1d4);
          if (iVar7 == 0) goto LAB_00478cdc;
          while ((iVar7 = _isdigit(local_18c & 0xff), iVar7 != 0 &&
                 (iVar7 = local_198 + -1, bVar19 = local_198 != 0, local_198 = iVar7, bVar19))) {
            local_1ac = local_1ac + 1;
            local_1b0[sVar14] = (byte)local_18c;
            sVar14 = sVar14 + 1;
            iVar7 = ___check_float_string(sVar14,local_188,&local_1d4);
            if (iVar7 == 0) goto LAB_00478cdc;
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc(extraout_ECX_00,local_1a0);
          }
        }
        sVar15 = sVar14;
        if ((local_1ac != 0) &&
           (((local_18c == 0x65 || (local_18c == 0x45)) &&
            (iVar7 = local_198 + -1, bVar19 = local_198 != 0, local_198 = iVar7, bVar19)))) {
          local_1b0[sVar14] = 0x65;
          sVar15 = sVar14 + 1;
          iVar7 = ___check_float_string(sVar15,local_188,&local_1d4);
          if (iVar7 == 0) goto LAB_00478cdc;
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc(extraout_ECX_01,local_1a0);
          if (local_18c == 0x2d) {
            local_1b0[sVar15] = 0x2d;
            sVar15 = sVar14 + 2;
            iVar7 = ___check_float_string(sVar15,local_188,&local_1d4);
            uVar9 = extraout_ECX_03;
            if (iVar7 == 0) goto LAB_00478cdc;
LAB_00478438:
            if (local_198 == 0) {
              local_198 = 0;
            }
            else {
              local_190 = (wchar_t *)((int)local_190 + 1);
              local_198 = local_198 + -1;
              local_18c = __inc(uVar9,local_1a0);
            }
          }
          else {
            uVar9 = extraout_ECX_02;
            if (local_18c == 0x2b) goto LAB_00478438;
          }
          while ((iVar7 = _isdigit(local_18c & 0xff), iVar7 != 0 &&
                 (iVar7 = local_198 + -1, bVar19 = local_198 != 0, local_198 = iVar7, bVar19))) {
            local_1ac = local_1ac + 1;
            local_1b0[sVar15] = (byte)local_18c;
            sVar15 = sVar15 + 1;
            iVar7 = ___check_float_string(sVar15,local_188,&local_1d4);
            if (iVar7 == 0) goto LAB_00478cdc;
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc(extraout_ECX_04,local_1a0);
          }
        }
        local_190 = (wchar_t *)((int)local_190 + -1);
        __un_inc(local_18c,local_1a0);
        if (local_1ac != 0) {
          if (local_19a == '\0') {
            local_1c8 = local_1c8 + 1;
            plVar22 = &local_1fc;
            local_1b0[sVar15] = 0;
            iVar7 = local_199 + -1;
            pwVar17 = local_1c0;
            puVar8 = local_1b0;
            pcVar6 = (code *)__decode_pointer((int)PTR_LAB_004ade8c);
            (*pcVar6)(iVar7,pwVar17,puVar8,plVar22);
          }
          goto LAB_00478c15;
        }
        goto LAB_00478cdc;
      }
      if (local_1a8 == 0x70) {
        local_199 = '\x01';
        goto LAB_00478944;
      }
      if (local_1a8 == 0x73) goto LAB_0047856a;
      if (local_1a8 == 0x75) goto LAB_00478944;
      if (local_1a8 != 0x78) {
        if (local_1a8 == 0x7b) {
          if ('\0' < local_191) {
            local_1a2 = '\x01';
          }
          pbVar18 = local_1bc + 1;
          if (*pbVar18 == 0x5e) {
            pbVar18 = local_1bc + 2;
            local_1a3 = 0xff;
          }
          _memset(local_28,0,0x20);
          if (*pbVar18 == 0x5d) {
            local_28[0xb] = 0x20;
            uVar4 = 0x5d;
            pbVar18 = pbVar18 + 1;
          }
          else {
            uVar4 = (uint)local_1d5;
          }
          while( true ) {
            bVar1 = *pbVar18;
            local_1bc = pbVar18;
            if (bVar1 == 0x5d) break;
            if (((bVar1 == 0x2d) && (bVar11 = (byte)uVar4, bVar11 != 0)) &&
               (bVar2 = pbVar18[1], bVar2 != 0x5d)) {
              if (bVar2 <= bVar11) {
                uVar4 = (uint)bVar2;
                bVar2 = bVar11;
              }
              if ((byte)uVar4 <= bVar2) {
                uVar12 = (uint)(byte)((bVar2 - (byte)uVar4) + 1);
                do {
                  local_28[uVar4 >> 3] = local_28[uVar4 >> 3] | '\x01' << ((byte)uVar4 & 7);
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              uVar4 = 0;
              pbVar18 = pbVar18 + 2;
            }
            else {
              local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
              uVar4 = (uint)bVar1;
              pbVar18 = pbVar18 + 1;
            }
          }
          goto LAB_0047857a;
        }
        goto LAB_004786d7;
      }
LAB_0047818e:
      iVar7 = local_1b8;
      cVar13 = '\0';
      if (local_18c == 0x2d) {
        local_1a4 = '\x01';
LAB_004787d8:
        local_198 = local_198 + -1;
        if ((local_198 == 0) && (local_1b8 != 0)) {
          cVar13 = '\x01';
        }
        else {
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc(local_1b8,local_1a0);
          iVar7 = extraout_ECX_07;
        }
      }
      else if (local_18c == 0x2b) goto LAB_004787d8;
      if (local_18c == 0x30) {
        local_190 = (wchar_t *)((int)local_190 + 1);
        local_18c = __inc(iVar7,local_1a0);
        if (((char)local_18c == 'x') || ((char)local_18c == 'X')) {
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc(extraout_ECX_08,local_1a0);
          if ((local_1b8 != 0) && (local_198 = local_198 + -2, local_198 < 1)) {
            cVar13 = cVar13 + '\x01';
          }
          local_1a8 = 0x78;
        }
        else {
          local_1ac = 1;
          if (local_1a8 == 0x78) {
            local_190 = (wchar_t *)((int)local_190 + -1);
            __un_inc(local_18c,local_1a0);
            local_18c = 0x30;
          }
          else {
            if ((local_1b8 != 0) && (local_198 = local_198 + -1, local_198 == 0)) {
              cVar13 = cVar13 + '\x01';
            }
            local_1a8 = 0x6f;
          }
        }
      }
LAB_00478986:
      if (local_1dc == 0) {
        pwVar17 = local_1c4;
        if (cVar13 == '\0') {
          while ((local_1a8 != 0x78 && (local_1a8 != 0x70))) {
            uVar4 = local_18c & 0xff;
            iVar7 = _isdigit(uVar4);
            if (iVar7 == 0) goto LAB_00478b93;
            if (local_1a8 == 0x6f) {
              if (0x37 < (int)local_18c) goto LAB_00478b93;
              iVar7 = (int)pwVar17 << 3;
            }
            else {
              iVar7 = (int)pwVar17 * 10;
            }
LAB_00478b56:
            local_1ac = local_1ac + 1;
            pwVar17 = (wchar_t *)(iVar7 + -0x30 + local_18c);
            if ((local_1b8 != 0) && (local_198 = local_198 + -1, local_198 == 0)) goto LAB_00478bac;
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc(uVar4,local_1a0);
          }
          iVar7 = _isxdigit(local_18c & 0xff);
          if (iVar7 != 0) {
            iVar7 = (int)pwVar17 << 4;
            uVar4 = local_18c;
            local_18c = __hextodec((byte)local_18c);
            goto LAB_00478b56;
          }
LAB_00478b93:
          local_190 = (wchar_t *)((int)local_190 + -1);
          __un_inc(local_18c,local_1a0);
        }
LAB_00478bac:
        if (local_1a4 != '\0') {
          pwVar17 = (wchar_t *)-(int)pwVar17;
        }
      }
      else {
        if (cVar13 == '\0') {
          while ((local_1a8 != 0x78 && (local_1a8 != 0x70))) {
            uVar4 = local_18c & 0xff;
            iVar7 = _isdigit(uVar4);
            if (iVar7 == 0) goto LAB_00478a8d;
            if (local_1a8 == 0x6f) {
              if (0x37 < (int)local_18c) goto LAB_00478a8d;
              lVar20 = CONCAT44(((local_1d0__u *)&local_1d0)->_4_4_ << 3 | (uint)local_1d0 >> 0x1d,(uint)local_1d0 << 3)
              ;
            }
            else {
              lVar20 = __allmul((uint)local_1d0,((local_1d0__u *)&local_1d0)->_4_4_,10,0);
              uVar4 = extraout_ECX_09;
            }
LAB_00478a40:
            local_1ac = local_1ac + 1;
            local_1d0 = lVar20 + (int)(local_18c - 0x30);
            if ((local_1b8 != 0) && (local_198 = local_198 + -1, local_198 == 0)) goto LAB_00478aa6;
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc(uVar4,local_1a0);
          }
          iVar7 = _isxdigit(local_18c & 0xff);
          if (iVar7 != 0) {
            lVar20 = CONCAT44(((local_1d0__u *)&local_1d0)->_4_4_ << 4 | (uint)local_1d0 >> 0x1c,(uint)local_1d0 << 4);
            uVar4 = local_18c;
            local_18c = __hextodec((byte)local_18c);
            goto LAB_00478a40;
          }
LAB_00478a8d:
          local_190 = (wchar_t *)((int)local_190 + -1);
          __un_inc(local_18c,local_1a0);
        }
LAB_00478aa6:
        pwVar17 = local_1c4;
        if (local_1a4 != '\0') {
          local_1d0 = CONCAT44(-(((local_1d0__u *)&local_1d0)->_4_4_ + (uint)((uint)local_1d0 != 0)),-(uint)local_1d0);
        }
      }
      if (local_1a8 == 0x46) {
        local_1ac = 0;
      }
      if (local_1ac == 0) goto LAB_00478cdc;
      if (local_19a == '\0') {
        local_1c8 = local_1c8 + 1;
LAB_00478be9:
        if (local_1dc == 0) {
          if (local_199 == '\0') {
            *local_1c0 = (wchar_t)pwVar17;
          }
          else {
            *(wchar_t **)local_1c0 = pwVar17;
          }
        }
        else {
          *(uint *)local_1c0 = (uint)local_1d0;
  local_1d0__u_alias = (local_1d0__u *)&local_1d0;
          *(int *)((int)local_1c0 + 2) = local_1d0__u_alias->_4_4_;
        }
      }
      goto LAB_00478c15;
    }
LAB_00478c38:
    local_190 = (wchar_t *)((int)local_190 + 1);
    uVar4 = __inc(pvVar5,pFVar21);
    pbVar18 = param_2 + 1;
    local_1bc = pbVar18;
    local_18c = uVar4;
    if (*param_2 == uVar4) {
      uVar12 = uVar4 & 0xff;
      iVar7 = _isleadbyte(uVar12);
      if (iVar7 != 0) {
        local_190 = (wchar_t *)((int)local_190 + 1);
        uVar12 = __inc(uVar12,pFVar21);
        bVar1 = *pbVar18;
        pbVar18 = param_2 + 2;
        local_1bc = pbVar18;
        if (bVar1 == uVar12) {
          local_190 = (wchar_t *)((int)local_190 + -1);
          goto LAB_00478c8a;
        }
        __un_inc(uVar12,pFVar21);
        __un_inc(uVar4,pFVar21);
        goto LAB_00478cdc;
      }
      goto LAB_00478c8a;
    }
LAB_00478cbe:
    __un_inc(local_18c,pFVar21);
LAB_00478cdc:
    if (local_1d4 == 1) {
      _free(local_1b0);
    }
    if (local_18c == 0xffffffff) {
      if (local_1f0 != '\0') {
        *(uint *)((int)local_1f4 + 0x70) = *(uint *)((int)local_1f4 + 0x70) & 0xfffffffd;
      }
      goto LAB_00478d3e;
    }
  }
  if (local_1f0 != '\0') {
    *(uint *)((int)local_1f4 + 0x70) = *(uint *)((int)local_1f4 + 0x70) & 0xfffffffd;
  }
LAB_00478d3e:
  iVar7 = ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return iVar7;
LAB_004788db:
  local_190 = (wchar_t *)((int)local_190 + -1);
  __un_inc(local_18c,pFVar21);
LAB_004788ea:
  if (local_1c4 == pwVar17) goto LAB_00478cdc;
  if ((local_19a == '\0') && (local_1c8 = local_1c8 + 1, local_1a8 != 99)) {
    if (local_1a2 == '\0') {
      *(byte *)local_1c0 = 0;
    }
    else {
      *local_1c0 = L'\0';
    }
  }
LAB_00478c15:
  local_1a1 = local_1a1 + '\x01';
  pbVar18 = local_1bc + 1;
  local_1bc = pbVar18;
LAB_00478c8a:
  param_2 = pbVar18;
  if ((local_18c == 0xffffffff) &&
     ((*pbVar18 != 0x25 || (param_2 = local_1bc, local_1bc[1] != 0x6e)))) goto LAB_00478cdc;
LAB_00478ca6:
  bVar1 = *param_2;
  if (bVar1 == 0) goto LAB_00478cdc;
  goto LAB_00477eb9;
}


