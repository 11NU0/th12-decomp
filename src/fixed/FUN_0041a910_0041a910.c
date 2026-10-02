/* int __stdcall FUN_0041a910(void) @ 0041a910  61 bytes */
#include "th12.h"

int __stdcall FUN_0041a910(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)((int)in_EAX + 0x174c) + 4);
  if ((*(byte *)(*(int *)((int)iVar2 + 4) + 8) & 1) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)((int)iVar2 + 4) + 0x10);
  if (-1 < iVar1) {
    return *(int *)((int)iVar2 + 0x100c) + iVar1 + iVar2 + 8;
  }
  iVar2 = (**(code **)(**(int **)((int)iVar2 + 0x1014) + 8))(iVar1);
  return iVar2;
}


