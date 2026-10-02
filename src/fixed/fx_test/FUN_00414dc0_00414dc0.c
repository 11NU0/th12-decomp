/* ulonglong __stdcall FUN_00414dc0(int param_1) @ 00414dc0  369 bytes */

#include "th12.h"

ulonglong __stdcall FUN_00414dc0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *this;
  int *piVar5;
  void *pvVar6;
  ulonglong uVar7;
  
  piVar5 = *(int **)(DAT_004b43dc + 0x68);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[1];
    iVar2 = *piVar5;
    uVar3 = *(uint *)(iVar2 + 0x26f8);
    piVar5 = piVar1;
    if (((((uVar3 & 0xa0) == 0) && ((uVar3 & 0x600400) == 0)) || ((uVar3 & 0x100) != 0)) &&
       (*(int *)(iVar2 + 0x1274) == param_1)) {
      iVar4 = *(int *)(iVar2 + 0x26bc);
      if (-1 < iVar4) {
        this = *(void **)(DAT_004b43dc + 0x40 + *(int *)(iVar2 + 0x26c0) * 4);
        if ((DAT_004cee78 & 0x8000) != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
          DAT_004cf221 = DAT_004cf221 + '\x01';
        }
        piVar1 = (int *)((int)this + 0x130);
        *piVar1 = *piVar1 + 1;
        pvVar6 = FUN_004621c0();
        *(uint *)((int)pvVar6 + 0x480) = *(uint *)((int)pvVar6 + 0x480) | 1;
        *(undefined4 *)((int)pvVar6 + 0x20) = 4;
        if ((float *)(iVar2 + 0x1074) == (float *)0x0) {
          *(undefined4 *)((int)pvVar6 + 0x430) = 0;
          *(undefined4 *)((int)pvVar6 + 0x434) = 0;
          *(undefined4 *)((int)pvVar6 + 0x438) = 0;
        }
        else {
          *(float *)((int)pvVar6 + 0x430) = *(float *)(iVar2 + 0x1074) + 32.0 + 192.0;
          *(float *)((int)pvVar6 + 0x434) = *(float *)(iVar2 + 0x1078) + 16.0;
          *(undefined4 *)((int)pvVar6 + 0x438) = *(undefined4 *)(iVar2 + 0x107c);
        }
        FUN_00454d10(this,pvVar6,iVar4);
        FUN_00461250();
        if ((DAT_004cee78 & 0x8000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
          DAT_004cf221 = DAT_004cf221 + -1;
        }
      }
      *(uint *)(iVar2 + 0x26f8) = *(uint *)(iVar2 + 0x26f8) | 0x1000000;
    }
  }
  uVar7 = FUN_00464a80();
  return uVar7;
}


