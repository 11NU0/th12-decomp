/* int __cdecl __iswcsymf_l(wint_t _C, _locale_t _Locale) @ 0047c83e  42 bytes */
#include "th12.h"

/* Library Function - Single Match
    __iswcsymf_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswcsymf_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x103,_Locale);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}


