/* int __thiscall FUN_0043cdb0(void * this, int param_1) @ 0043cdb0  79 bytes */
#include "th12.h"

int __thiscall FUN_0043cdb0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  iVar2 = 0;
  if (1 < param_1 + -8) {
    do {
      iVar3 = iVar3 + (uint)*(byte *)((int)this + iVar2 + 8);
      iVar1 = iVar2 + 9;
      iVar2 = iVar2 + 2;
      iVar5 = iVar5 + (uint)*(byte *)((int)this + iVar1);
    } while (iVar2 < param_1 + -9);
  }
  uVar4 = 0;
  if (iVar2 < param_1 + -8) {
    uVar4 = (uint)*(byte *)(iVar2 + 8 + (int)this);
  }
  return iVar5 + iVar3 + uVar4;
}


