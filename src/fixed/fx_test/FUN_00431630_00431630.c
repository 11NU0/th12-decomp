/* undefined __stdcall FUN_00431630(void) @ 00431630  194 bytes */

#include "th12.h"

void __stdcall FUN_00431630(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(in_EAX + 0x1ac) == 0) {
    piVar1 = *(int **)(*(int *)(*(int *)(in_EAX + 0x588) + 0x120) + 0x28);
    (**(code **)(*piVar1 + 0x48))(piVar1,0,(int *)(in_EAX + 0x1ac));
    FUN_00454d10(*(void **)(in_EAX + 0x588),*(void **)(in_EAX + 0x1bc),0x51);
    if (*(int *)(in_EAX + 0x1ac) == 0) {
      puVar3 = (undefined4 *)(in_EAX + 0x204);
      puVar4 = (undefined4 *)(in_EAX + 0x434);
      for (iVar2 = 0x46; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    piVar1 = *(int **)(*(int *)(*(int *)(in_EAX + 0x588) + 0x120) + 0x3c);
    (**(code **)(*piVar1 + 0x48))(piVar1,0,in_EAX + 0x1b0);
    FUN_00454d10(*(void **)(in_EAX + 0x588),*(void **)(in_EAX + 0x1c0),0x52);
    FUN_00454d10(*(void **)(in_EAX + 0x588),*(void **)(in_EAX + 0x1c4),0x51);
    (**(code **)(**(int **)(in_EAX + 8) + 0x48))(*(int **)(in_EAX + 8),0,0,0,in_EAX + 0x1b4);
  }
  return;
}


