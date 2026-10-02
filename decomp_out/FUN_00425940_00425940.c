/* undefined4 __stdcall FUN_00425940(int param_1) @ 00425940  189 bytes */
#include "th12.h"

undefined4 FUN_00425940(int param_1)

{
  undefined4 *puVar1;
  
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
  puVar1[2] = &LAB_00427380;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  puVar1[1] = puVar1[1] & 0xfffffffd | 1;
  FUN_00462380();
  *(undefined4 **)(param_1 + 8) = puVar1;
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
  puVar1[2] = &LAB_004273c0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  puVar1[1] = puVar1[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)(param_1 + 0xc) = puVar1;
  return 0;
}


