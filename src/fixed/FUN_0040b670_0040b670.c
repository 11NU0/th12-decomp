/* ulonglong __fastcall FUN_0040b670(undefined4 param_1, int param_2) @ 0040b670  113 bytes */
#include "th12.h"

ulonglong __fastcall FUN_0040b670(undefined4 param_1,int param_2)

{
  ulonglong uVar1;
  
  if (*(int *)((int)param_2 + 0x704) < 0x11) {
    FUN_0040d640((void *)((int)param_2 + 0x4c8),*(float *)((int)param_2 + 0x4d8),
                 (5.0 - *(float *)((int)param_2 + 0x708) * 5.0 * 0.0625) + *(float *)((int)param_2 + 0x4d4));
    uVar1 = FUN_00464a80();
    return uVar1 & 0xffffffff00000000;
  }
  *(uint *)((int)param_2 + 0x528) = *(uint *)((int)param_2 + 0x528) ^ 1;
  return CONCAT44(param_2,1);
}


