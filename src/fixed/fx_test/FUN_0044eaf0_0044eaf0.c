/* void * __thiscall FUN_0044eaf0(void * this, void * param_1, uint param_2, uint param_3) @ 0044eaf0  218 bytes */

#include "th12.h"

void * __thiscall FUN_0044eaf0(void *this,void *param_1,uint param_2,uint param_3)

{
  undefined4 *_Dst;
  int iVar1;
  undefined4 *puVar2;
  uint _MaxCount;
  
  if (*(uint *)((int)param_1 + 0x14) < param_2) {
    FID_conflict__Xinvarg();
  }
  _MaxCount = *(int *)((int)param_1 + 0x14) - param_2;
  if (param_3 < _MaxCount) {
    _MaxCount = param_3;
  }
  if (this != param_1) {
    if (_MaxCount == 0xffffffff) {
      FID_conflict__Xinvarg();
    }
    if (*(uint *)((int)this + 0x18) < _MaxCount) {
      FUN_0044ef10(this,_MaxCount,*(rsize_t *)((int)this + 0x14));
    }
    else if (_MaxCount == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        *(undefined *)((int)this + 4) = 0;
        return this;
      }
      **(undefined **)((int)this + 4) = 0;
      return this;
    }
    if (_MaxCount != 0) {
      if (*(uint *)((int)param_1 + 0x18) < 0x10) {
        iVar1 = (int)param_1 + 4;
      }
      else {
        iVar1 = *(int *)((int)param_1 + 4);
      }
      puVar2 = (undefined4 *)((int)this + 4);
      _Dst = puVar2;
      if (0xf < *(uint *)((int)this + 0x18)) {
        _Dst = (undefined4 *)*puVar2;
      }
      _memcpy_s(_Dst,*(uint *)((int)this + 0x18),(void *)(iVar1 + param_2),_MaxCount);
      *(uint *)((int)this + 0x14) = _MaxCount;
      if (0xf < *(uint *)((int)this + 0x18)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      *(undefined *)((int)puVar2 + _MaxCount) = 0;
    }
    return this;
  }
  FUN_0044ed60(this,(undefined4 *)(_MaxCount + param_2),0xffffffff);
  FUN_0044ed60(this,(undefined4 *)0x0,param_2);
  return this;
}


