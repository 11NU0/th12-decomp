/* undefined __stdcall FUN_0044c920(void) @ 0044c920  49 bytes */

#include "th12.h"

void __stdcall FUN_0044c920(void)

{
  undefined4 *puVar1;
  
  _memset(&DAT_004cc550,0,0x2000);
  puVar1 = &DAT_004b4544;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 3;
  } while ((int)puVar1 < 0x4cc550);
  return;
}


