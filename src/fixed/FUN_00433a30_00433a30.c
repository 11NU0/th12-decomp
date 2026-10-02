/* undefined __stdcall FUN_00433a30(void) @ 00433a30  377 bytes */
#include "th12.h"

void __stdcall FUN_00433a30(void)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  int unaff_ESI;
  bool bVar9;
  
  if ((DAT_004b0cb0 == 7) && (*(int *)((int)unaff_ESI + 500) != 0)) {
    DAT_004b452c = &DAT_004aedf0;
    DAT_004b0cb0 = 8;
    DAT_004b0cb4 = 8;
  }
  iVar5 = FUN_00431b90((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + 8 + DAT_004b451c);
  if ((DAT_004b0cb0 == 7) && (*(int *)((int)unaff_ESI + 500) != 0)) {
    DAT_004b452c = &DAT_004aedb0;
    DAT_004b0cb0 = 7;
    DAT_004b0cb4 = 7;
  }
  if (iVar5 < 0) {
    *(undefined4 *)((int)unaff_ESI + 0x1f8) = 1;
    return;
  }
  *(undefined4 *)((int)unaff_ESI + 0x40) = 0x19;
  *(undefined4 *)((int)unaff_ESI + 0x108) = 1;
  iVar4 = *(int *)((int)unaff_ESI + 0x40);
  if ((iVar4 != 0) && (iVar4 <= iVar5)) {
    iVar5 = iVar4 + -1;
  }
  piVar1 = (int *)((int)unaff_ESI + 0x110);
  *(int *)((int)unaff_ESI + 0x38) = iVar5;
  iVar5 = *(int *)((int)unaff_ESI + 0x118);
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else if (iVar5 < 1) {
    *piVar1 = iVar5 + -1;
  }
  else {
    *piVar1 = 0;
  }
  pbVar7 = (byte *)((int)unaff_ESI + 0x2cc);
  pcVar6 = (char *)((int)DAT_004b451c + 0x1e9c0);
  *(undefined4 *)((int)unaff_ESI + 0x118) = 0x5b;
  *(undefined4 *)((int)unaff_ESI + 0x1e0) = 1;
  iVar5 = (int)pbVar7 - (int)pcVar6;
  do {
    cVar2 = *pcVar6;
    pcVar6[iVar5] = cVar2;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  *(undefined4 *)((int)unaff_ESI + 0x1f0) = 0;
  pbVar8 = &DAT_004a0ee4;
  do {
    bVar3 = *pbVar7;
    bVar9 = bVar3 < *pbVar8;
    if (bVar3 != *pbVar8) {
LAB_00433b60:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00433b65;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar7[1];
    bVar9 = bVar3 < pbVar8[1];
    if (bVar3 != pbVar8[1]) goto LAB_00433b60;
    pbVar7 = pbVar7 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar3 != 0);
  iVar5 = 0;
LAB_00433b65:
  if (iVar5 != 0) {
    FUN_00464970(-1);
  }
  iVar5 = 8;
  do {
    if (*(char *)(unaff_ESI + 0x2cb + iVar5) != ' ') break;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  *(int *)((int)unaff_ESI + 0x1f0) = iVar5;
  *(undefined4 *)((int)unaff_ESI + 0x1f8) = 0;
  return;
}


