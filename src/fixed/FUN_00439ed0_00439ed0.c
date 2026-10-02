/* int __stdcall FUN_00439ed0(float * param_1, float * param_2) @ 00439ed0  1435 bytes */
#include "th12.h"

int __stdcall FUN_00439ed0(float *param_1,float *param_2)

{
  float *pfVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  float *(float *)this;
  float *extraout_ECX;
  void *this_00;
  float extraout_ECX_00;
  float fVar6;
  float *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar7;
  float *pfVar8;
  void *this_01;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  int local_58;
  int local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  
  iVar9 = DAT_004b4514;
  iVar7 = 0;
  local_58 = 0;
  if (*(int *)((int)DAT_004b4514 + 0xa34) == *(int *)((int)DAT_004b4514 + 0xa30)) {
    return 0;
  }
  this_01 = (void *)((int)DAT_004b4514 + 0xa58);
  pfVar8 = (float *)((int)DAT_004b4514 + 0xa70);
  local_4c = 0x100;
  local_14 = *param_1 - *param_2 * 0.5;
  local_10 = param_1[1] - param_2[1] * 0.5;
  local_20 = *param_1 + *param_2 * 0.5;
  local_1c = param_1[1] + param_2[1] * 0.5;
  this = param_2;
  do {
    if ((pfVar8[0xc] != 0.0) && (pfVar8[0xc] != 2.8026e-45)) {
      cVar2 = *(char *)((int)pfVar8[0x17] + 0x1d);
      this = (float *)CONCAT31((int3)((uint)this >> 8),cVar2);
      local_38 = pfVar8[-1] - pfVar8[0x14] * 0.5;
      local_34 = *pfVar8 - pfVar8[0x15] * 0.5;
      local_2c = pfVar8[-1] + pfVar8[0x14] * 0.5;
      local_28 = pfVar8[0x15] * 0.5 + *pfVar8;
      if (cVar2 == '\x02') {
        local_34 = local_34 - pfVar8[0x15] * 0.5;
        local_28 = local_28 - pfVar8[0x15] * 0.5;
      }
      if ((((local_34 <= local_1c) && (local_20 < local_38 == (NANP(local_20) || NANP(local_38)))) &&
          (local_10 <= local_28)) && (local_14 <= local_2c)) {
        if (cVar2 == '\x02') {
LAB_0043a041:
          if (local_1c < 0.0 == NANP(local_1c)) {
LAB_0043a054:
            pcVar3 = *(code **)((int)pfVar8[0x17] + 0x30);
            if ((pcVar3 == (code *)0x0) ||
               (iVar5 = (*pcVar3)(param_1), this = extraout_ECX, iVar5 == 0)) {
              pfVar8[0x10] = 1.4013e-45;
              if (*(char *)((int)pfVar8[0x17] + 0x1d) == '\x02') {
                if (pfVar8[0x11] == 0.0) {
                  FUN_00461970(this,(int)pfVar8[0xd]);
                  pfVar8[0x11] = 1.4013e-45;
                  iVar7 = local_58;
                }
LAB_0043a0a5:
                iVar5 = FUN_00407700(this_01,4);
                if (iVar5 != 0) goto LAB_0043a0b2;
              }
              else {
                if (*(char *)((int)pfVar8[0x17] + 0x1d) == '\x04') goto LAB_0043a0a5;
LAB_0043a0b2:
                iVar7 = iVar7 + (int)pfVar8[0x12];
                local_58 = iVar7;
              }
              this = (float *)pfVar8[0x17];
              if ((*(char *)((int)this + 0x1d) != '\x02') && (*(char *)((int)this + 0x1d) != '\x04')
                 ) {
                pfVar1 = pfVar8 + 0xd;
                iVar7 = FUN_00461c50(this);
                fStack_3c = *(float *)((int)iVar7 + 0x2c);
                FUN_00461a70(this_00,(int)*pfVar1);
                *pfVar1 = 0.0;
                fVar6 = pfVar8[0x17];
                if (*(char *)((int)fVar6 + 0x1d) == '\x03') {
                  if (*(int *)((int)DAT_004b43c4 + 0x3c) == 0) {
                    FUN_004615a0((void *)0x0,*(void **)((int)iVar9 + 0x10),&fStack_40,
                                 *(short *)((int)fVar6 + 0x20) + 5,0);
                    *pfVar1 = fStack_40;
                    fVar6 = extraout_ECX_00;
                  }
                  else {
                    FUN_004615a0((void *)0x0,*(void **)((int)iVar9 + 0x10),&fStack_44,
                                 *(short *)((int)fVar6 + 0x20) + 6,0);
                    *pfVar1 = fStack_44;
                    fVar6 = pfVar8[0x12];
                    local_58 = local_58 + (int)fVar6 / 3;
                  }
                }
                else {
                  FUN_004615a0((void *)0x0,*(void **)((int)iVar9 + 0x10),&fStack_48,
                               *(short *)((int)fVar6 + 0x20) + 5,0);
                  *pfVar1 = fStack_48;
                  fVar6 = fStack_48;
                }
                iVar7 = FUN_00461c50(fVar6);
                *(uint *)((int)iVar7 + 0x47c) = *(uint *)((int)iVar7 + 0x47c) | 4;
                *(float *)((int)iVar7 + 0x2c) = fStack_3c;
                pfVar8[1] = 0.1;
                pfVar8[0xc] = 2.8026e-45;
                pfVar8[5] = pfVar8[5] * 0.125;
                FUN_00422c10(pfVar8 + -1);
                this = extraout_ECX_01;
                iVar7 = local_58;
              }
            }
          }
        }
        else if (local_1c < 0.0 == NANP(local_1c)) {
          if (cVar2 == '\x02') goto LAB_0043a041;
          goto LAB_0043a054;
        }
      }
    }
    this_01 = (void *)((int)this_01 + 0x78);
    pfVar8 = pfVar8 + 0x1e;
    local_4c = local_4c + -1;
  } while (local_4c != 0);
  local_58 = FUN_00406de0(param_2);
  local_58 = iVar7 + local_58;
  pfVar8 = (float *)((int)iVar9 + 0x8988);
  piVar10 = (int *)((int)iVar9 + 0x89d8);
  iVar9 = 0x80;
  do {
    uVar4 = piVar10[8];
    if (((uVar4 & 1) != 0) && ((*piVar10 == piVar10[-1] || (*piVar10 % piVar10[7] != 0)))) {
      if ((uVar4 & 2) == 0) {
        if (NANP((float)piVar10[-0x12]) == ((float)piVar10[-0x12] == 0.0)) {
          local_38 = *param_1 - (float)piVar10[-0xe];
          local_34 = param_1[1] - (float)piVar10[-0xd];
          fVar11 = (( float10 (__fastcall *)())FUN_004938c0)(uVar4);
          fStack_40 = (float)fVar11;
          fStack_3c = fStack_40;
          fVar11 = (( float10 (__fastcall *)())FUN_004939f0)(extraout_ECX_02);
          fStack_3c = (float)fVar11;
          local_2c = local_38 * fStack_3c - local_34 * fStack_40;
          local_28 = fStack_3c * local_34 + fStack_40 * local_38;
          fVar6 = local_2c + *param_2 * 0.5;
          if ((((fVar6 < -(float)piVar10[-0x10] * 0.5 ==
                 (NANP(fVar6) || NANP(-(float)piVar10[-0x10] * 0.5))) &&
               (fVar6 = local_2c - *param_2 * 0.5,
               (float)piVar10[-0x10] * 0.5 < fVar6 ==
               (NANP((float)piVar10[-0x10] * 0.5) || NANP(fVar6)))) &&
              (fVar6 = local_28 + param_2[1] * 0.5,
              fVar6 < -(float)piVar10[-0xf] * 0.5 ==
              (NANP(fVar6) || NANP(-(float)piVar10[-0xf] * 0.5)))) &&
             (fVar6 = local_28 - param_2[1] * 0.5,
             (float)piVar10[-0xf] * 0.5 < fVar6 == (NANP((float)piVar10[-0xf] * 0.5) || NANP(fVar6))))
          goto LAB_0043a3d1;
        }
        else {
          fVar6 = (float)piVar10[-0xe] - (float)piVar10[-0x10] * 0.5;
          if (((local_20 < fVar6 == (NANP(local_20) || NANP(fVar6))) &&
              (local_14 <= (float)piVar10[-0x10] * 0.5 + (float)piVar10[-0xe])) &&
             ((fVar6 = (float)piVar10[-0xd] - (float)piVar10[-0xf] * 0.5,
              local_1c < fVar6 == (NANP(local_1c) || NANP(fVar6)) &&
              (local_10 <= (float)piVar10[-0xf] * 0.5 + (float)piVar10[-0xd])))) {
LAB_0043a3d1:
            local_58 = local_58 + piVar10[4];
            piVar10[5] = piVar10[5] + piVar10[4];
            if (piVar10[6] <= piVar10[5]) {
              piVar10[4] = 0;
            }
          }
        }
      }
      else {
        fStack_3c = ((float)piVar10[-0xe] - *param_1) * ((float)piVar10[-0xe] - *param_1) +
                    ((float)piVar10[-0xd] - param_1[1]) * ((float)piVar10[-0xd] - param_1[1]);
        if (fStack_3c <= *pfVar8 * *pfVar8) goto LAB_0043a3d1;
      }
    }
    pfVar8 = pfVar8 + 0x1d;
    piVar10 = piVar10 + 0x1d;
    iVar9 = iVar9 + -1;
    if (iVar9 == 0) {
      if (local_58 < 0x50) {
        if (local_58 == 0) {
          return 0;
        }
      }
      else {
        local_58 = 0x50;
      }
      DAT_004b0c44 = DAT_004b0c44 + (local_58 / 10 + 10) / 10;
      if (999999999 < DAT_004b0c44) {
        DAT_004b0c44 = 999999999;
      }
      return local_58;
    }
  } while( true );
}


