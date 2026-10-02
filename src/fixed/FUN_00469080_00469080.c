/* int __stdcall FUN_00469080(void) @ 00469080  48 bytes */
#include "th12.h"

int __stdcall FUN_00469080(void)

{
  int in_EAX;
  int iVar1;
  
  if ((*(byte *)(*(int *)((int)in_EAX + 4) + 8) & 1) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)((int)in_EAX + 4) + 0x10);
  if (-1 < iVar1) {
    return *(int *)((int)in_EAX + 0x100c) + iVar1 + in_EAX + 8;
  }
  iVar1 = (**(code **)(**(int **)((int)in_EAX + 0x1014) + 8))(iVar1);
  return iVar1;
}


