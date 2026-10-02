/* undefined4 __fastcall FUN_00437810(float * param_1) @ 00437810  366 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00437810(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *in_EAX;
  
  fVar2 = *param_1 + *in_EAX * 0.5;
  fVar3 = in_EAX[1] * 0.5 + param_1[1];
  if ((((fVar2 < *(float *)((int)DAT_004b4514 + 0x9cc) !=
         (NANP(fVar2) || NANP(*(float *)((int)DAT_004b4514 + 0x9cc)))) ||
       (fVar3 < *(float *)((int)DAT_004b4514 + 0x9d0) !=
        (NANP(fVar3) || NANP(*(float *)((int)DAT_004b4514 + 0x9d0))))) ||
      (*(float *)((int)DAT_004b4514 + 0x9d8) < *param_1 - *in_EAX * 0.5)) ||
     (*(float *)((int)DAT_004b4514 + 0x9dc) < param_1[1] - in_EAX[1] * 0.5)) {
    if (((*param_1 + 24.0 < *(float *)((int)DAT_004b4514 + 0x9cc) ==
          (NANP(*param_1 + 24.0) || NANP(*(float *)((int)DAT_004b4514 + 0x9cc)))) &&
        (param_1[1] + 24.0 < *(float *)((int)DAT_004b4514 + 0x9d0) ==
         (NANP(param_1[1] + 24.0) || NANP(*(float *)((int)DAT_004b4514 + 0x9d0))))) &&
       ((*param_1 - 24.0 <= *(float *)((int)DAT_004b4514 + 0x9d8) &&
        (param_1[1] - 24.0 <= *(float *)((int)DAT_004b4514 + 0x9dc))))) {
      return 2;
    }
  }
  else if (((DAT_004b43e4 == 0) || (*(int *)((int)DAT_004b43e4 + 0x6d30) == 0)) &&
          ((iVar1 = *(int *)((int)DAT_004b4514 + 0xa28), iVar1 != 2 &&
           (((iVar1 != 4 && (iVar1 != 3)) && ((*(byte *)((int)DAT_004b4514 + 0xc414) & 2) == 0)))))) {
    if (*(int *)((int)DAT_004b4514 + 0xc404) < 1) {
      FUN_00438370();
    }
    return 1;
  }
  return 0;
}


