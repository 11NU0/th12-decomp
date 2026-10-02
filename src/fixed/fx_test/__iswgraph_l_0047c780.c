/* int __cdecl __iswgraph_l(wint_t _C, _locale_t _Locale) @ 0047c780  26 bytes */

#include "th12.h"

/* Library Function - Single Match
    __iswgraph_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __iswgraph_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = __iswctype_l(_C,0x117,_Locale);
  return iVar1;
}


