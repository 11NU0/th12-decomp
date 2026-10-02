/* undefined __fastcall FUN_004306c0(void * param_1) @ 004306c0  93 bytes */
#include "th12.h"

void __fastcall FUN_004306c0(void *param_1)

{
  void *this;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x93c) == 1) {
    FUN_00461970(param_1,DAT_004b44fc);
    FUN_00461970(DAT_004b4500,(int)DAT_004b4500);
    FUN_00461970(this,DAT_004b4504);
    DAT_004b44fc = 0;
    DAT_004b4500 = (void *)0x0;
    DAT_004b4504 = 0;
    *(undefined4 *)(unaff_EDI + 0x93c) = 0;
  }
  if (DAT_004ce8a4 != 0) {
    DAT_004ce8a4 = 0;
  }
  return;
}


