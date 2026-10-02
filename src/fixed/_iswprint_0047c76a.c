/* int __cdecl _iswprint(wint_t _C) @ 0047c76a  22 bytes */
#include "th12.h"

/* Library Function - Single Match
    _iswprint
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswprint(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x157);
  return iVar1;
}


