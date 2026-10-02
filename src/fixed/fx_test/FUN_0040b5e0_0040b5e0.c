/* undefined4 __stdcall FUN_0040b5e0(void) @ 0040b5e0  136 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0040b5e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int iVar5;
  short *unaff_ESI;
  uint uVar6;
  float10 fVar7;
  
  iVar1 = DAT_004b43c8;
  fVar7 = FUN_004377a0((float *)(unaff_ESI + 2));
  iVar5 = 0;
  uVar3 = extraout_ECX;
  iVar4 = extraout_EDX;
  if (0 < unaff_ESI[0xfd]) {
    do {
      uVar3 = 0;
      uVar6 = 0;
      if (0 < unaff_ESI[0xfc]) {
        do {
          iVar2 = FUN_0040a250(iVar1,unaff_ESI,uVar6,iVar5,(float)fVar7);
          uVar3 = extraout_ECX_00;
          if ((iVar2 != 0) && (iVar4 = extraout_EDX_00, iVar2 == 1)) goto LAB_0040b644;
          iVar4 = (int)unaff_ESI[0xfc];
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < iVar4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < unaff_ESI[0xfd]);
  }
LAB_0040b644:
  if ((*(byte *)(unaff_ESI + 0x100) & 0x80) != 0) {
    FUN_00453e20(uVar3,iVar4,*(undefined4 *)(unaff_ESI + 2));
  }
  return 0;
}


