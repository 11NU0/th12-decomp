/* void * __stdcall FUN_004359a0(void * param_1) @ 004359a0  266 bytes */
#include "th12.h"

typedef struct local_4__u { undefined4 _; undefined1 _1_3_; } local_4__u;
void * __stdcall FUN_004359a0(void *param_1)

{
  uint *puVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = ((void *)0x004970f9);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004027e0((void *)((int)param_1 + 0x14));
  local_4 = 0;
  FUN_004027e0((void *)((int)param_1 + 0x4c8));
  local_4 = CONCAT31(((local_4__u *)&local_4)->_1_3_,1);
  *(uint *)((int)param_1 + 0xa40) = *(uint *)((int)param_1 + 0xa40) & 0xfffffffe;
  *(uint *)((int)param_1 + 0xa54) = *(uint *)((int)param_1 + 0xa54) & 0xfffffffe;
  iVar2 = 0xff;
  puVar1 = (uint *)((int)param_1 + 0xa68);
  do {
    *puVar1 = *puVar1 & 0xfffffffe;
    puVar1 = puVar1 + 0x1e;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 7;
  puVar1 = (uint *)((int)param_1 + 0x8328);
  do {
    FUN_00402790(8);
    FUN_00402790(8);
    *puVar1 = *puVar1 & 0xfffffffe;
    puVar1 = puVar1 + 0x39;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  puVar1 = (uint *)((int)param_1 + 0x89e4);
  iVar2 = 0x80;
  do {
    *puVar1 = *puVar1 & 0xfffffffe;
    puVar1 = puVar1 + 0x1d;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(uint *)((int)param_1 + 0xc410) = *(uint *)((int)param_1 + 0xc410) & 0xfffffffe;
  *(uint *)((int)param_1 + 0xc430) = *(uint *)((int)param_1 + 0xc430) & 0xfffffffe;
  _memset(param_1,0,0xc59c);
  DAT_004b4514 = param_1;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}


