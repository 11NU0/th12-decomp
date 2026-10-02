/* undefined4 __fastcall FUN_00414af0(undefined4 param_1, undefined4 param_2) @ 00414af0  362 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00414af0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  void *this;
  void *pvVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int unaff_ESI;
  
  if (-1 < *(int *)(unaff_ESI + 0x26b8)) {
    FUN_00453e20(param_1,param_2,*(undefined4 *)(unaff_ESI + 0x1074));
    param_1 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  iVar2 = *(int *)(unaff_ESI + 0x26bc);
  if (-1 < iVar2) {
    this = *(void **)(DAT_004b43dc + 0x40 + *(int *)(unaff_ESI + 0x26c0) * 4);
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
      DAT_004cf221 = DAT_004cf221 + '\x01';
    }
    piVar1 = (int *)((int)this + 0x130);
    *piVar1 = *piVar1 + 1;
    pvVar3 = FUN_004621c0();
    *(uint *)((int)pvVar3 + 0x480) = *(uint *)((int)pvVar3 + 0x480) | 1;
    *(undefined4 *)((int)pvVar3 + 0x20) = 4;
    if ((float *)(unaff_ESI + 0x1074) == (float *)0x0) {
      *(undefined4 *)((int)pvVar3 + 0x430) = 0;
      *(undefined4 *)((int)pvVar3 + 0x434) = 0;
      *(undefined4 *)((int)pvVar3 + 0x438) = 0;
    }
    else {
      *(float *)((int)pvVar3 + 0x430) = *(float *)(unaff_ESI + 0x1074) + 32.0 + 192.0;
      *(float *)((int)pvVar3 + 0x434) = *(float *)(unaff_ESI + 0x1078) + 16.0;
      *(undefined4 *)((int)pvVar3 + 0x438) = *(undefined4 *)(unaff_ESI + 0x107c);
    }
    FUN_00454d10(this,pvVar3,iVar2);
    FUN_00461250();
    param_1 = extraout_ECX_00;
    param_2 = extraout_EDX_00;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
      DAT_004cf221 = DAT_004cf221 + -1;
      param_1 = extraout_ECX_01;
      param_2 = extraout_EDX_01;
    }
  }
  if (*(int *)(unaff_ESI + 0x2660) != 0) {
    FUN_004273f0(param_1,param_2,*(int *)(unaff_ESI + 0x2660),(float *)(unaff_ESI + 0x1074),
                 -1.5707964,2.2);
  }
  FUN_00412140((int *)(unaff_ESI + 0x2660));
  *(int *)(unaff_ESI + 0x2660) = 0;
  if (*(code **)(unaff_ESI + 0x103c) != (code *)0x0) {
    (**(code **)(unaff_ESI + 0x103c))();
  }
  return 1;
}


