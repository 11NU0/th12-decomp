/* int __cdecl __output_s_l(FILE * _File, char * _Format, _locale_t _Locale, va_list _ArgList) @ 0047c9cb  2990 bytes */
#include "th12.h"

/* Library Function - Single Match
    __output_s_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __output_s_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  FILE *pFVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  errno_t eVar8;
  int iVar9;
  undefined *puVar10;
  int extraout_ECX;
  uint uVar11;
  byte *pbVar12;
  wchar_t *pwVar13;
  size_t sVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  wchar_t *pwVar18;
  undefined4 uVar19;
  localeinfo_struct *plVar20;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  undefined4 local_270;
  size_t local_268;
  FILE *local_264;
  int local_260;
  int local_25c;
  wchar_t *local_258;
  localeinfo_struct local_254;
  int local_24c;
  char local_248;
  uint local_244;
  byte *local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined local_230;
  char local_22f;
  int local_22c;
  wchar_t *local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  local_264 = _File;
  local_228 = (wchar_t *)_ArgList;
  local_260 = 0;
  local_214 = 0;
  local_238 = 0;
  local_21c = 0;
  local_234 = 0;
  local_25c = 0;
  local_23c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_254,_Locale);
  if (_File == (FILE *)0x0) {
LAB_0047ca36:
    piVar4 = __errno();
    *piVar4 = 0x16;
  }
  else {
    if ((*(byte *)&_File->_flag & 0x40) == 0) {
      uVar5 = __fileno(_File);
      if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
        puVar10 = &DAT_004adbb0;
      }
      else {
        puVar10 = (undefined *)((uVar5 & 0x1f) * 0x40 + (&DAT_004d6320)[(int)uVar5 >> 5]);
      }
      if ((puVar10[0x24] & 0x7f) == 0) {
        if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
          puVar10 = &DAT_004adbb0;
        }
        else {
          puVar10 = (undefined *)((uVar5 & 0x1f) * 0x40 + (&DAT_004d6320)[(int)uVar5 >> 5]);
        }
        if ((puVar10[0x24] & 0x80) == 0) goto LAB_0047cacf;
      }
      goto LAB_0047ca36;
    }
LAB_0047cacf:
    if (_Format == (char *)0x0) goto LAB_0047ca36;
    local_215 = *_Format;
    local_22c = 0;
    local_224 = 0;
    local_244 = 0;
    local_258 = (wchar_t *)0x0;
    if (local_215 == 0) {
LAB_0047d551:
      if (local_248 != '\0') {
        *(uint *)(local_24c + 0x70) = *(uint *)(local_24c + 0x70) & 0xfffffffd;
      }
      goto LAB_0047d56a;
    }
    do {
      pbVar12 = (byte *)_Format + 1;
      uVar5 = 0;
      local_240 = pbVar12;
      if (local_22c < 0) break;
      if ((byte)(local_215 - 0x20) < 0x59) {
        uVar5 = (byte)(&DAT_0049d620)[(char)local_215] & 0xf;
      }
      local_244 = (uint)((byte)(&DAT_0049d640)[local_244 + uVar5 * 9] >> 4);
      if (local_244 == 8) goto LAB_0047ca36;
      switch(local_244) {
      case 0:
switchD_0047cb5d_caseD_0:
        local_23c = 0;
        iVar9 = __isleadbyte_l((uint)local_215,&local_254);
        if (iVar9 != 0) {
          _write_char(local_264);
          local_240 = (byte *)_Format + 2;
          if (*pbVar12 == 0) goto LAB_0047ca36;
        }
        _write_char(local_264);
        break;
      case 1:
        local_21c = -1;
        local_270 = 0;
        local_25c = 0;
        local_238 = 0;
        local_234 = 0;
        local_214 = 0;
        local_23c = 0;
        break;
      case 2:
        if (local_215 == 0x20) {
          local_214 = local_214 | 2;
        }
        else if (local_215 == 0x23) {
          local_214 = local_214 | 0x80;
        }
        else if (local_215 == 0x2b) {
          local_214 = local_214 | 1;
        }
        else if (local_215 == 0x2d) {
          local_214 = local_214 | 4;
        }
        else if (local_215 == 0x30) {
          local_214 = local_214 | 8;
        }
        break;
      case 3:
        if (local_215 == 0x2a) {
          local_228 = (wchar_t *)((int)_ArgList + 4);
          local_238 = *(int *)_ArgList;
          if (local_238 < 0) {
            local_214 = local_214 | 4;
            local_238 = -local_238;
          }
        }
        else {
          local_238 = local_238 * 10 + -0x30 + (int)(char)local_215;
        }
        break;
      case 4:
        local_21c = 0;
        break;
      case 5:
        if (local_215 == 0x2a) {
          local_228 = (wchar_t *)((int)_ArgList + 4);
          local_21c = *(int *)_ArgList;
          if (local_21c < 0) {
            local_21c = -1;
          }
        }
        else {
          local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
        }
        break;
      case 6:
        if (local_215 == 0x49) {
          bVar1 = *pbVar12;
          if ((bVar1 == 0x36) && (((byte *)_Format)[2] == 0x34)) {
            local_214 = local_214 | 0x8000;
            local_240 = (byte *)_Format + 3;
          }
          else if ((bVar1 == 0x33) && (((byte *)_Format)[2] == 0x32)) {
            local_214 = local_214 & 0xffff7fff;
            local_240 = (byte *)_Format + 3;
          }
          else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                   ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
            local_244 = 0;
            goto switchD_0047cb5d_caseD_0;
          }
        }
        else if (local_215 == 0x68) {
          local_214 = local_214 | 0x20;
        }
        else if (local_215 == 0x6c) {
          if (*pbVar12 == 0x6c) {
            local_214 = local_214 | 0x1000;
            local_240 = (byte *)_Format + 2;
          }
          else {
            local_214 = local_214 | 0x10;
          }
        }
        else if (local_215 == 0x77) {
          local_214 = local_214 | 0x800;
        }
        break;
      case 7:
        if ((char)local_215 < 'e') {
          if (local_215 == 100) {
LAB_0047d049:
            local_214 = local_214 | 0x40;
LAB_0047d050:
            local_224 = 10;
LAB_0047d05a:
            if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
              local_228 = (wchar_t *)((int)_ArgList + 4);
              if ((local_214 & 0x20) == 0) {
                uVar5 = *(uint *)_ArgList;
                if ((local_214 & 0x40) == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = (int)uVar5 >> 0x1f;
                }
              }
              else {
                if ((local_214 & 0x40) == 0) {
                  uVar5 = (uint)(ushort)*(wchar_t *)_ArgList;
                }
                else {
                  uVar5 = (uint)*(wchar_t *)_ArgList;
                }
                uVar11 = (int)uVar5 >> 0x1f;
              }
            }
            else {
              local_228 = (wchar_t *)((int)_ArgList + 8);
              uVar5 = *(uint *)_ArgList;
              uVar11 = *(uint *)((int)_ArgList + 4);
            }
            if ((((local_214 & 0x40) != 0) && ((int)uVar11 < 1)) && ((int)uVar11 < 0)) {
              bVar15 = uVar5 != 0;
              uVar5 = -uVar5;
              uVar11 = -(uVar11 + bVar15);
              local_214 = local_214 | 0x100;
            }
            uVar16 = CONCAT44(uVar11,uVar5);
            if ((local_214 & 0x9000) == 0) {
              uVar11 = 0;
            }
            if (local_21c < 0) {
              local_21c = 1;
            }
            else {
              local_214 = local_214 & 0xfffffff7;
              if (0x200 < local_21c) {
                local_21c = 0x200;
              }
            }
            if (uVar5 == 0 && uVar11 == 0) {
              local_234 = 0;
            }
            pwVar13 = &local_11;
            while( true ) {
              uVar5 = uVar11;
              iVar9 = local_21c + -1;
              if ((local_21c < 1) && ((uint)uVar16 == 0 && uVar5 == 0)) break;
              local_21c = iVar9;
              uVar16 = __aulldvrm((uint)uVar16,uVar5,local_224,(int)local_224 >> 0x1f);
              iVar9 = extraout_ECX + 0x30;
              if (0x39 < iVar9) {
                iVar9 = iVar9 + local_260;
              }
              *(char *)pwVar13 = (char)iVar9;
              pwVar13 = (wchar_t *)((int)pwVar13 + -1);
              uVar11 = (uint)((ulonglong)uVar16 >> 0x20);
              local_268 = uVar5;
            }
            local_224 = (int)&local_11 + -(int)pwVar13;
            local_220 = (wchar_t *)((int)pwVar13 + 1);
            local_21c = iVar9;
            if (((local_214 & 0x200) != 0) && ((local_224 == 0 || (*(char *)local_220 != '0')))) {
              *(char *)pwVar13 = '0';
              local_224 = (int)&local_11 + -(int)pwVar13 + 1;
              local_220 = pwVar13;
            }
          }
          else if ((char)local_215 < 'T') {
            if (local_215 == 0x53) {
              if ((local_214 & 0x830) == 0) {
                local_214 = local_214 | 0x800;
              }
              goto LAB_0047ce78;
            }
            if (local_215 == 0x41) {
LAB_0047cdf6:
              local_215 = local_215 + 0x20;
              local_270 = 1;
LAB_0047ce09:
              local_214 = local_214 | 0x40;
              local_268 = 0x200;
              pwVar13 = local_210;
              sVar14 = local_268;
              pwVar18 = local_210;
              if (local_21c < 0) {
                local_21c = 6;
              }
              else if (local_21c == 0) {
                if (local_215 == 0x67) {
                  local_21c = 1;
                }
              }
              else {
                if (0x200 < local_21c) {
                  local_21c = 0x200;
                }
                if (0xa3 < local_21c) {
                  sVar14 = local_21c + 0x15d;
                  local_220 = local_210;
                  local_258 = (wchar_t *)__malloc_crt(sVar14);
                  pwVar13 = local_258;
                  pwVar18 = local_258;
                  if (local_258 == (wchar_t *)0x0) {
                    local_21c = 0xa3;
                    pwVar13 = local_210;
                    sVar14 = local_268;
                    pwVar18 = local_220;
                  }
                }
              }
              local_220 = pwVar18;
              local_268 = sVar14;
              local_228 = (wchar_t *)((int)_ArgList + 8);
              local_27c = *(undefined4 *)_ArgList;
              local_278 = *(undefined4 *)((int)_ArgList + 4);
              plVar20 = &local_254;
              iVar6 = (int)(char)local_215;
              puVar17 = &local_27c;
              pwVar18 = pwVar13;
              sVar14 = local_268;
              iVar9 = local_21c;
              uVar19 = local_270;
              pcVar7 = (code *)__decode_pointer((int)PTR_LAB_004ade88);
              (*pcVar7)(puVar17,pwVar18,sVar14,iVar6,iVar9,uVar19,plVar20);
              uVar5 = local_214 & 0x80;
              if ((uVar5 != 0) && (local_21c == 0)) {
                plVar20 = &local_254;
                pwVar18 = pwVar13;
                pcVar7 = (code *)__decode_pointer((int)PTR_LAB_004ade94);
                (*pcVar7)(pwVar18,plVar20);
              }
              if ((local_215 == 0x67) && (uVar5 == 0)) {
                plVar20 = &local_254;
                pwVar18 = pwVar13;
                pcVar7 = (code *)__decode_pointer((int)PTR_LAB_004ade90);
                (*pcVar7)(pwVar18,plVar20);
              }
              if (*(char *)pwVar13 == '-') {
                local_214 = local_214 | 0x100;
                pwVar13 = (wchar_t *)((int)pwVar13 + 1);
                local_220 = pwVar13;
              }
LAB_0047cfab:
              local_224 = _strlen((char *)pwVar13);
            }
            else if (local_215 == 0x43) {
              if ((local_214 & 0x830) == 0) {
                local_214 = local_214 | 0x800;
              }
LAB_0047ceeb:
              local_228 = (wchar_t *)((int)_ArgList + 4);
              if ((local_214 & 0x810) == 0) {
                local_210[0]._0_1_ = *_ArgList;
                local_224 = 1;
              }
              else {
                eVar8 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,*(wchar_t *)_ArgList);
                if (eVar8 != 0) {
                  local_25c = 1;
                }
              }
              local_220 = local_210;
            }
            else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_0047cdf6;
          }
          else {
            if (local_215 == 0x58) goto LAB_0047d1ac;
            if (local_215 == 0x5a) {
              psVar2 = *(short **)_ArgList;
              local_228 = (wchar_t *)((int)_ArgList + 4);
              if ((psVar2 == (short *)0x0) ||
                 (local_220 = *(wchar_t **)(psVar2 + 2), local_220 == (wchar_t *)0x0)) {
                local_220 = (wchar_t *)PTR_s__null__004ad3d8;
                pwVar13 = (wchar_t *)PTR_s__null__004ad3d8;
                goto LAB_0047cfab;
              }
              local_224 = (size_t)*psVar2;
              if ((local_214 & 0x800) == 0) {
                local_23c = 0;
              }
              else {
                local_224 = (int)local_224 / 2;
                local_23c = 1;
              }
            }
            else {
              if (local_215 == 0x61) goto LAB_0047ce09;
              if (local_215 == 99) goto LAB_0047ceeb;
            }
          }
LAB_0047d385:
          if (local_25c == 0) {
            if ((local_214 & 0x40) != 0) {
              if ((local_214 & 0x100) == 0) {
                if ((local_214 & 1) == 0) {
                  if ((local_214 & 2) == 0) goto LAB_0047d3ce;
                  local_230 = 0x20;
                }
                else {
                  local_230 = 0x2b;
                }
              }
              else {
                local_230 = 0x2d;
              }
              local_234 = 1;
            }
LAB_0047d3ce:
            iVar9 = (local_238 - local_224) - local_234;
            if ((local_214 & 0xc) == 0) {
              _write_multi_char(0x20,iVar9,local_264);
            }
            pFVar3 = local_264;
            _write_string(local_234);
            if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
              _write_multi_char(0x30,iVar9,pFVar3);
            }
            if ((local_23c == 0) || ((int)local_224 < 1)) {
              _write_string(local_224);
            }
            else {
              local_268 = local_224;
              pwVar13 = local_220;
              do {
                _WCh = *pwVar13;
                local_268 = local_268 - 1;
                pwVar13 = pwVar13 + 1;
                eVar8 = _wctomb_s(&local_274,(char *)((int)&local_11 + 1),6,_WCh);
                if ((eVar8 != 0) || (local_274 == 0)) {
                  local_22c = -1;
                  break;
                }
                _write_string(local_274);
              } while (local_268 != 0);
            }
            if ((-1 < local_22c) && ((local_214 & 4) != 0)) {
              _write_multi_char(0x20,iVar9,pFVar3);
            }
          }
        }
        else {
          if ('p' < (char)local_215) {
            if (local_215 == 0x73) {
LAB_0047ce78:
              iVar9 = local_21c;
              if (local_21c == -1) {
                iVar9 = 0x7fffffff;
              }
              local_228 = (wchar_t *)((int)_ArgList + 4);
              local_220 = *(wchar_t **)_ArgList;
              if ((local_214 & 0x810) == 0) {
                pwVar13 = local_220;
                if (local_220 == (wchar_t *)0x0) {
                  local_220 = (wchar_t *)PTR_s__null__004ad3d8;
                  pwVar13 = (wchar_t *)PTR_s__null__004ad3d8;
                }
                for (; (iVar9 != 0 && (iVar9 = iVar9 + -1, *(char *)pwVar13 != '\0'));
                    pwVar13 = (wchar_t *)((int)pwVar13 + 1)) {
                }
                local_224 = (int)pwVar13 - (int)local_220;
              }
              else {
                if (local_220 == (wchar_t *)0x0) {
                  local_220 = (wchar_t *)PTR_u__null__004ad3dc;
                }
                local_23c = 1;
                for (pwVar13 = local_220; (iVar9 != 0 && (iVar9 = iVar9 + -1, *pwVar13 != L'\0'));
                    pwVar13 = pwVar13 + 1) {
                }
                local_224 = (int)pwVar13 - (int)local_220 >> 1;
              }
              goto LAB_0047d385;
            }
            if (local_215 == 0x75) goto LAB_0047d050;
            if (local_215 != 0x78) goto LAB_0047d385;
            local_260 = 0x27;
LAB_0047d1d8:
            local_224 = 0x10;
            if ((local_214 & 0x80) != 0) {
              local_22f = (char)local_260 + 'Q';
              local_230 = 0x30;
              local_234 = 2;
            }
            goto LAB_0047d05a;
          }
          if (local_215 == 0x70) {
            local_21c = 8;
LAB_0047d1ac:
            local_260 = 7;
            goto LAB_0047d1d8;
          }
          if ((char)local_215 < 'e') goto LAB_0047d385;
          if ((char)local_215 < 'h') goto LAB_0047ce09;
          if (local_215 == 0x69) goto LAB_0047d049;
          if (local_215 != 0x6e) {
            if (local_215 != 0x6f) goto LAB_0047d385;
            local_224 = 8;
            if ((local_214 & 0x80) != 0) {
              local_214 = local_214 | 0x200;
            }
            goto LAB_0047d05a;
          }
          piVar4 = *(int **)_ArgList;
          local_228 = (wchar_t *)((int)_ArgList + 4);
          iVar9 = __get_printf_count_output();
          if (iVar9 == 0) goto LAB_0047ca36;
          if ((local_214 & 0x20) == 0) {
            *piVar4 = local_22c;
          }
          else {
            *(undefined2 *)piVar4 = (undefined2)local_22c;
          }
          local_25c = 1;
        }
        if (local_258 != (wchar_t *)0x0) {
          _free(local_258);
          local_258 = (wchar_t *)0x0;
        }
      }
      local_215 = *local_240;
      _Format = (char *)local_240;
      _ArgList = (va_list)local_228;
    } while (local_215 != 0);
    if ((local_244 == 0) || (local_244 == 7)) goto LAB_0047d551;
    piVar4 = __errno();
    *piVar4 = 0x16;
  }
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_248 != '\0') {
    *(uint *)(local_24c + 0x70) = *(uint *)(local_24c + 0x70) & 0xfffffffd;
  }
LAB_0047d56a:
  iVar9 = ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return iVar9;
}


