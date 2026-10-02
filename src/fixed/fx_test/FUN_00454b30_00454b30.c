/* undefined4 * __stdcall FUN_00454b30(void) @ 00454b30  77 bytes */

#include "th12.h"

undefined4 * __stdcall FUN_00454b30(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  _memset(&DAT_004cf4e8,0,0x52a0);
  iVar3 = 0;
  puVar1 = &DAT_004d0e70;
  do {
    puVar1[1] = 0xffffffff;
    piVar2 = &DAT_004ae5a0;
    do {
      if (*piVar2 == iVar3) break;
      piVar2 = piVar2 + 5;
    } while (piVar2 != (int *)0x0);
    puVar1[3] = iVar3;
    puVar1[2] = piVar2;
    puVar1 = puVar1 + 6;
    iVar3 = iVar3 + 1;
    if (0x4d140f < (int)puVar1) {
      return &DAT_004cf4e8;
    }
  } while( true );
}


