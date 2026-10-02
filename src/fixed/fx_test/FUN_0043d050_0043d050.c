/* undefined __stdcall FUN_0043d050(void) @ 0043d050  96 bytes */

#include "th12.h"

void __stdcall FUN_0043d050(void)

{
  void *pvVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049703b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  pvVar1 = operator_new(0x1edfc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_004b451c = 0;
  }
  else {
    DAT_004b451c = FUN_0043cf90();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}


