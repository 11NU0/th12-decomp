/* int __cdecl _iswlower(wint_t _C) @ 0047c65f  19 bytes */

#include "th12.h"

/* Library Function - Single Match
    _iswlower
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswlower(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,2);
  return iVar1;
}


