/* undefined4 __stdcall FUN_00430300(void) @ 00430300  54 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00430300(void)

{
  undefined4 uVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x990) != 0) {
    FUN_0045a3c0();
    *(undefined4 *)(unaff_EDI + 0x990) = 0;
    uVar1 = (**(code **)(**(int **)(unaff_EDI + 8) + 0xe4))(*(int **)(unaff_EDI + 8),0x1c,0);
    return uVar1;
  }
  return 0;
}


