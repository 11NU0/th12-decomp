/* int __cdecl __iswxdigit_l(wint_t _C, _locale_t _Locale) @ 0047c69c  26 bytes */

#include "th12.h"

/* Library Function - Single Match
    __iswxdigit_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswxdigit_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x80,_Locale);
  return iVar1;
}


