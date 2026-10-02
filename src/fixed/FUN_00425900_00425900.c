/* undefined __fastcall FUN_00425900(int param_1) @ 00425900  63 bytes */
#include "th12.h"

void __fastcall FUN_00425900(int param_1)

{
  if (*(void **)((int)param_1 + 0x92c) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 0x92c));
  }
  *(undefined4 *)((int)param_1 + 0x92c) = 0;
  if (*(void **)((int)param_1 + 0x478) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 0x478));
  }
  *(undefined4 *)((int)param_1 + 0x478) = 0;
  return;
}


