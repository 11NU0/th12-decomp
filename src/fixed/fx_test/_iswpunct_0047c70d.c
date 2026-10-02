/* int __cdecl _iswpunct(wint_t _C) @ 0047c70d  19 bytes */

#include "th12.h"

/* Library Function - Single Match
    _iswpunct
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswpunct(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x10);
  return iVar1;
}


