/* int __cdecl _iswcntrl(wint_t _C) @ 0047c7c7  19 bytes */

#include "th12.h"

/* Library Function - Single Match
    _iswcntrl
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswcntrl(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x20);
  return iVar1;
}


