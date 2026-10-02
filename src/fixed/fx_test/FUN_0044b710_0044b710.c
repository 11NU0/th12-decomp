/* undefined __stdcall FUN_0044b710(void) @ 0044b710  109 bytes */

#include "th12.h"

void __stdcall FUN_0044b710(void)

{
  void *pvVar1;
  undefined4 *unaff_ESI;
  
  if (unaff_ESI[2] != 0) {
    FUN_0044bcd0();
    if ((void *)unaff_ESI[2] != (void *)0x0) {
      _free((void *)unaff_ESI[2]);
      unaff_ESI[2] = 0;
    }
  }
  pvVar1 = (void *)*unaff_ESI;
  unaff_ESI[2] = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_0044bc50);
    FUN_0046ca4f((void *)((int)pvVar1 + -4));
  }
  *unaff_ESI = 0;
  if ((int *)unaff_ESI[3] != (int *)0x0) {
    (**(code **)(*(int *)unaff_ESI[3] + 0x1c))(1);
  }
  unaff_ESI[1] = 0;
  unaff_ESI[3] = 0;
  return;
}


