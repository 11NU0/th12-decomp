/* undefined __fastcall FUN_0040f690(int param_1) @ 0040f690  137 bytes */
#include "th12.h"

void __fastcall FUN_0040f690(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(uint *)((int)param_1 + 0x118);
  uVar3 = 1;
  *(undefined4 *)((int)param_1 + 0x120) = 0;
  *(undefined4 *)((int)param_1 + 0x130) = 0;
  puVar1 = (uint *)((int)param_1 + 0x94);
  iVar4 = 0x20;
  do {
    if ((uVar2 & 1) == 0) {
      *puVar1 = 0;
    }
    else {
      *puVar1 = *puVar1 + 1;
      if (7 < *puVar1) {
        *(uint *)((int)param_1 + 0x130) = *(uint *)((int)param_1 + 0x130) | uVar3;
      }
      if (0x19 < *puVar1) {
        *(uint *)((int)param_1 + 0x120) = *(uint *)((int)param_1 + 0x120) | uVar3;
        *puVar1 = *puVar1 - 8;
      }
    }
    puVar1 = puVar1 + 1;
    uVar2 = uVar2 >> 1;
    uVar3 = uVar3 * 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = *(uint *)((int)param_1 + 0x118);
  uVar3 = *(uint *)((int)param_1 + 0x11c) ^ uVar2;
  *(uint *)((int)param_1 + 0x124) = uVar3 & uVar2;
  *(uint *)((int)param_1 + 0x128) = ~uVar2 & uVar3;
  return;
}


