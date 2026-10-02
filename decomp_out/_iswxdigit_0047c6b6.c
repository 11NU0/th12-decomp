/* int __cdecl _iswxdigit(wint_t _C) @ 0047c6b6  22 bytes */
#include "th12.h"

/* Library Function - Single Match
    _iswxdigit
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswxdigit(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x80);
  return iVar1;
}


