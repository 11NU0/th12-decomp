/* int __stdcall FUN_00422e80(void) @ 00422e80  153 bytes */
#include "th12.h"

int __stdcall FUN_00422e80(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int unaff_EDI;
  
  if ((0 < unaff_EDI) && (unaff_ESI[5] = 0, unaff_ESI[2] == 0)) {
    iVar1 = *unaff_ESI;
    if (iVar1 == 0) {
      unaff_ESI[3] = 1;
      unaff_ESI[4] = 1;
      *unaff_ESI = unaff_EDI;
      return 0;
    }
    iVar2 = unaff_ESI[1];
    if (iVar2 == 0) {
      unaff_ESI[3] = 2;
      unaff_ESI[4] = 2;
      unaff_ESI[1] = unaff_EDI;
      return 0;
    }
    unaff_ESI[2] = unaff_EDI;
    unaff_ESI[3] = 3;
    unaff_ESI[4] = 3;
    if (iVar1 == unaff_EDI) {
      if (iVar2 == unaff_EDI) {
        unaff_ESI[6] = unaff_EDI;
        return unaff_EDI;
      }
    }
    else if ((iVar2 != unaff_EDI) && (iVar1 != iVar2)) {
      unaff_ESI[6] = -1;
      return -1;
    }
    FUN_00421a60(iVar1,(short *)0x3);
    *unaff_ESI = unaff_ESI[1];
    unaff_ESI[2] = 0;
    unaff_ESI[3] = 2;
    unaff_ESI[4] = 4;
    unaff_ESI[1] = unaff_EDI;
  }
  return 0;
}


