/* bool __stdcall FUN_00422d70(void) @ 00422d70  90 bytes */

#include "th12.h"

bool __stdcall FUN_00422d70(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(in_EAX + 0x90);
  if (iVar1 <= *(int *)(in_EAX + 8)) {
    return false;
  }
  iVar2 = *(int *)(in_EAX + 8) + unaff_EBX;
  *(int *)(in_EAX + 8) = iVar2;
  if (iVar1 < iVar2) {
    *(int *)(in_EAX + 8) = iVar1;
    FUN_00420f90();
  }
  return (*(int *)(in_EAX + 8) - unaff_EBX) / *(int *)(in_EAX + 0x94) !=
         *(int *)(in_EAX + 8) / *(int *)(in_EAX + 0x94);
}


