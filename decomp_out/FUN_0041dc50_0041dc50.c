/* undefined __thiscall FUN_0041dc50(void * this, int param_1) @ 0041dc50  735 bytes */
#include "th12.h"

void __thiscall FUN_0041dc50(void *this,int param_1)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *this_00;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004973d8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 4;
  FUN_0041d9c0(this,param_1);
  iVar7 = DAT_004ce89c;
  pvVar2 = *(void **)(param_1 + 8);
  this_00 = extraout_ECX;
  if (pvVar2 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar2,iVar7);
    this_00 = extraout_ECX_00;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      this_00 = extraout_ECX_01;
    }
  }
  iVar7 = DAT_004ce89c;
  pvVar2 = *(void **)(param_1 + 0xc);
  if (pvVar2 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar2,iVar7);
    this_00 = extraout_ECX_02;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      this_00 = extraout_ECX_03;
    }
  }
  iVar7 = DAT_004ce89c;
  pvVar2 = *(void **)(param_1 + 0x6cd4);
  if (pvVar2 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar2,iVar7);
    this_00 = extraout_ECX_04;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      this_00 = extraout_ECX_05;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00461a70(this_00,*(int *)(param_1 + 0x6ca4));
  *(undefined4 *)(param_1 + 0x6ca4) = 0;
  FUN_00461a70(*(void **)(param_1 + 0x6cb0),(int)*(void **)(param_1 + 0x6cb0));
  *(undefined4 *)(param_1 + 0x6cb0) = 0;
  piVar8 = (int *)(param_1 + 0x6c40);
  iVar7 = 10;
LAB_0041ddb0:
  iVar3 = *piVar8;
  if (iVar3 != 0) {
    for (puVar4 = *(undefined4 **)(DAT_004ce8cc + 0x8856b8); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar6 = (int *)*puVar4;
      if (*piVar6 == iVar3) goto LAB_0041ddf1;
    }
    for (puVar4 = *(undefined4 **)(DAT_004ce8cc + 0x8856c0); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      piVar6 = (int *)*puVar4;
      if (*piVar6 == iVar3) goto LAB_0041ddf1;
    }
  }
  goto LAB_0041de1f;
LAB_0041ddf1:
  if ((piVar6 != (int *)0x0) && (piVar6[0x11f] = piVar6[0x11f] | 0x10000000, piVar6[6] == 0)) {
    for (piVar6 = (int *)piVar6[5]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
      *(uint *)(*piVar6 + 0x47c) = *(uint *)(*piVar6 + 0x47c) | 0x10000000;
    }
  }
LAB_0041de1f:
  *piVar8 = 0;
  iVar3 = DAT_004ce8cc;
  piVar8 = piVar8 + 1;
  iVar7 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1 + 0x6d44);
    piVar8 = *(int **)(DAT_004ce8cc + 0x8856b8);
    while (piVar8 != (int *)0x0) {
      piVar6 = (int *)piVar8[1];
      iVar5 = *piVar8;
      piVar8 = piVar6;
      if (*(int *)(iVar5 + 0x3f8) == iVar7) {
        puVar1 = (uint *)(iVar5 + 0x47c);
        *puVar1 = *puVar1 | 0x10000000;
      }
    }
    piVar8 = *(int **)(iVar3 + 0x8856c0);
    while (piVar8 != (int *)0x0) {
      piVar6 = (int *)piVar8[1];
      iVar3 = *piVar8;
      piVar8 = piVar6;
      if (*(int *)(iVar3 + 0x3f8) == iVar7) {
        puVar1 = (uint *)(iVar3 + 0x47c);
        *puVar1 = *puVar1 | 0x10000000;
      }
    }
    DAT_004b43e4 = 0;
    if (*(void **)(param_1 + 0x6c04) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x6c04));
    }
    *(undefined4 *)(param_1 + 0x6c04) = 0;
    local_4._0_1_ = 2;
    _eh_vector_destructor_iterator_((void *)(param_1 + 0x54b8),0x4b4,4,FUN_004026e0);
    local_4._0_1_ = 1;
    _eh_vector_destructor_iterator_((void *)(param_1 + 0x4b50),0x4b4,2,FUN_004026e0);
    local_4 = (uint)local_4._1_3_ << 8;
    _eh_vector_destructor_iterator_((void *)(param_1 + 0x25b0),0x4b4,8,FUN_004026e0);
    local_4 = 0xffffffff;
    _eh_vector_destructor_iterator_((void *)(param_1 + 0x10),0x4b4,8,FUN_004026e0);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  goto LAB_0041ddb0;
}


