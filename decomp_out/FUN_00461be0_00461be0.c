/* undefined __fastcall FUN_00461be0(undefined4 param_1, int param_2) @ 00461be0  78 bytes */
#include "th12.h"

void __fastcall FUN_00461be0(undefined4 param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int unaff_ESI;
  
  piVar4 = *(int **)(unaff_ESI + 0x8856b8);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[1];
    iVar3 = *piVar4;
    piVar4 = piVar2;
    if (*(int *)(iVar3 + 0x3f8) == param_2) {
      puVar1 = (uint *)(iVar3 + 0x47c);
      *puVar1 = *puVar1 | 0x10000000;
    }
  }
  piVar4 = *(int **)(unaff_ESI + 0x8856c0);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[1];
    iVar3 = *piVar4;
    piVar4 = piVar2;
    if (*(int *)(iVar3 + 0x3f8) == param_2) {
      puVar1 = (uint *)(iVar3 + 0x47c);
      *puVar1 = *puVar1 | 0x10000000;
    }
  }
  return;
}


