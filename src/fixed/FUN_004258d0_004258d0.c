/* void * __fastcall FUN_004258d0(void * param_1) @ 004258d0  40 bytes */
#include "th12.h"

void * __fastcall FUN_004258d0(void *param_1)

{
  FUN_004027e0(param_1);
  FUN_004027e0((void *)((int)param_1 + 0x4b4));
  *(uint *)((int)param_1 + 0x998) = *(uint *)((int)param_1 + 0x998) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x9ac) = *(uint *)((int)param_1 + 0x9ac) & 0xfffffffe;
  return param_1;
}


