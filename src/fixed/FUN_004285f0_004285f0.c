/* int __stdcall FUN_004285f0(undefined4 param_1) @ 004285f0  114 bytes */
#include "th12.h"

int __stdcall FUN_004285f0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  iVar3 = DAT_004b44f4;
  piVar1 = *(int **)((int)DAT_004b44f4 + 0x18);
  *(undefined4 *)((int)DAT_004b44f4 + 0x470) = *unaff_EDI;
  *(undefined4 *)((int)iVar3 + 0x474) = unaff_EDI[1];
  *(undefined4 *)((int)iVar3 + 0x478) = unaff_EDI[2];
  *(undefined4 *)((int)iVar3 + 0x47c) = *unaff_ESI;
  *(undefined4 *)((int)iVar3 + 0x480) = unaff_ESI[1];
  iVar4 = 0;
  *(undefined4 *)((int)iVar3 + 0x484) = unaff_ESI[2];
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if ((piVar2[3] != 1) && (*(char *)((int)piVar2 + 0x7d) != '\0')) {
      iVar3 = (**(code **)(*piVar2 + 0x18))();
      iVar4 = iVar4 + iVar3;
    }
  }
  return iVar4;
}


