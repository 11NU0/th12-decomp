/* undefined __thiscall FUN_0044ef10(void * this, uint param_1, rsize_t param_2) @ 0044ef10  234 bytes */
#include "th12.h"

void __fastcall FUN_0044ef10(void *this,uint param_1,rsize_t param_2)

{
  uint uVar1;
  undefined4 *_Dst;
  void *_Src;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = ((void *)0x00496eb0);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uVar4 = param_1 | 0xf;
  if (uVar4 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x18);
    uVar3 = uVar1 >> 1;
    param_1 = uVar4;
    if ((uVar4 / 3 < uVar3) && (uVar1 <= -uVar3 - 2)) {
      param_1 = uVar3 + uVar1;
    }
  }
  local_8 = 0;
  _Dst = (( undefined4 * (__stdcall *)())FUN_0044f0a0)((char *)((int)param_1 + 1));
  local_8 = 0xffffffff;
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      _Src = (void *)((int)this + 4);
    }
    else {
      _Src = *(void **)((int)this + 4);
    }
    _memcpy_s(_Dst,param_1 + 1,_Src,param_2);
  }
  if (0xf < *(uint *)((int)this + 0x18)) {
    FUN_0046ca4f(*(void **)((int)this + 4));
  }
  puVar2 = (undefined4 *)((int)this + 4);
  *(undefined *)puVar2 = 0;
  *puVar2 = _Dst;
  *(uint *)((int)this + 0x18) = param_1;
  *(rsize_t *)((int)this + 0x14) = param_2;
  if (0xf < param_1) {
    puVar2 = _Dst;
  }
  *(undefined *)((int)puVar2 + param_2) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}


