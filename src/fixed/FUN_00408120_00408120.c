/* undefined4 __stdcall FUN_00408120(void) @ 00408120  433 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00408120(void)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int unaff_EDI;
  
  iVar5 = DAT_004b4514;
  *(undefined4 *)((int)unaff_EDI + 0x514) = 0x42000000;
  *(undefined4 *)((int)unaff_EDI + 0x518) = 0x41200000;
  fVar3 = *(float *)((int)iVar5 + 0x97c);
  pfVar1 = (float *)((int)unaff_EDI + 0x508);
  *pfVar1 = fVar3;
  *(undefined4 *)((int)unaff_EDI + 0x50c) = *(undefined4 *)((int)iVar5 + 0x980);
  *(undefined4 *)((int)unaff_EDI + 0x510) = *(undefined4 *)((int)iVar5 + 0x984);
  FUN_00453d90(fVar3,0x33);
  iVar5 = DAT_004b43cc;
  uVar6 = *(uint *)((int)DAT_004b43cc + 0x7c);
  if ((uVar6 & 1) != 0) {
    if (*(int *)((int)DAT_004b43cc + 0x28) < 0x3c) {
      if (*(int *)((int)DAT_004b43c4 + 0x3c) == 0) goto LAB_004081a2;
      uVar6 = uVar6 | 0x20;
    }
    else {
      *(undefined4 *)((int)DAT_004b43cc + 0x80) = 0;
      uVar6 = uVar6 & 0xffffffdd;
    }
    *(uint *)((int)iVar5 + 0x7c) = uVar6;
  }
LAB_004081a2:
  *(int *)((int)DAT_004b43dc + 0x14) = *(int *)((int)DAT_004b43dc + 0x14) + 1;
  if (*(void **)((int)unaff_EDI + 0x500) != (void *)0x0) {
    _free(*(void **)((int)unaff_EDI + 0x500));
    *(undefined4 *)((int)unaff_EDI + 0x500) = 0;
  }
  pvVar7 = _malloc(0x5a0);
  *(void **)((int)unaff_EDI + 0x500) = pvVar7;
  _memset(pvVar7,0,0x5a0);
  pvVar7 = *(void **)((int)DAT_004b43e4 + 0x6d44);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  piVar2 = (int *)((int)pvVar7 + 0x130);
  *piVar2 = *piVar2 + 1;
  pvVar8 = FUN_004621c0();
  *(uint *)((int)pvVar8 + 0x480) = *(uint *)((int)pvVar8 + 0x480) | 1;
  *(undefined4 *)((int)pvVar8 + 0x20) = 0x17;
  if (pfVar1 == (float *)0x0) {
    *(undefined4 *)((int)pvVar8 + 0x430) = 0;
    *(undefined4 *)((int)pvVar8 + 0x434) = 0;
    *(undefined4 *)((int)pvVar8 + 0x438) = 0;
  }
  else {
    *(float *)((int)pvVar8 + 0x430) = *pfVar1 + 32.0 + 192.0;
    *(float *)((int)pvVar8 + 0x434) = *(float *)((int)unaff_EDI + 0x50c) + 16.0;
    *(undefined4 *)((int)pvVar8 + 0x438) = *(undefined4 *)((int)unaff_EDI + 0x510);
  }
  FUN_00454d10(pvVar7,pvVar8,1);
  puVar9 = (( undefined4 * (__stdcall *)())FUN_00461250)();
  uVar4 = *puVar9;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  *(undefined4 *)((int)unaff_EDI + 0x48) = uVar4;
  return 0;
}


