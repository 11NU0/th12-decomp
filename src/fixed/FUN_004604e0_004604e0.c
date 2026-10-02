/* undefined __fastcall FUN_004604e0(undefined4 param_1) @ 004604e0  237 bytes */
#include "th12.h"

void __fastcall FUN_004604e0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  
  iVar2 = 0;
  if (*(int *)((int)unaff_EDI + 0x108) != 0) {
    FUN_00461be0(param_1,unaff_EDI);
    iVar3 = 0;
    if (0 < *(int *)((int)unaff_EDI + 0x10c)) {
      do {
        piVar1 = *(int **)(*(int *)((int)unaff_EDI + 0x120) + iVar2);
        puVar4 = (undefined4 *)(*(int *)((int)unaff_EDI + 0x120) + iVar2);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *puVar4 = 0;
        }
        if ((void *)puVar4[1] != (void *)0x0) {
          _free((void *)puVar4[1]);
          puVar4[1] = 0;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x14;
      } while (iVar3 < *(int *)((int)unaff_EDI + 0x10c));
    }
    if (*(void **)((int)unaff_EDI + 0x120) != (void *)0x0) {
      _free(*(void **)((int)unaff_EDI + 0x120));
      *(undefined4 *)((int)unaff_EDI + 0x120) = 0;
    }
    if (*(void **)((int)unaff_EDI + 0x118) != (void *)0x0) {
      _free(*(void **)((int)unaff_EDI + 0x118));
      *(undefined4 *)((int)unaff_EDI + 0x118) = 0;
    }
    if (*(void **)((int)unaff_EDI + 0x11c) != (void *)0x0) {
      _free(*(void **)((int)unaff_EDI + 0x11c));
      *(undefined4 *)((int)unaff_EDI + 0x11c) = 0;
    }
    if (*(void **)((int)unaff_EDI + 0x134) != (void *)0x0) {
      _free(*(void **)((int)unaff_EDI + 0x134));
      *(undefined4 *)((int)unaff_EDI + 0x134) = 0;
    }
    if (*(void **)((int)unaff_EDI + 0x108) != (void *)0x0) {
      _free(*(void **)((int)unaff_EDI + 0x108));
      *(undefined4 *)((int)unaff_EDI + 0x108) = 0;
    }
  }
  return;
}


