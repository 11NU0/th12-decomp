/* uint __stdcall FUN_00466460(int param_1) @ 00466460  129 bytes */
#include "th12.h"

uint FUN_00466460(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(in_EAX + 4) == 0) {
    return 0x800401f0;
  }
  uVar5 = 0;
  uVar6 = 0;
  *(undefined4 *)(in_EAX + 0x30) = 0;
  *(undefined4 *)(in_EAX + 0x34) = 0;
  if (*(int *)(in_EAX + 0x10) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_EAX + 4) + uVar6 * 4);
      uVar3 = (**(code **)(*piVar1 + 0x48))(piVar1);
      piVar1 = *(int **)(*(int *)(in_EAX + 4) + uVar6 * 4);
      uVar4 = (**(code **)(*piVar1 + 0x34))(piVar1,0);
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 | uVar3 | uVar4;
    } while (uVar6 < *(uint *)(in_EAX + 0x10));
  }
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  if ((param_1 != 0) && (iVar2 = *(int *)(in_EAX + 0xc), *(int *)(iVar2 + 0x78) == 1)) {
    CloseHandle(*(HANDLE *)(iVar2 + 0x8c));
    *(undefined4 *)(iVar2 + 0x8c) = 0xffffffff;
  }
  return uVar5;
}


