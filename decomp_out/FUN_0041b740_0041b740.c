/* undefined4 __fastcall FUN_0041b740(int param_1) @ 0041b740  1018 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0041b740(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float local_74;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  
  _memset((undefined2 *)(param_1 + 0x48c),0,0x214);
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined2 *)(param_1 + 0x48c) = 0x17;
  *(undefined2 *)(param_1 + 0x68a) = 1;
  *(undefined2 *)(param_1 + 0x684) = 1;
  iVar3 = DAT_004b44f4;
  *(undefined2 *)(param_1 + 0x48e) = 0;
  *(undefined2 *)(param_1 + 0x686) = 1;
  *(undefined4 *)(param_1 + 0x690) = 0x16;
  *(undefined4 *)(param_1 + 0x694) = 0x28;
  *(undefined4 *)(param_1 + 0x68c) = 0x83;
  piVar6 = *(int **)(iVar3 + 0x18);
  *(int **)(iVar3 + 0x48c) = piVar6;
  if (piVar6 != (int *)0x0) {
    fVar8 = (float10)FUN_004938c0(1);
    fVar9 = (float10)FUN_004939f0(extraout_ECX);
    fVar10 = (float10)FUN_004938c0(extraout_ECX_00);
    fVar11 = (float10)FUN_004939f0(extraout_ECX_01);
    do {
      fVar1 = (float)piVar6[0x14] - (float)piVar6[0x115];
      fVar2 = (float)piVar6[0x15] - (float)piVar6[0x116];
      fVar12 = FUN_004646e0((float)piVar6[0x1a] + 0.3926991 + 0.19634955);
      FUN_0041c580(&local_20,(float)fVar12,14.0);
      local_50 = (float)piVar6[0x115] + (fVar1 * (float)fVar9 - (float)fVar8 * fVar2);
      local_4c = (float)piVar6[0x116] + fVar1 * (float)fVar8 + fVar2 * (float)fVar9;
      fVar14 = 14.0;
      fVar13 = FUN_004646e0(((float)piVar6[0x1a] - 0.3926991) - 0.19634955);
      FUN_0041c580(&local_14,(float)fVar13,fVar14);
      local_44 = (fVar1 * (float)fVar11 - (float)fVar10 * fVar2) + (float)piVar6[0x115];
      local_40 = (float)piVar6[0x116] + fVar1 * (float)fVar10 + fVar2 * (float)fVar11;
      local_54 = (float)piVar6[0x16];
      local_5c = (float)piVar6[0x14];
      local_58 = (float)piVar6[0x15];
      local_74 = 0.0;
      FUN_0041c580(&local_2c,(float)piVar6[0x1a],14.0);
      *(undefined4 *)(param_1 + 0x508) = 0x2000;
      *(undefined4 *)(param_1 + 0x4dc) = 1;
      *(undefined4 *)(param_1 + 0x4d4) = 0;
      *(undefined4 *)(param_1 + 0x4d8) = 0x400;
      *(undefined4 *)(param_1 + 0x4d0) = 0xb4;
      *(undefined4 *)(param_1 + 0x4c0) = 0x200;
      *(undefined4 *)(param_1 + 0x4b8) = 0x4b0;
      *(float *)(param_1 + 0x588) = (float)fVar12;
      *(undefined4 *)(param_1 + 0x590) = 1;
      *(int *)(param_1 + 0x58c) = piVar6[0x1d];
      uVar5 = 0;
      *(int *)(param_1 + 0x5a0) = piVar6[0x115];
      *(int *)(param_1 + 0x5a4) = piVar6[0x116];
      if (0.0 < (float)piVar6[0x1b]) {
        do {
          uVar4 = uVar5 & 0x80000001;
          bVar7 = uVar4 == 0;
          if ((int)uVar4 < 0) {
            bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
          }
          *(undefined4 *)(param_1 + 0x4f4) = 1;
          *(undefined4 *)(param_1 + 0x4e8) = 0xb4;
          *(undefined4 *)(param_1 + 0x4ec) = 9;
          *(undefined4 *)(param_1 + 0x4f0) = 0x2000000;
          if (bVar7) {
            *(float *)(param_1 + 0x4e0) = local_50;
            *(float *)(param_1 + 0x4e4) = local_4c;
          }
          else {
            *(float *)(param_1 + 0x4e0) = local_44;
            *(float *)(param_1 + 0x4e4) = local_40;
          }
          fVar1 = local_2c + local_5c;
          *(float *)(param_1 + 0x490) = local_5c;
          *(float *)(param_1 + 0x494) = local_58;
          *(float *)(param_1 + 0x498) = local_54;
          local_58 = local_28 + local_58;
          local_54 = local_24 + local_54;
          local_50 = local_20 + local_50;
          local_4c = local_4c + local_1c;
          local_44 = local_44 + local_14;
          local_40 = local_40 + local_10;
          FUN_0040b5e0();
          *(undefined4 *)(param_1 + 0x590) = 0;
          local_74 = local_74 + 14.0;
          uVar5 = uVar5 + 1;
          local_5c = fVar1;
        } while (local_74 < (float)piVar6[0x1b]);
      }
      (**(code **)(*piVar6 + 0x14))(0,0);
      if (*(int *)(DAT_004b44f4 + 0x48c) == 0) {
        return 0;
      }
      piVar6 = *(int **)(*(int *)(DAT_004b44f4 + 0x48c) + 8);
      *(int **)(DAT_004b44f4 + 0x48c) = piVar6;
    } while (piVar6 != (int *)0x0);
  }
  return 0;
}


