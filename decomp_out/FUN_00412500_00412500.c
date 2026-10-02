/* undefined4 __fastcall FUN_00412500(int param_1) @ 00412500  42 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00412500(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    for (piVar1 = *(int **)(DAT_004b43dc + 0x68); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*(int *)(*piVar1 + 0x27b4) == param_1) {
        return 1;
      }
    }
  }
  return 0;
}


