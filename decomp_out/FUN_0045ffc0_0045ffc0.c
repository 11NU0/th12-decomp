/* undefined4 * __stdcall FUN_0045ffc0(void) @ 0045ffc0  212 bytes */
#include "th12.h"

undefined4 * FUN_0045ffc0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *unaff_EDI;
  int local_18;
  int local_14;
  int local_10;
  
  FUN_004622e0();
  piVar4 = (int *)unaff_EDI[0x42];
  iVar3 = 0;
  local_10 = 0;
  local_18 = 0;
  local_14 = 0;
  bVar1 = false;
  while( true ) {
    if (local_10 == unaff_EDI[0x49] + -1) {
      iVar2 = FUN_004600a0(unaff_EDI,local_14,iVar3,local_18,piVar4);
      if (iVar2 < 0) {
        unaff_EDI[0x49] = 0;
        return (undefined4 *)0x0;
      }
      bVar1 = true;
    }
    local_18 = local_18 + (uint)*(ushort *)((int)piVar4 + 6);
    iVar3 = iVar3 + (uint)*(ushort *)(piVar4 + 1);
    local_14 = local_14 + 1;
    if (piVar4[9] == 0) break;
    local_10 = local_10 + 1;
    piVar4 = (int *)((int)piVar4 + piVar4[9]);
    if ((local_10 == unaff_EDI[0x49]) || (bVar1)) {
      unaff_EDI[0x49] = unaff_EDI[0x49] + 1;
      return unaff_EDI;
    }
  }
  unaff_EDI[0x49] = 0;
  return unaff_EDI;
}


