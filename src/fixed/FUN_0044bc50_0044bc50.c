/* undefined __fastcall FUN_0044bc50(undefined4 * param_1) @ 0044bc50  26 bytes */
#include "th12.h"

void __fastcall FUN_0044bc50(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    _free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}


