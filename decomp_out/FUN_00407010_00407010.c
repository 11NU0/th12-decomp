/* undefined4 __stdcall FUN_00407010(int param_1) @ 00407010  703 bytes */
#include "th12.h"

undefined4 FUN_00407010(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *_Dst;
  int *piVar8;
  undefined4 extraout_ECX;
  
  *(undefined4 *)(param_1 + 0x514) = 0x42000000;
  iVar4 = DAT_004b4514;
  *(undefined4 *)(param_1 + 0x518) = 0x41200000;
  pfVar1 = (float *)(param_1 + 0x508);
  *pfVar1 = *(float *)(iVar4 + 0x97c);
  uVar2 = *(undefined4 *)(iVar4 + 0x980);
  *(undefined4 *)(param_1 + 0x50c) = uVar2;
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(iVar4 + 0x984);
  FUN_00453d90(uVar2,0x33);
  pvVar3 = *(void **)(iVar4 + 0x10);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  piVar8 = (int *)((int)pvVar3 + 0x130);
  *piVar8 = *piVar8 + 1;
  pvVar5 = FUN_004621c0();
  *(uint *)((int)pvVar5 + 0x480) = *(uint *)((int)pvVar5 + 0x480) | 1;
  *(undefined4 *)((int)pvVar5 + 0x20) = 0x17;
  if (pfVar1 == (float *)0x0) {
    *(undefined4 *)((int)pvVar5 + 0x430) = 0;
    *(undefined4 *)((int)pvVar5 + 0x434) = 0;
    *(undefined4 *)((int)pvVar5 + 0x438) = 0;
  }
  else {
    *(float *)((int)pvVar5 + 0x430) = *pfVar1 + 32.0 + 192.0;
    *(float *)((int)pvVar5 + 0x434) = *(float *)(param_1 + 0x50c) + 16.0;
    *(undefined4 *)((int)pvVar5 + 0x438) = *(undefined4 *)(param_1 + 0x510);
  }
  FUN_00454d10(pvVar3,pvVar5,0x10);
  puVar6 = (undefined4 *)FUN_00461250();
  uVar2 = *puVar6;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  iVar4 = DAT_004b43cc;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar7 = *(uint *)(iVar4 + 0x7c);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(iVar4 + 0x28) < 0x3c) {
      if (*(int *)(DAT_004b43c4 + 0x3c) == 0) goto LAB_00407167;
      uVar7 = uVar7 | 0x20;
    }
    else {
      *(undefined4 *)(iVar4 + 0x80) = 0;
      uVar7 = uVar7 & 0xffffffdd;
    }
    *(uint *)(iVar4 + 0x7c) = uVar7;
  }
LAB_00407167:
  FUN_00406f60(0x78);
  *(int *)(DAT_004b43dc + 0x14) = *(int *)(DAT_004b43dc + 0x14) + 1;
  _Dst = (uint *)operator_new(0x44);
  if (_Dst != (uint *)0x0) {
    _Dst[0x10] = _Dst[0x10] & 0xfffffffe;
    _memset(_Dst,0,0x44);
    *_Dst = *_Dst | 2;
    FUN_00452a60((int)_Dst,8,3,0x3c,0xf0,0x1e);
  }
  pvVar3 = *(void **)(DAT_004b43e4 + 0x6d44);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  piVar8 = (int *)((int)pvVar3 + 0x130);
  *piVar8 = *piVar8 + 1;
  pvVar5 = FUN_004621c0();
  *(uint *)((int)pvVar5 + 0x480) = *(uint *)((int)pvVar5 + 0x480) | 1;
  *(undefined4 *)((int)pvVar5 + 0x20) = 0x17;
  if (pfVar1 == (float *)0x0) {
    *(undefined4 *)((int)pvVar5 + 0x430) = 0;
    *(undefined4 *)((int)pvVar5 + 0x434) = 0;
    *(undefined4 *)((int)pvVar5 + 0x438) = 0;
  }
  else {
    *(float *)((int)pvVar5 + 0x430) = *pfVar1 + 32.0 + 192.0;
    *(float *)((int)pvVar5 + 0x434) = *(float *)(param_1 + 0x50c) + 16.0;
    *(undefined4 *)((int)pvVar5 + 0x438) = *(undefined4 *)(param_1 + 0x510);
  }
  FUN_00454d10(pvVar3,pvVar5,1);
  puVar6 = (undefined4 *)FUN_00461250();
  uVar2 = *puVar6;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  iVar4 = DAT_004ce8cc;
  piVar8 = FUN_00461920(uVar2,DAT_004ce8cc,uVar2);
  if (piVar8 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(undefined *)((int)piVar8 + 0x3bf) = 0xe0;
  piVar8 = FUN_00461920(extraout_ECX,iVar4,*(int *)(param_1 + 0x48));
  if (piVar8 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  piVar8[0x9f] = 0xe0;
  return 0;
}


