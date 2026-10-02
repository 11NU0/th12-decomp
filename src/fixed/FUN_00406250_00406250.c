/* undefined __fastcall FUN_00406250(int param_1) @ 00406250  171 bytes */
#include "th12.h"

void __fastcall FUN_00406250(int param_1)

{
  undefined local_4;
  
  local_4 = (undefined)(int)ROUND(*(float *)((int)param_1 + 8));
  *(undefined *)((int)param_1 + 0x18) = local_4;
  local_4 = (undefined)(int)ROUND(*(float *)((int)param_1 + 0xc));
  *(undefined *)((int)param_1 + 0x19) = local_4;
  local_4 = (undefined)(int)ROUND(*(float *)((int)param_1 + 0x10));
  *(undefined *)((int)param_1 + 0x1a) = local_4;
  local_4 = (undefined)(int)ROUND(*(float *)((int)param_1 + 0x14));
  *(undefined *)((int)param_1 + 0x1b) = local_4;
  return;
}


