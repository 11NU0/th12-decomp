/* undefined4 * __thiscall FUN_004615a0(void * this, void * param_1, undefined4 * param_2, int param_3, uint param_4) @ 004615a0  369 bytes */
#include "th12.h"

undefined4 * __thiscall
FUN_004615a0(void *this,void *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int in_EAX;
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  *(int *)((int)param_1 + 0x130) = *(int *)((int)param_1 + 0x130) + 1;
  pvVar1 = FUN_004621c0();
  if (-1 < in_EAX) {
    *(int *)((int)pvVar1 + 0x20) = in_EAX;
  }
  *(uint *)((int)pvVar1 + 0x480) = *(uint *)((int)pvVar1 + 0x480) | 1;
  if ((this == (void *)0x0) && ((param_4 & 8) == 0)) {
    uVar3 = 0;
    *(undefined4 *)((int)pvVar1 + 0x430) = 0;
    *(undefined4 *)((int)pvVar1 + 0x434) = 0;
LAB_00461663:
    *(undefined4 *)((int)pvVar1 + 0x438) = uVar3;
  }
  else {
    if ((param_4 & 1) == 0) {
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)((int)pvVar1 + 0x430) = *this;
      *(undefined4 *)((int)pvVar1 + 0x434) = *(undefined4 *)((int)this + 4);
      uVar3 = *(undefined4 *)((int)this + 8);
      goto LAB_00461663;
    }
                    /* WARNING: Load size is inaccurate */
    *(float *)((int)pvVar1 + 0x430) = *this + 32.0 + 192.0;
    *(float *)((int)pvVar1 + 0x434) = *(float *)((int)this + 4) + 16.0;
    *(undefined4 *)((int)pvVar1 + 0x438) = *(undefined4 *)((int)this + 8);
  }
  if ((param_4 & 8) == 0) {
    FUN_00454d10(param_1,pvVar1,param_3);
  }
  else {
    FUN_00454df0(param_3);
  }
  if (((param_4 & 4) == 0) || ((param_4 & 2) == 0)) {
    if ((param_4 & 4) != 0) {
      puVar2 = (undefined4 *)FUN_00461350();
      *param_2 = *puVar2;
      goto LAB_004616e6;
    }
    if ((param_4 & 2) != 0) {
      puVar2 = (undefined4 *)FUN_004612d0();
      *param_2 = *puVar2;
      goto LAB_004616e6;
    }
    puVar2 = (undefined4 *)FUN_00461250();
  }
  else {
    puVar2 = (undefined4 *)FUN_004613d0();
  }
  *param_2 = *puVar2;
LAB_004616e6:
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  return param_2;
}


