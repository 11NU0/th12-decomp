/* undefined __stdcall FUN_00407ea0(undefined4 param_1) @ 00407ea0  392 bytes */
#include "th12.h"

void __stdcall FUN_00407ea0(undefined4 param_1)

{
  float *pfVar1;
  int *piVar2;
  void *this;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_EAX;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *unaff_ESI;
  
  unaff_ESI[4] = *in_EAX;
  iVar4 = DAT_004b4514;
  unaff_ESI[5] = in_EAX[1];
  unaff_ESI[6] = in_EAX[2];
  this = *(void **)((int)iVar4 + 0x10);
  pfVar1 = (float *)((int)unaff_ESI + 1);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  piVar2 = (int *)((int)this + 0x130);
  *piVar2 = *piVar2 + 1;
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
    *(float *)((int)pvVar5 + 0x434) = (float)unaff_ESI[2] + 16.0;
    *(undefined4 *)((int)pvVar5 + 0x438) = unaff_ESI[3];
  }
  FUN_00454d10(this,pvVar5,0x18);
  puVar6 = (( undefined4 * (__stdcall *)())FUN_00461250)();
  uVar3 = *puVar6;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  *unaff_ESI = uVar3;
  unaff_ESI[0x21] = 1;
  if ((unaff_ESI[0x26] & 1) == 0) {
    unaff_ESI[0x24] = 0;
    unaff_ESI[0x23] = 0;
    unaff_ESI[0x22] = 0xfff0bdc1;
    unaff_ESI[0x25] = &DAT_004b2ed0;
    unaff_ESI[0x26] = unaff_ESI[0x26] | 1;
  }
  unaff_ESI[0x24] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x22] = 0xffffffff;
  unaff_ESI[0x2b] = param_1;
  puVar6 = FUN_004390f0(pfVar1,0x42600000,0,9999,10);
  unaff_ESI[0x2c] = puVar6;
  return;
}


