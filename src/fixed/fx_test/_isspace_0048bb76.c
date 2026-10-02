/* int __cdecl _isspace(int _C) @ 0048bb76  46 bytes */

#include "th12.h"

/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2008 Release */

int __cdecl _isspace(int _C)

{
  int iVar1;
  
  if (DAT_004b40dc == 0) {
    return *(ushort *)(PTR_DAT_004adaa8 + _C * 2) & 8;
  }
  iVar1 = __isspace_l(_C,(_locale_t)0x0);
  return iVar1;
}


