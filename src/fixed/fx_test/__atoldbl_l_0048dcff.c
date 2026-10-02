/* int __cdecl __atoldbl_l(_LDOUBLE * _Result, char * _Str, _locale_t _Locale) @ 0048dcff  169 bytes */

#include "th12.h"

/* Library Function - Single Match
    __atoldbl_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  char *local_2c;
  localeinfo_struct local_28;
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_28,_Locale);
  local_18 = ___strgtold12_l(&local_14,&local_2c,_Str,1,0,0,0,&local_28);
  IVar1 = __ld12told(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_0048dd59:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_0048dd99;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_0048dd8b:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_0048dd99;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_0048dd8b;
    goto LAB_0048dd59;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_0048dd99:
  iVar2 = ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


