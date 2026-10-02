/* undefined4 __fastcall FUN_0045a4a0(undefined4 param_1, undefined4 * param_2) @ 0045a4a0  142 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0045a4a0(undefined4 param_1,undefined4 *param_2)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_2;
  puVar3 = *(undefined4 **)(in_EAX + 0x8356a4);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2 + 7;
  puVar3 = (undefined4 *)(*(int *)(in_EAX + 0x8356a4) + 0x1c);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2 + 0xe;
  puVar3 = (undefined4 *)(*(int *)(in_EAX + 0x8356a4) + 0x38);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2 + 7;
  puVar3 = (undefined4 *)(*(int *)(in_EAX + 0x8356a4) + 0x54);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2 + 0xe;
  puVar3 = (undefined4 *)(*(int *)(in_EAX + 0x8356a4) + 0x70);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2 + 0x15;
  puVar3 = (undefined4 *)(*(int *)(in_EAX + 0x8356a4) + 0x8c);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(int *)(in_EAX + 0x8356a4) = *(int *)(in_EAX + 0x8356a4) + 0xa8;
  *(int *)(&DAT_004b56a0 + in_EAX) = *(int *)(&DAT_004b56a0 + in_EAX) + 1;
  return 0;
}


