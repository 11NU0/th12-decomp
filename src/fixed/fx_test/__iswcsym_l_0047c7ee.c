/* int __cdecl __iswcsym_l(wint_t _C, _locale_t _Locale) @ 0047c7ee  42 bytes */

#include "th12.h"

/* Library Function - Single Match
    __iswcsym_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswcsym_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x107,_Locale);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}


