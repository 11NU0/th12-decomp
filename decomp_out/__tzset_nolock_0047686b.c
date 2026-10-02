/* undefined __stdcall __tzset_nolock(void) @ 0047686b  799 bytes */
#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __tzset_nolock
   
   Library: Visual Studio 2008 Release */

void __tzset_nolock(void)

{
  char cVar1;
  char cVar2;
  undefined **ppuVar3;
  errno_t eVar4;
  UINT CodePage;
  char *_Str1;
  int iVar5;
  size_t sVar6;
  DWORD DVar7;
  long lVar8;
  int *piVar9;
  char *pcVar10;
  int local_34;
  int local_30;
  long local_2c;
  int local_28;
  undefined **local_24;
  long local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004aad78;
  uStack_c = 0x476877;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = (undefined **)0x0;
  __lock(7);
  local_8 = (undefined *)0x0;
  local_24 = FUN_00477413();
  eVar4 = __get_timezone(local_20);
  if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar4 = __get_daylight(&local_28);
  if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar4 = __get_dstbias(&local_2c);
  if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  CodePage = ____lc_codepage_func();
  DAT_004b41c4 = 0;
  DAT_004adaec = 0xffffffff;
  DAT_004adae0 = 0xffffffff;
  _Str1 = __getenv_helper_nolock("TZ");
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_004b41c8 != (char *)0x0) {
      _free(DAT_004b41c8);
      DAT_004b41c8 = (char *)0x0;
    }
    DVar7 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_004b4118);
    if (DVar7 != 0xffffffff) {
      DAT_004b41c4 = 1;
      local_20[0] = DAT_004b4118 * 0x3c;
      if (DAT_004b415e != 0) {
        local_20[0] = local_20[0] + DAT_004b416c * 0x3c;
      }
      if ((DAT_004b41b2 == 0) || (DAT_004b41c0 == 0)) {
        local_28 = 0;
        local_2c = 0;
      }
      else {
        local_28 = 1;
        local_2c = (DAT_004b41c0 - DAT_004b416c) * 0x3c;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_004b411c,-1,*local_24,0x3f,(LPCSTR)0x0,
                                  &local_34);
      if ((iVar5 == 0) || (local_34 != 0)) {
        **local_24 = 0;
      }
      else {
        (*local_24)[0x3f] = 0;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_004b4170,-1,local_24[1],0x3f,(LPCSTR)0x0,
                                  &local_34);
      if ((iVar5 == 0) || (local_34 != 0)) {
        *local_24[1] = 0;
      }
      else {
        local_24[1][0x3f] = 0;
      }
    }
  }
  else {
    if (DAT_004b41c8 != (char *)0x0) {
      iVar5 = _strcmp(_Str1,DAT_004b41c8);
      if (iVar5 == 0) goto LAB_00476a87;
      if (DAT_004b41c8 != (char *)0x0) {
        _free(DAT_004b41c8);
      }
    }
    sVar6 = _strlen(_Str1);
    DAT_004b41c8 = (char *)__malloc_crt(sVar6 + 1);
    if (DAT_004b41c8 != (char *)0x0) {
      pcVar10 = _Str1;
      sVar6 = _strlen(_Str1);
      eVar4 = _strcpy_s(DAT_004b41c8,sVar6 + 1,pcVar10);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_00476a8e;
    }
  }
LAB_00476a87:
  local_30 = 1;
LAB_00476a8e:
  FID_conflict___set_dstbias(local_20[0]);
  FID_conflict___set_dstbias(local_28);
  FID_conflict___set_dstbias(local_2c);
  local_8 = (undefined *)0xfffffffe;
  FUN_00476b17();
  ppuVar3 = local_24;
  if (local_30 == 0) {
    eVar4 = _strncpy_s(*local_24,0x40,_Str1,3);
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    pcVar10 = _Str1 + 3;
    cVar2 = *pcVar10;
    if (cVar2 == '-') {
      pcVar10 = _Str1 + 4;
    }
    lVar8 = _atol(pcVar10);
    local_20[0] = lVar8 * 0xe10;
    for (; (cVar1 = *pcVar10, cVar1 == '+' || (('/' < cVar1 && (cVar1 < ':'))));
        pcVar10 = pcVar10 + 1) {
    }
    if (*pcVar10 == ':') {
      pcVar10 = pcVar10 + 1;
      lVar8 = _atol(pcVar10);
      local_20[0] = local_20[0] + lVar8 * 0x3c;
      for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
      }
      if (*pcVar10 == ':') {
        pcVar10 = pcVar10 + 1;
        lVar8 = _atol(pcVar10);
        local_20[0] = local_20[0] + lVar8;
        for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
        }
      }
    }
    if (cVar2 == '-') {
      local_20[0] = -local_20[0];
    }
    local_28 = (int)*pcVar10;
    if (local_28 == 0) {
      *ppuVar3[1] = 0;
    }
    else {
      eVar4 = _strncpy_s(ppuVar3[1],0x40,pcVar10,3);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    lVar8 = local_20[0];
    piVar9 = FUN_0047740d();
    iVar5 = local_28;
    *piVar9 = lVar8;
    piVar9 = FUN_00477401();
    *piVar9 = iVar5;
  }
  return;
}


