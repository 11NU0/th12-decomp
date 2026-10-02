/* undefined4 __stdcall FUN_004036f0(int param_1) @ 004036f0  1133 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_004036f0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iStack_6c;
  int *piStack_68;
  int *piStack_64;
  int iStack_60;
  int iStack_5c;
  int *piStack_58;
  undefined4 *puStack_54;
  
  if ((*(uint *)((int)param_1 + 0x35bc) & 8) == 0) {
    if (((*(uint *)((int)param_1 + 0x35bc) & 4) == 0) || (*(int *)((int)param_1 + 0x35c4) < 0x3c)) {
      FUN_0045a3c0();
      *(undefined4 *)((int)param_1 + 0x36f4) = _DAT_004cee04;
      *(undefined4 *)((int)param_1 + 0x36f8) = _DAT_004cee08;
      puVar5 = (undefined4 *)((int)param_1 + 0x360c);
      puVar7 = &DAT_004ced1c;
      for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      DAT_004cee34 = &DAT_004ced1c;
      FUN_00430a70();
      (**(code **)(*DAT_004ce8f0 + 0xbc))();
      _DAT_004cee38 = 2;
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0xe4))();
      FUN_0045a3c0();
      puStack_54 = (undefined4 *)0x17;
      piStack_58 = DAT_004ce8f0;
      iStack_5c = 0x4037d6;
      (**(code **)(*DAT_004ce8f0 + 0xe4))();
      iVar3 = *(int *)((int)param_1 + 0x3720);
      iStack_5c = 0x4037e7;
      FUN_0045a3c0();
      iStack_60 = 0x22;
      piStack_64 = DAT_004ce8f0;
      piStack_68 = (int *)0x4037fa;
      iStack_5c = iVar3;
      (**(code **)(*DAT_004ce8f0 + 0xe4))();
      piVar1 = *(int **)((int)param_1 + 0x3708);
      piStack_68 = (int *)0x40380b;
      FUN_0045a3c0();
      iStack_6c = 0x24;
      piStack_68 = piVar1;
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0);
      uVar2 = *(undefined4 *)((int)param_1 + 0x370c);
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x25,uVar2);
      if (((*(byte *)((int)param_1 + 0x35bc) & 4) == 0) || (0x21 < *(int *)((int)param_1 + 0x35d8))) {
        puStack_54 = (undefined4 *)(DAT_004cedf0 + DAT_004cede8);
        iStack_5c = DAT_004cede8;
        piStack_58 = DAT_004cedec;
        (**(code **)(*DAT_004ce8f0 + 0xac))
                  (DAT_004ce8f0,1,&iStack_5c,3,*(undefined4 *)((int)param_1 + 0x3720),0x3f800000,0);
      }
      else {
        piStack_64 = (int *)(DAT_004cedf0 + DAT_004cede8);
        iStack_6c = DAT_004cede8;
        iStack_60 = DAT_004cedf4 + (int)DAT_004cedec;
        piStack_68 = DAT_004cedec;
        (**(code **)(*DAT_004ce8f0 + 0xac))(DAT_004ce8f0,1,&iStack_6c,3,0,0x3f800000,0);
      }
    }
    if ((*(uint *)((int)param_1 + 0x35bc) & 4) != 0) {
      if (*(int *)((int)param_1 + 0x35c4) < 0x1e) {
        puStack_54 = (undefined4 *)0x403922;
        FUN_004529a0(3,0x1e,0,0,0,0xb);
        *(uint *)((int)param_1 + 0x35bc) = *(uint *)((int)param_1 + 0x35bc) | 1;
        FUN_004067e0(1);
      }
      else {
        *(undefined *)((int)param_1 + 0x2777) = 0;
        *(uint *)((int)param_1 + 0x35bc) = *(uint *)((int)param_1 + 0x35bc) & 0xfffffffe;
      }
    }
    pvVar4 = DAT_004ce8cc;
    if (*(char *)((int)param_1 + 0x2777) != '\0') {
      uVar2 = *(undefined4 *)((int)param_1 + 0x2774);
      *(undefined4 *)((int)DAT_004ce8cc + 0x88ed50) = 1;
      *(undefined4 *)((int)pvVar4 + 0x88ed4c) = uVar2;
      *(undefined *)((int)param_1 + 0x2777) = 0;
    }
    *(undefined4 *)((int)param_1 + 0x35b0) = 0;
    *(undefined4 *)((int)param_1 + 0x35b4) = 0;
    *(undefined4 *)((int)param_1 + 0x35b8) = 0;
    if ((*(byte *)((int)param_1 + 0x35bc) & 1) != 0) {
      if (*(int *)((int)param_1 + 0x5c0) != 0) {
        FUN_00406550();
        FUN_00430300();
        FUN_0045a3c0();
        FUN_0045a3c0();
        (**(code **)(*DAT_004ce8f0 + 0xe4))();
        iVar6 = param_1 + 0x1cc;
        iVar3 = 8;
        pvVar4 = extraout_ECX;
        do {
          if (*(int *)((int)iVar6 + 0x3f4) != 0) {
            FUN_0045c900(pvVar4,DAT_004ce8cc);
            pvVar4 = extraout_ECX_00;
          }
          iVar6 = iVar6 + 0x4b4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        FUN_0045a3c0();
        puStack_54 = (undefined4 *)0x403a25;
        (**(code **)(*DAT_004ce8f0 + 0xe4))();
        DAT_004cee34 = &DAT_004ced1c;
        puStack_54 = (undefined4 *)0x403a35;
        FUN_00430a70();
        puStack_54 = DAT_004cee34 + 0x33;
        piStack_58 = DAT_004ce8f0;
        iStack_5c = 0x403a52;
        (**(code **)(*DAT_004ce8f0 + 0xbc))();
        _DAT_004cee38 = 2;
      }
      if (DAT_004cf278 != 1) {
        FUN_0045a3c0();
        DAT_004cf278 = 1;
        (**(code **)(*DAT_004ce8f0 + 0xe4))();
      }
      FUN_004046c0(param_1,0);
      FUN_004046c0(param_1,1);
      FUN_004046c0(param_1,2);
      FUN_004046c0(param_1,3);
      FUN_004046c0(param_1,4);
      FUN_004046c0(param_1,5);
      FUN_004046c0(param_1,6);
      FUN_004046c0(param_1,7);
      FUN_0045a3c0();
      pvVar4 = DAT_004ce8cc;
      if (*(int *)((int)param_1 + 0x2770) != 0) {
        *(int *)((int)param_1 + 0x2770) = *(int *)((int)param_1 + 0x2770) + 1;
      }
    }
    *(undefined4 *)((int)pvVar4 + 0x88ed50) = 0;
    *(undefined4 *)((int)pvVar4 + 0x88ed4c) = 0x80808080;
    if (*(int *)((int)param_1 + 0x2778) != 0) {
      *(undefined4 *)((int)pvVar4 + 0x88ed50) = 1;
      *(undefined4 *)((int)pvVar4 + 0x88ed4c) = 0xff404040;
    }
    FUN_0045a3c0();
    (**(code **)(*DAT_004ce8f0 + 0xe4))();
    FUN_0045a3c0();
    puStack_54 = (undefined4 *)0x403b52;
    (**(code **)(*DAT_004ce8f0 + 0xe4))();
    return 1;
  }
  return 1;
}


