/* undefined __thiscall FUN_0042a1f0(void * this, float * param_1, float param_2, byte param_3, int param_4) @ 0042a1f0  1531 bytes */

#include "th12.h"

void __thiscall FUN_0042a1f0(void *this,float *param_1,float param_2,byte param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  void *pvVar3;
  float fVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  float extraout_EDX;
  float extraout_EDX_00;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float fVar12;
  float *pfVar13;
  undefined auStack_344 [4];
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float fStack_32c;
  int local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  void *local_30c;
  float local_308;
  float local_304;
  float local_300;
  float afStack_2f8 [4];
  float fStack_2e8;
  float fStack_2e4;
  char local_110 [260];
  uint local_c;
  
  local_c = DAT_004ad138 ^ (uint)auStack_344;
  fVar12 = 0.0;
  local_30c = this;
  if ((param_4 != 0) && (*(int *)((int)this + 0x44c) != 0)) {
    ___security_check_cookie_4(local_c ^ (uint)auStack_344);
    return;
  }
  local_308 = *(float *)((int)this + 0x50);
  local_304 = *(float *)((int)this + 0x54);
  local_340 = 8.0;
  local_300 = *(float *)((int)this + 0x58);
  local_328 = 0;
  _memset(local_110,0,0x100);
  local_310 = 0.0;
  FUN_0042e880(&local_318,*(float *)((int)this + 0x68),8.0);
  local_33c = local_318 + *(float *)((int)this + 0x50);
  fVar9 = local_314 + *(float *)((int)this + 0x54);
  local_31c = local_310 + *(float *)((int)this + 0x58);
  local_334 = 0.0;
  local_318 = local_318 + local_318;
  local_314 = local_314 + local_314;
  local_310 = local_310 + local_310;
  local_338 = fVar9;
  local_324 = local_33c;
  local_320 = fVar9;
  if (16.0 <= *(float *)((int)this + 0x6c)) {
    do {
      local_330 = (*param_1 - local_33c) * (*param_1 - local_33c) +
                  (param_1[1] - local_338) * (param_1[1] - local_338);
      if (param_2 * param_2 < local_330 == (NAN(param_2 * param_2) || NAN(local_330))) {
        local_328 = local_328 + 1;
        local_110[(int)fVar12] = '\x01';
        if (((((param_3 & 1) != 0) && (local_33c + 32.0 < -192.0 == (local_33c + 32.0 == -192.0)))
            && (local_33c - 32.0 < 192.0)) &&
           ((local_338 + 32.0 < 0.0 == (local_338 + 32.0 == 0.0) && (local_338 - 32.0 < 448.0)))) {
          FUN_004273f0(&local_33c,fVar9,9,&local_33c,-1.5707964,0.6);
        }
        pvVar5 = *(void **)((int)DAT_004b44f4 + 0x488);
        local_330 = (float)(*(short *)((int)this + 0x47a) * 2 + 4);
        if ((DAT_004cee78 & 0x8000) != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
          DAT_004cf221 = DAT_004cf221 + '\x01';
        }
        piVar1 = (int *)((int)pvVar5 + 0x130);
        *piVar1 = *piVar1 + 1;
        pvVar3 = FUN_004621c0();
        *(uint *)((int)pvVar3 + 0x480) = *(uint *)((int)pvVar3 + 0x480) | 1;
        *(undefined4 *)((int)pvVar3 + 0x20) = 0x17;
        *(float *)((int)pvVar3 + 0x430) = local_33c + 32.0 + 192.0;
        *(float *)((int)pvVar3 + 0x434) = local_338 + 16.0;
        *(float *)((int)pvVar3 + 0x438) = local_334;
        FUN_00454d10(pvVar5,pvVar3,(int)local_330);
        FUN_00461250();
        fVar9 = extraout_EDX;
        this = local_30c;
        if ((DAT_004cee78 & 0x8000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
          DAT_004cf221 = DAT_004cf221 + -1;
          fVar9 = extraout_EDX_00;
          this = local_30c;
        }
      }
      fVar12 = (float)((int)fVar12 + 1);
      local_33c = local_318 + local_33c;
      local_338 = local_314 + local_338;
      local_334 = local_310 + local_334;
      local_340 = local_340 + 16.0;
    } while (local_340 + 8.0 <= *(float *)((int)this + 0x6c));
    local_330 = fVar12;
    if (local_328 != 0) {
      if ((int)fVar12 <= local_328) {
        *(undefined *)((int)this + 0x7c) = 1;
        ___security_check_cookie_4(local_c ^ (uint)auStack_344);
        return;
      }
      fVar9 = 0.0;
      if (0 < (int)fVar12) {
        do {
          if (local_110[(int)fVar9] == '\0') break;
          fVar9 = (float)((int)fVar9 + 1);
        } while ((int)fVar9 < (int)fVar12);
        local_340 = fVar9;
        if (fVar9 != 0.0) {
          fVar4 = (float)(int)fVar9;
          local_324 = fVar4 * local_318;
          local_320 = local_314 * fVar4;
          local_31c = local_310 * fVar4;
          *(float *)((int)this + 0x50) = *(float *)((int)this + 0x50) + local_324;
          *(float *)((int)this + 0x54) = local_320 + *(float *)((int)this + 0x54);
          *(float *)((int)this + 0x58) = local_31c + *(float *)((int)this + 0x58);
          local_340 = *(float *)((int)this + 0x6c) - fVar4 * 16.0;
          *(float *)((int)this + 0x6c) = local_340;
          if (local_340 <= 24.0) {
            *(undefined *)((int)this + 0x7c) = 1;
            goto LAB_0042a5f3;
          }
          *(float *)((int)this + 0x464) = local_340;
          *(float *)((int)this + 0x78) = fVar4 * 16.0;
        }
      }
      fVar4 = 0.0;
      for (; (int)fVar9 < (int)fVar12; fVar9 = (float)((int)fVar9 + 1)) {
        if (local_110[(int)fVar9] != '\0') {
          local_340 = fVar4;
          if ((int)fVar9 < (int)fVar12) {
            local_340 = (float)(int)fVar4 * 16.0;
            *(float *)((int)this + 0x464) =
                 *(float *)((int)this + 0x464) - (*(float *)((int)this + 0x6c) - local_340);
            *(float *)((int)this + 0x6c) = local_340;
            fVar8 = DAT_004b44f4;
            fVar4 = local_314;
            fVar2 = local_310;
            if (local_340 < 24.0 != NAN(local_340)) {
              *(undefined *)((int)this + 0x7c) = 1;
              fVar8 = DAT_004b44f4;
            }
            goto LAB_0042a685;
          }
          break;
        }
        fVar4 = (float)((int)fVar4 + 1);
      }
    }
  }
  goto LAB_0042a5f3;
LAB_0042a685:
  do {
    if ((int)fVar12 <= (int)fVar9) break;
    if (local_110[(int)fVar9] != '\0') {
      fVar9 = (float)((int)fVar9 + 1);
      goto LAB_0042a685;
    }
    if ((int)fVar12 <= (int)fVar9) break;
    local_340 = 0.0;
    fVar10 = fVar9;
    do {
      if (local_110[(int)fVar10] != '\0') break;
      fVar10 = (float)((int)fVar10 + 1);
      local_340 = (float)((int)local_340 + 1);
    } while ((int)fVar10 < (int)fVar12);
    fVar12 = (float)(int)local_340 * 16.0;
    pfVar11 = (float *)((int)this + 0x454);
    pfVar13 = afStack_2f8;
    for (iVar7 = 0x7a; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar13 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar13 = pfVar13 + 1;
    }
    fStack_32c = fVar9;
    fStack_2e8 = fVar12;
    fStack_2e4 = fVar12;
    if (24.0 < fVar12) {
      local_31c = (float)(int)fVar9;
      piVar1 = (int *)((int)fVar8 + 0x468);
      local_324 = local_31c * local_318;
      local_320 = local_31c * fVar4;
      local_31c = local_31c * fVar2;
      local_33c = local_308 + local_324;
      local_338 = local_304 + local_320;
      local_334 = local_300 + local_31c;
      fStack_32c = fVar8;
      afStack_2f8[0] = local_33c;
      afStack_2f8[1] = local_338;
      afStack_2f8[2] = local_334;
      if (*piVar1 < 0x100) {
        *(int *)((int)fVar8 + 0x46c) = *(int *)((int)fVar8 + 0x46c) + 1;
        if (*(int *)((int)fVar8 + 0x46c) < 0x10000) {
          *(int *)((int)fVar8 + 0x46c) = 0x10000;
        }
        pvVar5 = operator_new(0xfa4);
        if (pvVar5 == (void *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)FUN_00428520();
        }
        piVar6[0x20] = *(int *)((int)fVar8 + 0x46c);
        iVar7 = *(int *)((int)fStack_32c + 0x464);
        piVar6[1] = iVar7;
        *(int **)(iVar7 + 8) = piVar6;
        *piVar1 = *piVar1 + 1;
        *(int **)((int)fStack_32c + 0x464) = piVar6;
        (**(code **)(*piVar6 + 4))(afStack_2f8);
        fVar8 = DAT_004b44f4;
      }
    }
    fVar9 = fVar10;
    this = local_30c;
    fVar12 = local_330;
    fVar4 = local_314;
    fVar2 = local_310;
  } while ((int)fVar10 < (int)local_330);
LAB_0042a5f3:
  ___security_check_cookie_4(local_c ^ (uint)auStack_344);
  return;
}


