/* undefined __stdcall FUN_004236f0(void) @ 004236f0  81 bytes */
#include "th12.h"

void FUN_004236f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int in_EAX;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(in_EAX + 0x7c);
  iVar4 = 8;
  do {
    puVar2 = (undefined4 *)puVar5[-0x18];
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[1];
      FUN_0046ca4f((void *)*puVar2);
      puVar2 = puVar1;
    }
    puVar2 = (undefined4 *)*puVar5;
    while (puVar2 != (undefined4 *)0x0) {
      pvVar3 = (void *)*puVar2;
      puVar2 = (undefined4 *)puVar2[1];
      FUN_0046ca4f(pvVar3);
    }
    puVar5 = puVar5 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


