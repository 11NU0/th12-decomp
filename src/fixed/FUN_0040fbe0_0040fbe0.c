/* int * __stdcall FUN_0040fbe0(int * param_1, void * param_2) @ 0040fbe0  324 bytes */
#include "th12.h"

int * __stdcall FUN_0040fbe0(int *param_1,void *param_2)

{
  undefined4 stack0xffffffe4;
  int iVar1;
  short sVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  pvVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = ((void *)0x0049750b);
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_004ad138 ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_004b43d4;
  sVar2 = *(short *)(&DAT_004af160 + (int)param_2 * 0x18);
  iVar1 = (int)param_2 * 0x18;
  *param_1 = 0;
  if (sVar2 < 0) {
    if (sVar2 == -1) {
      puVar7 = (undefined4 *)operator_new(0x20);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
        uVar8 = extraout_ECX_00;
      }
      else {
        uVar8 = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
      }
      FUN_004109f0(uVar8,(int)puVar7);
      param_2 = operator_new(0x18);
      uVar8 = 0;
      local_4 = 0;
      if (param_2 != (void *)0x0) {
        uVar8 = FUN_0040ff10(0x10);
      }
      puVar7[5] = uVar8;
      puVar7[6] = *(undefined4 *)(&DAT_004af168 + iVar1);
      puVar7[7] = *(undefined4 *)(&DAT_004af16c + iVar1);
    }
  }
  else {
    FUN_004615a0((void *)0x0,*(void **)((int)iVar3 + 0x10),&param_2,(int)sVar2,0);
    iVar3 = DAT_004ce8cc;
    *param_1 = (int)param_2;
    piVar6 = FUN_00461920(extraout_ECX,iVar3,(int)param_2);
    if (piVar6 == (int *)0x0) {
      *param_1 = 0;
    }
    if ((code *)(&PTR_LAB_004af164)[(int)pvVar4 * 6] != (code *)0x0) {
      (*(code *)(&PTR_LAB_004af164)[(int)pvVar4 * 6])(uVar5);
    }
    piVar6[0x122] = *(int *)(&DAT_004af168 + iVar1);
    piVar6[0x123] = *(int *)(&DAT_004af16c + iVar1);
    piVar6[0x124] = *(int *)(&DAT_004af170 + iVar1);
    piVar6[0x125] = *(int *)(&DAT_004af174 + iVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}


