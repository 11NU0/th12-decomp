/* undefined __stdcall FUN_0041ce60(int param_1, uint param_2, short param_3) @ 0041ce60  210 bytes */
#include "th12.h"

void FUN_0041ce60(int param_1,uint param_2,short param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    puVar4 = (undefined4 *)(param_1 + 0x4a4);
    uVar2 = param_2;
    do {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)();
      }
      *(undefined2 *)(puVar4 + -0x34) = 2;
      puVar4 = puVar4 + 0x12d;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    uVar2 = param_2;
    if (7 < param_2) {
      return;
    }
  }
  iVar3 = uVar2 * 0x4b4 + 0x10 + param_1;
  pcVar1 = *(code **)(iVar3 + 0x494);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  uVar2 = uVar2 + 1;
  *(short *)(iVar3 + 0x3c4) = param_3 + 7;
  if (uVar2 < 8) {
    puVar4 = (undefined4 *)(uVar2 * 0x4b4 + 0x4a4 + param_1);
    iVar3 = 8 - uVar2;
    do {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)();
      }
      *(undefined2 *)(puVar4 + -0x34) = 3;
      puVar4 = puVar4 + 0x12d;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


