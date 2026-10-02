/* undefined4 __stdcall FUN_004089c0(int param_1) @ 004089c0  460 bytes */
#include "th12.h"

undefined4 FUN_004089c0(int param_1)

{
  float *pfVar1;
  int *piVar2;
  undefined4 uVar3;
  void *this;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *_Dst;
  void *pvVar7;
  undefined4 *puVar8;
  
  iVar5 = param_1;
  *(undefined4 *)(param_1 + 0x514) = 0x42000000;
  iVar4 = DAT_004b4514;
  *(undefined4 *)(param_1 + 0x518) = 0x41200000;
  pfVar1 = (float *)(param_1 + 0x508);
  *pfVar1 = *(float *)(iVar4 + 0x97c);
  uVar3 = *(undefined4 *)(iVar4 + 0x980);
  *(undefined4 *)(param_1 + 0x50c) = uVar3;
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(iVar4 + 0x984);
  FUN_00453d90(uVar3,0x33);
  FUN_004615a0((void *)0x0,*(void **)(iVar4 + 0x10),&param_1,0x13,0);
  iVar4 = DAT_004b43cc;
  *(int *)(iVar5 + 0x40) = param_1;
  uVar6 = *(uint *)(iVar4 + 0x7c);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(iVar4 + 0x28) < 0x3c) {
      if (*(int *)(DAT_004b43c4 + 0x3c) == 0) goto LAB_00408a67;
      uVar6 = uVar6 | 0x20;
    }
    else {
      *(undefined4 *)(iVar4 + 0x80) = 0;
      uVar6 = uVar6 & 0xffffffdd;
    }
    *(uint *)(iVar4 + 0x7c) = uVar6;
  }
LAB_00408a67:
  *(int *)(DAT_004b43dc + 0x14) = *(int *)(DAT_004b43dc + 0x14) + 1;
  _Dst = (uint *)operator_new(0x44);
  if (_Dst != (uint *)0x0) {
    _Dst[0x10] = _Dst[0x10] & 0xfffffffe;
    _memset(_Dst,0,0x44);
    *_Dst = *_Dst | 2;
    FUN_00452a60((int)_Dst,8,2,0xb4,0x3c,1);
  }
  this = *(void **)(DAT_004b43e4 + 0x6d44);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  piVar2 = (int *)((int)this + 0x130);
  *piVar2 = *piVar2 + 1;
  pvVar7 = FUN_004621c0();
  *(uint *)((int)pvVar7 + 0x480) = *(uint *)((int)pvVar7 + 0x480) | 1;
  *(undefined4 *)((int)pvVar7 + 0x20) = 0x17;
  if (pfVar1 == (float *)0x0) {
    *(undefined4 *)((int)pvVar7 + 0x430) = 0;
    *(undefined4 *)((int)pvVar7 + 0x434) = 0;
    *(undefined4 *)((int)pvVar7 + 0x438) = 0;
  }
  else {
    *(float *)((int)pvVar7 + 0x430) = *pfVar1 + 32.0 + 192.0;
    *(float *)((int)pvVar7 + 0x434) = *(float *)(iVar5 + 0x50c) + 16.0;
    *(undefined4 *)((int)pvVar7 + 0x438) = *(undefined4 *)(iVar5 + 0x510);
  }
  FUN_00454d10(this,pvVar7,1);
  puVar8 = (undefined4 *)FUN_00461250();
  uVar3 = *puVar8;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  *(undefined4 *)(iVar5 + 0x48) = uVar3;
  return 0;
}


