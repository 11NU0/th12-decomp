/* int __fastcall FUN_00412530(int param_1) @ 00412530  39 bytes */
#include "th12.h"

int __fastcall FUN_00412530(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    for (piVar1 = *(int **)(DAT_004b43dc + 0x68); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*(int *)(*piVar1 + 0x27b4) == param_1) {
        return *piVar1;
      }
    }
  }
  return 0;
}


