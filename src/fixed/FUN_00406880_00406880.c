/* undefined4 __stdcall FUN_00406880(int param_1) @ 00406880  173 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00406880(int param_1)

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
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00406bb0);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
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
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00406bc0);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  *(undefined4 **)((int)param_1 + 0xc) = puVar1;
  return 0;
}


