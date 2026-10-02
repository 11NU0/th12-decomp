/* undefined __stdcall FUN_0045ea40(int param_1) @ 0045ea40  229 bytes */

#include "th12.h"

void __stdcall FUN_0045ea40(int param_1)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00497217;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 2;
  iVar1 = *(int *)(param_1 + 0x8856b8);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    FUN_00461450(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x8856c0);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    FUN_00461450(param_1);
  }
  uVar2 = (uint)local_4 >> 8;
  local_4 = CONCAT31((int3)uVar2,1);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x8856c8),0x4b4,0x20,FUN_004026e0);
  if (*(void **)(&DAT_004b55f8 + param_1) != (void *)0x0) {
    _free(*(void **)(&DAT_004b55f8 + param_1));
  }
  *(undefined4 *)(&DAT_004b55f8 + param_1) = 0;
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0xbc),0x4b4,0x1000,FUN_004026e0);
  *unaff_FS_OFFSET = local_c;
  return;
}


