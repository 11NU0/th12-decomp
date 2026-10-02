/* undefined __stdcall FUN_0045a3c0(void) @ 0045a3c0  213 bytes */
#include "th12.h"

void FUN_0045a3c0(void)

{
  int unaff_ESI;
  
  if (*(int *)(&DAT_004b56a0 + unaff_ESI) != 0) {
    if ((&DAT_004b5647)[DAT_004ce8cc] != '\x01') {
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,4,4);
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,1,4);
      (&DAT_004b5647)[DAT_004ce8cc] = 1;
    }
    (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,6,0);
    (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,3,0);
    (**(code **)(*DAT_004ce8f0 + 0x164))(DAT_004ce8f0,0x144);
    (**(code **)(*DAT_004ce8f0 + 0x14c))
              (DAT_004ce8f0,4,*(int *)(&DAT_004b56a0 + unaff_ESI) * 2,
               *(undefined4 *)(unaff_ESI + 0x8356a8),0x1c);
    *(int *)(unaff_ESI + 0xac) = *(int *)(unaff_ESI + 0xac) + 1;
    *(undefined4 *)(unaff_ESI + 0x8356a8) = *(undefined4 *)(unaff_ESI + 0x8356a4);
    *(undefined4 *)(&DAT_004b56a0 + unaff_ESI) = 0;
  }
  return;
}


