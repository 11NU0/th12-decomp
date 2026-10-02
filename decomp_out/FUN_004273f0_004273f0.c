/* void * __fastcall FUN_004273f0(undefined4 param_1, undefined4 param_2, int param_3, float * param_4, float param_5, float param_6) @ 004273f0  1798 bytes */
#include "th12.h"

void * __fastcall
FUN_004273f0(undefined4 param_1,undefined4 param_2,int param_3,float *param_4,float param_5,
            float param_6)

{
  float *pfVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar7;
  void *pvVar8;
  uint uVar9;
  
  iVar5 = DAT_004b44f0;
  if (5 < param_3 - 10U) {
    if (2 < param_3 - 0x10U) {
      if (param_3 == 9) {
        uVar9 = *(uint *)(DAT_004b44f0 + 0x666fd8);
        *(int *)(DAT_004b44f0 + 0x666fdc) = *(int *)(DAT_004b44f0 + 0x666fdc) + 1;
        pvVar8 = (void *)(uVar9 * 0x9d8 + 0x17afd4 + iVar5);
        iVar4 = *(int *)(iVar5 + 0x666fdc);
        if (*(int *)(uVar9 * 0x9d8 + 0x17b984 + iVar5) == 0) {
          if (iVar4 < 0x400) {
            if (iVar4 < 0x200) {
              if (iVar4 < 0x100) {
                uVar9 = uVar9 & 0x80000003;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                }
              }
              else {
                uVar9 = uVar9 & 0x80000007;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
                }
                uVar9 = uVar9 + 4;
              }
            }
            else {
              uVar9 = uVar9 & 0x8000000f;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
              }
              uVar9 = uVar9 + 8;
            }
          }
          else {
            uVar9 = uVar9 & 0x8000001f;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
            }
            uVar9 = uVar9 + 0x10;
          }
          *(uint *)((int)pvVar8 + 0x9c0) = uVar9;
          *(undefined4 *)((int)pvVar8 + 0x9b0) = 5;
          *(undefined4 *)((int)pvVar8 + 0x9b4) = 9;
          *(undefined4 *)((int)pvVar8 + 0x9b8) = 9;
          *(float *)((int)pvVar8 + 0x96c) = *param_4;
          *(float *)((int)pvVar8 + 0x970) = param_4[1];
          *(float *)((int)pvVar8 + 0x974) = param_4[2];
          FUN_00427d00((void *)((int)pvVar8 + 0x978),param_5,param_6);
          *(undefined4 *)((int)pvVar8 + 0x980) = 0;
          FUN_004067e0(0);
          *(undefined4 *)((int)pvVar8 + 0x984) = 0;
          *(undefined4 *)((int)pvVar8 + 0x968) = 0;
        }
        uVar9 = *(int *)(iVar5 + 0x666fd8) + 1U & 0x800007ff;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffff800) + 1;
        }
        *(uint *)(iVar5 + 0x666fd8) = uVar9;
        return pvVar8;
      }
      pvVar8 = (void *)(DAT_004b44f0 + 0x14);
      iVar5 = 0;
      do {
        if (*(int *)((int)pvVar8 + 0x9b0) == 0) {
          *(undefined4 *)((int)pvVar8 + 0x9b0) = 1;
          pfVar1 = (float *)((int)pvVar8 + 0x96c);
          *pfVar1 = *param_4;
          *(float *)((int)pvVar8 + 0x970) = param_4[1];
          *(float *)((int)pvVar8 + 0x974) = param_4[2];
          if (-192.0 < *pfVar1) {
            if (192.0 < *pfVar1 != (*pfVar1 == 192.0)) {
              *pfVar1 = 192.0;
            }
          }
          else {
            *pfVar1 = -192.0;
          }
          FUN_00427d00((void *)((int)pvVar8 + 0x978),param_5,param_6);
          *(undefined4 *)((int)pvVar8 + 0x980) = 0;
          if ((*(uint *)((int)pvVar8 + 0x998) & 1) == 0) {
            *(undefined4 *)((int)pvVar8 + 0x990) = 0;
            *(undefined4 *)((int)pvVar8 + 0x98c) = extraout_EDX_01;
            *(undefined4 *)((int)pvVar8 + 0x988) = 0xfff0bdc1;
            *(undefined4 **)((int)pvVar8 + 0x994) = &DAT_004b2ed0;
            *(uint *)((int)pvVar8 + 0x998) = *(uint *)((int)pvVar8 + 0x998) | 1;
          }
          *(undefined4 *)((int)pvVar8 + 0x990) = 0;
          *(undefined4 *)((int)pvVar8 + 0x98c) = extraout_EDX_01;
          *(undefined4 *)((int)pvVar8 + 0x988) = 0xffffffff;
          *(undefined4 *)((int)pvVar8 + 0x984) = 0;
          *(undefined4 *)((int)pvVar8 + 0x9bc) = 0;
          *(undefined4 *)((int)pvVar8 + 0x968) = extraout_EDX_01;
          if ((((param_3 == 4) || (param_3 == 5)) || (param_3 == 6)) ||
             (uVar7 = extraout_EDX_01, param_3 == 7)) {
            pvVar3 = *(void **)(&DAT_004debdc + DAT_004b43c8);
            if ((DAT_004cee78 & 0x8000) != 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
              DAT_004cf221 = DAT_004cf221 + '\x01';
            }
            piVar2 = (int *)((int)pvVar3 + 0x130);
            *piVar2 = *piVar2 + 1;
            pvVar6 = FUN_004621c0();
            *(uint *)((int)pvVar6 + 0x480) = *(uint *)((int)pvVar6 + 0x480) | 1;
            *(undefined4 *)((int)pvVar6 + 0x20) = 0x17;
            if (pfVar1 == (float *)0x0) {
              *(undefined4 *)((int)pvVar6 + 0x430) = 0;
              *(undefined4 *)((int)pvVar6 + 0x434) = 0;
              *(undefined4 *)((int)pvVar6 + 0x438) = 0;
            }
            else {
              *(float *)((int)pvVar6 + 0x430) = *pfVar1 + 32.0 + 192.0;
              *(float *)((int)pvVar6 + 0x434) = *(float *)((int)pvVar8 + 0x970) + 16.0;
              *(undefined4 *)((int)pvVar6 + 0x438) = *(undefined4 *)((int)pvVar8 + 0x974);
            }
            FUN_00454d10(pvVar3,pvVar6,100);
            FUN_00461250();
            uVar7 = extraout_ECX;
            if ((DAT_004cee78 & 0x8000) != 0) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
              DAT_004cf221 = DAT_004cf221 + -1;
              uVar7 = extraout_ECX_00;
            }
            FUN_00453d90(uVar7,0x32);
            uVar7 = 0;
          }
          *(undefined4 *)((int)pvVar8 + 0x9b8) = uVar7;
          iVar5 = DAT_004b43c8;
          *(int *)((int)pvVar8 + 0x9b4) = param_3;
          pvVar3 = *(void **)(&DAT_004debdc + iVar5);
          FUN_00402520();
          *(undefined *)((int)pvVar8 + 0x49d) = 0x10;
          *(undefined *)((int)pvVar8 + 0x49c) = 0x10;
          FUN_00454d10(pvVar3,pvVar8,param_3 + 0xa5);
          pvVar3 = *(void **)(&DAT_004debdc + DAT_004b43c8);
          FUN_00402520();
          *(undefined *)((int)pvVar8 + 0x951) = 0x10;
          *(undefined *)((int)pvVar8 + 0x950) = 0x10;
          FUN_00454d10(pvVar3,(void *)((int)pvVar8 + 0x4b4),param_3 + 0xb9);
          *(undefined4 *)((int)pvVar8 + 0x3bc) = 0xffffffff;
          return pvVar8;
        }
        iVar5 = iVar5 + 1;
        pvVar8 = (void *)((int)pvVar8 + 0x9d8);
      } while (iVar5 < 600);
      return pvVar8;
    }
    pvVar8 = (void *)(DAT_004b44f0 + 0x171254);
    iVar5 = 0;
    do {
      if (*(int *)((int)pvVar8 + 0x9b0) == 0) {
        *(undefined4 *)((int)pvVar8 + 0x9b0) = 8;
        *(float *)((int)pvVar8 + 0x96c) = *param_4;
        *(float *)((int)pvVar8 + 0x970) = param_4[1];
        *(float *)((int)pvVar8 + 0x974) = param_4[2];
        if (-192.0 < *(float *)((int)pvVar8 + 0x96c)) {
          if (192.0 < *(float *)((int)pvVar8 + 0x96c) != (*(float *)((int)pvVar8 + 0x96c) == 192.0))
          {
            *(undefined4 *)((int)pvVar8 + 0x96c) = 0x43400000;
          }
        }
        else {
          *(undefined4 *)((int)pvVar8 + 0x96c) = 0xc3400000;
        }
        if (*(float *)((int)pvVar8 + 0x970) <= 0.0) {
          *(undefined4 *)((int)pvVar8 + 0x970) = 0;
        }
        FUN_00427d00((void *)((int)pvVar8 + 0x978),param_5,0.0);
        *(undefined4 *)((int)pvVar8 + 0x980) = 0;
        if ((*(uint *)((int)pvVar8 + 0x998) & 1) == 0) {
          *(undefined4 *)((int)pvVar8 + 0x990) = 0;
          *(uint *)((int)pvVar8 + 0x98c) = extraout_EDX_00;
          *(undefined4 *)((int)pvVar8 + 0x988) = 0xfff0bdc1;
          *(undefined4 **)((int)pvVar8 + 0x994) = &DAT_004b2ed0;
          *(uint *)((int)pvVar8 + 0x998) = *(uint *)((int)pvVar8 + 0x998) | 1;
        }
        iVar5 = DAT_004b43c8;
        *(undefined4 *)((int)pvVar8 + 0x990) = 0;
        *(uint *)((int)pvVar8 + 0x98c) = extraout_EDX_00;
        *(undefined4 *)((int)pvVar8 + 0x988) = 0xffffffff;
        *(undefined4 *)((int)pvVar8 + 0x984) = 0;
        *(int *)((int)pvVar8 + 0x9b4) = param_3;
        *(uint *)((int)pvVar8 + 0x9b8) = extraout_EDX_00;
        FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + iVar5),&param_5,param_3 + 0xa5,
                     extraout_EDX_00);
        *(float *)((int)pvVar8 + 0x968) = param_5;
        *(undefined4 *)((int)pvVar8 + 0x3bc) = 0xffffffff;
        return pvVar8;
      }
      iVar5 = iVar5 + 1;
      pvVar8 = (void *)((int)pvVar8 + 0x9d8);
    } while (iVar5 < 0x10);
    return pvVar8;
  }
  *(int *)(DAT_004b44f0 + 0x666fe0) = *(int *)(DAT_004b44f0 + 0x666fe0) + 1;
  FUN_00453e20(param_1,param_2,*param_4);
  pvVar8 = (void *)(iVar5 + 0x171254);
  iVar4 = 0;
  do {
    if (*(int *)((int)pvVar8 + 0x9b0) == 0) {
      *(undefined4 *)((int)pvVar8 + 0x9b0) = 6;
      *(float *)((int)pvVar8 + 0x96c) = *param_4;
      *(float *)((int)pvVar8 + 0x970) = param_4[1];
      *(float *)((int)pvVar8 + 0x974) = param_4[2];
      if (-192.0 < *(float *)((int)pvVar8 + 0x96c)) {
        if (192.0 < *(float *)((int)pvVar8 + 0x96c) != (*(float *)((int)pvVar8 + 0x96c) == 192.0)) {
          *(undefined4 *)((int)pvVar8 + 0x96c) = 0x43400000;
        }
      }
      else {
        *(undefined4 *)((int)pvVar8 + 0x96c) = 0xc3400000;
      }
      uVar9 = *(uint *)(iVar5 + 0x666fe0) & 1;
      if (uVar9 == 0) {
        param_5 = 0.7853982;
      }
      else if (uVar9 == 1) {
        param_5 = 2.3561945;
      }
      FUN_00427d00((void *)((int)pvVar8 + 0x978),param_5,1.5);
      *(undefined4 *)((int)pvVar8 + 0x980) = 0;
      if ((*(uint *)((int)pvVar8 + 0x998) & 1) == 0) {
        *(undefined4 *)((int)pvVar8 + 0x990) = 0;
        *(undefined4 *)((int)pvVar8 + 0x98c) = extraout_EDX;
        *(undefined4 *)((int)pvVar8 + 0x988) = 0xfff0bdc1;
        *(undefined4 **)((int)pvVar8 + 0x994) = &DAT_004b2ed0;
        *(uint *)((int)pvVar8 + 0x998) = *(uint *)((int)pvVar8 + 0x998) | 1;
      }
      *(undefined4 *)((int)pvVar8 + 0x990) = 0;
      *(undefined4 *)((int)pvVar8 + 0x98c) = extraout_EDX;
      *(undefined4 *)((int)pvVar8 + 0x988) = 0xffffffff;
      if ((*(uint *)((int)pvVar8 + 0x9ac) & 1) == 0) {
        *(undefined4 *)((int)pvVar8 + 0x9a4) = 0;
        *(undefined4 *)((int)pvVar8 + 0x9a0) = extraout_EDX;
        *(undefined4 *)((int)pvVar8 + 0x99c) = 0xfff0bdc1;
        *(undefined4 **)((int)pvVar8 + 0x9a8) = &DAT_004b2ed0;
        *(uint *)((int)pvVar8 + 0x9ac) = *(uint *)((int)pvVar8 + 0x9ac) | 1;
      }
      *(undefined4 *)((int)pvVar8 + 0x9a0) = extraout_EDX;
      *(undefined4 *)((int)pvVar8 + 0x9a4) = 0;
      *(undefined4 *)((int)pvVar8 + 0x99c) = 0xffffffff;
      *(undefined4 *)((int)pvVar8 + 0x984) = 0;
      *(undefined4 *)((int)pvVar8 + 0x968) = extraout_EDX;
      *(undefined4 *)((int)pvVar8 + 0x9b8) = extraout_EDX;
      *(undefined4 *)((int)pvVar8 + 0x9c4) = extraout_EDX;
      iVar5 = DAT_004b43c8;
      *(int *)((int)pvVar8 + 0x9b4) = param_3;
      pvVar3 = *(void **)(&DAT_004debdc + iVar5);
      FUN_00402520();
      *(undefined *)((int)pvVar8 + 0x49d) = 0x10;
      *(undefined *)((int)pvVar8 + 0x49c) = 0x10;
      FUN_00454d10(pvVar3,pvVar8,param_3 + 0xa5);
      *(undefined4 *)((int)pvVar8 + 0x3bc) = 0xffffffff;
      return pvVar8;
    }
    iVar4 = iVar4 + 1;
    pvVar8 = (void *)((int)pvVar8 + 0x9d8);
  } while (iVar4 < 0x10);
  return pvVar8;
}


