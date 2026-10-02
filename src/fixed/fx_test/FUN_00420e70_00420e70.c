/* undefined __stdcall FUN_00420e70(void) @ 00420e70  276 bytes */

#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x00420f29) */

void __stdcall FUN_00420e70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = DAT_004b43e4;
  iVar1 = *(int *)(DAT_004b43e4 + 0x6cdc);
  if (DAT_004b0c44 != iVar1) {
    iVar3 = (int)((DAT_004b0c44 - iVar1) + (DAT_004b0c44 - iVar1 >> 0x1f & 0x1fU)) >> 5;
    if (iVar3 < 0x8d55e) {
      if (iVar3 == 0) {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 0x8d55e;
    }
    if (*(int *)(DAT_004b43e4 + 0x6ce0) < iVar3) {
      *(int *)(DAT_004b43e4 + 0x6ce0) = iVar3;
    }
    if (DAT_004b0c44 - iVar1 < *(int *)(iVar2 + 0x6ce0)) {
      *(int *)(iVar2 + 0x6ce0) = DAT_004b0c44 - iVar1;
    }
    *(int *)(iVar2 + 0x6cdc) = *(int *)(iVar2 + 0x6cdc) + *(int *)(iVar2 + 0x6ce0);
    if (DAT_004b0c44 <= *(int *)(iVar2 + 0x6cdc)) {
      *(undefined4 *)(iVar2 + 0x6ce0) = 0;
    }
  }
  if (DAT_004b0c40 < *(int *)(iVar2 + 0x6cdc)) {
    DAT_004b0ce0 = DAT_004b0ce0 | 4;
    DAT_004b0cc8 = DAT_004b0cc4;
    DAT_004b0c40 = *(int *)(iVar2 + 0x6cdc);
  }
  if ((*(byte *)(iVar2 + 0x6d18) & 0x20) == 0) {
    if (DAT_004b0ca8 == 4) {
      bVar4 = SBORROW4(*(int *)(iVar2 + 0x6cdc),*(int *)(&DAT_004af0f8 + DAT_004b0cd8 * 4));
      iVar1 = *(int *)(iVar2 + 0x6cdc) - *(int *)(&DAT_004af0f8 + DAT_004b0cd8 * 4);
    }
    else {
      bVar4 = SBORROW4(*(int *)(iVar2 + 0x6cdc),*(int *)(&DAT_004aeeb4 + DAT_004b0cd8 * 4));
      iVar1 = *(int *)(iVar2 + 0x6cdc) - *(int *)(&DAT_004aeeb4 + DAT_004b0cd8 * 4);
    }
    if (bVar4 == iVar1 < 0) {
      FUN_00422ce0();
      DAT_004b0cd8 = DAT_004b0cd8 + 1;
    }
  }
  return;
}


