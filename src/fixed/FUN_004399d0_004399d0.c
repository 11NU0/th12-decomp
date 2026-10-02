/* undefined4 __stdcall FUN_004399d0(void) @ 004399d0  109 bytes */
#include "th12.h"

undefined4 __stdcall FUN_004399d0(void)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  int unaff_EDI;
  
  iVar3 = DAT_004b0c48 / DAT_004b0cd4;
  if (*(int *)((int)in_EAX + 0xc598) != 0) {
    iVar3 = iVar3 + 1 + *(int *)(*(int *)((int)in_EAX + 0xa2c) + 0x20);
  }
  piVar4 = *(int **)(*(int *)((int)in_EAX + 0xa2c) + 0x268 + iVar3 * 8);
  cVar2 = *(char *)piVar4;
  while (-1 < cVar2) {
    if (unaff_EDI % (int)cVar2 == (int)*(char *)((int)piVar4 + 1)) {
      FUN_00439630((void *)((int)in_EAX + 0x97c),piVar4,unaff_EDI);
    }
    piVar1 = piVar4 + 0xd;
    piVar4 = piVar4 + 0xd;
    cVar2 = *(char *)piVar1;
  }
  return 0;
}


