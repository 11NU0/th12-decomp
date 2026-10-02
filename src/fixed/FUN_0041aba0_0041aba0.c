/* int __fastcall FUN_0041aba0(int param_1) @ 0041aba0  348 bytes */
#include "th12.h"

int __fastcall FUN_0041aba0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_24;
  float local_1c [3];
  float local_10;
  float local_c;
  
  local_1c[0] = 16.0;
  local_1c[1] = 16.0;
  iVar3 = 0;
  piVar1 = FUN_00461920(param_1,DAT_004ce8cc,*(int *)((int)param_1 + 0xe0));
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)((int)param_1 + 0xe0) = 0;
  }
  iVar2 = *(int *)((int)param_1 + 0x1608);
  iVar4 = *(int *)((int)param_1 + 0x160c);
  piVar1[0x11f] = piVar1[0x11f] | 4;
  piVar1[9] = (int)(((float)iVar2 * 5.8904862) / (float)iVar4 + 0.3926991);
  fVar5 = FUN_004646e0((float)piVar1[9] * 0.015625 + ((float)piVar1[0xb] - (float)piVar1[9] * 0.5));
  iVar2 = 0x1f;
  do {
    iVar4 = iVar2;
    local_24 = (float)fVar5;
    FUN_0041c580(local_1c + 2,local_24,(float)piVar1[0x11]);
    local_1c[2] = *(float *)((int)param_1 + 0x34) + local_1c[2];
    local_10 = local_10 + *(float *)((int)param_1 + 0x38);
    local_c = *(float *)((int)param_1 + 0x3c) + local_c;
    iVar2 = FUN_00439ed0(local_1c + 2,local_1c);
    iVar3 = iVar3 + iVar2;
    fVar5 = FUN_004646e0((float)piVar1[9] * 0.03125 + local_24);
    iVar2 = iVar4 + -1;
  } while (iVar2 != 0);
  if (0x1d < iVar3) {
    iVar2 = (iVar3 * 3 + -0x5a) / 5;
    iVar3 = iVar2 + 0x1e;
    if ((0x45 < iVar3) && (iVar3 = (iVar2 + -0x14) / 5 + 0x32, 0x4f < iVar3)) {
      return iVar4 + 0x4f;
    }
  }
  return iVar3;
}


