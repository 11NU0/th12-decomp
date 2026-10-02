/* undefined __stdcall FUN_004101f0(void) @ 004101f0  120 bytes */

#include "th12.h"

void __stdcall FUN_004101f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_EBX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_4;
  
  iVar2 = *unaff_EBX;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)unaff_EBX[4];
    local_4 = 0;
    if (iVar2 != 1 && -1 < iVar2 + -1) {
      iVar2 = unaff_EBX[1];
      do {
        puVar1 = *(undefined4 **)(*(int *)(unaff_EBX[3] + local_4 * 4) + 0x478);
        iVar4 = 0;
        if (0 < iVar2) {
          do {
            puVar5 = puVar3;
            puVar6 = puVar1;
            for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = puVar3 + unaff_EBX[1] * 7;
            puVar6 = puVar1 + 7;
            for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            iVar2 = unaff_EBX[1];
            iVar4 = iVar4 + 1;
            puVar1 = puVar1 + 0xe;
            puVar3 = puVar3 + 7;
          } while (iVar4 < iVar2);
        }
        local_4 = local_4 + 1;
      } while (local_4 < *unaff_EBX + -1);
    }
  }
  return;
}


