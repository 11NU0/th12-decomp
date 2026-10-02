/* undefined4 __stdcall FUN_0043f3d0(void) @ 0043f3d0  275 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0043f3d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = DAT_004b4530;
  puVar2 = (undefined4 *)operator_new(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2[1] & 0xfffffffe;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = 0;
    puVar2[5] = puVar2;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  puVar2[2] = &LAB_0043fc90;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = iVar1;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462380();
  *(undefined4 **)(iVar1 + 0xc) = puVar2;
  puVar2 = (undefined4 *)operator_new(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2[1] & 0xfffffffe;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = 0;
    puVar2[5] = puVar2;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  puVar2[2] = &LAB_0043fca0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = iVar1;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)(iVar1 + 0x10) = puVar2;
  iVar3 = FUN_0045fe60(0x18);
  *(int *)(iVar1 + 0x14) = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_0045fe60(0x19);
    *(int *)(iVar1 + 0x18) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar1 + 0xf8) = 1;
      DAT_004ce55c = 0;
      return 0;
    }
  }
  FUN_00464220(&DAT_004b0ec8,&DAT_0049f434);
  return 0xffffffff;
}


