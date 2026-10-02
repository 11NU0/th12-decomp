/* undefined __fastcall FUN_0041fbe0(void * param_1) @ 0041fbe0  180 bytes */
#include "th12.h"

void __fastcall FUN_0041fbe0(void *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = ((void *)0x0049769b);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = DAT_004b43e4;
  pvVar2 = *(void **)((int)DAT_004b43e4 + 0x6d30);
  if (pvVar2 != (void *)0x0) {
    FUN_0041cd90(param_1);
    FUN_0046ca4f(pvVar2);
    *(undefined4 *)((int)iVar1 + 0x6d30) = 0;
  }
  pvVar2 = operator_new(0xac);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (( int * (__stdcall *)())FUN_0041f900)(*(int *)(*(int *)((int)iVar1 + 0x6d34) + 4 + unaff_EBX * 8) +
                                 *(int *)((int)iVar1 + 0x6d34));
  }
  *(int **)((int)iVar1 + 0x6d30) = piVar3;
  *piVar3 = unaff_EBX;
  if (DAT_004b0cb8 != unaff_EBX + 1) {
    DAT_004b0cc0 = 0;
  }
  DAT_004b0cb8 = unaff_EBX + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}


