/* int __cdecl _isprint(int _C) @ 0048bcff  48 bytes */

#include "th12.h"

/* Library Function - Single Match
    _isprint
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isprint(int _C)

{
  int iVar1;
  
  if (DAT_004b40dc == 0) {
    return *(ushort *)(PTR_DAT_004adaa8 + _C * 2) & 0x157;
  }
  iVar1 = __isprint_l(_C,(_locale_t)0x0);
  return iVar1;
}


