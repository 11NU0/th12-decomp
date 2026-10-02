/* undefined __stdcall FUN_0043c590(void) @ 0043c590  415 bytes */
#include "th12.h"

void __stdcall FUN_0043c590(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = DAT_004b4518;
  if (*(int *)((int)DAT_004b4518 + 8) != 0) {
    puVar1 = (uint *)(*(int *)((int)DAT_004b4518 + 8) + 4);
    *puVar1 = *puVar1 | 2;
  }
  if (*(int *)((int)iVar4 + 0x1d4) != 0) {
    puVar1 = (uint *)(*(int *)((int)iVar4 + 0x1d4) + 4);
    *puVar1 = *puVar1 | 2;
  }
  if (*(int *)((int)iVar4 + 0xc) != 0) {
    puVar1 = (uint *)(*(int *)((int)iVar4 + 0xc) + 4);
    *puVar1 = *puVar1 | 2;
  }
  if (*(int *)((int)iVar4 + 0x10) == 0) {
    iVar2 = *(int *)(iVar4 + 0x20 + DAT_004b0cb0 * 4);
    FUN_0043ccd0(iVar4);
    uVar5 = FUN_0043cbb0();
    *(undefined4 *)((int)iVar4 + 0xa0) = uVar5;
    if (DAT_004cee4c == 0) {
      *(undefined4 *)((int)iVar2 + 0xc) = DAT_004b0c44;
      *(undefined2 *)((int)iVar2 + 0x10) = (undefined2)DAT_004b0c48;
      *(undefined4 *)((int)iVar2 + 0x14) = DAT_004b0c78;
      *(undefined2 *)((int)iVar2 + 0x18) = DAT_004b0c98;
      *(undefined2 *)((int)iVar2 + 0x1a) = DAT_004b0c9c;
      *(undefined4 *)((int)iVar2 + 0x2c) = DAT_004b0ccc;
      *(undefined4 *)((int)iVar2 + 0x38) = DAT_004b0cc4;
      *(undefined4 *)((int)iVar2 + 0x44) = DAT_004b0cdc;
      *(undefined2 *)((int)iVar2 + 0x1c) = DAT_004b0ca0;
      *(undefined2 *)((int)iVar2 + 0x1e) = DAT_004b0ca4;
      *(undefined4 *)((int)iVar2 + 0x20) = DAT_004b0c4c;
      *(undefined4 *)((int)iVar2 + 0x24) = DAT_004b0c50;
      *(undefined4 *)((int)iVar2 + 0x28) = DAT_004b0c54;
    }
    iVar3 = DAT_004b4514;
    *(undefined4 *)((int)iVar2 + 0x30) = *(undefined4 *)((int)DAT_004b4514 + 0x988);
    *(undefined4 *)((int)iVar2 + 0x34) = *(undefined4 *)((int)iVar3 + 0x98c);
    *(undefined4 *)((int)iVar2 + 0x3c) = DAT_004b0cd8;
    iVar2 = DAT_004b0cb0;
    *(undefined4 *)((int)iVar4 + 0x1d0) = 0;
    *(int *)((int)iVar4 + 0x1d8) = iVar2;
    *(undefined4 *)(*(int *)(iVar4 + 0x20 + iVar2 * 4) + 0x40) = *(undefined4 *)((int)iVar3 + 0xc598);
    *(undefined4 *)((int)iVar4 + 0x1d0) = 0;
    return;
  }
  if (*(int *)((int)iVar4 + 0x10) == 1) {
    iVar2 = *(int *)(iVar4 + 0xb8 + DAT_004b0cb0 * 0x24);
    *(int *)((int)iVar4 + 0x1d8) = DAT_004b0cb0;
    FUN_0043add0((undefined4 *)((int)iVar2 + 0x30));
    *(undefined4 *)((int)DAT_004b4514 + 0xc598) = *(undefined4 *)((int)iVar2 + 0x40);
    if (DAT_004b0cb0 == 3) {
      *(undefined4 *)((int)iVar4 + 0x14) = 1;
    }
    iVar2 = iVar4 + 0xa8 + DAT_004b0cb0 * 0x24;
    *(undefined4 *)((int)iVar2 + 4) = *(undefined4 *)(iVar4 + 0xa8 + DAT_004b0cb0 * 0x24);
    *(undefined4 *)((int)iVar2 + 0xc) = *(undefined4 *)((int)iVar2 + 8);
    *(undefined4 *)((int)iVar2 + 0x14) = 0;
  }
  *(undefined4 *)((int)iVar4 + 0x1d0) = 0;
  return;
}


