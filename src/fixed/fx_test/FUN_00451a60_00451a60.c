/* undefined4 __stdcall FUN_00451a60(void) @ 00451a60  440 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00451a60(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_EAX;
  int iVar4;
  char *pcVar5;
  
  if ((*(byte *)(in_EAX + 0x200) & 8) != 0) {
    return 0xffffffff;
  }
  piVar1 = (int *)(in_EAX + 0xc);
  iVar4 = DirectInput8Create(DAT_004cf3f8,0x800,&DAT_004993cc,piVar1,0);
  if (iVar4 < 0) {
    *piVar1 = 0;
    FUN_00464220(&DAT_004b0ec8,&DAT_004a29b4);
    return 0xffffffff;
  }
  piVar2 = (int *)(in_EAX + 0x20);
  iVar4 = (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1,&DAT_0049953c,piVar2,0);
  if (iVar4 < 0) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar1 = 0;
    }
    pcVar5 = &DAT_004a29b4;
  }
  else {
    iVar4 = (**(code **)(*(int *)*piVar2 + 0x2c))((int *)*piVar2,&DAT_0049855c);
    piVar3 = (int *)*piVar2;
    if (iVar4 < 0) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *piVar2 = 0;
      }
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *piVar1 = 0;
      }
      pcVar5 = &DAT_004a29d4;
    }
    else {
      iVar4 = (**(code **)(*piVar3 + 0x34))(piVar3,DAT_004cf3f0,0x16);
      if (-1 < iVar4) {
        (**(code **)(*(int *)*piVar2 + 0x1c))((int *)*piVar2);
        FUN_00464220(&DAT_004b0ec8,&DAT_004a2a38);
        (**(code **)(*(int *)*piVar1 + 0x10))((int *)*piVar1,4,&LAB_00451c70,0,1);
        if (*(int *)(in_EAX + 0x24) != 0) {
          (**(code **)(**(int **)(in_EAX + 0x24) + 0x2c))(*(int **)(in_EAX + 0x24),&DAT_00498764);
          (**(code **)(**(int **)(in_EAX + 0x24) + 0x34))(*(int **)(in_EAX + 0x24),DAT_004cf3f0,10);
          _DAT_004ce914 = 0x2c;
          (**(code **)(**(int **)(in_EAX + 0x24) + 0xc))(*(int **)(in_EAX + 0x24),&DAT_004ce914);
          DAT_004ce8c8 = 0;
          (**(code **)(**(int **)(in_EAX + 0x24) + 0x10))
                    (*(int **)(in_EAX + 0x24),&LAB_00451cb0,0,0);
          FUN_00464220(&DAT_004b0ec8,&DAT_004a2a60);
        }
        return 0;
      }
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar2 = 0;
      }
      FUN_004318f0();
      pcVar5 = &DAT_004a2a04;
    }
  }
  FUN_00464220(&DAT_004b0ec8,pcVar5);
  return 0xffffffff;
}


