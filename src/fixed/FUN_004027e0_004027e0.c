/* void * __fastcall FUN_004027e0(void * param_1) @ 004027e0  107 bytes */
#include "th12.h"

void * __fastcall FUN_004027e0(void *param_1)

{
  *(uint *)((int)param_1 + 0x78) = *(uint *)((int)param_1 + 0x78) & 0xfffffffe;
  *(uint *)((int)param_1 + 0xdc) = *(uint *)((int)param_1 + 0xdc) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x128) = *(uint *)((int)param_1 + 0x128) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x154) = *(uint *)((int)param_1 + 0x154) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x1a0) = *(uint *)((int)param_1 + 0x1a0) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x1dc) = *(uint *)((int)param_1 + 0x1dc) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x218) = *(uint *)((int)param_1 + 0x218) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x264) = *(uint *)((int)param_1 + 0x264) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x290) = *(uint *)((int)param_1 + 0x290) & 0xfffffffe;
  *(uint *)((int)param_1 + 700) = *(uint *)((int)param_1 + 700) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x2e8) = *(uint *)((int)param_1 + 0x2e8) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x3d8) = *(uint *)((int)param_1 + 0x3d8) & 0xfffffffe;
  _memset(param_1,0,0x4b4);
  *(undefined2 *)((int)param_1 + 0x3e4) = 0xffff;
  return param_1;
}


