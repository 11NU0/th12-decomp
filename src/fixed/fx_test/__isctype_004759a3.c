/* int __cdecl __isctype(int _C, int _Type) @ 004759a3  50 bytes */

#include "th12.h"

/* Library Function - Single Match
    __isctype
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isctype(int _C,int _Type)

{
  int iVar1;
  
  if (DAT_004b40dc == 0) {
    return (uint)*(ushort *)(PTR_DAT_004adaa8 + _C * 2) & _Type;
  }
  iVar1 = __isctype_l(_C,_Type,(_locale_t)0x0);
  return iVar1;
}


