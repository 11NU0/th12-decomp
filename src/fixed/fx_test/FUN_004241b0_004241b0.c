/* undefined4 __stdcall FUN_004241b0(int param_1) @ 004241b0  83 bytes */

#include "th12.h"

undefined4 __stdcall FUN_004241b0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *unaff_EBX;
  int iVar5;
  int unaff_EDI;
  bool bVar6;
  
  iVar5 = 0;
  if (0 < param_1) {
    do {
      pbVar4 = *(byte **)(unaff_EDI + iVar5 * 8);
      pbVar2 = unaff_EBX;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_004241e5:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_004241ea;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_004241e5;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_004241ea:
      if (iVar3 == 0) {
        return *(undefined4 *)(unaff_EDI + 4 + iVar5 * 8);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  return 0;
}


