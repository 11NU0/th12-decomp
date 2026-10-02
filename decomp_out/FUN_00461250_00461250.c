/* undefined __stdcall FUN_00461250(void) @ 00461250  123 bytes */
#include "th12.h"

void FUN_00461250(void)

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
  if (*(int *)(iVar3 + 0x8856b8) == 0) {
    *(undefined4 **)(iVar3 + 0x8856b8) = puVar1;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x8856bc);
    if (*(int *)(iVar2 + 4) != 0) {
      unaff_EBX[2] = *(int *)(iVar2 + 4);
      *(undefined4 **)(*(int *)(iVar2 + 4) + 8) = puVar1;
    }
    *(undefined4 **)(iVar2 + 4) = puVar1;
    unaff_EBX[3] = iVar2;
  }
  *(undefined4 **)(iVar3 + 0x8856bc) = puVar1;
  *(int *)(iVar3 + 0x88ed48) = *(int *)(iVar3 + 0x88ed48) + 1;
  if (*(int *)(iVar3 + 0x88ed48) == 0) {
    *(int *)(iVar3 + 0x88ed48) = *(int *)(iVar3 + 0x88ed48) + 1;
  }
  *unaff_EBX = *(undefined4 *)(iVar3 + 0x88ed48);
  *in_EAX = *(undefined4 *)(iVar3 + 0x88ed48);
  return;
}


