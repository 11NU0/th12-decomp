/* int __cdecl __wctomb_l(char * _MbCh, wchar_t _WCh, _locale_t _Locale) @ 0047c520  81 bytes */
#include "th12.h"

/* Library Function - Single Match
    __wctomb_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale)

{
  errno_t eVar1;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  int local_8;
  
  local_8 = -1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  eVar1 = __wctomb_s_l(&local_8,_MbCh,(size_t)(local_18.locinfo)->locale_name[3],_WCh,&local_18);
  if (eVar1 != 0) {
    local_8 = -1;
  }
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
  }
  return local_8;
}


