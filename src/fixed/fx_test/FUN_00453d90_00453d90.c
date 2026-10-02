/* undefined __fastcall FUN_00453d90(undefined4 param_1, int param_2) @ 00453d90  135 bytes */

#include "th12.h"

void __fastcall FUN_00453d90(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  
  sVar1 = *(short *)(&DAT_004ae5aa + param_2 * 0x14);
  iVar2 = 0;
  piVar3 = &DAT_004cf508;
  while( true ) {
    if (*piVar3 < 0) {
      if (iVar2 < 0xc) {
        (&DAT_004cf508)[iVar2] = param_2;
        (&DAT_004cf568)[iVar2 * 0x80] = 0;
        (&DAT_004cf538)[iVar2] = (&DAT_004cf538)[iVar2] + 1;
        (&DAT_004d0e74)[param_2 * 6] = (int)sVar1;
      }
      return;
    }
    if (*piVar3 == param_2) break;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
    if (0x4cf537 < (int)piVar3) {
      return;
    }
  }
  if (0x7f < (int)(&DAT_004cf538)[iVar2]) {
    return;
  }
  (&DAT_004cf568)[iVar2 * 0x80 + (&DAT_004cf538)[iVar2]] = 0;
  (&DAT_004cf538)[iVar2] = (&DAT_004cf538)[iVar2] + 1;
  return;
}


