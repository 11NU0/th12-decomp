/* undefined4 __stdcall FUN_0044e130(int * param_1) @ 0044e130  217 bytes */

#include "th12.h"

uint __stdcall FUN_0044e130(int *param_1)

{
  size_t _Size;
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  undefined *_Dst;
  int unaff_ESI;
  void *_Src;
  int iVar3;
  undefined auStack_40 [8];
  int aiStack_38 [3];
  undefined4 uStack_2c;
  undefined local_20 [12];
  int *piStack_14;
  
  if (*(int *)(unaff_ESI + 0x11c) == 0) {
    return in_EAX & 0xffffff00;
  }
  _Dst = local_20;
  (**(code **)(*param_1 + 0x30))();
  aiStack_38[2] = *(undefined4 *)(unaff_ESI + 0x104);
  uStack_2c = *(undefined4 *)(unaff_ESI + 0x108);
  aiStack_38[0] = 0;
  aiStack_38[1] = 0;
  uVar1 = (**(code **)(*param_1 + 0x34))(param_1,auStack_40,aiStack_38,0);
  if (uVar1 == 0) {
    _Src = *(void **)(unaff_ESI + 0x120);
    _Size = *(size_t *)(unaff_ESI + 0x110);
    if ((aiStack_38[0] == *(int *)(unaff_ESI + 0x100)) &&
       (iVar3 = 0, 0 < *(int *)(unaff_ESI + 0x108))) {
      do {
        _memcpy(_Dst,_Src,_Size);
        _Dst = _Dst + (int)param_1;
        iVar3 = iVar3 + 1;
        _Src = (void *)((int)_Src + _Size);
      } while (iVar3 < *(int *)(unaff_ESI + 0x108));
    }
    uVar2 = (**(code **)(*piStack_14 + 0x38))(piStack_14);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


