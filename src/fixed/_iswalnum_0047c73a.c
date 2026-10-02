/* int __cdecl _iswalnum(wint_t _C) @ 0047c73a  22 bytes */
#include "th12.h"

/* Library Function - Single Match
    _iswalnum
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswalnum(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x107);
  return iVar1;
}


