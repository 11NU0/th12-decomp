/* undefined4 __stdcall FUN_004664f0(void) @ 004664f0  117 bytes */

#include "th12.h"

undefined4 __stdcall FUN_004664f0(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  DWORD DVar4;
  
  if (*(undefined4 **)(in_EAX + 4) != (undefined4 *)0x0) {
    if (*(int *)(in_EAX + 0x30) != 0) {
      *(undefined4 *)(in_EAX + 0x30) = 0;
      *(undefined4 *)(in_EAX + 0x34) = 1;
      piVar1 = (int *)**(undefined4 **)(in_EAX + 4);
      uVar3 = (**(code **)(*piVar1 + 0x48))(piVar1);
      iVar2 = *(int *)(in_EAX + 0xc);
      DVar4 = SetFilePointer(*(HANDLE *)(iVar2 + 0x8c),0,(PLONG)0x0,1);
      *(DWORD *)(iVar2 + 0x98) = DVar4;
      iVar2 = *(int *)(in_EAX + 0xc);
      if (*(int *)(iVar2 + 0x78) == 1) {
        CloseHandle(*(HANDLE *)(iVar2 + 0x8c));
        *(undefined4 *)(iVar2 + 0x8c) = 0xffffffff;
      }
      return uVar3;
    }
    *(undefined4 *)(in_EAX + 0x34) = 0;
  }
  return 0x800401f0;
}


