/* undefined __stdcall FUN_004612d0(void) @ 004612d0  118 bytes */
#include "th12.h"

void FUN_004612d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_EAX;
  undefined4 *unaff_EBX;
  
  iVar3 = DAT_004ce8cc;
  puVar1 = unaff_EBX + 1;
  *puVar1 = unaff_EBX;
  unaff_EBX[2] = 0;
  unaff_EBX[3] = 0;
  iVar2 = *(int *)(iVar3 + 0x8856b8);
  if (iVar2 == 0) {
    *(undefined4 **)(iVar3 + 0x8856bc) = puVar1;
  }
  else {
    if (unaff_EBX[2] != 0) {
      *(undefined4 *)(iVar2 + 4) = unaff_EBX[2];
      *(int *)(unaff_EBX[2] + 8) = iVar2;
    }
    unaff_EBX[2] = iVar2;
    *(undefined4 **)(iVar2 + 8) = puVar1;
  }
  *(undefined4 **)(iVar3 + 0x8856b8) = puVar1;
  *(int *)(iVar3 + 0x88ed48) = *(int *)(iVar3 + 0x88ed48) + 1;
  if (*(int *)(iVar3 + 0x88ed48) == 0) {
    *(int *)(iVar3 + 0x88ed48) = *(int *)(iVar3 + 0x88ed48) + 1;
  }
  *unaff_EBX = *(undefined4 *)(iVar3 + 0x88ed48);
  *in_EAX = *(undefined4 *)(iVar3 + 0x88ed48);
  return;
}


