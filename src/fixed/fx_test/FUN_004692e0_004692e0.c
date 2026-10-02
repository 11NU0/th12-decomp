/* int __thiscall FUN_004692e0(void * this, int param_1) @ 004692e0  513 bytes */

#include "th12.h"

int __thiscall FUN_004692e0(void *this,int param_1)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  void *_Src;
  void *_Dst;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  int local_8;
  
  *(int *)((int)this + *(int *)((int)this + 4) * 4 + 0xc) = param_1;
  piVar3 = *(int **)((int)this + *(int *)((int)this + 4) * 4 + 0xc);
  if ((*piVar3 != 0x54504353) || (*(short *)(piVar3 + 1) != 1)) {
    *(undefined4 *)((int)this + *(int *)((int)this + 4) * 4 + 0xc) = 0;
    return -1;
  }
  _Src = *(void **)((int)this + 0x8c);
  piVar9 = (int *)(*(ushort *)((int)piVar3 + 6) + 0x24 + (int)piVar3);
  uVar2 = *(ushort *)(piVar3 + 4);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + (uint)uVar2;
  pbVar4 = (byte *)(piVar9 + uVar2);
  _Dst = _malloc(*(int *)((int)this + 8) * 8);
  *(void **)((int)this + 0x8c) = _Dst;
  if (_Src == (void *)0x0) {
    iVar7 = 0;
    if (0 < *(int *)((int)this + 8)) {
      do {
        *(int *)(*(int *)((int)this + 0x8c) + 4 + iVar7 * 8) =
             *(int *)((int)this + *(int *)((int)this + 4) * 4 + 0xc) + *piVar9;
        *(byte **)(*(int *)((int)this + 0x8c) + iVar7 * 8) = pbVar4;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
        iVar7 = iVar7 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar7 < *(int *)((int)this + 8));
    }
  }
  else {
    param_1 = *(int *)((int)this + 8) -
              (uint)*(ushort *)(*(int *)((int)this + *(int *)((int)this + 4) * 4 + 0xc) + 0x10);
    _memcpy(_Dst,_Src,param_1 * 8);
    if (_Src != (void *)0x0) {
      _free(_Src);
    }
    local_8 = 0;
    if (*(short *)(*(int *)((int)this + *(int *)((int)this + 4) * 4 + 0xc) + 0x10) != 0) {
      do {
        iVar7 = 0;
        if (0 < param_1) {
          puVar10 = *(undefined4 **)((int)this + 0x8c);
          do {
            pbVar8 = (byte *)*puVar10;
            pbVar5 = pbVar4;
            do {
              bVar1 = *pbVar5;
              bVar11 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_00469425:
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_0046942a;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar11 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_00469425;
              pbVar5 = pbVar5 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_0046942a:
            if (iVar6 < 1) break;
            iVar7 = iVar7 + 1;
            puVar10 = puVar10 + 2;
          } while (iVar7 < param_1);
        }
        iVar6 = *(int *)((int)this + 8);
        while (iVar6 = iVar6 + -1, iVar7 < iVar6) {
          puVar10 = (undefined4 *)(*(int *)((int)this + 0x8c) + iVar6 * 8);
          *puVar10 = puVar10[-2];
          puVar10[1] = puVar10[-1];
        }
        *(int *)(*(int *)((int)this + 0x8c) + 4 + iVar7 * 8) =
             *(int *)((int)this + *(int *)((int)this + 4) * 4 + 0xc) + *piVar9;
        *(byte **)(*(int *)((int)this + 0x8c) + iVar7 * 8) = pbVar4;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
        param_1 = param_1 + 1;
        local_8 = local_8 + 1;
        piVar9 = piVar9 + 1;
      } while (local_8 < (int)(uint)*(ushort *)
                                     (*(int *)((int)this + *(int *)((int)this + 4) * 4 + 0xc) + 0x10
                                     ));
    }
  }
  iVar7 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar7 + 1;
  iVar6 = *(int *)((int)this + iVar7 * 4 + 0xc);
  if (*(short *)(iVar6 + 6) != 0) {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 4))(iVar6 + 0x24);
  }
  return iVar7;
}


