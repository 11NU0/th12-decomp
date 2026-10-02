/* int __cdecl __mbsnbicoll_l(uchar * _Str1, uchar * _Str2, size_t _MaxCount, _locale_t _Locale) @ 0048e23b  238 bytes */

#include "th12.h"

/* Library Function - Single Match
    __mbsnbicoll_l
   
   Library: Visual Studio 2008 Release */

typedef struct local_14__u { undefined4 _; undefined4 mbcinfo; } local_14__u;
int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  local_14__u *local_14__u_alias;
  int *piVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
  local_14__u_alias = (local_14__u *)&local_14;
    if ((local_14__u_alias->mbcinfo)->ismbcodepage == 0) {
      iVar2 = __strnicoll_l((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = ___crtCompareStringA
  local_14__u_alias = (local_14__u *)&local_14;
                        (&local_14,*(LPCWSTR *)(local_14__u_alias->mbcinfo)->mbulinfo,0x1001,(LPCSTR)_Str1,
  local_14__u_alias = (local_14__u *)&local_14;
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,(local_14__u_alias->mbcinfo)->mbcodepage);
      if (iVar2 == 0) goto LAB_0048e306;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_0048e306:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


