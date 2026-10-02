/* undefined4 __stdcall FUN_00427fd0(int param_1) @ 00427fd0  250 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00427fd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0045fe60(6);
  *(int *)((int)param_1 + 0x488) = iVar1;
  if (iVar1 == 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_0049f6a8);
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
  puVar2[2] = ((void *)0x004283d0);
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = param_1;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462380();
  *(undefined4 **)((int)param_1 + 8) = puVar2;
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
  puVar2[2] = ((void *)0x00428430);
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = param_1;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)((int)param_1 + 0xc) = puVar2;
  *(int *)((int)param_1 + 0x464) = param_1 + 0x10;
  return 0;
}


