/* int __stdcall FUN_004694f0(byte * param_1) @ 004694f0  126 bytes */
#include "th12.h"

int __stdcall FUN_004694f0(byte *param_1)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  iVar5 = *(int *)((int)in_EAX + 8) + -1;
  if (-1 < iVar5) {
    do {
      iVar6 = (iVar5 - iVar7) / 2 + iVar7;
      pbVar4 = *(byte **)(*(int *)((int)in_EAX + 0x8c) + iVar6 * 8);
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00469540:
          iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00469545;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00469540;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_00469545:
      if (iVar2 == 0) {
        return *(int *)(*(int *)((int)in_EAX + 0x8c) + 4 + iVar6 * 8) + 0x10;
      }
      if (iVar2 < 0) {
        iVar5 = iVar6 + -1;
      }
      else {
        iVar7 = iVar6 + 1;
      }
    } while (iVar7 <= iVar5);
  }
  return 0;
}


