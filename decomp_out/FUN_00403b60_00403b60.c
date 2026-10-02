/* undefined4 __fastcall FUN_00403b60(undefined4 param_1, undefined4 param_2, int param_3) @ 00403b60  854 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00403b60(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((*(uint *)(param_3 + 0x35bc) & 8) == 0) {
    if (((*(uint *)(param_3 + 0x35bc) & 4) == 0) || (*(int *)(param_3 + 0x35c4) < 0x3c)) {
      FUN_0045a3c0();
      *(undefined4 *)(param_3 + 0x36f4) = _DAT_004cee04;
      *(undefined4 *)(param_3 + 0x36f8) = _DAT_004cee08;
      puVar3 = (undefined4 *)(param_3 + 0x360c);
      puVar4 = &DAT_004ced1c;
      for (iVar2 = 0x46; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      DAT_004cee34 = &DAT_004ced1c;
      FUN_00430a70();
      (**(code **)(*DAT_004ce8f0 + 0xbc))(DAT_004ce8f0,DAT_004cee34 + 0x33);
      _DAT_004cee38 = 2;
      if (DAT_004cf278 != 0) {
        FUN_0045a3c0();
        DAT_004cf278 = 0;
        (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x1c,0);
      }
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0xe,0);
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x17,8);
      FUN_004611d0(extraout_ECX);
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x17,4);
      FUN_004611d0(extraout_ECX_00);
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x17,4);
      uVar1 = *(undefined4 *)(param_3 + 0x3720);
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x22,uVar1);
      uVar1 = *(undefined4 *)(param_3 + 0x3708);
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x24,uVar1);
      uVar1 = *(undefined4 *)(param_3 + 0x370c);
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x25,uVar1);
      param_1 = extraout_ECX_01;
      param_2 = extraout_EDX;
    }
    if (((*(uint *)(param_3 + 0x35bc) & 4) != 0) && (0x1d < *(int *)(param_3 + 0x35c4))) {
      *(undefined *)(param_3 + 0x2777) = 0;
    }
    if ((*(uint *)(param_3 + 0x35bc) & 1) != 0) {
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0xe,0);
      if (DAT_004cf278 != 1) {
        FUN_0045a3c0();
        DAT_004cf278 = 1;
        (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x1c,1);
      }
      FUN_004046c0(param_3,8);
      FUN_004046c0(param_3,9);
      FUN_004046c0(param_3,10);
      FUN_004046c0(param_3,0xb);
      FUN_0045a3c0();
      param_1 = extraout_ECX_02;
      param_2 = extraout_EDX_00;
    }
    iVar2 = DAT_004ce8cc;
    *(undefined4 *)(DAT_004ce8cc + 0x88ed50) = 0;
    *(undefined4 *)(iVar2 + 0x88ed4c) = 0x80808080;
    if (*(int *)(param_3 + 0x2778) != 0) {
      *(undefined4 *)(iVar2 + 0x88ed50) = 1;
      *(undefined4 *)(iVar2 + 0x88ed4c) = 0xff404040;
    }
    if ((0 < *(int *)(param_3 + 0x35c4)) &&
       (FUN_00464a20(param_1,param_2,-1.0), *(int *)(param_3 + 0x35c4) < 1)) {
      *(undefined *)(param_3 + 0x2777) = 0xff;
      if ((*(uint *)(param_3 + 0x35bc) & 2) != 0) {
        *(uint *)(param_3 + 0x35bc) = *(uint *)(param_3 + 0x35bc) | 8;
      }
      *(uint *)(param_3 + 0x35bc) = *(uint *)(param_3 + 0x35bc) & 0xfffffff9;
      *(undefined4 *)(param_3 + 0x2774) = 0xffffff;
    }
    FUN_0045a3c0();
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0xe,0);
    FUN_0045a3c0();
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x17,8);
    if (DAT_004cf278 != 0) {
      FUN_0045a3c0();
      DAT_004cf278 = 0;
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x1c,0);
    }
  }
  return 1;
}


