/* void * __thiscall FUN_0044bfb0(void * this, uint param_1) @ 0044bfb0  145 bytes */
#include "th12.h"

void * __fastcall FUN_0044bfb0(void *this,uint param_1)

{
  char cVar1;
  uint _Size;
  void *_Memory;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)((int)this + 8) != -0x80000000) {
    return (void *)0x0;
  }
                    /* WARNING: Load size is inaccurate */
  _Size = (**(code **)(*(float *)this + 0x14))();
  if (param_1 < _Size) {
    return (void *)0x0;
  }
  _Memory = _malloc(_Size);
  if (_Memory == (void *)0x0) {
    return (void *)0x0;
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = (**(code **)(*(float *)this + 0x10))();
                    /* WARNING: Load size is inaccurate */
  cVar1 = (**(code **)(*(float *)this + 0x18))(uVar2,0);
  if (cVar1 != '\0') {
                    /* WARNING: Load size is inaccurate */
    iVar3 = (**(code **)(*(float *)this + 8))(_Memory,_Size);
    if (iVar3 != 0) {
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*(float *)this + 0x18))(uVar2,0);
      return _Memory;
    }
    _free(_Memory);
  }
  return (void *)0x0;
}


