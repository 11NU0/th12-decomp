/* int __cdecl __ismbbkpunct_l(uint _C, _locale_t _Locale) @ 0048c680  25 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ismbbkpunct_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkpunct_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,2);
  return iVar1;
}


