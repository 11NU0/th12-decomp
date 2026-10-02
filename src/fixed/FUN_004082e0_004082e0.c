/* undefined4 __stdcall FUN_004082e0(void * param_1) @ 004082e0  518 bytes */
#include "th12.h"

undefined4 __stdcall FUN_004082e0(void *param_1)

{
  int iVar1;
  uint *puVar2;
  void *this;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  ulonglong uVar8;
  float local_8;
  void *pvVar3;
  undefined4 uVar4;
  
  FUN_00406f60(0x28);
  iVar6 = *(int *)((int)param_1 + 0x18);
  iVar1 = *(int *)((int)param_1 + 0x500);
  if (199 < iVar6) {
    iVar6 = 8;
    pvVar3 = param_1;
    uVar4 = extraout_EDX;
    do {
      FUN_00408030(pvVar3,uVar4);
      iVar6 = iVar6 + -1;
      pvVar3 = this;
      uVar4 = extraout_EDX_00;
    } while (iVar6 != 0);
    FUN_00461970(this,*(int *)((int)param_1 + 0x48));
    if (*(void **)((int)param_1 + 0x500) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x500));
      *(undefined4 *)((int)param_1 + 0x500) = 0;
    }
    puVar2 = (uint *)operator_new(0x44);
    if (puVar2 != (uint *)0x0) {
      puVar2[0x10] = puVar2[0x10] & 0xfffffffe;
      _memset(puVar2,0,0x44);
      *puVar2 = *puVar2 | 2;
      FUN_00452a60((int)puVar2,1,8,6,6,0);
    }
    return 0xffffffff;
  }
  if ((iVar6 != *(int *)((int)param_1 + 0x14)) && (iVar6 == 0)) {
    fVar7 = FUN_004646e0(0.0);
    iVar6 = 0;
    puVar2 = (uint *)((int)iVar1 + 0x34);
    do {
      local_8 = (float)fVar7;
      FUN_00407ea0(iVar6);
      *puVar2 = *puVar2 | 1;
      puVar2[-4] = 0;
      fVar7 = FUN_004646e0(local_8);
      fVar7 = FUN_004646e0((float)fVar7);
      puVar2[-5] = (uint)(float)fVar7;
      puVar2[-3] = 0x3d490fdb;
      *(undefined4 *)(puVar2[0x1f] + 0x68) = 300;
      fVar7 = FUN_004646e0(local_8 + 0.7853982);
      iVar6 = iVar6 + 1;
      puVar2 = puVar2 + 0x2d;
    } while (iVar6 < 8);
  }
  puVar5 = (undefined4 *)((int)iVar1 + 4);
  local_8 = 1.12104e-44;
  do {
    if (puVar5[0x20] != 0) {
      uVar8 = FUN_00407b80(puVar5 + -1);
      iVar6 = puVar5[0x2b];
      if (*(int *)((int)iVar6 + 100) < 300) {
        *(undefined4 *)((int)iVar6 + 0x18) = *puVar5;
        *(undefined4 *)((int)iVar6 + 0x1c) = puVar5[1];
        *(undefined4 *)((int)iVar6 + 0x20) = puVar5[2];
      }
      else {
        FUN_00408030(extraout_ECX,(int)(uVar8 >> 0x20));
        FUN_00453e20(extraout_ECX_00,extraout_EDX_01,*puVar5);
        puVar2 = (uint *)operator_new(0x44);
        if (puVar2 != (uint *)0x0) {
          puVar2[0x10] = puVar2[0x10] & 0xfffffffe;
          _memset(puVar2,0,0x44);
          *puVar2 = *puVar2 | 2;
          FUN_00452a60((int)puVar2,1,8,6,6,0);
        }
      }
    }
    puVar5 = puVar5 + 0x2d;
    local_8 = (float)((int)local_8 + -1);
  } while (local_8 != 0.0);
  FUN_00408510();
  return 0;
}


