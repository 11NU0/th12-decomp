/* undefined __thiscall FUN_0042b750(void * this, float * param_1, float param_2, byte param_3, int param_4) @ 0042b750  1594 bytes */
#include "th12.h"

typedef struct local_328__u { undefined4 _; undefined1 _4_4_; } local_328__u;
void __fastcall FUN_0042b750(void *this,float *param_1,float param_2,byte param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  void *pvVar5;
  int *piVar6;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  float fVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  int local_340;
  void *local_33c;
  float fStack_338;
  float local_334;
  float local_330;
  float local_32c;
  undefined8 local_328;
  float local_320;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float local_304;
  float local_300;
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
  fVar11 = 0.0;
  local_33c = this;
  if ((param_4 != 0) && (*(int *)((int)this + 0x44c) != 0)) {
    ___security_check_cookie_4(local_c ^ (uint)&local_354);
    return;
  }
  local_308 = *(float *)((int)this + 0x50);
  local_304 = *(float *)((int)this + 0x54);
  local_354 = 8.0;
  local_300 = *(float *)((int)this + 0x58);
  local_340 = 0;
  _memset(local_110,0,0x100);
  local_32c = 0.0;
  FUN_0042e880(&local_334,*(float *)((int)this + 0x68),8.0);
  local_34c = local_334 + *(float *)((int)this + 0x50);
  fVar7 = local_330 + *(float *)((int)this + 0x54);
  local_328 = (double)CONCAT44(fVar7,local_34c);
  local_320 = local_32c + *(float *)((int)this + 0x58);
  local_344 = 0.0;
  local_334 = local_334 + local_334;
  local_330 = local_330 + local_330;
  local_32c = local_32c + local_32c;
  fVar2 = param_2 * param_2;
  fVar3 = local_354;
  local_348 = fVar7;
  if (16.0 < *(float *)((int)this + 0x6c)) {
    do {
      local_350 = (*param_1 - local_34c) * (*param_1 - local_34c);
      if ((param_1[1] - local_348) * (param_1[1] - local_348) + local_350 <= fVar2) {
        local_340 = local_340 + 1;
        local_110[(int)fVar11] = '\x01';
        if (((((param_3 & 1) != 0) && (local_34c + 32.0 < -192.0 == (local_34c + 32.0 == -192.0)))
            && (local_34c - 32.0 < 192.0)) &&
           (((local_348 + 32.0 < 0.0 == (local_348 + 32.0 == 0.0) && (local_348 - 32.0 < 448.0)) &&
            (local_350 = (param_1[1] - local_348) * (param_1[1] - local_348) + local_350,
            local_350 < fVar2 != (local_350 == fVar2))))) {
          FUN_004273f0(&local_34c,fVar7,9,&local_34c,-1.5707964,0.6);
          fVar7 = extraout_EDX;
        }
        fVar3 = local_34c + 32.0;
        local_328 = (double)fVar3;
        if (((fVar3 < -192.0 == (fVar3 == -192.0)) && (local_34c - 32.0 < 192.0)) &&
           ((local_348 + 32.0 < 0.0 == (local_348 + 32.0 == 0.0) && (local_348 - 32.0 < 448.0)))) {
          pvVar5 = *(void **)((int)DAT_004b44f4 + 0x488);
          local_350 = (float)(*(short *)((int)this + 0x4a6) * 2 + 4);
          if ((DAT_004cee78 & 0x8000) != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
            DAT_004cf221 = DAT_004cf221 + '\x01';
          }
          piVar1 = (int *)((int)pvVar5 + 0x130);
          *piVar1 = *piVar1 + 1;
          pvVar4 = FUN_004621c0();
          *(uint *)((int)pvVar4 + 0x480) = *(uint *)((int)pvVar4 + 0x480) | 1;
          *(undefined4 *)((int)pvVar4 + 0x20) = 0x17;
          *(float *)((int)pvVar4 + 0x430) = (float)((float10)local_328 + (float10)192.0);
          *(float *)((int)pvVar4 + 0x434) = local_348 + 16.0;
          *(float *)((int)pvVar4 + 0x438) = local_344;
          FUN_00454d10(pvVar5,pvVar4,(int)local_350);
          FUN_00461250();
          fVar7 = extraout_EDX_00;
          this = local_33c;
          if ((DAT_004cee78 & 0x8000) != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
            DAT_004cf221 = DAT_004cf221 + -1;
            fVar7 = extraout_EDX_01;
            this = local_33c;
          }
        }
      }
      local_34c = local_34c + local_334;
      fVar11 = (float)((int)fVar11 + 1);
      local_348 = local_330 + local_348;
      local_344 = local_344 + local_32c;
      fVar3 = local_354 + 16.0;
      local_354 = fVar3;
    } while (fVar3 + 8.0 < *(float *)((int)this + 0x6c));
    local_350 = fVar11;
    if (local_340 != 0) {
      iVar9 = 0;
      if (0 < (int)fVar11) {
        do {
          if (local_110[iVar9] == '\0') break;
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)fVar11);
        if (iVar9 != 0) {
          fVar7 = 0.0;
LAB_0042bb6f:
          *(float *)((int)this + 0x6c) = fVar7;
          for (; fVar3 = local_354, iVar9 < (int)fVar11; iVar9 = iVar9 + 1) {
            while (local_110[iVar9] == '\0') {
              fVar3 = local_354;
              if ((int)fVar11 <= iVar9) goto LAB_0042bb48;
              local_354 = 0.0;
              iVar10 = iVar9;
              do {
                if (local_110[iVar10] != '\0') break;
                iVar10 = iVar10 + 1;
                local_354 = (float)((int)local_354 + 1);
              } while (iVar10 < (int)fVar11);
              fStack_338 = (float)iVar9;
              local_328 = (double)CONCAT44(((local_328__u *)&local_328)->_4_4_,fStack_338);
              fStack_314 = fStack_338 * local_334;
              fStack_310 = local_330 * fStack_338;
              fStack_30c = fStack_338 * local_32c;
              local_34c = fStack_314 + local_308;
              local_348 = local_304 + fStack_310;
              local_344 = local_300 + fStack_30c;
              if ((((local_34c + 32.0 < -192.0 == (local_34c + 32.0 == -192.0)) &&
                   (local_34c - 32.0 < 192.0)) &&
                  (local_348 + 32.0 < 0.0 == (local_348 + 32.0 == 0.0))) &&
                 (local_348 - 32.0 < 448.0)) {
                _memset(&fStack_2f8,0,0x1e8);
                iVar9 = DAT_004b44f4;
                fStack_2e8 = (float)(int)local_354 * 16.0;
                fStack_2f8 = local_34c;
                uStack_2d4 = *(undefined2 *)((int)this + 0x4a4);
                fStack_2f4 = local_348;
                uStack_2d2 = *(undefined2 *)((int)this + 0x4a6);
                fStack_2f0 = local_344;
                uStack_2d8 = 0x41000000;
                uStack_2ec = *(undefined4 *)((int)this + 0x68);
                uStack_2dc = *(undefined4 *)((int)this + 0x70);
                fStack_2e0 = *(float *)((int)this + 0x474) - fStack_338 * 16.0;
                piVar1 = (int *)((int)DAT_004b44f4 + 0x468);
                local_328 = (double)CONCAT44(((local_328__u *)&local_328)->_4_4_,DAT_004b44f4);
                this = local_33c;
                fVar11 = local_350;
                fStack_2e4 = fStack_2e8;
                if (*piVar1 < 0x100) {
                  *(int *)((int)DAT_004b44f4 + 0x46c) = *(int *)((int)DAT_004b44f4 + 0x46c) + 1;
                  piVar8 = (int *)((int)iVar9 + 0x46c);
                  if (*piVar8 < 0x10000) {
                    *piVar8 = 0x10000;
                  }
                  pvVar5 = operator_new(0xfa4);
                  if (pvVar5 == (void *)0x0) {
                    piVar6 = (int *)0x0;
                  }
                  else {
                    piVar6 = (( int * (__stdcall *)())FUN_00428520)();
                  }
                  piVar6[0x20] = *piVar8;
                  iVar9 = *(int *)((int)local_328 + 0x464);
                  piVar6[1] = iVar9;
                  *(int **)((int)iVar9 + 8) = piVar6;
                  *piVar1 = *piVar1 + 1;
                  *(int **)((int)local_328 + 0x464) = piVar6;
                  (**(code **)(*piVar6 + 4))(&fStack_2f8);
                  this = local_33c;
                  fVar11 = local_350;
                }
              }
              iVar9 = iVar10;
              fVar3 = local_354;
              if ((int)fVar11 <= iVar10) goto LAB_0042bb48;
            }
          }
          goto LAB_0042bb48;
        }
      }
      local_354 = 0.0;
      if (0 < (int)fVar11) {
        do {
          if (local_110[iVar9] != '\0') {
            fVar3 = local_354;
            if (iVar9 < (int)fVar11) {
              fVar7 = (float)(int)local_354 * 16.0;
              goto LAB_0042bb6f;
            }
            break;
          }
          iVar9 = iVar9 + 1;
          local_354 = (float)((int)local_354 + 1);
        } while (iVar9 < (int)fVar11);
      }
    }
  }
LAB_0042bb48:
  local_354 = fVar3;
  ___security_check_cookie_4(local_c ^ (uint)&local_354);
  return;
}


