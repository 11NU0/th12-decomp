/* void * __stdcall FUN_00436410(void) @ 00436410  151 bytes */

#include "th12.h"

void * __stdcall FUN_00436410(void)

{
  void *pvVar1;
  int iVar2;
  void *this;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049773b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  pvVar1 = operator_new(0xc59c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FUN_004359a0(pvVar1);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00435ae0();
  if (iVar2 != 0) {
    if (pvVar1 != (void *)0x0) {
      FUN_00436270(this,(int)pvVar1);
      FUN_0046ca4f(pvVar1);
    }
    *unaff_FS_OFFSET = local_c;
    return (void *)0x0;
  }
  *unaff_FS_OFFSET = local_c;
  return pvVar1;
}


