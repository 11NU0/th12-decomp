/* undefined4 __stdcall FUN_00461450(int param_1) @ 00461450  325 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00461450(int param_1)

{
  int iVar1;
  int *piVar2;
  void *unaff_ESI;
  
  iVar1 = (int)unaff_ESI + 4;
  if (iVar1 == *(int *)((int)param_1 + 0x8856bc)) {
    *(undefined4 *)((int)param_1 + 0x8856bc) = *(undefined4 *)((int)unaff_ESI + 0xc);
  }
  if (iVar1 == *(int *)((int)param_1 + 0x8856b8)) {
    *(undefined4 *)((int)param_1 + 0x8856b8) = *(undefined4 *)((int)unaff_ESI + 8);
  }
  if (iVar1 == *(int *)((int)param_1 + 0x8856c4)) {
    *(undefined4 *)((int)param_1 + 0x8856c4) = *(undefined4 *)((int)unaff_ESI + 0xc);
  }
  if (iVar1 == *(int *)((int)param_1 + 0x8856c0)) {
    *(undefined4 *)((int)param_1 + 0x8856c0) = *(undefined4 *)((int)unaff_ESI + 8);
  }
  if (*(code **)((int)unaff_ESI + 0x490) != (code *)0x0) {
    (**(code **)((int)unaff_ESI + 0x490))();
  }
  if (*(int *)((int)unaff_ESI + 8) != 0) {
    *(undefined4 *)(*(int *)((int)unaff_ESI + 8) + 8) = *(undefined4 *)((int)unaff_ESI + 0xc);
  }
  if (*(int *)((int)unaff_ESI + 0xc) != 0) {
    *(undefined4 *)(*(int *)((int)unaff_ESI + 0xc) + 4) = *(undefined4 *)((int)unaff_ESI + 8);
  }
  *(undefined4 *)((int)unaff_ESI + 8) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xc) = 0;
  if (*(int *)((int)unaff_ESI + 0x18) == 0) {
    for (piVar2 = *(int **)((int)unaff_ESI + 0x14); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1])
    {
      *(undefined4 *)(*piVar2 + 0x3c) = 0;
      *(uint *)(*piVar2 + 0x47c) = *(uint *)(*piVar2 + 0x47c) | 0x10000000;
    }
  }
  if (*(int *)((int)unaff_ESI + 0x14) != 0) {
    *(undefined4 *)(*(int *)((int)unaff_ESI + 0x14) + 8) = *(undefined4 *)((int)unaff_ESI + 0x18);
  }
  if (*(int *)((int)unaff_ESI + 0x18) != 0) {
    *(undefined4 *)(*(int *)((int)unaff_ESI + 0x18) + 4) = *(undefined4 *)((int)unaff_ESI + 0x14);
  }
  *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x18) = 0;
  if (((void *)(param_1 + 0xbcU) <= unaff_ESI) &&
     (unaff_ESI < (void *)((int)&DAT_004b40bc + param_1))) {
    *(undefined *)((int)&DAT_004b40bc + param_1 + ((int)unaff_ESI + (-0xbc - param_1)) / 0x4b4) = 0;
    if (*(void **)((int)unaff_ESI + 0x478) != (void *)0x0) {
      _free(*(void **)((int)unaff_ESI + 0x478));
    }
    *(undefined4 *)((int)unaff_ESI + 0x478) = 0;
    return 0;
  }
  if (*(void **)((int)unaff_ESI + 0x478) != (void *)0x0) {
    _free(*(void **)((int)unaff_ESI + 0x478));
  }
  *(undefined4 *)((int)unaff_ESI + 0x478) = 0;
  FUN_0046ca4f(unaff_ESI);
  return 0;
}


