/* undefined4 __stdcall FUN_0042eb10(void * param_1) @ 0042eb10  238 bytes */
#include "th12.h"

undefined4 FUN_0042eb10(void *param_1)

{
  undefined4 *puVar1;
  uintptr_t uVar2;
  
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[2] = FUN_0042ef70;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  puVar1[1] = puVar1[1] & 0xfffffffd | 1;
  FUN_00462380();
  *(undefined4 **)((int)param_1 + 8) = puVar1;
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[2] = FUN_0042ef80;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  puVar1[1] = puVar1[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)((int)param_1 + 0xc) = puVar1;
  FUN_00464c40();
  *(undefined **)((int)param_1 + 0x28) = &LAB_0042e9b0;
  *(undefined4 *)((int)param_1 + 0x20) = 1;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  uVar2 = __beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_0042e9b0,param_1,0,
                          (uint *)((int)param_1 + 0x18));
  *(uintptr_t *)((int)param_1 + 0x14) = uVar2;
  return 0;
}


