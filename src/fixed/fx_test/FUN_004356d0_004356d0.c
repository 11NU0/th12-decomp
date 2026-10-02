/* undefined4 __fastcall FUN_004356d0(undefined4 param_1, int * param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8) @ 004356d0  103 bytes */
#include "th12.h"

undefined4 __fastcall
FUN_004356d0(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = param_2;
  do {
    if (*piVar2 < 0) {
      piVar2 = param_2 + uVar1 * 10;
      *piVar2 = param_3;
      piVar2[1] = param_4;
      piVar2[6] = param_5;
      piVar2[7] = param_6;
      piVar2[2] = 0x20;
      piVar2[3] = 0x10;
      piVar2[4] = 0x180;
      piVar2[5] = 0x1c0;
      piVar2[8] = param_7;
      piVar2[9] = param_8;
      return 0;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 10;
  } while (uVar1 < 4);
  return 0;
}


