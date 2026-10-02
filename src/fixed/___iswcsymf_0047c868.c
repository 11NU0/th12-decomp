/* int __cdecl ___iswcsymf(wint_t _C) @ 0047c868  38 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___iswcsymf
   
   Library: Visual Studio 2008 Release */

int __cdecl ___iswcsymf(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x103);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}


