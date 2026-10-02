/* int __fastcall FUN_004094b0(int param_1) @ 004094b0  59 bytes */
#include "th12.h"

int __fastcall FUN_004094b0(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  FUN_004027e0((void *)((int)param_1 + 8));
  *(uint *)((int)param_1 + 0x4f4) = *(uint *)((int)param_1 + 0x4f4) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x508) = *(uint *)((int)param_1 + 0x508) & 0xfffffffe;
  iVar2 = 0xc;
  puVar1 = (uint *)((int)param_1 + 0x710);
  do {
    *puVar1 = *puVar1 & 0xfffffffe;
    puVar1 = puVar1 + 0xd;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(uint *)((int)param_1 + 0x9e8) = *(uint *)((int)param_1 + 0x9e8) & 0xfffffffe;
  return param_1;
}


