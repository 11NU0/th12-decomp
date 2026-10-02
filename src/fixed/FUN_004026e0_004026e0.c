/* undefined __fastcall FUN_004026e0(int param_1) @ 004026e0  34 bytes */
#include "th12.h"

void __fastcall FUN_004026e0(int param_1)

{
  if (*(void **)((int)param_1 + 0x478) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 0x478));
  }
  *(undefined4 *)((int)param_1 + 0x478) = 0;
  return;
}


