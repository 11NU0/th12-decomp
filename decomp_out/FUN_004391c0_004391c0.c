/* undefined __stdcall FUN_004391c0(float * param_1) @ 004391c0  304 bytes */
#include "th12.h"

void FUN_004391c0(float *param_1)

{
  int *piVar1;
  void *this;
  void *pvVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  
  if (DAT_004b0cdc < 99999999) {
    DAT_004b0cdc = DAT_004b0cdc + 1;
  }
  DAT_004b0c78 = DAT_004b0c78 + 100;
  if (DAT_004b0cf4 < DAT_004b0c78) {
    DAT_004b0c78 = DAT_004b0cf4;
  }
  this = *(void **)(&DAT_004debdc + DAT_004b43c8);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  piVar1 = (int *)((int)this + 0x130);
  *piVar1 = *piVar1 + 1;
  pvVar2 = FUN_004621c0();
  *(uint *)((int)pvVar2 + 0x480) = *(uint *)((int)pvVar2 + 0x480) | 1;
  *(undefined4 *)((int)pvVar2 + 0x20) = 0x17;
  if (param_1 == (float *)0x0) {
    *(undefined4 *)((int)pvVar2 + 0x430) = 0;
    *(undefined4 *)((int)pvVar2 + 0x434) = 0;
    *(undefined4 *)((int)pvVar2 + 0x438) = 0;
  }
  else {
    *(float *)((int)pvVar2 + 0x430) = *param_1 + 32.0 + 192.0;
    *(float *)((int)pvVar2 + 0x434) = param_1[1] + 16.0;
    *(float *)((int)pvVar2 + 0x438) = param_1[2];
  }
  FUN_00454d10(this,pvVar2,0x90);
  FUN_00461250();
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  FUN_00453e20(uVar3,uVar4,*param_1);
  return;
}


