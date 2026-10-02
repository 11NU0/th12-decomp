/* undefined4 __stdcall FUN_00428670(void) @ 00428670  121 bytes */
#include "th12.h"

undefined4 FUN_00428670(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_004b44f4 + 0x18);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    if ((piVar3[0x112] & 1U) == 0) {
      piVar3[0x110] = 0;
      piVar3[0x10f] = 0;
      piVar3[0x10e] = -999999;
      piVar3[0x111] = (int)&DAT_004b2ed0;
      piVar3[0x112] = piVar3[0x112] | 1;
    }
    piVar3[0x110] = 0;
    piVar3[0x10f] = 0;
    piVar3[0x10e] = -1;
    pcVar2 = *(code **)(*piVar3 + 0x14);
    piVar3[0x113] = 0;
    (*pcVar2)(1,0);
    piVar3 = piVar1;
  }
  return 0;
}


