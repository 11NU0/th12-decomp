/* undefined4 __fastcall FUN_0044b6a0(int param_1) @ 0044b6a0  101 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0044b6a0(int param_1)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  
  FUN_0044b710();
  puVar1 = (undefined4 *)operator_new(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = &PTR_FUN_004a241c;
  }
  *(undefined4 **)(param_1 + 0xc) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_0044b960(extraout_ECX,in_EAX);
    if ((char)uVar2 != '\0') {
      iVar3 = FUN_0044bc20();
      *(int *)(param_1 + 8) = iVar3;
      if (iVar3 != 0) {
        return CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
    }
    puVar1 = (undefined4 *)FUN_0044b710();
  }
  return (uint)puVar1 & 0xffffff00;
}


