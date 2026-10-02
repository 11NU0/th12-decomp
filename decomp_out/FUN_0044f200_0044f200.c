/* undefined __stdcall FUN_0044f200(int param_1) @ 0044f200  127 bytes */
#include "th12.h"

void FUN_0044f200(int param_1)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00496e93;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_00464c40();
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_004624c0();
  FUN_00462740(param_1);
  FUN_00462740(param_1);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}


