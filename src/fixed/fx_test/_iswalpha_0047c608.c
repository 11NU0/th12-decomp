/* int __cdecl _iswalpha(wint_t _C) @ 0047c608  22 bytes */

#include "th12.h"

/* Library Function - Single Match
    _iswalpha
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswalpha(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x103);
  return iVar1;
}


