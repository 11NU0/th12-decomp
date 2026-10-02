/* undefined4 __stdcall FUN_0044e060(int * param_1) @ 0044e060  201 bytes */
#include "th12.h"

/* WARNING: Type propagation algorithm not settling */

uint FUN_0044e060(int *param_1)

{
  size_t _Size;
  uint in_EAX;
  undefined4 uVar1;
  void *_Dst;
  int unaff_ESI;
  undefined *unaff_EDI;
  int iVar2;
  undefined *puVar3;
  undefined auStack_40 [8];
  int aiStack_38 [3];
  undefined4 uStack_2c;
  undefined local_20 [12];
  int *piStack_14;
  
  if (*(int *)(unaff_ESI + 0x11c) == 0) {
    return in_EAX & 0xffffff00;
  }
  puVar3 = local_20;
  (**(code **)(*param_1 + 0x30))(param_1);
  aiStack_38[2] = *(undefined4 *)(unaff_ESI + 0x104);
  uStack_2c = *(undefined4 *)(unaff_ESI + 0x108);
  aiStack_38[0] = 0;
  aiStack_38[1] = 0;
  (**(code **)(*param_1 + 0x34))(param_1,auStack_40,aiStack_38,0x10);
  _Size = *(size_t *)(unaff_ESI + 0x110);
  _Dst = *(void **)(unaff_ESI + 0x120);
  if ((aiStack_38[0] == *(int *)(unaff_ESI + 0x100)) && (iVar2 = 0, 0 < *(int *)(unaff_ESI + 0x108))
     ) {
    do {
      _memcpy(_Dst,unaff_EDI,_Size);
      unaff_EDI = unaff_EDI + (int)puVar3;
      iVar2 = iVar2 + 1;
      _Dst = (void *)((int)_Dst + _Size);
    } while (iVar2 < *(int *)(unaff_ESI + 0x108));
  }
  uVar1 = (**(code **)(*piStack_14 + 0x38))(piStack_14);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


