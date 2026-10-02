/* undefined4 __fastcall FUN_004662f0(int param_1) @ 004662f0  19 bytes */

#include "th12.h"

undefined4 __fastcall FUN_004662f0(int param_1)

{
  if ((*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) && (*(int *)(param_1 + 0x10) != 0)) {
    return **(undefined4 **)(param_1 + 4);
  }
  return 0;
}


