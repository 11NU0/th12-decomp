/* int __fastcall FUN_00412960(int param_1) @ 00412960  34 bytes */
#include "th12.h"

int __fastcall FUN_00412960(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_004b44f4 + 0x18);
  if (param_1 != 0) {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if (*(int *)(iVar1 + 0x80) == param_1) {
        return iVar1;
      }
    }
  }
  return 0;
}


