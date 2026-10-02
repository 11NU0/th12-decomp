/* undefined __fastcall FUN_0043ccd0(int param_1) @ 0043ccd0  93 bytes */

#include "th12.h"

void __fastcall FUN_0043ccd0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int in_EAX;
  
  puVar3 = *(undefined4 **)(param_1 + 0x44 + in_EAX * 0xc);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[1];
    pvVar2 = (void *)*puVar3;
    puVar3 = puVar1;
    if (pvVar2 != (void *)0x0) {
      if (*(int *)((int)pvVar2 + 0x18a8) != 0) {
        *(undefined4 *)(*(int *)((int)pvVar2 + 0x18a8) + 8) = *(undefined4 *)((int)pvVar2 + 0x18ac);
      }
      if (*(int *)((int)pvVar2 + 0x18ac) != 0) {
        *(undefined4 *)(*(int *)((int)pvVar2 + 0x18ac) + 4) = *(undefined4 *)((int)pvVar2 + 0x18a8);
      }
      *(undefined4 *)((int)pvVar2 + 0x18a8) = 0;
      *(undefined4 *)((int)pvVar2 + 0x18ac) = 0;
      FUN_0046ca4f(pvVar2);
    }
  }
  return;
}


