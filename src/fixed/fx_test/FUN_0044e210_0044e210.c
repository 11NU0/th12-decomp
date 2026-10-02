/* undefined4 __thiscall FUN_0044e210(void * this, int * param_1, undefined4 param_2, undefined4 param_3, int param_4) @ 0044e210  657 bytes */

#include "th12.h"

uint __thiscall
__thiscall FUN_0044e210(void *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  int unaff_EBP;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_EDI;
  byte *pbVar10;
  undefined auStack_40 [8];
  int aiStack_38 [3];
  undefined4 uStack_2c;
  undefined local_20 [12];
  int *piStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if (*(int *)((int)this + 0x11c) == 0) {
    return in_EAX & 0xffffff00;
  }
  (**(code **)(*param_1 + 0x30))(param_1,local_20);
  uStack_2c = *(undefined4 *)((int)this + 0x108);
  aiStack_38[2] = *(undefined4 *)((int)this + 0x104);
  aiStack_38[0] = 0;
  aiStack_38[1] = 0;
  uVar2 = (**(code **)(*param_1 + 0x34))(param_1,auStack_40,aiStack_38,0);
  if (uVar2 != 0) {
LAB_0044e2b8:
    return uVar2 & 0xffffff00;
  }
  iStack_8 = *(int *)((int)this + 0x110);
  puVar4 = *(ushort **)((int)this + 0x120);
  iVar9 = *(int *)((int)this + 0x100);
  if (aiStack_38[0] == iVar9) {
    if (iVar9 == 0x15) {
      pbVar10 = (byte *)(unaff_EDI * in_EAX + unaff_EBP + iStack_10 * 4);
      if (0 < param_4) {
        iStack_10 = param_4;
        do {
          iVar9 = 0;
          iVar7 = iStack_c;
          if (0 < iStack_c) {
            do {
              uVar2 = (uint)*(byte *)((int)puVar4 + 3);
              *pbVar10 = (char)(((uint)*(byte *)puVar4 - (uint)*pbVar10) * uVar2 >> 8) + *pbVar10;
              pbVar10[1] = (char)(((uint)*(byte *)((int)puVar4 + 1) - (uint)pbVar10[1]) * uVar2 >> 8
                                 ) + pbVar10[1];
              pbVar10[2] = (char)(((uint)*(byte *)(puVar4 + 1) - (uint)pbVar10[2]) * uVar2 >> 8) +
                           pbVar10[2];
              pbVar10 = pbVar10 + 4;
              puVar4 = puVar4 + 2;
              iVar7 = iVar7 + -1;
              iVar9 = iStack_c;
            } while (iVar7 != 0);
          }
          puVar4 = (ushort *)((int)puVar4 + iStack_8 + iVar9 * -4);
          pbVar10 = pbVar10 + unaff_EDI + iVar9 * -4;
          iStack_10 = iStack_10 + -1;
        } while (iStack_10 != 0);
      }
    }
    else if (iVar9 == 0x19) {
      puVar6 = (ushort *)(unaff_EDI * in_EAX + unaff_EBP + iStack_10 * 2);
      if (0 < param_4) {
        do {
          iVar9 = iStack_c;
          iVar7 = 0;
          if (0 < iStack_c) {
            do {
              if ((*puVar4 & 0x8000) != 0) {
                *puVar6 = *puVar4;
              }
              puVar6 = puVar6 + 1;
              puVar4 = puVar4 + 1;
              iVar9 = iVar9 + -1;
              iVar7 = iStack_c;
            } while (iVar9 != 0);
          }
          puVar4 = (ushort *)((int)puVar4 + iStack_8 + iVar7 * -2);
          puVar6 = (ushort *)((int)puVar6 + unaff_EDI + iVar7 * -2);
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
    else {
      if (iVar9 != 0x1a) goto LAB_0044e2b8;
      pbVar10 = (byte *)(unaff_EDI * in_EAX + unaff_EBP + iStack_10 * 2);
      if (0 < param_4) {
        do {
          iVar9 = 0;
          if (0 < iStack_c) {
            iStack_10 = iStack_c;
            do {
              uVar8 = (uint)(*(byte *)((int)puVar4 + 1) >> 4);
              *pbVar10 = ((char)((int)(((uint)(*(byte *)puVar4 >> 4) - (uint)(*pbVar10 >> 4)) *
                                      uVar8) >> 4) + (*pbVar10 >> 4)) * '\x10';
              *pbVar10 = *pbVar10 | (byte)((int)((*(byte *)puVar4 & 0xf) * uVar8) >> 4);
              uVar2 = (pbVar10[1] >> 2 & 0x3c) + uVar8;
              cVar1 = (char)uVar2;
              uVar5 = pbVar10[1] & 0xf;
              if (0xf < uVar2) {
                cVar1 = '\x0f';
              }
              pbVar10[1] = (char)((int)(((*(byte *)((int)puVar4 + 1) & 0xf) - uVar5) * uVar8) >> 4)
                           + (char)uVar5 | cVar1 << 4;
              pbVar10 = pbVar10 + 2;
              puVar4 = puVar4 + 1;
              iStack_10 = iStack_10 + -1;
            } while (iStack_10 != 0);
            iStack_10 = 0;
            iVar9 = iStack_c;
          }
          puVar4 = (ushort *)((int)puVar4 + iStack_8 + iVar9 * -2);
          pbVar10 = pbVar10 + unaff_EDI + iVar9 * -2;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
  }
  uVar3 = (**(code **)(*piStack_14 + 0x38))(piStack_14);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


