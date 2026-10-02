/* undefined4 __stdcall FUN_004302c0(void) @ 004302c0  54 bytes */
#include "th12.h"

undefined4 __stdcall FUN_004302c0(void)

{
  undefined4 uVar1;
  int unaff_EDI;
  
  if (*(int *)((int)unaff_EDI + 0x990) != 1) {
    FUN_0045a3c0();
    *(undefined4 *)((int)unaff_EDI + 0x990) = 1;
    uVar1 = (**(code **)(**(int **)((int)unaff_EDI + 8) + 0xe4))(*(int **)((int)unaff_EDI + 8),0x1c,1);
    return uVar1;
  }
  return 0;
}


