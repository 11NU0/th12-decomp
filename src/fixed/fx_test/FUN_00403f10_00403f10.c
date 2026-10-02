/* undefined4 __fastcall FUN_00403f10(int param_1, float * param_2, float param_3) @ 00403f10  1503 bytes */

#include "th12.h"

undefined4 __fastcall FUN_00403f10(int param_1,float *param_2,float param_3)

{
  float *in_EAX;
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined4 local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  
  local_1d0 = *(float *)(param_1 + 0xc) + param_2[2];
  local_1cc = in_EAX[0xf] + *in_EAX;
  local_1c8 = in_EAX[0x10] + in_EAX[1];
  local_1c4 = in_EAX[0x11] + in_EAX[2];
  fVar3 = (*param_2 + *(float *)(param_1 + 4)) - local_1cc;
  fVar4 = (*(float *)(param_1 + 8) + param_2[1]) - local_1c8;
  fVar3 = (local_1d0 - local_1c4) * (local_1d0 - local_1c4) + fVar3 * fVar3 + fVar4 * fVar4;
  if (param_3 < fVar3 == (NAN(param_3) || NAN(fVar3))) {
    local_150 = *(float *)(param_1 + 0x10) * 0.5;
    local_164 = *(float *)(param_1 + 0x14) * 0.5;
    fVar3 = *(float *)(param_1 + 0x18) * 0.5;
    local_180 = local_150 + *(float *)(param_1 + 4);
    local_17c = local_164 + *(float *)(param_1 + 8);
    local_178 = fVar3 + *(float *)(param_1 + 0xc);
    local_16c = *(float *)(param_1 + 0xc) - fVar3;
    local_164 = *(float *)(param_1 + 8) - local_164;
    local_150 = *(float *)(param_1 + 4) - local_150;
    local_120 = *(undefined4 *)(param_1 + 4);
    local_114 = *(undefined4 *)(param_1 + 4);
    local_108 = *(undefined4 *)(param_1 + 4);
    local_fc = *(undefined4 *)(param_1 + 4);
    local_f0 = *(undefined4 *)(param_1 + 4);
    local_e8 = *(undefined4 *)(param_1 + 0xc);
    local_e4 = *(undefined4 *)(param_1 + 4);
    local_dc = *(undefined4 *)(param_1 + 0xc);
    local_d8 = *(undefined4 *)(param_1 + 4);
    local_d0 = *(float *)(param_1 + 0xc) - fVar3 * 0.5;
    local_cc = *(undefined4 *)(param_1 + 4);
    local_c4 = fVar3 * 0.5 + *(float *)(param_1 + 0xc);
    local_188 = 0;
    local_18c = 0;
    local_190 = 0;
    local_194 = 0;
    local_19c = 0;
    local_1a0 = 0;
    local_1a4 = 0;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1b4 = 0;
    local_1b8 = 0;
    local_1bc = 0;
    local_184 = 0x3f800000;
    local_198 = 0x3f800000;
    local_1ac = 0x3f800000;
    local_1c0 = 0x3f800000;
    local_174 = local_180;
    local_170 = local_17c;
    local_168 = local_180;
    local_160 = local_178;
    local_15c = local_180;
    local_158 = local_164;
    local_154 = local_16c;
    local_14c = local_17c;
    local_148 = local_178;
    local_144 = local_150;
    local_140 = local_17c;
    local_13c = local_16c;
    local_138 = local_150;
    local_134 = local_164;
    local_130 = local_178;
    local_12c = local_150;
    local_128 = local_164;
    local_124 = local_16c;
    local_11c = local_164;
    local_118 = local_16c;
    local_110 = local_17c;
    local_10c = local_16c;
    local_104 = local_164;
    local_100 = local_178;
    local_f8 = local_17c;
    local_f4 = local_178;
    local_ec = local_164;
    local_e0 = local_17c;
    local_d4 = local_164;
    local_c8 = local_17c;
    D3DXMatrixTranslation(&local_1c0,*param_2,param_2[1],param_2[2]);
    D3DXVec3ProjectArray
              (&local_d0,0xc,&local_190,0xc,in_EAX + 0x33,in_EAX + 0x23,in_EAX + 0x13,&local_1d0,
               0x10);
    fVar4 = 424.0;
    pfVar1 = &local_f4;
    iVar2 = 4;
    fVar3 = 472.0;
    fVar6 = 24.0;
    fVar5 = 8.0;
    do {
      if ((0.0 < pfVar1[2]) && (pfVar1[2] <= 1.0)) {
        if (*pfVar1 < fVar4) {
          fVar4 = *pfVar1;
        }
        if (fVar6 < *pfVar1 != (NAN(fVar6) || NAN(*pfVar1))) {
          fVar6 = *pfVar1;
        }
        if (pfVar1[1] < fVar3) {
          fVar3 = pfVar1[1];
        }
        if (fVar5 < pfVar1[1]) {
          fVar5 = pfVar1[1];
        }
      }
      if ((0.0 < pfVar1[5]) && (pfVar1[5] <= 1.0)) {
        if (pfVar1[3] < fVar4) {
          fVar4 = pfVar1[3];
        }
        if (fVar6 < pfVar1[3] != (NAN(fVar6) || NAN(pfVar1[3]))) {
          fVar6 = pfVar1[3];
        }
        if (pfVar1[4] < fVar3) {
          fVar3 = pfVar1[4];
        }
        if (fVar5 < pfVar1[4]) {
          fVar5 = pfVar1[4];
        }
      }
      if ((0.0 < pfVar1[8]) && (pfVar1[8] <= 1.0)) {
        if (pfVar1[6] < fVar4) {
          fVar4 = pfVar1[6];
        }
        if (fVar6 < pfVar1[6] != (NAN(fVar6) || NAN(pfVar1[6]))) {
          fVar6 = pfVar1[6];
        }
        if (pfVar1[7] < fVar3) {
          fVar3 = pfVar1[7];
        }
        if (fVar5 < pfVar1[7]) {
          fVar5 = pfVar1[7];
        }
      }
      if ((0.0 < pfVar1[0xb]) && (pfVar1[0xb] <= 1.0)) {
        if (pfVar1[9] < fVar4) {
          fVar4 = pfVar1[9];
        }
        if (fVar6 < pfVar1[9] != (NAN(fVar6) || NAN(pfVar1[9]))) {
          fVar6 = pfVar1[9];
        }
        if (pfVar1[10] < fVar3) {
          fVar3 = pfVar1[10];
        }
        if (fVar5 < pfVar1[10]) {
          fVar5 = pfVar1[10];
        }
      }
      pfVar1 = pfVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((((32.0 < fVar6 != (fVar6 == 32.0)) && (fVar4 < 416.0 != (fVar4 == 416.0))) &&
        (16.0 < fVar5 != (fVar5 == 16.0))) && (fVar3 < 464.0 != (fVar3 == 464.0))) {
      return 0;
    }
  }
  return 1;
}


