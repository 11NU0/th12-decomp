/* undefined4 __fastcall FUN_00439a40(undefined4 param_1, undefined4 param_2, int param_3) @ 00439a40  202 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00439a40(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  if (*(int *)(param_3 + 0xa28) != 1) {
    *(undefined4 *)(param_3 + 0x8980) = 0;
    *(undefined *)(param_3 + 0x8984) = 0;
    return 0;
  }
  if (*(int *)(param_3 + 0xc424) < 0) {
    if (0x62 < *(int *)(param_3 + 0xa20)) {
      return 0;
    }
    if (((byte)DAT_004d49d0 & 1) == 0) {
      return 0;
    }
    FUN_004067e0(0);
    param_1 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if (*(int *)(param_3 + 0xc424) != *(int *)(param_3 + 0xc420)) {
    FUN_004399d0();
    param_1 = extraout_ECX_00;
    param_2 = extraout_EDX_00;
  }
  if (*(int *)(param_3 + 0xc424) < 0xe) {
    FUN_00464a80();
    return 0;
  }
  if (((byte)DAT_004d49d0 & 1) == 0) {
    FUN_004067e0(-1);
    return 0;
  }
  FUN_00464a20(param_1,param_2,-14.0);
  return 0;
}


