/* undefined4 __stdcall FUN_0043db40(void) @ 0043db40  230 bytes */
#include "th12.h"

undefined4 FUN_0043db40(void)

{
  int iVar1;
  int in_EAX;
  undefined4 *puVar2;
  
  *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(DAT_004b43b8 + 0x18fb4);
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
  puVar2[2] = &LAB_0043e230;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = in_EAX;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462380();
  *(undefined4 **)(in_EAX + 8) = puVar2;
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
  puVar2[2] = &LAB_0043e240;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = in_EAX;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)(in_EAX + 0xc) = puVar2;
  iVar1 = *(int *)(in_EAX + 0x10);
  FUN_00402520();
  *(int *)(in_EAX + 0x410) = iVar1;
  FUN_00454b80(0xc4,iVar1);
  return 0;
}


