/* int __cdecl _iswdigit(wint_t _C) @ 0047c689  19 bytes */
#include "th12.h"

/* Library Function - Single Match
    _iswdigit
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswdigit(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,4);
  return iVar1;
}


