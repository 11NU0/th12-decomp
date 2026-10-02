/* undefined4 * __stdcall FUN_0044d420(undefined4 * param_1) @ 0044d420  111 bytes */

#include "th12.h"

undefined4 * __stdcall FUN_0044d420(undefined4 *param_1)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00496f7b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined *)(param_1 + 4) = 0;
  local_4 = 0;
  *param_1 = 0;
  param_1[10] = 600;
  param_1[2] = 0x10;
  param_1[1] = 0;
  FUN_0044ec80(param_1 + 3,(undefined4 *)&DAT_004a245c,0xd);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}


