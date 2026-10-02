/* int __cdecl _isdigit(int _C) @ 0048ba71  46 bytes */
#include "th12.h"

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2008 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_004b40dc == 0) {
    return *(ushort *)(PTR_DAT_004adaa8 + _C * 2) & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}


