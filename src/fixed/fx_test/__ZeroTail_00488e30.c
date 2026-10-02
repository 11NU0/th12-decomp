/* undefined4 __cdecl __ZeroTail(int param_1, int param_2) @ 00488e30  73 bytes */

#include "th12.h"

/* Library Function - Single Match
    __ZeroTail
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl __ZeroTail(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  uVar1 = *(uint *)(param_1 + iVar2 * 4) & ~(-1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f));
  while( true ) {
    if (uVar1 != 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (2 < iVar2) break;
    uVar1 = *(uint *)(param_1 + iVar2 * 4);
  }
  return 1;
}


