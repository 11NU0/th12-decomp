/* undefined4 __fastcall FUN_0043a480(undefined4 param_1, int param_2) @ 0043a480  500 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0043a480(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float local_1c;
  
  iVar3 = DAT_004b43dc;
  if (*(int *)(param_2 + 0x48) != 2) {
    if (DAT_004b43dc == 0) {
      *(undefined4 *)(param_2 + 0x54) = 0;
    }
    else if (*(int *)(param_2 + 0x54) == 0) {
      iVar4 = FUN_0041a9f0(256.0);
      *(int *)(param_2 + 0x54) = iVar4;
      if (iVar4 != 0) {
        *(undefined4 *)(param_2 + 100) = *(undefined4 *)(iVar4 + 0x27b4);
      }
    }
    if (*(int *)(param_2 + 0x54) != 0) {
      if (*(int *)(param_2 + 100) != 0) {
        for (piVar1 = *(int **)(iVar3 + 0x68); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
          if (*(int *)(*piVar1 + 0x27b4) == *(int *)(param_2 + 100)) {
            uVar2 = *(uint *)(*(int *)(param_2 + 0x54) + 0x26f8);
            if (((uVar2 & 0x21) == 0) && ((uVar2 & 0x6000000) == 0)) {
              fVar6 = *(float *)(param_2 + 0x30);
              fVar5 = FUN_0043ad50(param_2 + 0x14);
              fVar5 = FUN_0043ace0((float)fVar5,fVar6);
              local_1c = *(float *)(param_2 + 0x2c);
              if (0x3b < *(int *)(param_2 + 4)) {
                *(float *)(param_2 + 0x2c) = local_1c + 0.2;
                return 0;
              }
              fVar6 = ABS((float)fVar5);
              if (fVar6 < 0.7853982) {
                if (fVar6 < 0.2617994 == NAN(fVar6)) goto LAB_0043a60d;
                local_1c = local_1c + 0.2;
                fVar6 = 16.0;
                if (16.0 < local_1c == NAN(local_1c)) goto LAB_0043a60d;
              }
              else {
                local_1c = local_1c - 0.2;
                fVar6 = 4.0;
                if (4.0 <= local_1c) goto LAB_0043a60d;
              }
              local_1c = fVar6;
LAB_0043a60d:
              fVar5 = FUN_004646e0((float)fVar5 * 0.08 + *(float *)(param_2 + 0x30));
              FUN_00408910(param_2 + 0x14,(float)fVar5);
              *(float *)(param_2 + 0x2c) = local_1c;
              return 0;
            }
            *(undefined4 *)(param_2 + 0x54) = 0;
            goto LAB_0043a517;
          }
        }
      }
      *(undefined4 *)(param_2 + 0x54) = 0;
      *(undefined4 *)(param_2 + 100) = 0;
    }
LAB_0043a517:
    fVar6 = *(float *)(param_2 + 0x2c) + 0.1;
    if (16.0 < fVar6 != NAN(fVar6)) {
      *(undefined4 *)(param_2 + 0x2c) = 0x41800000;
      return 0;
    }
    *(float *)(param_2 + 0x2c) = fVar6;
  }
  return 0;
}


