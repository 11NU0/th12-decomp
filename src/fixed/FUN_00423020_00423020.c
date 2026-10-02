/* undefined __stdcall FUN_00423020(void) @ 00423020  77 bytes */
#include "th12.h"

void __stdcall FUN_00423020(void)

{
  int *piVar1;
  int *piVar2;
  
  DAT_004cf508 = 0xffffffff;
  piVar2 = &DAT_004d0e70;
  do {
    piVar1 = (int *)*piVar2;
    piVar2[5] = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))(piVar1);
      piVar2[5] = 0;
      (**(code **)(*(int *)*piVar2 + 0x48))((int *)*piVar2);
    }
    piVar2 = piVar2 + 6;
  } while ((int)piVar2 < 0x4d1410);
  return;
}


