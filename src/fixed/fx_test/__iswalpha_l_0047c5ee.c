/* int __cdecl __iswalpha_l(wint_t _C, _locale_t _Locale) @ 0047c5ee  26 bytes */

#include "th12.h"

/* Library Function - Single Match
    __iswalpha_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswalpha_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x103,_Locale);
  return iVar1;
}


