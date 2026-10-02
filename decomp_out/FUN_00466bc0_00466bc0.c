/* undefined4 __fastcall FUN_00466bc0(int param_1, undefined param_2, undefined4 param_3) @ 00466bc0  130 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00466bc0(int param_1,undefined param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    return 0x80004005;
  }
  if (*(int *)(param_1 + 0x8c) == -1) {
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    FUN_00466b10();
    if (*(int *)(param_1 + 0x8c) == -1) {
      return 0x80004005;
    }
  }
  *(undefined4 *)(param_1 + 0x90) = in_EAX;
  FUN_00466e90();
  FUN_00466c90();
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 8);
  return 0;
}


