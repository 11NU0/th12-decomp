/* void * __fastcall FUN_00409400(void * param_1) @ 00409400  33 bytes */

#include "th12.h"

void * __fastcall FUN_00409400(void *param_1)

{
  _memset(param_1,0,0x214);
  *(undefined4 *)((int)param_1 + 0x208) = 0xffffffff;
  return param_1;
}


