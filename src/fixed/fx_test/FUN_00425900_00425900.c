/* undefined __fastcall FUN_00425900(int param_1) @ 00425900  63 bytes */

#include "th12.h"

void __fastcall FUN_00425900(int param_1)

{
  if (*(void **)(param_1 + 0x92c) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x92c));
  }
  *(undefined4 *)(param_1 + 0x92c) = 0;
  if (*(void **)(param_1 + 0x478) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x478));
  }
  *(undefined4 *)(param_1 + 0x478) = 0;
  return;
}


