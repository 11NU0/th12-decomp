/* bool __fastcall FUN_0041bf50(int param_1) @ 0041bf50  193 bytes */
#include "th12.h"

bool __fastcall FUN_0041bf50(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  float10 fVar4;
  
  pbVar1 = (byte *)((int)DAT_004b43c8 + 100);
  iVar3 = 0;
  while ((((*pbVar1 & 1) == 0 || (*(short *)((int)pbVar1 + 0x532) != 1)) ||
         (*(int *)((int)param_1 + 0x244) != *(int *)((int)pbVar1 + 0x50c)))) {
    iVar3 = iVar3 + 1;
    pbVar1 = pbVar1 + 0x9f8;
    if (1999 < iVar3) {
      return 0x13 < *(int *)((int)param_1 + 0x270);
    }
  }
  fVar4 = (( float10 (__stdcall *)())FUN_004937c0)();
  piVar2 = FUN_00461920(extraout_ECX,DAT_004ce8cc,*(int *)((int)param_1 + 0xe0));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)param_1 + 0xe0) = 0;
  }
  piVar2[0x11f] = piVar2[0x11f] | 8;
  piVar2[0x16] = (int)(float)fVar4;
  return false;
}


