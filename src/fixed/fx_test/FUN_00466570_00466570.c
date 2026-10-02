/* undefined4 __stdcall FUN_00466570(void) @ 00466570  77 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00466570(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined in_DL;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 4) != 0) && (*(int *)(unaff_ESI + 0x34) != 0)) {
    *(undefined4 *)(unaff_ESI + 0x34) = 0;
    FUN_00466bc0(*(int *)(unaff_ESI + 0xc),in_DL,*(undefined4 *)(*(int *)(unaff_ESI + 0xc) + 0x98));
    piVar1 = (int *)**(undefined4 **)(unaff_ESI + 4);
    *(undefined4 *)(unaff_ESI + 0x30) = 1;
    uVar2 = (**(code **)(*piVar1 + 0x30))
                      (piVar1,0,*(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24))
    ;
    return uVar2;
  }
  return 0x800401f0;
}


