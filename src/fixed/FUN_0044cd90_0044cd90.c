/* uint __thiscall FUN_0044cd90(void * this, void * param_1, uint param_2) @ 0044cd90  88 bytes */
#include "th12.h"

uint __fastcall FUN_0044cd90(void *this,void *param_1,uint param_2)

{
  void *_Src;
  uint _Size;
  
  _Src = *(void **)((int)this + 8);
  _Size = (*(int *)((int)this + 0xc) + *(int *)((int)this + 4)) - (int)_Src;
  if (param_2 <= _Size) {
    _memcpy(param_1,_Src,param_2);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2;
    return param_2;
  }
  if (_Size != 0) {
    _memcpy(param_1,_Src,_Size);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + _Size;
    return _Size;
  }
  return 0;
}


