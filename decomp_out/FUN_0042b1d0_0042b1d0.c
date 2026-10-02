/* undefined __thiscall FUN_0042b1d0(void * this, float * param_1, float * param_2, int param_3, int param_4) @ 0042b1d0  1392 bytes */
#include "th12.h"

void __thiscall FUN_0042b1d0(void *this,float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  int iVar8;
  int iVar9;
  float *local_354;
  float *local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  int local_334;
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
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  undefined4 uStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined2 uStack_2d4;
  undefined2 uStack_2d2;
  char local_110 [260];
  uint local_c;
  
  local_c = DAT_004ad138 ^ (uint)&local_354;
  iVar8 = 0;
  local_350 = param_2;
  if ((param_4 != 0) && (*(int *)((int)this + 0x44c) != 0)) {
    ___security_check_cookie_4(local_c ^ (uint)&local_354);
    return;
  }
  local_320 = *(float *)((int)this + 0x50);
  local_31c = *(float *)((int)this + 0x54);
  local_354 = (float *)0x41000000;
  local_318 = *(float *)((int)this + 0x58);
  local_334 = 0;
  local_330 = 0;
  _memset(local_110,0,0x100);
  local_340 = *local_350 * 0.5;
  local_33c = local_350[1] * 0.5;
  local_314 = *param_1 - local_340;
  local_310 = param_1[1] - local_33c;
  local_308 = *param_1 + local_340;
  local_304 = local_33c + param_1[1];
  local_324 = 0.0;
  FUN_0042e880(&local_32c,*(float *)((int)this + 0x68),8.0);
  local_34c = local_32c + *(float *)((int)this + 0x50);
  local_348 = local_328 + *(float *)((int)this + 0x54);
  local_338 = local_324 + *(float *)((int)this + 0x58);
  local_344 = 0.0;
  local_32c = local_32c + local_32c;
  local_328 = local_328 + local_328;
  local_324 = local_324 + local_324;
  local_340 = local_34c;
  local_33c = local_348;
  if (16.0 < *(float *)((int)this + 0x6c)) {
    do {
      if ((((local_314 <= local_34c) &&
           (local_308 < local_34c == (NAN(local_308) || NAN(local_34c)))) &&
          (local_310 <= local_348)) && (local_304 < local_348 == (NAN(local_304) || NAN(local_348)))
         ) {
        local_334 = local_334 + 1;
        local_110[iVar8] = '\x01';
        if ((param_3 != 0) && (iVar3 = FUN_0042e820(&local_34c,32.0,32.0), iVar3 == 0)) {
          FUN_004273f0(extraout_ECX,extraout_ECX,9,(float *)extraout_ECX,-1.5707964,0.6);
        }
        iVar3 = FUN_0042e820(&local_34c,32.0,32.0);
        if (iVar3 == 0) {
          pvVar6 = (void *)DAT_004b44f4[0x122];
          local_350 = (float *)(*(short *)((int)this + 0x4a6) * 2 + 4);
          if ((DAT_004cee78 & 0x8000) != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
            DAT_004cf221 = DAT_004cf221 + '\x01';
          }
          piVar7 = (int *)((int)pvVar6 + 0x130);
          *piVar7 = *piVar7 + 1;
          pvVar4 = FUN_004621c0();
          *(uint *)((int)pvVar4 + 0x480) = *(uint *)((int)pvVar4 + 0x480) | 1;
          *(undefined4 *)((int)pvVar4 + 0x20) = 0x17;
          *(float *)((int)pvVar4 + 0x430) = local_34c + 32.0 + 192.0;
          *(float *)((int)pvVar4 + 0x434) = local_348 + 16.0;
          *(float *)((int)pvVar4 + 0x438) = local_344;
          FUN_00454d10(pvVar6,pvVar4,(int)local_350);
          FUN_00461250();
          iVar8 = local_330;
          if ((DAT_004cee78 & 0x8000) != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
            DAT_004cf221 = DAT_004cf221 + -1;
            iVar8 = local_330;
          }
        }
      }
      iVar8 = iVar8 + 1;
      local_34c = local_32c + local_34c;
      local_348 = local_328 + local_348;
      local_344 = local_344 + local_324;
      local_354 = (float *)((float)local_354 + 16.0);
      local_330 = iVar8;
    } while ((float)local_354 + 8.0 < *(float *)((int)this + 0x6c));
    if (local_334 != 0) {
      iVar3 = 0;
      if (0 < iVar8) {
        do {
          if (local_110[iVar3] == '\0') break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar8);
        if (iVar3 != 0) {
          fVar2 = 0.0;
LAB_0042b583:
          *(float *)((int)this + 0x6c) = fVar2;
          if (iVar3 < iVar8) {
            do {
              while (local_110[iVar3] == '\0') {
                if (iVar8 <= iVar3) goto LAB_0042b55c;
                local_354 = (float *)0x0;
                iVar9 = iVar3;
                do {
                  if (local_110[iVar9] != '\0') break;
                  iVar9 = iVar9 + 1;
                  local_354 = (float *)((int)local_354 + 1);
                } while (iVar9 < iVar8);
                local_350 = (float *)iVar3;
                _memset(&fStack_2f8,0,0x1e8);
                pfVar5 = DAT_004b44f4;
                fStack_2e8 = (float)(int)local_354 * 16.0;
                fVar2 = (float)(int)local_350;
                local_340 = fVar2 * local_32c;
                local_33c = local_328 * fVar2;
                local_338 = fVar2 * local_324;
                local_34c = local_340 + local_320;
                local_348 = local_31c + local_33c;
                uStack_2d4 = *(undefined2 *)((int)this + 0x4a4);
                local_344 = local_318 + local_338;
                uStack_2d2 = *(undefined2 *)((int)this + 0x4a6);
                uStack_2d8 = 0x41000000;
                local_354 = DAT_004b44f4 + 0x11a;
                uStack_2ec = *(undefined4 *)((int)this + 0x68);
                local_350 = DAT_004b44f4;
                uStack_2dc = *(undefined4 *)((int)this + 0x70);
                fStack_2e0 = *(float *)((int)this + 0x474) - fVar2 * 16.0;
                fStack_2f8 = local_34c;
                fStack_2f4 = local_348;
                fStack_2f0 = local_344;
                fStack_2e4 = fStack_2e8;
                if ((int)*local_354 < 0x100) {
                  DAT_004b44f4[0x11b] = (float)((int)DAT_004b44f4[0x11b] + 1);
                  pfVar1 = pfVar5 + 0x11b;
                  if ((int)pfVar5[0x11b] < 0x10000) {
                    *pfVar1 = 9.18355e-41;
                  }
                  pvVar6 = operator_new(0xfa4);
                  if (pvVar6 == (void *)0x0) {
                    piVar7 = (int *)0x0;
                  }
                  else {
                    piVar7 = (int *)FUN_00428520();
                  }
                  piVar7[0x20] = (int)*pfVar1;
                  fVar2 = local_350[0x119];
                  piVar7[1] = (int)fVar2;
                  *(int **)((int)fVar2 + 8) = piVar7;
                  *local_354 = (float)((int)*local_354 + 1);
                  local_350[0x119] = (float)piVar7;
                  (**(code **)(*piVar7 + 4))(&fStack_2f8);
                  iVar8 = local_330;
                }
                iVar3 = iVar9;
                if (iVar8 <= iVar9) goto LAB_0042b55c;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar8);
          }
          goto LAB_0042b55c;
        }
      }
      pfVar5 = (float *)0x0;
      if (0 < iVar8) {
        do {
          if (local_110[iVar3] != '\0') {
            local_354 = pfVar5;
            if (iVar3 < iVar8) {
              fVar2 = (float)(int)pfVar5 * 16.0;
              goto LAB_0042b583;
            }
            break;
          }
          iVar3 = iVar3 + 1;
          pfVar5 = (float *)((int)pfVar5 + 1);
        } while (iVar3 < iVar8);
      }
    }
  }
LAB_0042b55c:
  ___security_check_cookie_4(local_c ^ (uint)&local_354);
  return;
}


