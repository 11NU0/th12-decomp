/* int __cdecl __ismbbkana_l(uint _C, _locale_t _Locale) @ 0048c820  85 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ismbbkana_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkana_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if ((local_10 == 0) || (*(int *)(local_10 + 4) != 0x3a4)) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = x_ismbbtype_l(_Locale,_C,0,3);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}


