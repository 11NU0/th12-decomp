/* ulonglong __fastcall FUN_00458cf0(uint param_1, undefined4 param_2) @ 00458cf0  332 bytes */

#include "th12.h"

ulonglong __fastcall FUN_00458cf0(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  int *unaff_EDI;
  ulonglong uVar2;
  
  if (0 < unaff_EDI[9]) {
    uVar2 = FUN_00464a80();
    param_2 = (undefined4)(uVar2 >> 0x20);
    param_1 = unaff_EDI[9];
    if ((int)param_1 <= unaff_EDI[5]) {
      if ((unaff_EDI[8] & 1U) == 0) {
        unaff_EDI[6] = 0;
        unaff_EDI[5] = 0;
        unaff_EDI[4] = -999999;
        unaff_EDI[7] = (int)&DAT_004b2ed0;
        unaff_EDI[8] = unaff_EDI[8] | 1;
      }
      unaff_EDI[5] = param_1;
      unaff_EDI[4] = param_1 - 1;
      unaff_EDI[6] = (int)(float)param_1;
      unaff_EDI[9] = 0;
      if (unaff_EDI[10] != 7) {
        return CONCAT44(param_2,unaff_EDI[1]);
      }
      goto LAB_00458d6c;
    }
  }
  iVar1 = unaff_EDI[10];
  if (iVar1 != 7) {
    if (iVar1 == 0x11) {
      *unaff_EDI = *unaff_EDI + unaff_EDI[3];
      unaff_EDI[3] = unaff_EDI[1] + unaff_EDI[3];
      return CONCAT44(param_2,*unaff_EDI);
    }
    if (iVar1 == 8) {
      uVar2 = FUN_004931e0(param_1,param_2);
      return uVar2;
    }
    iVar1 = *unaff_EDI;
    FUN_00459330();
    uVar2 = FUN_004931e0(extraout_ECX,unaff_EDI[1] - iVar1);
    return uVar2;
  }
  *unaff_EDI = *unaff_EDI + unaff_EDI[1];
LAB_00458d6c:
  return CONCAT44(param_2,*unaff_EDI);
}


