/* undefined __stdcall FUN_0044f400(void) @ 0044f400  162 bytes */
#include "th12.h"

void __stdcall FUN_0044f400(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  piVar3 = (int *)(&DAT_004b50c0 + DAT_004ce8cc);
  local_4 = 0x20;
  do {
    iVar2 = *piVar3;
    if ((iVar2 != 0) && (iVar5 = 0, 0 < *(int *)((int)iVar2 + 0x10c))) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)((int)iVar2 + 0x120) + iVar4;
        if ((*(byte *)(*(int *)((int)iVar2 + 0x120) + 0x10 + iVar4) & 1) != 0) {
          *(uint *)((int)iVar1 + 0x10) = *(uint *)((int)iVar1 + 0x10) | 1;
          (**(code **)(*DAT_004ce8f0 + 0x5c))
                    (DAT_004ce8f0,DAT_004ce9dc,DAT_004ce9e0,1,1,DAT_004ce9e4,0,iVar1,0);
          *(uint *)((int)iVar1 + 0xc) = (uint)(DAT_004ce9e4 == 0x16) * 2 + 2;
        }
        iVar2 = *piVar3;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar5 < *(int *)((int)iVar2 + 0x10c));
    }
    piVar3 = piVar3 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}


