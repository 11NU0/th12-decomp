/* undefined __fastcall FUN_0044cd60(int param_1) @ 0044cd60  37 bytes */
#include "th12.h"

void __fastcall FUN_0044cd60(int param_1)

{
  if (*(void **)((int)param_1 + 0xc) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 0xc));
    *(undefined4 *)((int)param_1 + 0xc) = 0;
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  return;
}


