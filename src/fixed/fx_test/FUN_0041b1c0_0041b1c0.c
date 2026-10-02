/* undefined4 __fastcall FUN_0041b1c0(undefined4 param_1, short * param_2, int param_3) @ 0041b1c0  680 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0041b1c0(undefined4 param_1,short *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  undefined4 extraout_ECX;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_EDX;
  uint *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int local_8;
  
  iVar4 = DAT_004b43c8;
  puVar10 = (uint *)(DAT_004b43c8 + 100);
  lVar12 = FUN_00455630(param_1,param_2,DAT_004ceaa4);
  puVar11 = (undefined4 *)(iVar4 + 0x500);
  local_8 = 2000;
  uVar7 = extraout_ECX;
  do {
    uVar8 = (uint)((ulonglong)lVar12 >> 0x20);
    if (((*(byte *)puVar10 & 1) != 0) && (*(short *)((int)puVar11 + 0x96) == 1)) {
      fVar1 = (float)puVar11[9] - *(float *)(param_3 + 0x38);
      fVar2 = (float)puVar11[8] - *(float *)(param_3 + 0x34);
      fVar3 = *(float *)(param_3 + 0x1758) - 32.0;
      lVar12 = (ulonglong)uVar8 << 0x20;
      if (fVar2 * fVar2 + fVar1 * fVar1 < fVar3 * fVar3) {
        if (puVar11[0x29] == 0) {
          FUN_00453e20(uVar7,uVar8,puVar11[8]);
          puVar11[0x29] = 1;
          FUN_00402520();
          puVar11[6] = &LAB_0040d430;
          puVar11[7] = puVar10;
          *(undefined2 *)(puVar11 + 0x156) = 0x1b;
          iVar4 = DAT_004b43c8;
          if (*(short *)((int)puVar11 + 0x55a) == 6) {
            uVar6 = 1;
          }
          else {
            uVar6 = (*(short *)((int)puVar11 + 0x55a) != 0xd) - 1 & 3;
          }
          *(ushort *)((int)puVar11 + 0x55a) = uVar6;
          fVar1 = _DAT_004b0934 * 1.2;
          puVar11[0x11] = fVar1;
          puVar11[0x10] = fVar1;
          FUN_00454ee0(*(undefined2 **)(&DAT_004debdc + iVar4),DAT_004b0870);
          sVar5 = *(short *)(puVar11 + 0x156);
          *puVar10 = *puVar10 & 0xffffffef;
          uVar9 = sVar5 * 0xd0;
          uVar8 = *puVar10;
          switch(*(undefined4 *)(&DAT_004af34c + uVar9)) {
          case 0:
            goto switchD_0041b2f8_caseD_0;
          case 1:
            goto switchD_0041b2f8_caseD_1;
          case 2:
            puVar11[0x22] = 0xffffffff;
            *puVar10 = uVar8 | 0x10;
            break;
          case 3:
            goto switchD_0041b2f8_caseD_3;
          case 4:
            goto switchD_0041b2f8_caseD_4;
          }
          goto switchD_0041b2f8_caseD_5;
        }
      }
      else {
        lVar12 = (ulonglong)uVar8 << 0x20;
        if (puVar11[0x29] != 0) {
          puVar11[0x29] = 0;
          FUN_00402520();
          puVar11[6] = &LAB_0040d430;
          puVar11[7] = puVar10;
          *(undefined2 *)(puVar11 + 0x156) = 3;
          iVar4 = DAT_004b43c8;
          if (*(short *)((int)puVar11 + 0x55a) == 1) {
            sVar5 = 6;
          }
          else {
            sVar5 = ((*(short *)((int)puVar11 + 0x55a) != 3) - 1 & 0xb) + 2;
          }
          *(short *)((int)puVar11 + 0x55a) = sVar5;
          uVar7 = _DAT_004af5b4;
          *puVar10 = *puVar10 & 0xffffffef;
          puVar11[0x11] = uVar7;
          puVar11[0x10] = uVar7;
          FUN_00454ee0(*(undefined2 **)(&DAT_004debdc + iVar4),DAT_004af4f0);
          uVar9 = *(short *)(puVar11 + 0x156) * 0xd0;
          switch(*(undefined4 *)(&DAT_004af34c + uVar9)) {
          case 0:
switchD_0041b2f8_caseD_0:
            puVar11[0x22] = *(short *)((int)puVar11 + 0x55a) * 2 + 4;
            break;
          case 1:
switchD_0041b2f8_caseD_1:
            uVar9 = (uint)*(short *)((int)puVar11 + 0x55a);
            puVar11[0x22] = *(undefined4 *)(&DAT_004b0bb0 + uVar9 * 4);
            break;
          case 2:
            *puVar10 = *puVar10 | 0x10;
            puVar11[0x22] = 0xffffffff;
            break;
          case 3:
switchD_0041b2f8_caseD_3:
            puVar11[0x22] = 0x10;
            break;
          case 4:
switchD_0041b2f8_caseD_4:
            puVar11[0x22] = 6;
          }
switchD_0041b2f8_caseD_5:
          if ((code *)*puVar11 != (code *)0x0) {
            (*(code *)*puVar11)();
            uVar9 = extraout_EDX;
          }
          lVar12 = (ulonglong)uVar9 << 0x20;
          uVar7 = 2;
          *(undefined2 *)(puVar11 + -0x34) = 2;
        }
      }
    }
    puVar10 = puVar10 + 0x27e;
    puVar11 = puVar11 + 0x27e;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      return 0;
    }
  } while( true );
}


