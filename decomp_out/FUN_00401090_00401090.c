/* undefined4 __stdcall FUN_00401090(void) @ 00401090  391 bytes */
#include "th12.h"

undefined4 FUN_00401090(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0045fe60(2);
  *(int *)(in_EAX + 0x18fb4) = iVar1;
  if (iVar1 == 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_0049f434);
    return 0xffffffff;
  }
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
  puVar2[2] = FUN_004014b0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = in_EAX;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462380();
  *(undefined4 **)(in_EAX + 0xc) = puVar2;
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
  puVar2[2] = &LAB_004014d0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = in_EAX;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)(in_EAX + 0x10) = puVar2;
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
  puVar2[2] = &LAB_004014e0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = in_EAX;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462420();
  iVar1 = *(int *)(in_EAX + 0x18fb4);
  *(undefined4 **)(in_EAX + 0x18fc0) = puVar2;
  FUN_00402520();
  *(int *)(in_EAX + 0x40c) = iVar1;
  FUN_00454b80(0,iVar1);
  iVar1 = *(int *)(in_EAX + 0x18fb4);
  FUN_00402520();
  *(int *)(in_EAX + 0x8c0) = iVar1;
  FUN_00454b80(0x62,iVar1);
  return 0;
}


