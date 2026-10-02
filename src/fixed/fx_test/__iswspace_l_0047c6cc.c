/* int __cdecl __iswspace_l(wint_t _C, _locale_t _Locale) @ 0047c6cc  23 bytes */

#include "th12.h"

/* Library Function - Single Match
    __iswspace_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswspace_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,8,_Locale);
  return iVar1;
}


