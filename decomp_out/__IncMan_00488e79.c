/* int __cdecl __IncMan(int param_1, int param_2) @ 00488e79  109 bytes */
#include "th12.h"

/* Library Function - Single Match
    __IncMan
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __IncMan(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  uVar4 = 1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f);
  uVar2 = *(uint *)(param_1 + iVar3 * 4);
  iVar5 = 0;
  uVar1 = uVar2 + uVar4;
  if ((uVar1 < uVar2) || (uVar1 < uVar4)) {
    iVar5 = 1;
  }
  *(uint *)(param_1 + iVar3 * 4) = uVar1;
  while ((iVar3 = iVar3 + -1, -1 < iVar3 && (iVar5 != 0))) {
    uVar2 = *(uint *)(param_1 + iVar3 * 4);
    uVar1 = uVar2 + 1;
    iVar5 = 0;
    if ((uVar1 < uVar2) || (uVar1 == 0)) {
      iVar5 = 1;
    }
    *(uint *)(param_1 + iVar3 * 4) = uVar1;
  }
  return iVar5;
}


