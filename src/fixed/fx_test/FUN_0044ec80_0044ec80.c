/* void * __thiscall FUN_0044ec80(void * this, undefined4 * param_1, uint param_2) @ 0044ec80  214 bytes */

#include "th12.h"

void * __thiscall FUN_0044ec80(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *(uint *)((int)this + 0x18);
    puVar2 = (undefined4 *)((int)this + 4);
    puVar4 = puVar2;
    if (0xf < uVar1) {
      puVar4 = (undefined4 *)*puVar2;
    }
    if (puVar4 <= param_1) {
      puVar4 = puVar2;
      if (0xf < uVar1) {
        puVar4 = (undefined4 *)*puVar2;
      }
      if (param_1 < (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar4)) {
        if (0xf < uVar1) {
          puVar2 = (undefined4 *)*puVar2;
        }
        pvVar3 = FUN_0044eaf0(this,this,(int)param_1 - (int)puVar2,param_2);
        return pvVar3;
      }
    }
  }
  if (param_2 == 0xffffffff) {
    FID_conflict__Xinvarg();
  }
  if (*(uint *)((int)this + 0x18) < param_2) {
    FUN_0044ef10(this,param_2,*(rsize_t *)((int)this + 0x14));
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (*(uint *)((int)this + 0x18) < 0x10) {
      *(undefined *)((int)this + 4) = 0;
      return this;
    }
    **(undefined **)((int)this + 4) = 0;
    return this;
  }
  if (param_2 != 0) {
    puVar2 = (undefined4 *)((int)this + 4);
    puVar4 = puVar2;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar4 = (undefined4 *)*puVar2;
    }
    _memcpy_s(puVar4,*(uint *)((int)this + 0x18),param_1,param_2);
    *(uint *)((int)this + 0x14) = param_2;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    *(undefined *)((int)puVar2 + param_2) = 0;
  }
  return this;
}


