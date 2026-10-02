/* undefined4 __fastcall FUN_0043aa50(void * param_1, int param_2) @ 0043aa50  100 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0043aa50(void *param_1,int param_2)

{
  if (*(int *)((int)param_2 + 0x48) != 2) {
    if (0.0 < *(float *)((int)param_2 + 0x2c) != NANP(*(float *)((int)param_2 + 0x2c))) {
      *(float *)((int)param_2 + 0x2c) = *(float *)((int)param_2 + 0x2c) - 0.1;
      return 0;
    }
    *(undefined4 *)((int)param_2 + 0x48) = 2;
    FUN_00461970(param_1,*(int *)((int)param_2 + 0x4c));
    FUN_004390f0((undefined4 *)((int)param_2 + 0x14),0x41400000,0x3fb33333,0xf,4);
  }
  return 0;
}


