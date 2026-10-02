/* int __cdecl __iswprint_l(wint_t _C, _locale_t _Locale) @ 0047c750  26 bytes */

#include "th12.h"

/* Library Function - Single Match
    __iswprint_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswprint_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x157,_Locale);
  return iVar1;
}


