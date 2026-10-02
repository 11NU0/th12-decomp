/* undefined __fastcall FUN_00412be0(undefined4 param_1, int param_2) @ 00412be0  82 bytes */
#include "th12.h"

void __fastcall FUN_00412be0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_004b43dc;
  if (*(int *)(DAT_004b43dc + 0x68) == param_2 + 0x12c0) {
    *(undefined4 *)(DAT_004b43dc + 0x68) = *(undefined4 *)(param_2 + 0x12c4);
  }
  if (*(int *)(iVar1 + 0x6c) == param_2 + 0x12c0) {
    *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(param_2 + 0x12c8);
  }
  if (*(int *)(param_2 + 0x12c4) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x12c4) + 8) = *(undefined4 *)(param_2 + 0x12c8);
  }
  if (*(int *)(param_2 + 0x12c8) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x12c8) + 4) = *(undefined4 *)(param_2 + 0x12c4);
  }
  *(undefined4 *)(param_2 + 0x12c4) = 0;
  *(undefined4 *)(param_2 + 0x12c8) = 0;
  *(int *)(iVar1 + 0x70) = *(int *)(iVar1 + 0x70) + -1;
  return;
}


