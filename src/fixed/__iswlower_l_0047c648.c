/* int __cdecl __iswlower_l(wint_t _C, _locale_t _Locale) @ 0047c648  23 bytes */
#include "th12.h"

/* Library Function - Single Match
    __iswlower_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswlower_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,2,_Locale);
  return iVar1;
}


