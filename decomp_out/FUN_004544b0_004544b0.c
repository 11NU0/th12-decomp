/* undefined __stdcall FUN_004544b0(void) @ 004544b0  200 bytes */
#include "th12.h"

void FUN_004544b0(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  undefined4 extraout_EDX;
  int *unaff_ESI;
  ulonglong uVar3;
  
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x48))(piVar1);
    (**(code **)(*(int *)*unaff_ESI + 0x34))((int *)*unaff_ESI,0);
    (**(code **)(*(int *)*unaff_ESI + 0x40))((int *)*unaff_ESI);
    unaff_ESI[4] = in_EAX;
    if (DAT_004d4780 == 0) {
      (**(code **)(*(int *)*unaff_ESI + 0x3c))((int *)*unaff_ESI,0xffffd8f0);
    }
    else {
      piVar1 = (int *)*unaff_ESI;
      iVar2 = *piVar1;
      uVar3 = FUN_004931e0(*(short *)(unaff_ESI[2] + 8) + 5000,extraout_EDX);
      (**(code **)(iVar2 + 0x3c))(piVar1,(int)uVar3 + -5000);
    }
    (**(code **)(*(int *)*unaff_ESI + 0x30))
              ((int *)*unaff_ESI,0,0,*(undefined4 *)(unaff_ESI[2] + 0xc));
  }
  return;
}


