/* undefined4 __fastcall FUN_0046a5f0(int param_1) @ 0046a5f0  891 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0046a5f0(int param_1)

{
  float *pfVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  undefined4 *puVar10;
  uint *_Dst;
  uint uVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  void *local_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049757b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(param_1 + 0x514) = 0x42000000;
  *(undefined4 *)(param_1 + 0x518) = 0x41200000;
  piVar6 = FUN_0040fbe0((int *)local_20,(void *)0x4);
  pvVar2 = *(void **)(param_1 + 0x504);
  *(int *)(param_1 + 0x40) = *piVar6;
  if (pvVar2 != (void *)0x0) {
    FUN_00402870();
    FUN_0046ca4f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x504) = 0;
  local_20[0] = operator_new(0x18);
  local_4 = 0;
  if (local_20[0] == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_0040ff10(0x11);
  }
  iVar5 = DAT_004b4514;
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x504) = uVar7;
  local_20[0] = (void *)(*(float *)(iVar5 + 0x97c) - 95.0);
  FUN_00410020((float)local_20[0],0.0,190.0,448.0);
  iVar8 = 0;
  iVar12 = *(int *)(*(int *)(param_1 + 0x504) + 0x10);
  if (0 < *(int *)(*(int *)(param_1 + 0x504) + 4)) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x504) + 4);
      *(uint *)(iVar12 + 0x10 + iVar3 * 0x1c) = ((iVar3 + -1 <= iVar8) - 1 & 0xff000081) - 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x504) + 4);
      bVar4 = iVar3 + -1 <= iVar8;
      iVar8 = iVar8 + 1;
      *(uint *)(iVar12 + 0x10 + iVar3 * 0x38) = (bVar4 - 1 & 0xff000081) - 1;
      iVar12 = iVar12 + 0x1c;
    } while (iVar8 < *(int *)(*(int *)(param_1 + 0x504) + 4));
  }
  iVar12 = DAT_004b43cc;
  uVar11 = *(uint *)(DAT_004b43cc + 0x7c);
  if ((uVar11 & 1) != 0) {
    if (*(int *)(DAT_004b43cc + 0x28) < 0x3c) {
      if (*(int *)(DAT_004b43c4 + 0x3c) == 0) goto LAB_0046a782;
      uVar11 = uVar11 | 0x20;
    }
    else {
      *(undefined4 *)(DAT_004b43cc + 0x80) = 0;
      uVar11 = uVar11 & 0xffffffdd;
    }
    *(uint *)(iVar12 + 0x7c) = uVar11;
  }
LAB_0046a782:
  if ((*(uint *)(iVar5 + 0xc410) & 1) == 0) {
    *(undefined4 *)(iVar5 + 0xc408) = 0;
    *(undefined4 *)(iVar5 + 0xc404) = 0;
    *(undefined4 *)(iVar5 + 0xc400) = 0xfff0bdc1;
    *(undefined4 **)(iVar5 + 0xc40c) = &DAT_004b2ed0;
    *(uint *)(iVar5 + 0xc410) = *(uint *)(iVar5 + 0xc410) | 1;
  }
  iVar8 = DAT_004b43dc;
  *(undefined4 *)(iVar5 + 0xc408) = 0x43480000;
  *(undefined4 *)(iVar5 + 0xc404) = 200;
  *(undefined4 *)(iVar5 + 0xc400) = 199;
  *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 1;
  pfVar1 = (float *)(param_1 + 0x508);
  *pfVar1 = *(float *)(iVar5 + 0x97c);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(iVar5 + 0x980);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(iVar5 + 0x984);
  uVar11 = *(uint *)(iVar12 + 0x7c);
  if ((uVar11 & 1) != 0) {
    if (*(int *)(iVar12 + 0x28) < 0x3c) {
      if (*(int *)(DAT_004b43c4 + 0x3c) == 0) goto LAB_0046a82c;
      uVar11 = uVar11 | 0x20;
    }
    else {
      *(undefined4 *)(iVar12 + 0x80) = 0;
      uVar11 = uVar11 & 0xffffffdd;
    }
    *(uint *)(iVar12 + 0x7c) = uVar11;
  }
LAB_0046a82c:
  *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 1;
  FUN_00453e20(uVar11,iVar8,*(undefined4 *)(iVar5 + 0x97c));
  pvVar2 = *(void **)(DAT_004b43e4 + 0x6d44);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  piVar6 = (int *)((int)pvVar2 + 0x130);
  *piVar6 = *piVar6 + 1;
  pvVar9 = FUN_004621c0();
  *(uint *)((int)pvVar9 + 0x480) = *(uint *)((int)pvVar9 + 0x480) | 1;
  *(undefined4 *)((int)pvVar9 + 0x20) = 0x17;
  if (pfVar1 == (float *)0x0) {
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    *(undefined4 *)((int)pvVar9 + 0x430) = 0;
    *(undefined4 *)((int)pvVar9 + 0x434) = 0;
    *(undefined4 *)((int)pvVar9 + 0x438) = 0;
  }
  else {
    *(float *)((int)pvVar9 + 0x430) = *pfVar1 + 32.0 + 192.0;
    *(float *)((int)pvVar9 + 0x434) = *(float *)(param_1 + 0x50c) + 16.0;
    *(undefined4 *)((int)pvVar9 + 0x438) = *(undefined4 *)(param_1 + 0x510);
  }
  FUN_00454d10(pvVar2,pvVar9,1);
  puVar10 = (undefined4 *)FUN_00461250();
  uVar7 = *puVar10;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  *(undefined4 *)(param_1 + 0x48) = uVar7;
  _Dst = (uint *)operator_new(0x44);
  if (_Dst != (uint *)0x0) {
    _Dst[0x10] = _Dst[0x10] & 0xfffffffe;
    _memset(_Dst,0,0x44);
    *_Dst = *_Dst | 2;
    FUN_00452a60((int)_Dst,8,2,0x3c,0xf0,0x1e);
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}


