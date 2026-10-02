/* int __cdecl _isxdigit(int _C) @ 0048baf5  48 bytes */
#include "th12.h"

/* Library Function - Single Match
    _isxdigit
   
   Library: Visual Studio 2008 Release */

int __cdecl _isxdigit(int _C)

{
  int iVar1;
  
  if (DAT_004b40dc == 0) {
    return *(ushort *)(PTR_DAT_004adaa8 + _C * 2) & 0x80;
  }
  iVar1 = __isxdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}


