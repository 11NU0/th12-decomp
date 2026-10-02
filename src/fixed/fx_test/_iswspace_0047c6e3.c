/* int __cdecl _iswspace(wint_t _C) @ 0047c6e3  19 bytes */

#include "th12.h"

/* Library Function - Single Match
    _iswspace
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswspace(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,8);
  return iVar1;
}


