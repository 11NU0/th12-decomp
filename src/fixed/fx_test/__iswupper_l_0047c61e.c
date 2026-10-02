/* int __cdecl __iswupper_l(wint_t _C, _locale_t _Locale) @ 0047c61e  23 bytes */

#include "th12.h"

/* Library Function - Single Match
    __iswupper_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswupper_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,1,_Locale);
  return iVar1;
}


