/* ulonglong __stdcall FUN_00464a80(void) @ 00464a80  83 bytes */

#include "th12.h"

ulonglong __stdcall FUN_00464a80(void)

{
  float *pfVar1;
  int iVar2;
  int *unaff_ESI;
  ulonglong uVar3;
  
  iVar2 = unaff_ESI[1];
  pfVar1 = (float *)unaff_ESI[3];
  *unaff_ESI = iVar2;
  if ((0.99 < *pfVar1) && (*pfVar1 < 1.01)) {
    iVar2 = iVar2 + 1;
    unaff_ESI[1] = iVar2;
    unaff_ESI[2] = (int)((float)unaff_ESI[2] + 1.0);
    return CONCAT44(iVar2,iVar2);
  }
  unaff_ESI[2] = (int)(*pfVar1 + (float)unaff_ESI[2]);
  uVar3 = FUN_004931e0(pfVar1,iVar2);
  unaff_ESI[1] = (int)uVar3;
  return uVar3;
}


