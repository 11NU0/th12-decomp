/* undefined __fastcall FUN_0044ccf0(undefined4 * param_1) @ 0044ccf0  49 bytes */

#include "th12.h"

void __fastcall FUN_0044ccf0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_004a23d4;
  if ((void *)param_1[3] != (void *)0x0) {
    _free((void *)param_1[3]);
    param_1[3] = 0;
  }
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_004a2304;
  return;
}


