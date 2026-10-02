/* undefined __fastcall FUN_004014f0(int param_1) @ 004014f0  207 bytes */
#include "th12.h"

void __fastcall FUN_004014f0(int param_1)

{
  int iVar1;
  char cVar2;
  char *in_EAX;
  undefined4 *unaff_EBX;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18f7c);
  if (iVar3 < 0x140) {
    iVar1 = iVar3 * 0x138 + 0x97c + param_1;
    *(int *)(param_1 + 0x18f7c) = iVar3 + 1;
    iVar3 = iVar1 - (int)in_EAX;
    do {
      cVar2 = *in_EAX;
      in_EAX[iVar3] = cVar2;
      in_EAX = in_EAX + 1;
    } while (cVar2 != '\0');
    *(undefined4 *)(iVar1 + 0x100) = *unaff_EBX;
    *(undefined4 *)(iVar1 + 0x104) = unaff_EBX[1];
    *(undefined4 *)(iVar1 + 0x108) = unaff_EBX[2];
    *(undefined4 *)(iVar1 + 0x10c) = *(undefined4 *)(param_1 + 0x18f80);
    *(undefined4 *)(iVar1 + 0x110) = *(undefined4 *)(param_1 + 0x18f84);
    *(undefined4 *)(iVar1 + 0x114) = *(undefined4 *)(param_1 + 0x18f88);
    *(undefined4 *)(iVar1 + 0x11c) = *(undefined4 *)(param_1 + 0x18f8c);
    *(undefined4 *)(iVar1 + 0x120) = *(undefined4 *)(param_1 + 0x18f98);
    *(undefined4 *)(iVar1 + 0x124) = *(undefined4 *)(param_1 + 0x18f94);
    *(undefined4 *)(iVar1 + 0x128) = *(undefined4 *)(param_1 + 0x18f9c);
    *(undefined4 *)(iVar1 + 300) = *(undefined4 *)(param_1 + 0x18fa0);
    *(undefined4 *)(iVar1 + 0x130) = *(undefined4 *)(param_1 + 0x18fa4);
    *(undefined4 *)(iVar1 + 0x134) = *(undefined4 *)(param_1 + 0x18fa8);
  }
  return;
}


