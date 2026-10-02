/* undefined __stdcall FUN_004124e0(uint param_1) @ 004124e0  21 bytes */
#include "th12.h"

void __stdcall FUN_004124e0(uint param_1)

{
  *(uint *)((int)DAT_004b43dc + 0x3c) =
       *(uint *)((int)DAT_004b43dc + 0x3c) ^ (*(uint *)((int)DAT_004b43dc + 0x3c) ^ param_1) & 1;
  return;
}


