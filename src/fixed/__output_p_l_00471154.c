/* int __cdecl __output_p_l(FILE * _File, char * _Format, _locale_t _Locale, va_list _ArgList) @ 00471154  916 bytes */
#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x0047235c) */
/* WARNING: Removing unreachable block (ram,0x00472364) */
/* WARNING: Removing unreachable block (ram,0x0047236e) */
/* WARNING: Removing unreachable block (ram,0x0047237a) */
/* WARNING: Removing unreachable block (ram,0x00472380) */
/* WARNING: Removing unreachable block (ram,0x00472383) */
/* WARNING: Removing unreachable block (ram,0x00472386) */
/* WARNING: Removing unreachable block (ram,0x00472389) */
/* WARNING: Removing unreachable block (ram,0x0047238c) */
/* WARNING: Removing unreachable block (ram,0x0047239e) */
/* WARNING: Removing unreachable block (ram,0x0047238f) */
/* WARNING: Removing unreachable block (ram,0x00472397) */
/* WARNING: Removing unreachable block (ram,0x004723a3) */
/* Library Function - Single Match
    __output_p_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __output_p_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  char *_Str;
  undefined local_8d4 [1600];
  char *local_294;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  FILE *local_274;
  undefined4 local_26c;
  uint local_268;
  undefined4 local_264;
  char *local_260;
  undefined4 local_25c;
  int local_258;
  undefined4 local_254;
  char *local_248;
  undefined4 local_244;
  _LocaleUpdate local_240 [8];
  int local_238;
  char local_234;
  char local_230;
  int local_22c;
  int local_228;
  undefined4 local_224;
  int local_21c;
  va_list local_218;
  undefined4 local_214;
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  local_274 = _File;
  local_218 = _ArgList;
  local_278 = 0;
  local_214 = 0;
  local_25c = 0;
  local_27c = 0;
  local_264 = 0;
  _LocaleUpdate__LocaleUpdate(local_240,_Locale);
  local_228 = -1;
  local_260 = (char *)0x0;
  if (_File != (FILE *)0x0) {
    if ((*(byte *)&_File->_flag & 0x40) == 0) {
      uVar2 = __fileno(_File);
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar5 = &DAT_004adbb0;
      }
      else {
        puVar5 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_004d6320)[(int)uVar2 >> 5]);
      }
      if ((puVar5[0x24] & 0x7f) == 0) {
        if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
          puVar5 = &DAT_004adbb0;
        }
        else {
          puVar5 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_004d6320)[(int)uVar2 >> 5]);
        }
        if ((puVar5[0x24] & 0x80) == 0) goto LAB_00471257;
      }
    }
    else {
LAB_00471257:
      if (_Format != (char *)0x0) {
        local_244 = 0;
        local_294 = _Format;
        local_22c = 0;
        do {
          if ((local_22c == 1) && (local_228 == 0)) break;
          local_258 = -1;
          local_21c = -1;
          local_228 = -1;
          local_26c = 0;
          local_230 = *_Format;
          local_268 = 0;
          local_280 = 0;
          local_254 = 0;
          local_224 = 0;
          _Str = local_294;
          if (local_230 != '\0') {
            do {
              _Str = _Str + 1;
              local_248 = _Str;
              if ((byte)(local_230 - 0x20U) < 0x59) {
                uVar2 = (byte)(&DAT_0049d620)[local_230] & 0xf;
              }
              else {
                uVar2 = 0;
              }
              local_268 = (uint)((byte)(&DAT_0049d640)[local_268 + uVar2 * 9] >> 4);
              if (local_268 == 1) {
                if (*_Str != '%') {
                  lVar3 = _strtol(_Str,&local_260,10);
                  if ((lVar3 < 1) || (*local_260 != '$')) {
                    local_228 = 0;
                  }
                  else {
                    if (local_22c == 0) {
                      _memset(local_8d4,0,0x640);
                    }
                    local_228 = 1;
                    lVar3 = _strtol(_Str,&local_260,10);
                    local_21c = lVar3 + -1;
                    local_248 = local_260 + 1;
                    if (local_22c == 0) {
                      if (((local_21c < 0) || (*local_260 != '$')) || (99 < local_21c))
                      goto LAB_004711c0;
                      if (local_258 < local_21c) {
                        local_258 = local_21c;
                      }
                    }
                  }
                }
LAB_004713fa:
                    /* WARNING: Could not recover jumptable at 0x00471400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                iVar4 = (*(code *)(&PTR_DAT_004723f4)[local_268])();
                return iVar4;
              }
              if (local_268 == 8) goto LAB_004711c0;
              if (local_268 < 8) goto LAB_004713fa;
              local_230 = *_Str;
            } while (local_230 != '\0');
            if ((local_268 != 0) && (local_268 != 7)) goto LAB_004711c0;
          }
          local_22c = local_22c + 1;
        } while (local_22c < 2);
        if (local_234 != '\0') {
          *(uint *)((int)local_238 + 0x70) = *(uint *)((int)local_238 + 0x70) & 0xfffffffd;
        }
        goto LAB_004723e4;
      }
    }
  }
LAB_004711c0:
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_234 != '\0') {
    *(uint *)((int)local_238 + 0x70) = *(uint *)((int)local_238 + 0x70) & 0xfffffffd;
  }
LAB_004723e4:
  iVar4 = ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


