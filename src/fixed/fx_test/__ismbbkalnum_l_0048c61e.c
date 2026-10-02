/* int __cdecl __ismbbkalnum_l(uint _C, _locale_t _Locale) @ 0048c61e  25 bytes */

#include "th12.h"

/* Library Function - Single Match
    __ismbbkalnum_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkalnum_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,1);
  return iVar1;
}


