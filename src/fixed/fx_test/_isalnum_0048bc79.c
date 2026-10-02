/* int __cdecl _isalnum(int _C) @ 0048bc79  48 bytes */

#include "th12.h"

/* Library Function - Single Match
    _isalnum
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isalnum(int _C)

{
  int iVar1;
  
  if (DAT_004b40dc == 0) {
    return *(ushort *)(PTR_DAT_004adaa8 + _C * 2) & 0x107;
  }
  iVar1 = __isalnum_l(_C,(_locale_t)0x0);
  return iVar1;
}


