/* void * __stdcall FUN_004621c0(void) @ 004621c0  200 bytes */
#include "th12.h"

void * FUN_004621c0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  
  iVar2 = DAT_004ce8cc;
  iVar1 = *(int *)(&DAT_004b50bc + DAT_004ce8cc);
  pvVar4 = (void *)(iVar1 * 0x4b4 + 0xbc + DAT_004ce8cc);
  if (*(char *)((int)&DAT_004b40bc + DAT_004ce8cc + iVar1) == '\0') {
    *(undefined *)((int)&DAT_004b40bc + DAT_004ce8cc + iVar1) = 1;
  }
  else {
    uVar3 = iVar1 + 1U & 0x80000fff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffff000) + 1;
    }
    *(uint *)(&DAT_004b50bc + DAT_004ce8cc) = uVar3;
    pvVar4 = (void *)(uVar3 * 0x4b4 + 0xbc + iVar2);
    if (*(char *)((int)&DAT_004b40bc + iVar2 + uVar3) == '\0') {
      FUN_00402520();
      *(undefined *)((int)&DAT_004b40bc + *(int *)(&DAT_004b50bc + iVar2) + iVar2) = 1;
    }
    else {
      pvVar4 = operator_new(0x4b4);
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
        FUN_00402520();
      }
      else {
        pvVar4 = FUN_004027e0(pvVar4);
        FUN_00402520();
      }
    }
  }
  uVar3 = *(int *)(&DAT_004b50bc + iVar2) + 1U & 0x80000fff;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffff000) + 1;
  }
  *(uint *)(&DAT_004b50bc + iVar2) = uVar3;
  return pvVar4;
}


