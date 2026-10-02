/* undefined4 __fastcall FUN_0042c720(int param_1) @ 0042c720  65 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0042c720(int param_1)

{
  if (*(void **)((int)param_1 + 4000) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 4000));
    *(undefined4 *)((int)param_1 + 4000) = 0;
  }
  if (*(void **)((int)param_1 + 0xf9c) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 0xf9c));
    *(undefined4 *)((int)param_1 + 0xf9c) = 0;
  }
  return 0;
}


