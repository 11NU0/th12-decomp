/* int __stdcall FUN_00421690(int param_1) @ 00421690  174 bytes */
#include "th12.h"

int __stdcall FUN_00421690(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_004b43e4;
  iVar4 = *(int *)((int)DAT_004b43e4 + 0x6788);
  iVar2 = *(int *)((iVar4 + 1) * 0x4b4 + 0x58b0 + DAT_004b43e4);
  iVar1 = (uint)(param_1 != 0) * 4 + 0x3b;
  if (iVar2 != 0) {
    FUN_00454b80(DAT_004b0c4c + iVar1,iVar2);
  }
  iVar4 = iVar4 + 2;
  if (3 < iVar4) {
    iVar4 = 1;
  }
  iVar2 = *(int *)(iVar4 * 0x4b4 + iVar3 + 0x58b0);
  if (iVar2 != 0) {
    FUN_00454b80(DAT_004b0c50 + iVar1,iVar2);
  }
  iVar4 = iVar4 + 1;
  if (3 < iVar4) {
    iVar4 = 1;
  }
  iVar2 = *(int *)(iVar4 * 0x4b4 + 0x58b0 + iVar3);
  iVar3 = iVar4 * 0x4b4 + 0x54b8 + iVar3;
  if (iVar2 != 0) {
    iVar3 = FUN_00454b80(DAT_004b0c54 + iVar1,iVar2);
  }
  return iVar3;
}


