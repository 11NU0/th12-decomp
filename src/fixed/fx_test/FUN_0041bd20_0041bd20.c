/* undefined4 __fastcall FUN_0041bd20(int param_1) @ 0041bd20  550 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0041bd20(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  _memset((undefined2 *)(param_1 + 0x1318),0,0x214);
  *(undefined4 *)(param_1 + 0x1328) = 0;
  *(undefined2 *)(param_1 + 0x1318) = 7;
  *(undefined2 *)(param_1 + 0x1514) = 1;
  *(undefined2 *)(param_1 + 0x1510) = 1;
  iVar3 = DAT_004b44f4;
  *(undefined2 *)(param_1 + 0x131a) = 0;
  *(undefined2 *)(param_1 + 0x1512) = 1;
  *(undefined4 *)(param_1 + 0x151c) = 0x16;
  *(undefined4 *)(param_1 + 0x1520) = 0x28;
  *(undefined4 *)(param_1 + 0x1518) = 0x83;
  piVar4 = *(int **)(iVar3 + 0x18);
  *(int **)(iVar3 + 0x48c) = piVar4;
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  while( true ) {
    if (*(int *)(param_1 + 0x23c) <= piVar4[0x10]) {
      local_14 = (float)piVar4[0x15];
      local_18 = (float)piVar4[0x14];
      local_24 = 0.0;
      local_10 = (float)piVar4[0x16];
      FUN_0041c580(&local_c,(float)piVar4[0x1a],*(float *)(param_1 + 0x24c));
      if (0.0 < (float)piVar4[0x1b]) {
        do {
          *(float *)(param_1 + 0x131c) = local_18;
          *(float *)(param_1 + 0x1320) = local_14;
          *(float *)(param_1 + 0x1324) = local_10;
          fVar1 = (float)piVar4[0x1a];
          iVar3 = FUN_00464440();
          fVar2 = (float)iVar3;
          if (iVar3 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          *(float *)(param_1 + 0x1328) = ((fVar2 * 4.656613e-10 - 1.0) * 3.1415927) / 56.0 + fVar1;
          iVar3 = FUN_00464440();
          fVar1 = (float)iVar3;
          if (iVar3 < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          *(float *)(param_1 + 0x1330) = *(float *)(param_1 + 0x250) + fVar1 * 2.3283064e-10;
          local_18 = local_c + local_18;
          local_14 = local_8 + local_14;
          local_10 = local_4 + local_10;
          FUN_0040b5e0();
          local_24 = *(float *)(param_1 + 0x24c) + local_24;
        } while (local_24 < (float)piVar4[0x1b]);
      }
      (**(code **)(*piVar4 + 0x14))(0,0);
      iVar3 = DAT_004b44f4;
    }
    if (*(int *)(iVar3 + 0x48c) == 0) break;
    piVar4 = *(int **)(*(int *)(iVar3 + 0x48c) + 8);
    *(int **)(iVar3 + 0x48c) = piVar4;
    if (piVar4 == (int *)0x0) {
      return 0;
    }
  }
  return 0;
}


