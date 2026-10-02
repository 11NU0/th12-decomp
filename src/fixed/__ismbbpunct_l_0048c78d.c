/* int __cdecl __ismbbpunct_l(uint _C, _locale_t _Locale) @ 0048c78d  25 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ismbbpunct_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbpunct_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0x10,2);
  return iVar1;
}


