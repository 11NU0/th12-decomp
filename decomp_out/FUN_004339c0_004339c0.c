/* undefined __stdcall FUN_004339c0(void) @ 004339c0  101 bytes */
#include "th12.h"

void FUN_004339c0(void)

{
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 4) = 0x13;
  if ((*(uint *)(unaff_ESI + 0x20) & 1) == 0) {
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
    *(undefined4 *)(unaff_ESI + 0x10) = 0xfff0bdc1;
    *(undefined4 **)(unaff_ESI + 0x1c) = &DAT_004b2ed0;
    *(uint *)(unaff_ESI + 0x20) = *(uint *)(unaff_ESI + 0x20) | 1;
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0xffffffff;
  FUN_00461970((void *)0x0,*(int *)(unaff_ESI + 0x1ec));
  FUN_00461970(*(void **)(unaff_ESI + 0x1e8),(int)*(void **)(unaff_ESI + 0x1e8));
  DAT_004b2ed0 = *(undefined4 *)(unaff_ESI + 0x2d8);
  return;
}


