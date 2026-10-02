/* undefined __thiscall FUN_00429bc0(void * this, float * param_1, float * param_2, int param_3, int param_4) @ 00429bc0  1583 bytes */
#include "th12.h"

void __fastcall FUN_00429bc0(void *this,float *param_1,float *param_2,int param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  void *pvVar5;
  float fVar6;
  void *pvVar7;
  int *piVar8;
  undefined4 extraout_ECX;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  undefined auStack_35c [4];
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float *local_33c;
  float fStack_338;
  void *local_334;
  int local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_308;
  float local_304;
  float afStack_2f8 [4];
  float fStack_2e8;
  float fStack_2e4;
  char local_110 [260];
  uint local_c;
  
  local_c = DAT_004ad138 ^ (uint)auStack_35c;
  pfVar12 = (float *)0x0;
  local_33c = param_2;
  local_334 = this;
  if ((param_4 != 0) && (*(int *)((int)this + 0x44c) != 0)) {
    ___security_check_cookie_4(local_c ^ (uint)auStack_35c);
    return;
  }
  local_320 = *(float *)((int)this + 0x50);
  local_31c = *(float *)((int)this + 0x54);
  local_358 = 8.0;
  local_318 = *(float *)((int)this + 0x58);
  local_330 = 0;
  _memset(local_110,0,0x100);
  local_348 = *local_33c * 0.5;
  local_344 = local_33c[1] * 0.5;
  local_314 = *param_1 - local_348;
  local_310 = param_1[1] - local_344;
  local_308 = *param_1 + local_348;
  local_304 = local_344 + param_1[1];
  local_324 = 0.0;
  FUN_0042e880(&local_32c,*(float *)((int)this + 0x68),8.0);
  local_354 = local_32c + *(float *)((int)this + 0x50);
  local_350 = local_328 + *(float *)((int)this + 0x54);
  local_340 = local_324 + *(float *)((int)this + 0x58);
  local_34c = 0.0;
  local_32c = local_32c + local_32c;
  local_328 = local_328 + local_328;
  local_324 = local_324 + local_324;
  local_348 = local_354;
  local_344 = local_350;
  if (16.0 <= *(float *)((int)this + 0x6c)) {
    do {
      if ((((local_314 <= local_354) &&
           (local_308 < local_354 == (NANP(local_308) || NANP(local_354)))) &&
          (local_310 <= local_350)) && (local_304 < local_350 == (NANP(local_304) || NANP(local_350)))
         ) {
        local_330 = local_330 + 1;
        local_110[(int)pfVar12] = '\x01';
        if ((param_3 != 0) && (iVar4 = FUN_0042e820(&local_354,32.0,32.0), iVar4 == 0)) {
          FUN_004273f0(extraout_ECX,extraout_ECX,9,(float *)extraout_ECX,-1.5707964,0.6);
        }
        pvVar7 = *(void **)((int)DAT_004b44f4 + 0x488);
        local_33c = (float *)(*(short *)((int)this + 0x47a) * 2 + 4);
        if ((DAT_004cee78 & 0x8000) != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
          DAT_004cf221 = DAT_004cf221 + '\x01';
        }
        piVar1 = (int *)((int)pvVar7 + 0x130);
        *piVar1 = *piVar1 + 1;
        pvVar5 = FUN_004621c0();
        *(uint *)((int)pvVar5 + 0x480) = *(uint *)((int)pvVar5 + 0x480) | 1;
        *(undefined4 *)((int)pvVar5 + 0x20) = 0x17;
        *(float *)((int)pvVar5 + 0x430) = local_354 + 32.0 + 192.0;
        *(float *)((int)pvVar5 + 0x434) = local_350 + 16.0;
        *(float *)((int)pvVar5 + 0x438) = local_34c;
        FUN_00454d10(pvVar7,pvVar5,(int)local_33c);
        FUN_00461250();
        this = local_334;
        if ((DAT_004cee78 & 0x8000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
          DAT_004cf221 = DAT_004cf221 + -1;
          this = local_334;
        }
      }
      pfVar12 = (float *)((int)pfVar12 + 1);
      local_354 = local_32c + local_354;
      local_350 = local_328 + local_350;
      local_34c = local_324 + local_34c;
      local_358 = local_358 + 16.0;
    } while (local_358 + 8.0 <= *(float *)((int)this + 0x6c));
    local_33c = pfVar12;
    if (local_330 != 0) {
      if ((int)pfVar12 <= local_330) {
        *(undefined *)((int)this + 0x7c) = 1;
        ___security_check_cookie_4(local_c ^ (uint)auStack_35c);
        return;
      }
      fVar10 = 0.0;
      if (0 < (int)pfVar12) {
        do {
          if (local_110[(int)fVar10] == '\0') break;
          fVar10 = (float)((int)fVar10 + 1);
        } while ((int)fVar10 < (int)pfVar12);
        local_358 = fVar10;
        if (fVar10 != 0.0) {
          fVar6 = (float)(int)fVar10;
          local_348 = fVar6 * local_32c;
          local_344 = local_328 * fVar6;
          local_340 = local_324 * fVar6;
          *(float *)((int)local_334 + 0x50) = *(float *)((int)local_334 + 0x50) + local_348;
          *(float *)((int)local_334 + 0x54) = local_344 + *(float *)((int)local_334 + 0x54);
          *(float *)((int)local_334 + 0x58) = *(float *)((int)local_334 + 0x58) + local_340;
          local_358 = *(float *)((int)local_334 + 0x6c) - fVar6 * 16.0;
          *(float *)((int)local_334 + 0x6c) = local_358;
          if (local_358 <= 24.0) {
            *(undefined *)((int)local_334 + 0x7c) = 1;
            goto LAB_00429ff0;
          }
          *(float *)((int)local_334 + 0x464) = local_358;
          *(float *)((int)local_334 + 0x78) = fVar6 * 16.0;
        }
      }
      fVar6 = 0.0;
      for (; (int)fVar10 < (int)pfVar12; fVar10 = (float)((int)fVar10 + 1)) {
        if (local_110[(int)fVar10] != '\0') {
          local_358 = fVar6;
          if ((int)fVar10 < (int)pfVar12) {
            local_358 = (float)(int)fVar6 * 16.0;
            *(float *)((int)local_334 + 0x464) =
                 *(float *)((int)local_334 + 0x464) -
                 (*(float *)((int)local_334 + 0x6c) - local_358);
            *(float *)((int)local_334 + 0x6c) = local_358;
            pvVar7 = local_334;
            fVar9 = DAT_004b44f4;
            fVar6 = local_324;
            fVar2 = local_328;
            if (local_358 < 24.0 != NANP(local_358)) {
              *(undefined *)((int)local_334 + 0x7c) = 1;
              fVar9 = DAT_004b44f4;
            }
            goto LAB_0042a084;
          }
          break;
        }
        fVar6 = (float)((int)fVar6 + 1);
      }
    }
  }
  goto LAB_00429ff0;
LAB_0042a084:
  do {
    if ((int)pfVar12 <= (int)fVar10) break;
    if (local_110[(int)fVar10] != '\0') {
      fVar10 = (float)((int)fVar10 + 1);
      goto LAB_0042a084;
    }
    if ((int)pfVar12 <= (int)fVar10) break;
    local_358 = 0.0;
    fVar11 = fVar10;
    do {
      if (local_110[(int)fVar11] != '\0') break;
      fVar11 = (float)((int)fVar11 + 1);
      local_358 = (float)((int)local_358 + 1);
    } while ((int)fVar11 < (int)pfVar12);
    fVar3 = (float)(int)local_358 * 16.0;
    pfVar12 = (float *)((int)pvVar7 + 0x454);
    pfVar13 = afStack_2f8;
    for (iVar4 = 0x7a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar13 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      pfVar13 = pfVar13 + 1;
    }
    fStack_338 = fVar10;
    fStack_2e8 = fVar3;
    fStack_2e4 = fVar3;
    if (24.0 < fVar3) {
      local_340 = (float)(int)fVar10;
      piVar1 = (int *)((int)fVar9 + 0x468);
      local_348 = local_340 * local_32c;
      local_344 = local_340 * fVar2;
      local_340 = fVar6 * local_340;
      local_354 = local_320 + local_348;
      local_350 = local_31c + local_344;
      local_34c = local_318 + local_340;
      fStack_338 = fVar9;
      afStack_2f8[0] = local_354;
      afStack_2f8[1] = local_350;
      afStack_2f8[2] = local_34c;
      if (*piVar1 < 0x100) {
        *(int *)((int)fVar9 + 0x46c) = *(int *)((int)fVar9 + 0x46c) + 1;
        if (*(int *)((int)fVar9 + 0x46c) < 0x10000) {
          *(int *)((int)fVar9 + 0x46c) = 0x10000;
        }
        pvVar7 = operator_new(0xfa4);
        if (pvVar7 == (void *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (( int * (__stdcall *)())FUN_00428520)();
        }
        piVar8[0x20] = *(int *)((int)fVar9 + 0x46c);
        iVar4 = *(int *)((int)fStack_338 + 0x464);
        piVar8[1] = iVar4;
        *(int **)((int)iVar4 + 8) = piVar8;
        *piVar1 = *piVar1 + 1;
        *(int **)((int)fStack_338 + 0x464) = piVar8;
        (**(code **)(*piVar8 + 4))(afStack_2f8);
        fVar9 = DAT_004b44f4;
      }
    }
    pvVar7 = local_334;
    fVar10 = fVar11;
    pfVar12 = local_33c;
    fVar6 = local_324;
    fVar2 = local_328;
  } while ((int)fVar11 < (int)local_33c);
LAB_00429ff0:
  ___security_check_cookie_4(local_c ^ (uint)auStack_35c);
  return;
}


