/* undefined4 __stdcall FUN_0042ef00(void) @ 0042ef00  109 bytes */
#include "th12.h"

undefined4 FUN_0042ef00(void)

{
  int unaff_ESI;
  undefined4 local_4;
  
  if (*(int *)(unaff_ESI + 0x4ec) == 1) {
    FUN_004615a0((void *)0x0,*(void **)(unaff_ESI + 0x4e8),&local_4,0,0);
    *(int *)(unaff_ESI + 0x4ec) = *(int *)(unaff_ESI + 0x4ec) + 1;
    *(undefined4 *)(unaff_ESI + 0x4e4) = local_4;
  }
  if (*(int *)(unaff_ESI + 0x4f0) == 1) {
    FUN_00411b80(0x43f00000,0x43c40000);
    *(int *)(unaff_ESI + 0x4f0) = *(int *)(unaff_ESI + 0x4f0) + 1;
  }
  *(int *)(unaff_ESI + 0x4f4) = *(int *)(unaff_ESI + 0x4f4) + 1;
  return 1;
}


