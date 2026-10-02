/* undefined __fastcall FUN_00453e20(undefined4 param_1, undefined4 param_2, undefined4 param_3) @ 00453e20  164 bytes */
#include "th12.h"

void __fastcall FUN_00453e20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  
  sVar1 = *(short *)(((char *)&DAT_004ae5aa + in_EAX * 0x14));
  uVar4 = FUN_004931e0(param_1,param_2);
  iVar2 = 0;
  piVar3 = &DAT_004cf508;
  while( true ) {
    if (*piVar3 < 0) {
      if (iVar2 < 0xc) {
        (&DAT_004cf508)[iVar2] = in_EAX;
        (&DAT_004cf568)[iVar2 * 0x80] = (int)uVar4;
        (&DAT_004cf538)[iVar2] = (&DAT_004cf538)[iVar2] + 1;
        (&DAT_004d0e74)[in_EAX * 6] = (int)sVar1;
      }
      return;
    }
    if (*piVar3 == in_EAX) break;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
    if (0x4cf537 < (int)piVar3) {
      return;
    }
  }
  if (0x7f < (int)(&DAT_004cf538)[iVar2]) {
    return;
  }
  (&DAT_004cf568)[iVar2 * 0x80 + (&DAT_004cf538)[iVar2]] = (int)uVar4;
  (&DAT_004cf538)[iVar2] = (&DAT_004cf538)[iVar2] + 1;
  return;
}


