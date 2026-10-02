/* undefined __stdcall FUN_00435670(void) @ 00435670  50 bytes */
#include "th12.h"

void FUN_00435670(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &DAT_004d0e70;
  do {
    piVar1 = (int *)*piVar2;
    if ((piVar1 != (int *)0x0) && (piVar2[5] != 0)) {
      (**(code **)(*piVar1 + 0x30))(piVar1,0,0,*(undefined4 *)(piVar2[2] + 0xc));
    }
    piVar2 = piVar2 + 6;
  } while ((int)piVar2 < 0x4d1410);
  return;
}


