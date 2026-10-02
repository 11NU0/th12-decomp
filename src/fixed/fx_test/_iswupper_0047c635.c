/* int __cdecl _iswupper(wint_t _C) @ 0047c635  19 bytes */

#include "th12.h"

/* Library Function - Single Match
    _iswupper
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswupper(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,1);
  return iVar1;
}


