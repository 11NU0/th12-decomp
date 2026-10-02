/* undefined4 __stdcall FUN_00408cb0(int param_1) @ 00408cb0  584 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00408cb0(int param_1)

{
  float *pfVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  *(undefined4 *)((int)param_1 + 0x514) = 0x42000000;
  iVar5 = DAT_004b4514;
  *(undefined4 *)((int)param_1 + 0x518) = 0x41200000;
  pfVar1 = (float *)((int)param_1 + 0x508);
  *pfVar1 = *(float *)((int)iVar5 + 0x97c);
  uVar3 = *(undefined4 *)((int)iVar5 + 0x980);
  *(undefined4 *)((int)param_1 + 0x50c) = uVar3;
  *(undefined4 *)((int)param_1 + 0x510) = *(undefined4 *)((int)iVar5 + 0x984);
  FUN_00453d90(uVar3,0x1f);
  pvVar4 = *(void **)((int)iVar5 + 0x10);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  piVar2 = (int *)((int)pvVar4 + 0x130);
  *piVar2 = *piVar2 + 1;
  pvVar6 = FUN_004621c0();
  *(uint *)((int)pvVar6 + 0x480) = *(uint *)((int)pvVar6 + 0x480) | 1;
  *(undefined4 *)((int)pvVar6 + 0x20) = 0x17;
  if (pfVar1 == (float *)0x0) {
    *(undefined4 *)((int)pvVar6 + 0x430) = 0;
    *(undefined4 *)((int)pvVar6 + 0x434) = 0;
    *(undefined4 *)((int)pvVar6 + 0x438) = 0;
  }
  else {
    *(float *)((int)pvVar6 + 0x430) = *pfVar1 + 32.0 + 192.0;
    *(float *)((int)pvVar6 + 0x434) = *(float *)((int)param_1 + 0x50c) + 16.0;
    *(undefined4 *)((int)pvVar6 + 0x438) = *(undefined4 *)((int)param_1 + 0x510);
  }
  FUN_00454d10(pvVar4,pvVar6,0x15);
  puVar7 = (( undefined4 * (__stdcall *)())FUN_00461250)();
  uVar3 = *puVar7;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  iVar5 = DAT_004b43cc;
  *(undefined4 *)((int)param_1 + 0x40) = uVar3;
  uVar8 = *(uint *)((int)iVar5 + 0x7c);
  if ((uVar8 & 1) != 0) {
    if (*(int *)((int)iVar5 + 0x28) < 0x3c) {
      if (*(int *)((int)DAT_004b43c4 + 0x3c) == 0) goto LAB_00408e07;
      uVar8 = uVar8 | 0x20;
    }
    else {
      *(undefined4 *)((int)iVar5 + 0x80) = 0;
      uVar8 = uVar8 & 0xffffffdd;
    }
    *(uint *)((int)iVar5 + 0x7c) = uVar8;
  }
LAB_00408e07:
  *(int *)((int)DAT_004b43dc + 0x14) = *(int *)((int)DAT_004b43dc + 0x14) + 1;
  pvVar4 = *(void **)((int)DAT_004b43e4 + 0x6d44);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  piVar2 = (int *)((int)pvVar4 + 0x130);
  *piVar2 = *piVar2 + 1;
  pvVar6 = FUN_004621c0();
  *(uint *)((int)pvVar6 + 0x480) = *(uint *)((int)pvVar6 + 0x480) | 1;
  *(undefined4 *)((int)pvVar6 + 0x20) = 0x17;
  if (pfVar1 == (float *)0x0) {
    *(undefined4 *)((int)pvVar6 + 0x430) = 0;
    *(undefined4 *)((int)pvVar6 + 0x434) = 0;
    *(undefined4 *)((int)pvVar6 + 0x438) = 0;
  }
  else {
    *(float *)((int)pvVar6 + 0x430) = *pfVar1 + 32.0 + 192.0;
    *(float *)((int)pvVar6 + 0x434) = *(float *)((int)param_1 + 0x50c) + 16.0;
    *(undefined4 *)((int)pvVar6 + 0x438) = *(undefined4 *)((int)param_1 + 0x510);
  }
  FUN_00454d10(pvVar4,pvVar6,1);
  puVar7 = (( undefined4 * (__stdcall *)())FUN_00461250)();
  uVar3 = *puVar7;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  *(undefined4 *)((int)param_1 + 0x48) = uVar3;
  return 0;
}


