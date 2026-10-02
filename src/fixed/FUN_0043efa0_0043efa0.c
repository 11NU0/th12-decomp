/* undefined __stdcall FUN_0043efa0(void) @ 0043efa0  37 bytes */
#include "th12.h"

void __stdcall FUN_0043efa0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_4;
  
  FUN_004615a0((void *)0x0,*(void **)((int)unaff_EDI + 0x14),&local_4,unaff_ESI,0);
  *(undefined4 *)(unaff_EDI + 0x2c8 + unaff_ESI * 4) = local_4;
  return;
}


