/* undefined __fastcall FUN_004094f0(int param_1) @ 004094f0  34 bytes */

#include "th12.h"

void __fastcall FUN_004094f0(int param_1)

{
  if (*(void **)(param_1 + 0x480) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x480));
  }
  *(undefined4 *)(param_1 + 0x480) = 0;
  return;
}


