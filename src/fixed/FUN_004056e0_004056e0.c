/* undefined __stdcall FUN_004056e0(void) @ 004056e0  242 bytes */
#include "th12.h"

void __stdcall FUN_004056e0(void)

{
  uint *puVar1;
  short sVar2;
  void *this;
  int iVar3;
  int iVar4;
  void *pvVar5;
  short *psVar6;
  int local_10;
  int local_c;
  
  iVar3 = DAT_004b43c0;
  puVar1 = (uint *)(*(int *)((int)DAT_004b43c0 + 8) + 4);
  *puVar1 = *puVar1 | 2;
  puVar1 = (uint *)(*(int *)((int)iVar3 + 0xc) + 4);
  *puVar1 = *puVar1 | 2;
  puVar1 = (uint *)(*(int *)((int)iVar3 + 0x3600) + 4);
  *puVar1 = *puVar1 | 2;
  local_10 = 0;
  local_c = 0;
  if (**(short **)((int)iVar3 + 0x10) < 1) {
    *(undefined4 *)((int)iVar3 + 0x4c) = *(undefined4 *)((int)iVar3 + 0x1c);
    return;
  }
  do {
    *(undefined *)(*(int *)(*(int *)((int)iVar3 + 0x14) + local_c * 4) + 3) = 1;
    psVar6 = (short *)(*(int *)(*(int *)((int)iVar3 + 0x14) + local_c * 4) + 0x1c);
    if (-1 < *psVar6) {
      iVar4 = local_10 * 0x4b4;
      do {
        sVar2 = psVar6[2];
        this = *(void **)((int)iVar3 + 0x1c4);
        pvVar5 = (void *)(*(int *)((int)iVar3 + 0x1c8) + iVar4);
        FUN_00402520();
        *(undefined *)((int)pvVar5 + 0x49d) = 0x10;
        *(undefined *)((int)pvVar5 + 0x49c) = 0x10;
        FUN_00454d10(this,pvVar5,(int)sVar2);
        psVar6[3] = (short)local_10;
        local_10 = local_10 + 1;
        psVar6 = (short *)((int)psVar6 + (int)psVar6[1]);
        iVar4 = iVar4 + 0x4b4;
      } while (-1 < *psVar6);
    }
    local_c = local_c + 1;
  } while (local_c < **(short **)((int)iVar3 + 0x10));
  *(undefined4 *)((int)iVar3 + 0x4c) = *(undefined4 *)((int)iVar3 + 0x1c);
  return;
}


