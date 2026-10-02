/* int __cdecl ___getlocaleinfo(_locale_t _Locale, int _Lc_type, LPCWSTR _LocaleName, LCTYPE _FieldType, void * _Address) @ 0047a12b  380 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 2008 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  undefined4 stack0xfffffffc;
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  LPSTR _LpLCData;
  char *_Dst;
  int iVar5;
  errno_t eVar6;
  byte *pbVar7;
  CHAR local_88 [128];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  if (_Lc_type != 1) {
    if (_Lc_type == 0) {
      pbVar7 = &DAT_004b41d4;
      iVar5 = ___crtGetLocaleInfoW(_Locale,(LCID)_LocaleName,_FieldType,(LPWSTR)&DAT_004b41d4,4);
      if (iVar5 != 0) {
        *(undefined *)_Address = 0;
        do {
          bVar1 = *pbVar7;
          iVar5 = _isdigit((uint)bVar1);
          if (iVar5 == 0) break;
                    /* WARNING: Load size is inaccurate */
          pbVar7 = pbVar7 + 2;
          *(byte *)_Address = *_Address * '\n' + bVar1 + -0x30;
        } while ((int)pbVar7 < 0x4b41dc);
      }
    }
    goto LAB_0047a21d;
  }
  _LpLCData = local_88;
  bVar2 = false;
  sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) ||
        (sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,(LPSTR)0x0,0), sVar3 == 0)) ||
       (_LpLCData = (LPSTR)__calloc_crt(sVar3,1), _LpLCData == (LPSTR)0x0)) goto LAB_0047a21d;
    bVar2 = true;
    sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,sVar3);
    if (sVar3 != 0) goto LAB_0047a1f5;
  }
  else {
LAB_0047a1f5:
    _Dst = (char *)__calloc_crt(sVar3,1);
    *(char **)_Address = _Dst;
    if (_Dst != (char *)0x0) {
      eVar6 = _strncpy_s(_Dst,sVar3,_LpLCData,sVar3 - 1);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (bVar2) {
        _free(_LpLCData);
      }
      goto LAB_0047a21d;
    }
    if (!bVar2) goto LAB_0047a21d;
  }
  _free(_LpLCData);
LAB_0047a21d:
  iVar5 = ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


