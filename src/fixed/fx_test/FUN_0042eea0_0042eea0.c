/* undefined4 __stdcall FUN_0042eea0(void) @ 0042eea0  83 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0042eea0(void)

{
  uint *puVar1;
  int iVar2;
  uint *unaff_ESI;
  
  if ((*(byte *)unaff_ESI & 2) != 0) {
    FUN_00431630();
    iVar2 = DAT_004b43b8;
    DAT_004cf468 = 1;
    puVar1 = (uint *)(*(int *)(DAT_004b43b8 + 0xc) + 4);
    *puVar1 = *puVar1 | 2;
    puVar1 = (uint *)(*(int *)(iVar2 + 0x10) + 4);
    *puVar1 = *puVar1 | 2;
    puVar1 = (uint *)(*(int *)(iVar2 + 0x18fc0) + 4);
    *puVar1 = *puVar1 | 2;
    DAT_004cee78 = DAT_004cee78 & 0xffffdfff;
    DAT_004cee40 = 4;
    *unaff_ESI = *unaff_ESI & 0xfffffffd;
  }
  return 1;
}


