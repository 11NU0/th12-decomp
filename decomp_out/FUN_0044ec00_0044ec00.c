/* undefined __thiscall FUN_0044ec00(void * this, char param_1, rsize_t param_2) @ 0044ec00  74 bytes */
#include "th12.h"

void __thiscall FUN_0044ec00(void *this,char param_1,rsize_t param_2)

{
  void *_Src;
  
  if ((param_1 != '\0') && (0xf < *(uint *)((int)this + 0x18))) {
    _Src = *(void **)((int)this + 4);
    if (param_2 != 0) {
      _memcpy_s((undefined4 *)((int)this + 4),0x10,_Src,param_2);
    }
    FUN_0046ca4f(_Src);
  }
  *(rsize_t *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined *)((int)this + param_2 + 4) = 0;
  return;
}


