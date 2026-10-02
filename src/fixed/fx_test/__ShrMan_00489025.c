/* undefined __cdecl __ShrMan(int param_1, int param_2) @ 00489025  154 bytes */

#include "th12.h"

/* Library Function - Single Match
    __ShrMan
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __ShrMan(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_c;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar3 = (byte)param_2 & 0x1f;
  local_c = 0;
  param_2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + param_2 * 4);
    *(uint *)(param_1 + param_2 * 4) = *(uint *)(param_1 + param_2 * 4) >> bVar3 | local_c;
    local_c = (uVar1 & ~(-1 << bVar3)) << (0x20 - bVar3 & 0x1f);
    param_2 = param_2 + 1;
  } while (param_2 < 3);
  iVar4 = 2;
  puVar5 = (undefined4 *)(param_1 + (2 - iVar2) * 4);
  do {
    if (iVar4 < iVar2) {
      *(undefined4 *)(param_1 + iVar4 * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + iVar4 * 4) = *puVar5;
    }
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar4);
  return;
}


