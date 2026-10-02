/* int __thiscall FUN_0044ed60(void * this, undefined4 * param_1, uint param_2) @ 0044ed60  131 bytes */
#include "th12.h"

int __thiscall FUN_0044ed60(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = param_1;
  if (*(undefined4 **)((int)this + 0x14) < param_1) {
    FID_conflict__Xinvarg();
  }
  uVar2 = *(int *)((int)this + 0x14) - (int)param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    puVar5 = (undefined4 *)((int)this + 4);
    puVar4 = puVar5;
    param_1 = puVar5;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar4 = (undefined4 *)*puVar5;
      param_1 = (undefined4 *)*puVar5;
    }
    _memmove_s((void *)((int)puVar4 + (int)puVar1),*(uint *)((int)this + 0x18) - (int)puVar1,
               (void *)((int)param_1 + (int)puVar1 + param_2),uVar2 - param_2);
    iVar3 = *(int *)((int)this + 0x14) - param_2;
    *(int *)((int)this + 0x14) = iVar3;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    *(undefined *)(iVar3 + (int)puVar5) = 0;
  }
  return (int)this;
}


