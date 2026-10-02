/* uint __cdecl __mbctoupper_l(uint _Ch, _locale_t _Locale) @ 00479f3a  166 bytes */

#include "th12.h"

/* Library Function - Single Match
    __mbctoupper_l
   
   Library: Visual Studio 2008 Release */

typedef struct local_1c__u { undefined4 _; undefined4 mbcinfo; } local_1c__u;
uint __cdecl __mbctoupper_l(uint _Ch,_locale_t _Locale)

{
  local_1c__u *local_1c__u_alias;
  int iVar1;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  undefined local_b;
  CHAR local_8;
  undefined local_7;
  
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_Ch < 0x100) {
  local_1c__u_alias = (local_1c__u *)&local_1c;
    if (((local_1c__u_alias->mbcinfo)->mbctype[_Ch + 5] & 0x20) != 0) {
  local_1c__u_alias = (local_1c__u *)&local_1c;
      _Ch = (uint)(local_1c__u_alias->mbcinfo)->mbcasemap[_Ch + 4];
    }
  }
  else {
    local_8 = (CHAR)(_Ch >> 8);
    local_7 = (undefined)_Ch;
  local_1c__u_alias = (local_1c__u *)&local_1c;
    if ((((local_1c__u_alias->mbcinfo)->mbctype[(_Ch >> 8 & 0xff) + 5] & 4) == 0) ||
  local_1c__u_alias = (local_1c__u *)&local_1c;
       (iVar1 = ___crtLCMapStringA(&local_1c,*(LPCWSTR *)(local_1c__u_alias->mbcinfo)->mbulinfo,0x200,&local_8
  local_1c__u_alias = (local_1c__u *)&local_1c;
                                   ,2,&local_c,2,(local_1c__u_alias->mbcinfo)->mbcodepage,1), iVar1 == 0)) {
      if (local_10 == '\0') {
        return _Ch;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return _Ch;
    }
    _Ch = (uint)CONCAT11(local_c,local_b);
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return _Ch;
}


