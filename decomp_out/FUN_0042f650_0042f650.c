/* undefined4 __fastcall FUN_0042f650(undefined4 * param_1, int * param_2) @ 0042f650  431 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0042f650(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar5;
  int *extraout_EDX;
  int unaff_EBX;
  undefined4 *puVar6;
  
  do {
    iVar4 = FUN_00453fa0(param_1,param_2);
    param_1 = extraout_ECX;
    param_2 = extraout_EDX;
  } while (iVar4 != 0);
  DAT_004d4770 = 2;
  FUN_00464c40();
  uVar5 = extraout_ECX_00;
  if (DAT_004cf28c != (void *)0x0) {
    _free(DAT_004cf28c);
    DAT_004cf28c = (void *)0x0;
    uVar5 = extraout_ECX_01;
  }
  FUN_0042f830(uVar5);
  pvVar3 = DAT_004b43e0;
  if (DAT_004b43e0 != (void *)0x0) {
    FUN_0041ca70();
    FUN_0046ca4f(pvVar3);
  }
  piVar1 = *(int **)(&DAT_004b564c + DAT_004ce8cc);
  puVar6 = (undefined4 *)(&DAT_004b564c + DAT_004ce8cc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *puVar6 = 0;
  }
  FUN_00454960(4,0);
  FUN_0044d5b0();
  DeleteObject(DAT_004ce554);
  DeleteObject(DAT_004cc54c);
  DeleteObject(DAT_004ce550);
  DeleteObject(DAT_004b453c);
  piVar1 = *(int **)(unaff_EBX + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
    piVar1 = *(int **)(unaff_EBX + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(unaff_EBX + 0x20) = 0;
    }
  }
  piVar1 = *(int **)(unaff_EBX + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
    piVar1 = *(int **)(unaff_EBX + 0x24);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(unaff_EBX + 0x24) = 0;
    }
  }
  piVar1 = *(int **)(unaff_EBX + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_EBX + 0xc) = 0;
  }
  FUN_0044b710();
  pvVar3 = DAT_004ceaa4;
  if (DAT_004ceaa4 != (void *)0x0) {
    puVar6 = (undefined4 *)((int)DAT_004ceaa4 + 0x478);
    pvVar2 = (void *)*puVar6;
    if (pvVar2 != (void *)0x0) {
      _free(pvVar2);
    }
    *puVar6 = 0;
    FUN_0046ca4f(pvVar3);
  }
  pvVar3 = DAT_004ceaa8;
  DAT_004ceaa4 = (void *)0x0;
  if (DAT_004ceaa8 != (void *)0x0) {
    puVar6 = (undefined4 *)((int)DAT_004ceaa8 + 0x478);
    pvVar2 = (void *)*puVar6;
    if (pvVar2 != (void *)0x0) {
      _free(pvVar2);
    }
    *puVar6 = 0;
    FUN_0046ca4f(pvVar3);
  }
  pvVar3 = DAT_004ceaac;
  DAT_004ceaa8 = (void *)0x0;
  if (DAT_004ceaac != (void *)0x0) {
    puVar6 = (undefined4 *)((int)DAT_004ceaac + 0x478);
    pvVar2 = (void *)*puVar6;
    if (pvVar2 != (void *)0x0) {
      _free(pvVar2);
    }
    *puVar6 = 0;
    FUN_0046ca4f(pvVar3);
  }
  DAT_004ceaac = (void *)0x0;
  return 0;
}


