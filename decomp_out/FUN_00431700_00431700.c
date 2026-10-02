/* undefined __stdcall FUN_00431700(void) @ 00431700  80 bytes */
#include "th12.h"

void FUN_00431700(void)

{
  if (DAT_004cea94 != (int *)0x0) {
    (**(code **)(*DAT_004cea94 + 8))(DAT_004cea94);
    DAT_004cea94 = (int *)0x0;
  }
  if (DAT_004cea98 != (int *)0x0) {
    (**(code **)(*DAT_004cea98 + 8))(DAT_004cea98);
    DAT_004cea98 = (int *)0x0;
  }
  if (DAT_004cea9c != (int *)0x0) {
    (**(code **)(*DAT_004cea9c + 8))(DAT_004cea9c);
    DAT_004cea9c = (int *)0x0;
  }
  DAT_004cea94 = (int *)0x0;
  return;
}


