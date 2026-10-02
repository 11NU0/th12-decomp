/* undefined __fastcall FUN_0044bd70(undefined4 * param_1) @ 0044bd70  46 bytes */

#include "th12.h"

void __fastcall FUN_0044bd70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004a22dc;
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0xffffffff;
    param_1[2] = 0;
  }
  *param_1 = &PTR_LAB_004a2304;
  return;
}


