/* undefined __fastcall FUN_004154d0(void * param_1, int * param_2) @ 004154d0  16758 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

typedef struct local_308__u { undefined4 _; undefined1 _4_4_; } local_308__u;
typedef struct local_2d0__u { undefined4 _; undefined1 _4_4_; } local_2d0__u;
void __fastcall FUN_004154d0(void *param_1,int *param_2)

{
  local_308__u *local_308__u_alias;
  local_2d0__u *local_2d0__u_alias;
  short sVar1;
  float fVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  float *pfVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  void *pvVar14;
  undefined4 extraout_ECX;
  void *this;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  void *this_00;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  undefined4 extraout_ECX_29;
  float fVar15;
  undefined4 extraout_ECX_30;
  void *extraout_ECX_31;
  uint extraout_ECX_32;
  int extraout_ECX_33;
  undefined4 extraout_ECX_34;
  float *pfVar16;
  int iVar17;
  undefined4 extraout_ECX_35;
  undefined4 extraout_ECX_36;
  undefined4 extraout_ECX_37;
  undefined4 extraout_ECX_38;
  undefined4 extraout_ECX_39;
  undefined4 extraout_ECX_40;
  undefined extraout_DL;
  int *extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  float *pfVar18;
  byte *pbVar19;
  int *unaff_FS_OFFSET;
  bool bVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float *local_31c;
  float *local_318;
  float *local_314;
  float *local_310;
  float local_30c;
  undefined8 local_308;
  float local_300;
  void *local_2f8;
  float *local_2f4;
  float *local_2f0;
  float *local_2ec;
  float *local_2e8;
  char local_2e1;
  float local_2e0;
  float *local_2dc;
  float local_2d8;
  float local_2d4;
  undefined8 local_2d0;
  int local_2c8;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280 [6];
  float local_268;
  float local_264;
  undefined4 local_260;
  float local_25c;
  undefined2 local_258;
  undefined2 local_256;
  uint local_254;
  float local_250 [96];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84;
  byte local_80 [100];
  uint local_1c;
  int local_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_004976ce;
  local_14 = *unaff_FS_OFFSET;
  local_1c = DAT_004ad138 ^ (uint)&local_31c;
  uVar5 = DAT_004ad138 ^ (uint)&stack0xfffffcd8;
  *unaff_FS_OFFSET = (int)&local_14;
  iVar10 = *(int *)((int)param_1 + 0x174c);
  pfVar11 = *(float **)(*(int *)(iVar10 + 4) + 4);
  sVar1 = *(short *)(pfVar11 + 1);
  local_314 = pfVar11;
  local_2f8 = param_1;
  if (0x163 < (int)sVar1 - 0x100U) goto switchD_00417c29_caseD_5;
  pvVar14 = (void *)(uint)*(byte *)((int)&PTR_caseD_1ba_00419790 + (int)sVar1);
  switch(sVar1) {
  case 0x100:
  case 0x118:
    goto switchD_00415546_caseD_100;
  case 0x101:
    goto switchD_00415546_caseD_101;
  case 0x102:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    *(int *)((int)param_1 + 0x220) = (int)uVar26;
    break;
  case 0x103:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    pfVar11 = (float *)uVar26;
    local_318 = pfVar11;
    uVar26 = FUN_00468e20(extraout_ECX,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),1);
    puVar13 = (undefined4 *)((int)param_1 + (int)pfVar11 * 4 + 0xe0);
    FUN_00461a70(this,*(int *)((int)param_1 + (int)pfVar11 * 4 + 0xe0));
    *puVar13 = 0;
    if ((int)uVar26 < 0) break;
    uVar26 = FUN_00468e20(extraout_ECX_00,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),1);
    puVar7 = FUN_0041c6a0(&local_2ac,(int)uVar26);
    *puVar13 = *puVar7;
    uVar12 = extraout_ECX_01;
    if (local_318 == (float *)0x0) {
      uVar26 = FUN_00468e20(extraout_ECX_01,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),1);
      *(int *)((int)param_1 + 0x228) = (int)uVar26;
      *(undefined4 *)((int)param_1 + 0x224) = *(undefined4 *)((int)param_1 + 0x220);
      uVar12 = extraout_ECX_02;
    }
    iVar10 = FUN_00461c50(uVar12);
    bVar20 = local_318 == (float *)0x0;
    goto LAB_00415bbe;
  case 0x104:
    goto switchD_00415546_caseD_104;
  case 0x105:
    goto switchD_00415546_caseD_105;
  case 0x106:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    pfVar11 = (float *)uVar26;
    local_318 = pfVar11;
    uVar26 = FUN_00468e20(extraout_ECX_15,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),1);
    puVar13 = (undefined4 *)((int)param_1 + (int)pfVar11 * 4 + 0xe0);
    local_31c = (float *)uVar26;
    FUN_00461a70(this_00,*(int *)((int)param_1 + (int)pfVar11 * 4 + 0xe0));
    *puVar13 = 0;
    puVar7 = FUN_0041c6a0(&local_2b8,(int)(float *)uVar26);
    *puVar13 = *puVar7;
    iVar10 = FUN_00461c50(extraout_ECX_16);
    if (local_318 == (float *)0x0) {
      *(float *)((int)param_1 + 0x15ec) = *(float *)(iVar10 + 0x5c) * *(float *)(iVar10 + 0x44);
      *(float *)((int)param_1 + 0x15f0) = *(float *)(iVar10 + 0x58) * *(float *)(iVar10 + 0x40);
    }
    if ((*(byte *)((int)param_1 + 0x16b8) & 0x20) != 0) {
      FUN_00461d80();
    }
    if (local_318 == (float *)0x0) {
      *(uint *)((int)param_1 + 0x16b8) = *(uint *)((int)param_1 + 0x16b8) | 0x80000;
      *(float **)((int)param_1 + 0x22c) = local_31c;
      *(undefined4 *)((int)param_1 + 0x230) = 0;
      *(float **)((int)param_1 + 0x228) = local_31c;
      *(undefined4 *)((int)param_1 + 0x224) = *(undefined4 *)((int)param_1 + 0x220);
    }
    break;
  case 0x107:
    if ((*(uint *)((int)param_1 + 0x16b8) & 0x2000000) == 0) {
      uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),1);
      local_31c = (float *)uVar26;
      uVar26 = FUN_00468e20(extraout_ECX_06,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
      pvVar14 = *(void **)(DAT_004b43dc + 0x40 + (int)uVar26 * 4);
      if ((DAT_004cee78 & 0x8000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + '\x01';
      }
      piVar9 = (int *)((int)pvVar14 + 0x130);
      *piVar9 = *piVar9 + 1;
      pvVar6 = FUN_004621c0();
      *(uint *)((int)pvVar6 + 0x480) = *(uint *)((int)pvVar6 + 0x480) | 1;
      *(undefined4 *)((int)pvVar6 + 0x20) = 9;
      if ((float *)((int)param_1 + 0x34) == (float *)0x0) {
        local_308 = 0.0;
        local_300 = 0.0;
        *(undefined4 *)((int)pvVar6 + 0x430) = 0;
        *(undefined4 *)((int)pvVar6 + 0x434) = 0;
        *(undefined4 *)((int)pvVar6 + 0x438) = 0;
      }
      else {
        *(float *)((int)pvVar6 + 0x430) = *(float *)((int)param_1 + 0x34) + 32.0 + 192.0;
        *(float *)((int)pvVar6 + 0x434) = *(float *)((int)param_1 + 0x38) + 16.0;
        *(undefined4 *)((int)pvVar6 + 0x438) = *(undefined4 *)((int)param_1 + 0x3c);
      }
      FUN_00454d10(pvVar14,pvVar6,(int)local_31c);
      FUN_004612d0();
      if ((DAT_004cee78 & 0x8000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + -1;
      }
      break;
    }
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),1);
    local_31c = (float *)uVar26;
    uVar26 = FUN_00468e20(extraout_ECX_07,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
    pvVar14 = *(void **)(DAT_004b43dc + 0x40 + (int)uVar26 * 4);
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
      DAT_004cf221 = DAT_004cf221 + '\x01';
    }
    piVar9 = (int *)((int)pvVar14 + 0x130);
    *piVar9 = *piVar9 + 1;
    pvVar6 = FUN_004621c0();
    *(uint *)((int)pvVar6 + 0x480) = *(uint *)((int)pvVar6 + 0x480) | 1;
    *(undefined4 *)((int)pvVar6 + 0x20) = 9;
    if ((undefined4 *)((int)param_1 + 0x34) == (undefined4 *)0x0) {
      local_308 = 0.0;
      local_300 = 0.0;
      uVar12 = 0;
      *(undefined4 *)((int)pvVar6 + 0x430) = 0;
      *(undefined4 *)((int)pvVar6 + 0x434) = 0;
    }
    else {
      *(undefined4 *)((int)pvVar6 + 0x430) = *(undefined4 *)((int)param_1 + 0x34);
      *(undefined4 *)((int)pvVar6 + 0x434) = *(undefined4 *)((int)param_1 + 0x38);
      uVar12 = *(undefined4 *)((int)param_1 + 0x3c);
    }
    *(undefined4 *)((int)pvVar6 + 0x438) = uVar12;
    FUN_00454d10(pvVar14,pvVar6,(int)local_31c);
    FUN_004612d0();
    goto LAB_00415ede;
  case 0x108:
    FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    uVar26 = FUN_00468e20(extraout_ECX_10,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),1);
    FUN_0041c6a0(&local_310,(int)uVar26);
    break;
  case 0x109:
    if (*(int *)(DAT_004b43dc + 0x1c) != 0) break;
    goto switchD_00415546_caseD_100;
  case 0x10a:
    if (*(int *)(DAT_004b43dc + 0x1c) != 0) break;
    goto switchD_00415546_caseD_101;
  case 0x10b:
    if (*(int *)(DAT_004b43dc + 0x1c) != 0) break;
    goto switchD_00415546_caseD_104;
  case 0x10c:
    if (*(int *)(DAT_004b43dc + 0x1c) != 0) break;
    goto switchD_00415546_caseD_105;
  case 0x10d:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    local_31c = (float *)uVar26;
    pvVar14 = *(void **)((int)param_1 + (int)local_31c * 4 + 0xe0);
    puVar13 = (undefined4 *)((int)param_1 + (int)local_31c * 4 + 0xe0);
    FUN_00461a70(pvVar14,(int)pvVar14);
    *puVar13 = 0;
    puVar7 = FUN_0041c6a0(&local_2bc,*(int *)((int)param_1 + 0x22c) + 5);
    *puVar13 = *puVar7;
    iVar10 = FUN_00461c50(extraout_ECX_17);
    bVar20 = local_31c == (float *)0x0;
    goto LAB_00415bbe;
  case 0x10e:
    goto switchD_00415546_caseD_10e;
  case 0x10f:
    if (*(int *)(DAT_004b43dc + 0x1c) != 0) break;
    goto switchD_00415546_caseD_10e;
  case 0x110:
    if ((*(uint *)((int)param_1 + 0x16b8) & 0x2000000) != 0) {
      uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),1);
      uVar24 = FUN_00468e20(extraout_ECX_09,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
      FUN_004615a0((void *)((int)param_1 + 0x34),*(void **)(DAT_004b43dc + 0x40 + (int)uVar24 * 4),
                   &local_310,(int)uVar26,0);
      break;
    }
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),1);
    local_31c = (float *)uVar26;
    uVar26 = FUN_00468e20(extraout_ECX_08,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
    pvVar14 = *(void **)(DAT_004b43dc + 0x40 + (int)uVar26 * 4);
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
      DAT_004cf221 = DAT_004cf221 + '\x01';
    }
    piVar9 = (int *)((int)pvVar14 + 0x130);
    *piVar9 = *piVar9 + 1;
    pvVar6 = FUN_004621c0();
    *(uint *)((int)pvVar6 + 0x480) = *(uint *)((int)pvVar6 + 0x480) | 1;
    *(undefined4 *)((int)pvVar6 + 0x20) = 9;
    if ((float *)((int)param_1 + 0x34) == (float *)0x0) {
      local_308 = 0.0;
      local_300 = 0.0;
      *(undefined4 *)((int)pvVar6 + 0x430) = 0;
      *(undefined4 *)((int)pvVar6 + 0x434) = 0;
      *(undefined4 *)((int)pvVar6 + 0x438) = 0;
    }
    else {
      *(float *)((int)pvVar6 + 0x430) = *(float *)((int)param_1 + 0x34) + 32.0 + 192.0;
      *(float *)((int)pvVar6 + 0x434) = *(float *)((int)param_1 + 0x38) + 16.0;
      *(undefined4 *)((int)pvVar6 + 0x438) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    FUN_00454d10(pvVar14,pvVar6,(int)local_31c);
    FUN_00461250();
LAB_00415ede:
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
      DAT_004cf221 = DAT_004cf221 + -1;
    }
    break;
  case 0x111:
    if ((*(uint *)((int)param_1 + 0x16b8) & 0x2000000) == 0) {
      uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),1);
      local_31c = (float *)uVar26;
      uVar26 = FUN_00468e20(extraout_ECX_11,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
      pvVar14 = *(void **)(DAT_004b43dc + 0x40 + (int)uVar26 * 4);
      if ((DAT_004cee78 & 0x8000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + '\x01';
      }
      *(int *)((int)pvVar14 + 0x130) = *(int *)((int)pvVar14 + 0x130) + 1;
      pvVar6 = FUN_004621c0();
      *(uint *)((int)pvVar6 + 0x480) = *(uint *)((int)pvVar6 + 0x480) | 1;
      *(undefined4 *)((int)pvVar6 + 0x20) = 9;
      if ((float *)((int)param_1 + 0x34) == (float *)0x0) {
LAB_00416175:
        local_308 = 0.0;
        local_300 = 0.0;
        uVar12 = 0;
        *(undefined4 *)((int)pvVar6 + 0x430) = 0;
        *(undefined4 *)((int)pvVar6 + 0x434) = 0;
        goto LAB_004161b1;
      }
      *(float *)((int)pvVar6 + 0x430) = *(float *)((int)param_1 + 0x34) + 32.0 + 192.0;
      *(float *)((int)pvVar6 + 0x434) = *(float *)((int)param_1 + 0x38) + 16.0;
      *(undefined4 *)((int)pvVar6 + 0x438) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    else {
      uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),1);
      local_31c = (float *)uVar26;
      uVar26 = FUN_00468e20(extraout_ECX_12,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
      pvVar14 = *(void **)(DAT_004b43dc + 0x40 + (int)uVar26 * 4);
      if ((DAT_004cee78 & 0x8000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + '\x01';
      }
      *(int *)((int)pvVar14 + 0x130) = *(int *)((int)pvVar14 + 0x130) + 1;
      pvVar6 = FUN_004621c0();
      *(uint *)((int)pvVar6 + 0x480) = *(uint *)((int)pvVar6 + 0x480) | 1;
      *(undefined4 *)((int)pvVar6 + 0x20) = 9;
      if ((undefined4 *)((int)param_1 + 0x34) == (undefined4 *)0x0) goto LAB_00416175;
      *(undefined4 *)((int)pvVar6 + 0x430) = *(undefined4 *)((int)param_1 + 0x34);
      *(undefined4 *)((int)pvVar6 + 0x434) = *(undefined4 *)((int)param_1 + 0x38);
      uVar12 = *(undefined4 *)((int)param_1 + 0x3c);
LAB_004161b1:
      *(undefined4 *)((int)pvVar6 + 0x438) = uVar12;
    }
    FUN_00454d10(pvVar14,pvVar6,(int)local_31c);
    piVar9 = (int *)FUN_004612d0();
    local_318 = (float *)*piVar9;
    uVar12 = extraout_ECX_13;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
      DAT_004cf221 = DAT_004cf221 + -1;
      uVar12 = extraout_ECX_14;
    }
    iVar10 = FUN_00461c50(uVar12);
    if ((*(uint *)((int)local_2f8 + 0x16b8) & 0x2000000) == 0) {
      puVar13 = (undefined4 *)FUN_00422c40();
      *(undefined4 *)(iVar10 + 0x430) = *puVar13;
      *(undefined4 *)(iVar10 + 0x434) = puVar13[1];
      *(undefined4 *)(iVar10 + 0x438) = puVar13[2];
    }
    else {
      *(undefined4 *)(iVar10 + 0x430) = *(undefined4 *)((int)param_1 + 0x34);
      *(undefined4 *)(iVar10 + 0x434) = *(undefined4 *)((int)param_1 + 0x38);
      *(undefined4 *)(iVar10 + 0x438) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    fVar23 = FUN_00468ec0(2.8026e-45);
    *(float *)(iVar10 + 0x2c) = (float)fVar23;
    *(uint *)(iVar10 + 0x47c) = *(uint *)(iVar10 + 0x47c) | 4;
    break;
  case 0x112:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    local_31c = (float *)uVar26;
    pvVar14 = *(void **)((int)param_1 + (int)local_31c * 4 + 0xe0);
    puVar13 = (undefined4 *)((int)param_1 + (int)local_31c * 4 + 0xe0);
    FUN_00461a70(pvVar14,(int)pvVar14);
    *puVar13 = 0;
    uVar26 = FUN_00468e20(extraout_ECX_18,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),1);
    puVar7 = FUN_0041c6a0(&local_2b0,*(int *)((int)param_1 + 0x22c) + 5 + (int)uVar26);
    *puVar13 = *puVar7;
    iVar10 = FUN_00461c50(extraout_ECX_19);
    bVar20 = local_31c == (float *)0x0;
LAB_00415bbe:
    if (bVar20) {
      *(float *)((int)param_1 + 0x15ec) = *(float *)(iVar10 + 0x5c) * *(float *)(iVar10 + 0x44);
      *(float *)((int)param_1 + 0x15f0) = *(float *)(iVar10 + 0x58) * *(float *)(iVar10 + 0x40);
    }
    if ((*(byte *)((int)param_1 + 0x16b8) & 0x20) != 0) {
      FUN_00461d80();
    }
    break;
  case 0x113:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    FUN_00468e20(extraout_ECX_20,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),1);
    pvVar14 = *(void **)((int)param_1 + (int)uVar26 * 4 + 0xe0);
    FUN_00461970(pvVar14,(int)pvVar14);
    break;
  case 0x114:
    FUN_00461a70(pvVar14,*(int *)((int)param_1 + 0xe0));
    *(undefined4 *)((int)param_1 + 0xe0) = 0;
    puVar13 = FUN_0041c6a0(&local_2b4,*(int *)((int)param_1 + 0x22c));
    uVar12 = *puVar13;
    *(uint *)((int)param_1 + 0x16b8) = *(uint *)((int)param_1 + 0x16b8) & 0xfff7ffff;
    *(undefined4 *)((int)param_1 + 0xe0) = uVar12;
    *(undefined4 *)((int)param_1 + 0x230) = 0;
    *(undefined4 *)((int)param_1 + 0x228) = *(undefined4 *)((int)param_1 + 0x22c);
    *(undefined4 *)((int)param_1 + 0x224) = *(undefined4 *)((int)param_1 + 0x220);
    break;
  case 0x115:
    FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    iVar10 = FUN_00461c50(extraout_ECX_03);
    if (iVar10 != 0) {
      fVar23 = FUN_00468ec0(1.4013e-45);
      *(float *)(iVar10 + 0x2c) = (float)fVar23;
      *(uint *)(iVar10 + 0x47c) = *(uint *)(iVar10 + 0x47c) | 4;
    }
    break;
  case 0x116:
    FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    iVar10 = FUN_00461c50(extraout_ECX_04);
    if (iVar10 != 0) {
      fVar23 = FUN_00468ec0(1.4013e-45);
      *(float *)(iVar10 + 0x40) = (float)fVar23;
      *(uint *)(iVar10 + 0x47c) = *(uint *)(iVar10 + 0x47c) | 8;
      fVar23 = FUN_00468ec0(1.4013e-45);
      *(float *)(iVar10 + 0x44) = (float)fVar23;
      *(uint *)(iVar10 + 0x47c) = *(uint *)(iVar10 + 0x47c) | 8;
    }
    break;
  case 0x117:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    iVar10 = (int)uVar26;
    fVar23 = FUN_00468ec0(1.4013e-45);
    *(float *)((int)param_1 + (iVar10 * 3 + 0x48) * 4) = (float)fVar23;
    fVar23 = FUN_00468ec0(2.8026e-45);
    *(float *)((int)param_1 + iVar10 * 0xc + 0x124) = (float)fVar23;
    *(undefined4 *)((int)param_1 + iVar10 * 0xc + 0x128) = 0;
    break;
  case 0x119:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),1);
    uVar24 = FUN_00468e20(extraout_ECX_05,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
    *(int *)((int)param_1 + (int)uVar24 * 4 + 0x1e0) = (int)uVar26;
    break;
  case 300:
  case 0x12e:
    puVar13 = (undefined4 *)((int)param_1 + 0x68);
    if (sVar1 != 300) {
      puVar13 = (undefined4 *)((int)param_1 + 0x9c);
    }
    fVar23 = FUN_00468ec0(0.0);
    local_31c = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(1.4013e-45);
    local_318 = (float *)(float)fVar23;
    if (-999999.0 < (float)local_31c != NAN((float)local_31c)) {
      *puVar13 = local_31c;
    }
    if (-999999.0 < (float)local_318) {
      puVar13[1] = local_318;
    }
    puVar13[0xc] = puVar13[0xc] & 0xfffffffc;
    fVar15 = *(float *)((int)param_1 + 0x9c) + *(float *)((int)param_1 + 0x68);
    fVar2 = *(float *)((int)param_1 + 0xa0) + *(float *)((int)param_1 + 0x6c);
    local_308 = (double)CONCAT44(fVar2,fVar15);
    local_300 = *(float *)((int)param_1 + 0xa4) + *(float *)((int)param_1 + 0x70);
    *(float *)((int)param_1 + 0x34) = fVar15;
    *(float *)((int)param_1 + 0x38) = fVar2;
    *(float *)((int)param_1 + 0x3c) = local_300;
    FUN_00413700();
    break;
  case 0x12d:
  case 0x12f:
    if (sVar1 == 0x12d) {
      local_318 = (float *)((int)param_1 + 0x68);
    }
    else {
      local_318 = (float *)((int)param_1 + 0x9c);
    }
    pfVar11 = (float *)((int)param_1 + 0x28c);
    if (sVar1 != 0x12d) {
      pfVar11 = (float *)((int)param_1 + 0x2d8);
    }
    fVar23 = FUN_00468ec0(2.8026e-45);
    local_2f0 = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(4.2039e-45);
    local_31c = (float *)(float)fVar23;
    uVar26 = FUN_00468e20(extraout_ECX_21,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
    if ((int)uVar26 < 1) {
      pfVar11[0x11] = 0.0;
    }
    else {
      uVar26 = FUN_00468e20(extraout_ECX_22,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
      pfVar11[0x11] = (float)uVar26;
      pfVar11[6] = DAT_004ce8d0;
      pfVar11[7] = DAT_004ce8d4;
      pfVar11[8] = DAT_004ce8d8;
      pfVar11[9] = DAT_004ce8d0;
      pfVar11[10] = DAT_004ce8d4;
      fVar15 = DAT_004ce8d8;
      pfVar11[0xb] = DAT_004ce8d8;
      uVar26 = FUN_00468e20(fVar15,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),1);
      pfVar18 = local_318;
      pfVar11[0x12] = (float)uVar26;
      *pfVar11 = *local_318;
      pfVar11[1] = local_318[1];
      pfVar11[2] = local_318[2];
      local_2f4 = local_31c;
      if (-999999.0 < (float)local_31c == NAN((float)local_31c)) {
        local_2f4 = (float *)local_318[1];
      }
      pfVar16 = local_2f0;
      if ((float)local_2f0 <= -999999.0) {
        pfVar16 = (float *)*local_318;
      }
      pfVar11[3] = (float)pfVar16;
      local_308 = (double)CONCAT44(local_2f4,pfVar16);
      pfVar11[4] = (float)local_2f4;
      local_300 = 0.0;
      pfVar11[5] = 0.0;
      local_318 = pfVar16;
      FUN_00406340();
      pfVar18[0xc] = (float)((uint)pfVar18[0xc] & 0xfffffffc);
    }
    break;
  case 0x130:
  case 0x132:
  case 0x148:
  case 0x14a:
    if ((sVar1 == 0x130) || (sVar1 == 0x148)) {
      local_314 = (float *)((int)param_1 + 0x68);
    }
    else {
      local_314 = (float *)((int)param_1 + 0x9c);
    }
    fVar23 = FUN_00468ec0(0.0);
    local_2f8 = (void *)(float)fVar23;
    fVar23 = FUN_00468ec0(1.4013e-45);
    local_318 = (float *)(float)fVar23;
    pfVar18 = local_314;
    if (-999999.0 < (float)local_2f8) {
      if (((*(uint *)((int)param_1 + 0x16b8) & 0x40000) != 0) &&
         ((*(short *)(pfVar11 + 1) == 0x130 || (*(short *)(pfVar11 + 1) == 0x132)))) {
        local_31c = (float *)((float)local_2f8 - 1.5707964);
        fVar23 = FUN_004646e0((float)local_31c);
        local_31c = (float *)(float)((float10)1.5707963705062866 - fVar23);
        fVar23 = FUN_004646e0((float)local_31c);
        local_2f8 = (void *)(float)fVar23;
      }
      pfVar18 = local_314;
      FUN_00408910((int)local_314,(float)local_2f8);
    }
    if ((float)local_318 <= -999999.0) {
      pfVar18[0xc] = (float)((uint)pfVar18[0xc] & 0xfffffffc);
    }
    else {
      pfVar18[0xc] = (float)((uint)pfVar18[0xc] & 0xfffffffc);
      pfVar18[6] = (float)local_318;
    }
    break;
  case 0x131:
  case 0x133:
  case 0x149:
  case 0x14b:
    if ((sVar1 == 0x131) || (sVar1 == 0x149)) {
      local_2f8 = (void *)((int)param_1 + 0x68);
    }
    else {
      local_2f8 = (void *)((int)param_1 + 0x9c);
    }
    if ((sVar1 == 0x131) || (piVar9 = (int *)((int)param_1 + 0x360), sVar1 == 0x149)) {
      piVar9 = (int *)((int)param_1 + 0x324);
    }
    fVar23 = FUN_00468ec0(2.8026e-45);
    local_318 = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(4.2039e-45);
    local_2f4 = (float *)(float)fVar23;
    uVar26 = FUN_00468e20(extraout_ECX_24,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
    if ((int)uVar26 < 1) {
      piVar9[0xd] = 0;
    }
    else {
      uVar26 = FUN_00468e20(extraout_ECX_25,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),1);
      fVar23 = (float10)(float)local_318;
      piVar9[0xe] = (int)uVar26;
      uVar12 = extraout_ECX_26;
      if ((int)uVar26 == 7) {
        fVar21 = (float10)-999999.0;
        fVar22 = (float10)0;
        if (fVar21 < fVar23 == (NAN(fVar21) || NAN(fVar23))) {
          local_310 = (float *)(float)fVar22;
        }
        else {
          local_310 = local_318;
        }
        if (fVar21 < (float10)(float)local_2f4) {
          fVar22 = (float10)(float)local_2f4;
        }
      }
      else {
        if (fVar23 <= (float10)-999999.0) {
          fVar23 = (float10)*(float *)((int)local_2f8 + 0x1c);
        }
        else if ((*(uint *)((int)param_1 + 0x16b8) & 0x40000) != 0) {
          uVar12 = 0x131;
          if ((*(short *)(local_314 + 1) == 0x131) || (*(short *)(local_314 + 1) == 0x133)) {
            local_31c = (float *)(float)(fVar23 - (float10)1.5707963705062866);
            fVar23 = FUN_004646e0((float)local_31c);
            local_31c = (float *)(float)((float10)1.5707963705062866 - fVar23);
            fVar23 = FUN_004646e0((float)local_31c);
            uVar12 = extraout_ECX_27;
          }
        }
        local_314 = (float *)(float)fVar23;
        local_318 = local_2f4;
        if ((float)local_2f4 <= -999999.0) {
          local_318 = *(float **)((int)local_2f8 + 0x18);
        }
        fVar22 = (float10)(float)local_318;
        local_310 = local_314;
      }
      pvVar14 = local_2f8;
      local_30c = (float)fVar22;
      local_2ec = *(float **)((int)local_2f8 + 0x1c);
      local_2e8 = *(float **)((int)local_2f8 + 0x18);
      local_31c = (float *)ABS((float)local_2ec - (float)local_310);
      if (3.1415927 <= (float)local_31c) {
        if ((float)local_310 <= (float)local_2ec) {
          local_310 = (float *)((float)local_310 + 6.2831855);
        }
        else {
          local_2ec = (float *)((float)local_2ec + 6.2831855);
        }
      }
      uVar26 = FUN_00468e20(uVar12,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
      piVar9[0xd] = (int)uVar26;
      piVar9[4] = (int)DAT_004ce8dc;
      piVar9[5] = (int)DAT_004ce8e0;
      piVar9[6] = (int)DAT_004ce8dc;
      piVar9[7] = (int)DAT_004ce8e0;
      *piVar9 = (int)local_2ec;
      piVar9[2] = (int)local_310;
      piVar9[1] = (int)local_2e8;
      piVar9[3] = (int)local_30c;
      FUN_0041c350();
      *(uint *)((int)pvVar14 + 0x30) = *(uint *)((int)pvVar14 + 0x30) & 0xfffffffc;
    }
    break;
  case 0x134:
  case 0x136:
    puVar13 = (undefined4 *)((int)param_1 + 0x68);
    if (sVar1 != 0x134) {
      puVar13 = (undefined4 *)((int)param_1 + 0x9c);
    }
    fVar23 = FUN_00468ec0(0.0);
    local_31c = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(1.4013e-45);
    local_318 = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(2.8026e-45);
    local_2f4 = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(4.2039e-45);
    local_2f0 = (float *)(float)fVar23;
    if ((*(byte *)(puVar13 + 0xc) & 1) == 0) {
      puVar13[3] = *puVar13;
      puVar13[4] = puVar13[1];
      puVar13[5] = puVar13[2];
    }
    if (-999999.0 < (float)local_31c != NAN((float)local_31c)) {
      FUN_00408910((int)puVar13,(float)local_31c);
    }
    if (-999999.0 < (float)local_318) {
      puVar13[6] = local_318;
    }
    if (-999999.0 < (float)local_2f4) {
      puVar13[8] = local_2f4;
    }
    if (-999999.0 < (float)local_2f0) {
      puVar13[9] = local_2f0;
    }
    puVar13[0xc] = puVar13[0xc] | 1;
    FUN_00464eb0();
    FUN_00413700();
    break;
  case 0x135:
  case 0x137:
    if (sVar1 == 0x135) {
      local_314 = (float *)((int)param_1 + 0x68);
      local_2f0 = (float *)((int)param_1 + 0x324);
    }
    else {
      local_314 = (float *)((int)param_1 + 0x9c);
      local_2f0 = (float *)((int)param_1 + 0x360);
    }
    pfVar11 = (float *)((int)param_1 + 0x39c);
    if (sVar1 != 0x135) {
      pfVar11 = (float *)((int)param_1 + 0x3d8);
    }
    fVar23 = FUN_00468ec0(2.8026e-45);
    local_31c = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(4.2039e-45);
    local_2e0 = (float)fVar23;
    fVar23 = FUN_00468ec0(5.60519e-45);
    pfVar18 = local_314;
    local_2f4 = (float *)(float)fVar23;
    local_2e8 = local_31c;
    if (-999999.0 < (float)local_31c == NAN((float)local_31c)) {
      local_2e8 = (float *)local_314[6];
    }
    local_2ec = (float *)0x0;
    local_310 = (float *)0x0;
    local_30c = local_314[6];
    if ((float)local_2f4 <= -999999.0) {
      local_2f4 = (float *)local_314[9];
    }
    if (local_2e0 <= -999999.0) {
      local_2e0 = local_314[8];
    }
    local_2d8 = local_314[8];
    local_2d4 = local_314[9];
    local_318 = (float *)local_2e0;
    local_2dc = local_2f4;
    uVar26 = FUN_00468e20(extraout_ECX_28,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
    local_318 = (float *)uVar26;
    uVar26 = FUN_00468e20(extraout_ECX_29,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),1);
    if ((int)local_318 < 1) {
      local_2f0[0xd] = 0.0;
      pfVar11[0xd] = 0.0;
    }
    else {
      local_2f0[0xd] = (float)local_318;
      local_2f0[4] = DAT_004ce8dc;
      local_2f0[5] = DAT_004ce8e0;
      local_2f0[6] = DAT_004ce8dc;
      local_2f0[7] = DAT_004ce8e0;
      *local_2f0 = (float)local_310;
      local_2f0[1] = local_30c;
      local_2f0[0xe] = (float)uVar26;
      local_2f0[2] = (float)local_2ec;
      local_2f0[3] = (float)local_2e8;
      FUN_0041c350();
      pfVar11[0xd] = (float)local_318;
      pfVar11[4] = DAT_004ce8dc;
      pfVar11[5] = DAT_004ce8e0;
      pfVar11[6] = DAT_004ce8dc;
      pfVar11[7] = DAT_004ce8e0;
      *pfVar11 = local_2d8;
      pfVar11[1] = local_2d4;
      pfVar11[0xe] = (float)uVar26;
      pfVar11[2] = local_2e0;
      pfVar11[3] = (float)local_2dc;
      FUN_0041c350();
      pfVar18[0xc] = (float)((uint)pfVar18[0xc] | 1);
      FUN_00464eb0();
      FUN_00413700();
    }
    break;
  case 0x138:
  case 0x139:
    if (sVar1 == 0x138) {
      local_31c = (float *)((int)param_1 + 0x68);
    }
    else {
      local_31c = (float *)((int)param_1 + 0x9c);
    }
    puVar13 = (undefined4 *)((int)param_1 + 0x324);
    if (sVar1 != 0x138) {
      puVar13 = (undefined4 *)((int)param_1 + 0x360);
    }
    fVar15 = *(float *)((int)param_1 + 0x15fc) * 0.25;
    if (*(float *)((int)param_1 + 0x15f4) - fVar15 <= *(float *)((int)param_1 + 0x34)) {
      if (*(float *)((int)param_1 + 0x15f4) + fVar15 < *(float *)((int)param_1 + 0x34)) {
        fVar23 = FUN_00409310();
        local_310 = (float *)(float)(fVar23 / (float10)3.0 + (float10)3.1415927410125732);
        fVar23 = FUN_004646e0((float)local_310);
        goto LAB_0041769d;
      }
      if (*(float *)(DAT_004b4514 + 0x97c) <= *(float *)((int)param_1 + 0x34)) {
        fVar23 = FUN_00409310();
        local_314 = (float *)(float)(fVar23 * (float10)0.25);
        uVar3 = FUN_004643d0();
        if ((uint)uVar3 % 3 != 0) goto LAB_00417693;
      }
      else {
        fVar23 = FUN_00409310();
        local_314 = (float *)(float)(fVar23 * (float10)0.25);
        uVar3 = FUN_004643d0();
        if ((uint)uVar3 % 3 == 0) {
LAB_00417693:
          fVar23 = (float10)(float)local_314 + (float10)3.1415927410125732;
          goto LAB_0041769d;
        }
      }
    }
    else {
      fVar23 = FUN_00409310();
      fVar23 = fVar23 / (float10)3.0;
LAB_0041769d:
      local_314 = (float *)(float)fVar23;
    }
    fVar15 = *(float *)((int)param_1 + 0x1600) * 0.25;
    if (*(float *)((int)param_1 + 0x15f8) - fVar15 <= *(float *)((int)param_1 + 0x38)) {
      if (*(float *)((int)param_1 + 0x15f8) + fVar15 < *(float *)((int)param_1 + 0x38)) {
        local_314 = (float *)-ABS((float)local_314);
      }
    }
    else {
      local_314 = (float *)ABS((float)local_314);
    }
    local_310 = (float *)ABS((float)local_314 + 1.5707964);
    if ((float)local_310 < 0.05 == NAN((float)local_310)) {
      local_310 = (float *)ABS((float)local_314 - 1.5707964);
      if ((float)local_310 < 0.05 != NAN((float)local_310)) {
        if (1.5707964 <= (float)local_314) {
          local_314 = (float *)0x3fcf7641;
        }
        else {
          local_314 = (float *)0x3fc2a975;
        }
      }
    }
    else if ((float)local_314 < -1.5707964 == NAN((float)local_314)) {
      local_314 = (float *)0xbfc2a975;
    }
    else {
      local_314 = (float *)0xbfcf7641;
    }
    uVar26 = FUN_0041a900(1);
    local_310 = local_314;
    puVar13[0xe] = (int)uVar26;
    local_30c = 0.0;
  local_308__u_alias = (local_308__u *)&local_308;
    local_308 = (double)CONCAT44(local_308__u_alias->_4_4_,local_314);
    fVar23 = FUN_00468ec0(2.8026e-45);
    local_308 = (double)CONCAT44((float)fVar23,(float)local_308);
    uVar26 = FUN_0041a900(0);
    puVar13[0xd] = (int)uVar26;
    FUN_0041c300();
    FUN_0041c320();
    *puVar13 = (float)local_308;
  local_308__u_alias = (local_308__u *)&local_308;
    puVar13[1] = local_308__u_alias->_4_4_;
    puVar13[2] = local_310;
    puVar13[3] = local_30c;
    FUN_0041c350();
    local_31c[0xc] = (float)((uint)local_31c[0xc] & 0xfffffffc);
    break;
  case 0x13a:
    iVar10 = *(int *)(DAT_004b43dc + 0x1c);
    puVar13 = (undefined4 *)((int)param_1 + 0x68);
    goto LAB_004174d2;
  case 0x13b:
    iVar10 = *(int *)(DAT_004b43dc + 0x1c);
    puVar13 = (undefined4 *)((int)param_1 + 0x9c);
LAB_004174d2:
    puVar7 = (undefined4 *)(iVar10 + 0x1074);
LAB_004174d7:
    *puVar13 = *puVar7;
    puVar13[1] = puVar7[1];
    puVar13[2] = puVar7[2];
    break;
  case 0x13c:
  case 0x13d:
    pfVar11 = (float *)((int)param_1 + 0x68);
    if (sVar1 != 0x13c) {
      pfVar11 = (float *)((int)param_1 + 0x9c);
    }
    fVar23 = FUN_00468ec0(0.0);
    local_31c = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(1.4013e-45);
    local_318 = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(2.8026e-45);
    local_2f4 = (float *)(float)fVar23;
    *pfVar11 = (float)local_31c + *pfVar11;
    pfVar11[1] = pfVar11[1] + (float)local_318;
    pfVar11[2] = (float)local_2f4 + pfVar11[2];
    FUN_00413700();
    break;
  case 0x13e:
  case 0x13f:
    iVar10 = (int)param_1 + 0x68;
    if (sVar1 != 0x13e) {
      iVar10 = (int)param_1 + 0x9c;
    }
    fVar23 = FUN_00468ec0(0.0);
    local_2e0 = (float)fVar23;
    fVar23 = FUN_00468ec0(1.4013e-45);
    local_31c = (float *)(float)fVar23;
    if (-999999.0 < local_2e0 != NAN(local_2e0)) {
      *(float *)(iVar10 + 0xc) = local_2e0;
    }
    if (-999999.0 < (float)local_31c) {
      *(float **)(iVar10 + 0x10) = local_31c;
    }
    FUN_00464eb0();
    param_1 = local_2f8;
    FUN_00413700();
  case 0x140:
  case 0x142:
    puVar13 = (undefined4 *)((int)param_1 + 0x68);
    if (*(short *)(local_314 + 1) != 0x140) {
      puVar13 = (undefined4 *)((int)param_1 + 0x9c);
    }
    fVar23 = FUN_00468ec0(0.0);
    local_2e0 = (float)fVar23;
    fVar23 = FUN_00468ec0(1.4013e-45);
    local_31c = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(2.8026e-45);
    local_318 = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(4.2039e-45);
    local_2f4 = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(5.60519e-45);
    local_2f0 = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(7.00649e-45);
    local_314 = (float *)(float)fVar23;
    if ((*(byte *)(puVar13 + 0xc) & 1) == 0) {
      puVar13[3] = *puVar13;
      puVar13[4] = puVar13[1];
      puVar13[5] = puVar13[2];
    }
    if (-999999.0 < local_2e0 != NAN(local_2e0)) {
      FUN_00408910((int)puVar13,local_2e0);
    }
    if (-999999.0 < (float)local_31c) {
      puVar13[6] = local_31c;
    }
    if (-999999.0 < (float)local_318) {
      puVar13[8] = local_318;
    }
    if (-999999.0 < (float)local_2f4) {
      puVar13[9] = local_2f4;
    }
    if (-999999.0 < (float)local_2f0) {
      FUN_0041c5e0((int)puVar13,(float)local_2f0);
    }
    if (-999999.0 < (float)local_314) {
      puVar13[0xb] = local_314;
    }
    puVar13[0xc] = puVar13[0xc] | 3;
    FUN_00464eb0();
    FUN_00413700();
    break;
  case 0x141:
  case 0x143:
    puVar13 = (undefined4 *)((int)param_1 + 0x68);
    if (sVar1 == 0x141) {
      local_2f0 = (float *)((int)param_1 + 0x324);
      local_314 = (float *)((int)param_1 + 0x39c);
      local_2f4 = (float *)((int)param_1 + 0x414);
    }
    else {
      puVar13 = (undefined4 *)((int)param_1 + 0x9c);
      local_2f0 = (float *)((int)param_1 + 0x360);
      local_314 = (float *)((int)param_1 + 0x3d8);
      local_2f4 = (float *)((int)param_1 + 0x450);
    }
    fVar23 = FUN_00468ec0(2.8026e-45);
    local_2e0 = (float)fVar23;
    fVar23 = FUN_00468ec0(4.2039e-45);
    local_2d8 = (float)fVar23;
    fVar23 = FUN_00468ec0(5.60519e-45);
    local_31c = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(7.00649e-45);
    local_310 = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(8.40779e-45);
    local_318 = (float *)(float)fVar23;
    if (-999999.0 < local_2e0 == NAN(local_2e0)) {
      local_2e0 = (float)puVar13[6];
    }
    local_2d0 = (double)((ulonglong)(uint)local_2e0 << 0x20);
    local_2e0 = 0.0;
    local_2dc = (float *)puVar13[6];
    if ((float)local_31c <= -999999.0) {
      local_31c = (float *)puVar13[9];
    }
    if (local_2d8 <= -999999.0) {
      local_2d8 = (float)puVar13[8];
    }
    local_308 = (double)CONCAT44(local_31c,local_2d8);
    local_2d8 = (float)puVar13[8];
    local_2d4 = (float)puVar13[9];
    if ((float)local_318 <= -999999.0) {
      local_318 = (float *)puVar13[0xb];
    }
    if ((float)local_310 <= -999999.0) {
      local_310 = (float *)puVar13[10];
    }
    local_30c = (float)puVar13[0xb];
    local_31c = local_310;
    local_2ec = local_310;
    local_310 = (float *)puVar13[10];
    local_2e8 = local_318;
    uVar26 = FUN_0041a900(0);
    fVar15 = (float)uVar26;
    uVar26 = FUN_0041a900(1);
    pfVar11 = local_2f0;
    local_318 = (float *)uVar26;
    if ((int)fVar15 < 1) {
      local_2f0[0xd] = 0.0;
      local_314[0xd] = 0.0;
      local_2f4[0xd] = 0.0;
    }
    else {
      local_2f0[0xd] = fVar15;
      FUN_0041c300();
      FUN_0041c320();
      pfVar11[0xe] = (float)local_318;
      *pfVar11 = local_2e0;
      pfVar11[2] = (float)local_2d0;
      pfVar11[1] = (float)local_2dc;
  local_2d0__u_alias = (local_2d0__u *)&local_2d0;
      pfVar11[3] = local_2d0__u_alias->_4_4_;
      FUN_0041c350();
      pfVar11 = local_314;
      local_314[0xd] = fVar15;
      FUN_0041c300();
      FUN_0041c320();
      *pfVar11 = local_2d8;
      pfVar11[0xe] = (float)local_318;
  local_308__u_alias = (local_308__u *)&local_308;
      pfVar11[3] = local_308__u_alias->_4_4_;
      pfVar11[1] = local_2d4;
      pfVar11[2] = (float)local_308;
      FUN_0041c350();
      pfVar11 = local_2f4;
      local_2f4[0xd] = fVar15;
      FUN_0041c300();
      FUN_0041c320();
      pfVar11[0xe] = (float)local_318;
      *pfVar11 = (float)local_310;
      pfVar11[1] = local_30c;
      pfVar11[2] = (float)local_2ec;
      pfVar11[3] = (float)local_2e8;
      FUN_0041c350();
      puVar13[0xc] = puVar13[0xc] | 3;
      puVar13[3] = *puVar13;
      puVar13[4] = puVar13[1];
      puVar13[5] = puVar13[2];
      FUN_00464eb0();
      FUN_00413700();
    }
    break;
  case 0x144:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    *(uint *)((int)param_1 + 0x16b8) =
         *(uint *)((int)param_1 + 0x16b8) ^
         ((int)uVar26 << 0x12 ^ *(uint *)((int)param_1 + 0x16b8)) & 0x40000;
    break;
  case 0x145:
  case 0x146:
    if (sVar1 == 0x145) {
      local_318 = (float *)((int)param_1 + 0x68);
    }
    else {
      local_318 = (float *)((int)param_1 + 0x9c);
    }
    piVar9 = (int *)((int)param_1 + 0x28c);
    if (sVar1 != 0x145) {
      piVar9 = (int *)((int)param_1 + 0x2d8);
    }
    fVar23 = FUN_00468ec0(4.2039e-45);
    local_2f0 = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(5.60519e-45);
    local_31c = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(1.4013e-45);
  local_308__u_alias = (local_308__u *)&local_308;
    local_308 = (double)CONCAT44(local_308__u_alias->_4_4_,(float)fVar23);
    fVar23 = FUN_00468ec0(2.8026e-45);
    local_300 = 0.0;
  local_308__u_alias = (local_308__u *)&local_308;
    local_308__u_alias->_4_4_ = (float)fVar23;
    fVar23 = FUN_00468ec0(7.00649e-45);
  local_2d0__u_alias = (local_2d0__u *)&local_2d0;
    local_2d0 = (double)CONCAT44(local_2d0__u_alias->_4_4_,(float)fVar23);
    fVar23 = FUN_00468ec0(8.40779e-45);
    local_2d0 = (double)CONCAT44((float)fVar23,(float)local_2d0);
    local_2c8 = 0;
    uVar26 = FUN_00468e20(extraout_ECX_23,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),0);
    pfVar11 = local_318;
    piVar9[0x11] = (int)uVar26;
    piVar9[6] = (int)(float)local_308;
  local_308__u_alias = (local_308__u *)&local_308;
    piVar9[7] = (int)local_308__u_alias->_4_4_;
    piVar9[8] = (int)local_300;
    piVar9[9] = (int)(float)local_2d0;
  local_2d0__u_alias = (local_2d0__u *)&local_2d0;
    piVar9[10] = (int)local_2d0__u_alias->_4_4_;
    piVar9[0xb] = local_2c8;
    piVar9[0x12] = 8;
    *piVar9 = (int)*local_318;
    piVar9[1] = (int)local_318[1];
    piVar9[2] = (int)local_318[2];
    local_2f4 = local_31c;
    if (-999999.0 < (float)local_31c == NAN((float)local_31c)) {
      local_2f4 = (float *)local_318[1];
    }
    pfVar18 = local_2f0;
    if ((float)local_2f0 <= -999999.0) {
      pfVar18 = (float *)*local_318;
    }
    piVar9[3] = (int)pfVar18;
    local_308 = (double)CONCAT44(local_2f4,pfVar18);
    piVar9[4] = (int)local_2f4;
    local_300 = 0.0;
    piVar9[5] = 0;
    local_318 = pfVar18;
    FUN_00406340();
    pfVar11[0xc] = (float)((uint)pfVar11[0xc] & 0xfffffffc);
    break;
  case 0x147:
    *(float *)((int)param_1 + 0x68) =
         *(float *)((int)param_1 + 0x9c) + *(float *)((int)param_1 + 0x68);
    *(float *)((int)param_1 + 0x6c) =
         *(float *)((int)param_1 + 0xa0) + *(float *)((int)param_1 + 0x6c);
    *(float *)((int)param_1 + 0x70) =
         *(float *)((int)param_1 + 0xa4) + *(float *)((int)param_1 + 0x70);
    *(float *)((int)param_1 + 0x9c) = DAT_004ce8d0;
    *(float *)((int)param_1 + 0xa0) = DAT_004ce8d4;
    fVar15 = DAT_004ce8d8;
    *(undefined4 *)((int)param_1 + 0xb4) = 0;
    *(undefined4 *)((int)param_1 + 0x80) = 0;
    *(float *)((int)param_1 + 0xa4) = fVar15;
    *(float *)((int)param_1 + 0xa8) = DAT_004ce8d0;
    *(float *)((int)param_1 + 0xac) = DAT_004ce8d4;
    *(float *)((int)param_1 + 0xb0) = DAT_004ce8d8;
    *(float *)((int)param_1 + 0x74) = DAT_004ce8d0;
    *(float *)((int)param_1 + 0x78) = DAT_004ce8d4;
    *(float *)((int)param_1 + 0x7c) = DAT_004ce8d8;
    *(uint *)((int)param_1 + 0xcc) = *(uint *)((int)param_1 + 0xcc) & 0xfffffffc;
    *(uint *)((int)param_1 + 0x98) = *(uint *)((int)param_1 + 0x98) & 0xfffffffc;
    *(uint *)((int)param_1 + 0xcc) = *(uint *)((int)param_1 + 0xcc) & 0xfffffffd;
    *(uint *)((int)param_1 + 0x98) = *(uint *)((int)param_1 + 0x98) & 0xfffffffd;
    *(undefined4 *)((int)param_1 + 0x2d0) = 0;
    *(undefined4 *)((int)param_1 + 0x31c) = 0;
    *(undefined4 *)((int)param_1 + 0x358) = 0;
    *(undefined4 *)((int)param_1 + 0x394) = 0;
    *(undefined4 *)((int)param_1 + 0x3d0) = 0;
    *(undefined4 *)((int)param_1 + 0x40c) = 0;
    *(undefined4 *)((int)param_1 + 0x448) = 0;
    *(undefined4 *)((int)param_1 + 0x484) = 0;
    break;
  case 400:
    fVar23 = FUN_00468ec0(0.0);
    *(float *)((int)param_1 + 0xd0) = (float)fVar23;
    fVar23 = FUN_00468ec0(1.4013e-45);
    *(float *)((int)param_1 + 0xd4) = (float)fVar23;
    break;
  case 0x191:
    fVar23 = FUN_00468ec0(0.0);
    *(float *)((int)param_1 + 0xd8) = (float)fVar23;
    fVar23 = FUN_00468ec0(1.4013e-45);
    *(float *)((int)param_1 + 0xdc) = (float)fVar23;
    break;
  case 0x192:
    uVar26 = FUN_0041a900(0);
    *(uint *)((int)param_1 + 0x16b8) = *(uint *)((int)param_1 + 0x16b8) | (uint)uVar26;
    if ((*(byte *)((int)param_1 + 0x16b8) & 0x20) != 0) {
      iVar10 = 0x10;
      do {
        FUN_00461d80();
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    break;
  case 0x193:
    uVar26 = FUN_0041a900(0);
    *(uint *)((int)param_1 + 0x16b8) = *(uint *)((int)param_1 + 0x16b8) & ~(uint)uVar26;
    if ((*(byte *)((int)param_1 + 0x16b8) & 0x20) == 0) {
      iVar10 = 0x10;
      do {
        FUN_00461d40();
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    break;
  case 0x194:
    *(uint *)((int)param_1 + 0x16b8) = *(uint *)((int)param_1 + 0x16b8) | 0x10000;
    fVar23 = FUN_00468ec0(0.0);
    *(float *)((int)param_1 + 0x15f4) = (float)fVar23;
    fVar23 = FUN_00468ec0(1.4013e-45);
    *(float *)((int)param_1 + 0x15f8) = (float)fVar23;
    fVar23 = FUN_00468ec0(2.8026e-45);
    *(float *)((int)param_1 + 0x15fc) = (float)fVar23;
    fVar23 = FUN_00468ec0(4.2039e-45);
    *(float *)((int)param_1 + 0x1600) = (float)fVar23;
    break;
  case 0x195:
    *(uint *)((int)param_1 + 0x16b8) = *(uint *)((int)param_1 + 0x16b8) & 0xfffeffff;
    break;
  case 0x196:
    _memset((void *)((int)param_1 + 0x1624),0,0x4c);
    break;
  case 0x197:
    uVar26 = FUN_0041a900(0);
    uVar24 = FUN_0041a900(1);
    *(int *)((int)param_1 + (int)uVar26 * 4 + 0x1620) = (int)uVar24;
    break;
  case 0x198:
    fVar23 = FUN_00468ec0(1.4013e-45);
    local_310 = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(0.0);
    *(float *)((int)param_1 + 0x1670) = (float)fVar23;
    *(float **)((int)param_1 + 0x1674) = local_310;
    break;
  case 0x199:
    FUN_00412100(pvVar14,param_2);
    break;
  case 0x19a:
    uVar26 = FUN_0041a900(0);
    *(int *)((int)param_1 + 0x1620) = (int)uVar26;
    break;
  case 0x19b:
    uVar26 = FUN_0041a900(0);
    *(int *)((int)param_1 + 0x1608) = (int)uVar26;
    *(int *)((int)param_1 + 0x160c) = (int)uVar26;
    if ((*(uint *)((int)param_1 + 0x16b8) & 0x400000) != 0) {
      FUN_004126f0(0,0,0);
      FUN_004126f0(1,0,0);
      FUN_004126f0(2,0,0);
      FUN_004126f0(3,0,0);
    }
    *(int *)((int)param_1 + 0x1610) = *(int *)((int)param_1 + 0x1608);
    if ((*(uint *)((int)param_1 + 0x16b8) & 0x400000) != 0) {
      *(uint *)((int)param_1 + 0x16b8) = *(uint *)((int)param_1 + 0x16b8) | 0x20000000;
    }
    *(int *)((int)param_1 + 0x1614) = *(int *)((int)param_1 + 0x1608) * 7;
    break;
  case 0x19c:
    uVar26 = FUN_0041a900(0);
    iVar17 = (int)uVar26;
    FUN_004124e0(0);
    iVar10 = DAT_004b43dc;
    if (iVar17 < 0) {
      if ((*(uint *)((int)param_1 + 0x16b8) & 0x400000) != 0) {
        *(undefined4 *)(DAT_004b43dc + 0x1c + *(int *)((int)param_1 + 0x16c4) * 4) = 0;
      }
      *(uint *)((int)param_1 + 0x16b8) = *(uint *)((int)param_1 + 0x16b8) & 0xffbfffff;
    }
    else {
      *(uint *)((int)param_1 + 0x16b8) = *(uint *)((int)param_1 + 0x16b8) | 0x400000;
      *(undefined4 *)(iVar10 + 0x1c + iVar17 * 4) = *(undefined4 *)((int)param_1 + 0x174c);
      *(int *)((int)param_1 + 0x16c4) = iVar17;
    }
    break;
  case 0x19d:
    goto switchD_00415546_caseD_19d;
  case 0x19e:
    FUN_0041a900(2);
    uVar26 = FUN_0041a900(1);
    uVar24 = FUN_0041a900(0);
    iVar10 = *(int *)((int)param_1 + 0x174c);
    *(int *)((int)uVar24 * 0x10 + 0x270c + iVar10) = (int)uVar26;
    if (-1 < (int)uVar26) {
      FUN_0041a680(local_314 + 8,iVar10);
    }
    break;
  case 0x19f:
    uVar26 = FUN_0041a900(0);
    FUN_004067e0((int)uVar26);
    break;
  case 0x1a0:
    uVar12 = *(undefined4 *)((int)param_1 + 0x34);
    uVar26 = FUN_0041a900(0);
    FUN_00453e20(extraout_ECX_30,(int)(uVar26 >> 0x20),uVar12);
    break;
  case 0x1a1:
    uVar28 = 0x46;
    uVar27 = 0;
    uVar26 = FUN_0041a900(2);
    uVar12 = (undefined4)uVar26;
    uVar26 = FUN_0041a900(1);
    uVar8 = (undefined4)uVar26;
    uVar26 = FUN_0041a900(0);
    FUN_004529a0(1,(int)uVar26,uVar8,uVar12,uVar27,uVar28);
    break;
  case 0x1a2:
    FUN_0041a900(0);
    FUN_0041fbe0(extraout_ECX_31);
    FUN_0040cf60(extraout_ECX_32,extraout_EDX,0);
    FUN_00428750();
  case 0x1a9:
    FUN_00414c60();
    break;
  case 0x1a3:
    if (*(int *)(DAT_004b43e4 + 0x6d30) != 0) {
      FUN_00412720();
    }
    break;
  case 0x1a4:
    break;
  case 0x1a5:
    uVar26 = FUN_0041a900(0);
    *(float **)((int)uVar26 * 0x10 + 0x2718 + *(int *)((int)param_1 + 0x174c)) = pfVar11 + 6;
    break;
  case 0x1a6:
  case 0x1ac:
  case 0x1b5:
  case 0x1b6:
  case 0x1b7:
    local_2ec = (float *)pfVar11[7];
    iVar17 = 0;
    uVar5 = 0x77;
    local_2e1 = '\a';
    if (0 < (int)local_2ec) {
      local_310 = (float *)((int)pfVar11 + (0x20 - (int)&local_a0));
      do {
        *(byte *)((int)&local_a0 + iVar17) =
             *(byte *)((int)local_310 + (int)&local_a0 + iVar17) ^ (byte)uVar5;
        uVar5 = (uint)(byte)((byte)uVar5 + local_2e1);
        local_2e1 = local_2e1 + '\x10';
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)local_2ec);
    }
    uVar26 = FUN_00468e20(uVar5,*(int *)(iVar10 + 4),0);
    pvVar14 = (void *)uVar26;
    sVar1 = *(short *)(local_314 + 1);
    iVar10 = extraout_ECX_33;
    if (sVar1 == 0x1b5) {
      pvVar14 = (void *)((int)pvVar14 + DAT_004b0ca8);
    }
    else if (sVar1 == 0x1b6) {
      pvVar14 = (void *)((int)pvVar14 + DAT_004b0ca8 + -1);
    }
    else {
      iVar10 = extraout_ECX_33;
      if (sVar1 == 0x1b7) {
        pvVar14 = (void *)((int)pvVar14 + DAT_004b0ca8 + -2);
        iVar10 = DAT_004b0ca8;
      }
    }
    FUN_00468e20(iVar10,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),2);
    uVar26 = FUN_00468e20(extraout_ECX_34,*(int *)(*(int *)((int)param_1 + 0x174c) + 4),1);
    FUN_0040e060(pvVar14,(int)uVar26);
    *(uint *)((int)param_1 + 0x161c) = *(uint *)((int)param_1 + 0x161c) | 1;
    *(int *)((int)param_1 + 0x1614) = *(int *)((int)param_1 + 0x1608) * 7;
    goto switchD_00415546_caseD_19d;
  case 0x1a7:
    FUN_0040e5e0(pvVar14);
    *(uint *)((int)param_1 + 0x161c) = *(uint *)((int)param_1 + 0x161c) & 0xfffffffe;
    break;
  case 0x1a8:
    uVar26 = FUN_0041a900(0);
    FUN_0041c550((int)uVar26);
    break;
  case 0x1aa:
    fVar23 = FUN_00468ec0(0.0);
    *(float *)((int)param_1 + 0x16c8) = (float)(fVar23 * fVar23);
    break;
  case 0x1ab:
    fVar23 = FUN_00468ec0(1.4013e-45);
    local_310 = (float *)(float)fVar23;
    local_2ec = *(float **)((int)param_1 + 0x160c);
    uVar26 = FUN_0041a900(2);
    pfVar11 = (float *)((float)local_310 / (float)(int)local_2ec);
    local_310 = pfVar11;
    uVar24 = FUN_0041a900(0);
    FUN_004126f0((int)uVar24,(int)uVar26,pfVar11);
    break;
  case 0x1ad:
    if (DAT_004b0ccc < 0x200) {
LAB_004191a2:
      pfVar11 = (float *)FUN_0041a960(0);
      fVar23 = (float10)FUN_0041a950(0.0);
      *pfVar11 = (float)fVar23;
      break;
    }
    goto LAB_0041917b;
  case 0x1ae:
    if (599 < DAT_004b0ccc) {
      pfVar11 = (float *)FUN_0041a960(0);
      fVar23 = (float10)FUN_0041a950(5.60519e-45);
      *pfVar11 = (float)fVar23;
      break;
    }
    if (199 < DAT_004b0ccc) {
      pfVar11 = (float *)FUN_0041a960(0);
      fVar23 = (float10)FUN_0041a950(4.2039e-45);
      *pfVar11 = (float)fVar23;
      break;
    }
    if (DAT_004b0ccc < -200) {
      if (-0x191 < DAT_004b0ccc) {
        pfVar11 = (float *)FUN_0041a960(0);
        fVar23 = (float10)FUN_0041a950(1.4013e-45);
        *pfVar11 = (float)fVar23;
        break;
      }
      goto LAB_004191a2;
    }
LAB_0041917b:
    pfVar11 = (float *)FUN_0041a960(0);
    fVar23 = (float10)FUN_0041a950(2.8026e-45);
    *pfVar11 = (float)fVar23;
    break;
  case 0x1af:
    fVar23 = (float10)FUN_0041a950(1.4013e-45);
    local_2ec = (float *)(float)fVar23;
    fVar23 = (float10)FUN_0041a950(2.8026e-45);
    local_310 = (float *)(((float)DAT_004b0ccc + 1024.0) * ((float)fVar23 - (float)local_2ec) *
                          0.00048828125 + (float)local_2ec);
    pfVar11 = (float *)FUN_0041a960(0);
    pfVar18 = local_310;
    goto LAB_00419629;
  case 0x1b0:
    if (0x1ff < DAT_004b0ccc) {
switchD_00417ba4_caseD_1:
      puVar13 = (undefined4 *)FUN_0041a910();
      uVar26 = FUN_0041a900(2);
      *puVar13 = (int)uVar26;
      break;
    }
    goto LAB_004192a9;
  case 0x1b1:
    if (599 < DAT_004b0ccc) {
switchD_00417ba4_caseD_3:
      puVar13 = (undefined4 *)FUN_0041a910();
      uVar26 = FUN_0041a900(4);
      *puVar13 = (int)uVar26;
      break;
    }
    if (199 < DAT_004b0ccc) {
      puVar13 = (undefined4 *)FUN_0041a910();
      uVar26 = FUN_0041a900(3);
      *puVar13 = (int)uVar26;
      break;
    }
    if (-0xc9 < DAT_004b0ccc) {
      puVar13 = (undefined4 *)FUN_0041a910();
      uVar26 = FUN_0041a900(2);
      *puVar13 = (int)uVar26;
      break;
    }
    if (-0x191 < DAT_004b0ccc) goto LAB_00417bad;
LAB_004192a9:
    puVar13 = (undefined4 *)FUN_0041a910();
    uVar26 = FUN_0041a900(0);
    *puVar13 = (int)uVar26;
    break;
  case 0x1b2:
    uVar26 = FUN_0041a900(1);
    uVar24 = FUN_0041a900(2);
    iVar10 = ((int)uVar24 - (int)uVar26) * (DAT_004b0ccc + 0x400);
    piVar9 = (int *)FUN_0041a910();
    *piVar9 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x7ffU)) >> 0xb) + (int)uVar26;
    break;
  case 0x1b3:
    switch(DAT_004b0ca8) {
    case 0:
LAB_00417bad:
      puVar13 = (undefined4 *)FUN_0041a910();
      uVar26 = FUN_0041a900(1);
      *puVar13 = (int)uVar26;
      break;
    case 1:
      goto switchD_00417ba4_caseD_1;
    case 2:
      puVar13 = (undefined4 *)FUN_0041a910();
      uVar26 = FUN_0041a900(3);
      *puVar13 = (int)uVar26;
      break;
    case 3:
    case 4:
      goto switchD_00417ba4_caseD_3;
    }
    break;
  case 0x1b4:
    switch(DAT_004b0ca8) {
    case 0:
      fVar15 = 1.4013e-45;
      break;
    case 1:
      fVar15 = 2.8026e-45;
      break;
    case 2:
      fVar15 = 4.2039e-45;
      break;
    case 3:
    case 4:
      fVar15 = 5.60519e-45;
      break;
    default:
      goto switchD_00417c29_caseD_5;
    }
    fVar23 = FUN_00468ec0(fVar15);
    local_310 = (float *)(float)fVar23;
    pfVar11 = (float *)FUN_004690b0(0,*(int *)(*(int *)((int)param_1 + 0x174c) + 4));
    pfVar18 = local_310;
    goto LAB_00419629;
  case 0x1b8:
    uVar26 = FUN_0041a900(0);
    *(int *)(DAT_004b43e4 + 0x6cf4) = (int)uVar26;
    break;
  case 0x1b9:
    uVar26 = FUN_0041a900(0);
    FUN_004067e0((int)uVar26);
    break;
  case 0x1ba:
    *(uint *)(DAT_004b43cc + 0x7c) = *(uint *)(DAT_004b43cc + 0x7c) | 8;
    break;
  case 0x1bb:
    FUN_004127b0(pvVar14);
    break;
  case 0x1bc:
    uVar26 = FUN_0041a900(0);
    *(uint *)((int)param_1 + 0x16b8) =
         *(uint *)((int)param_1 + 0x16b8) ^
         ((int)uVar26 << 0x1a ^ *(uint *)((int)param_1 + 0x16b8)) & 0x4000000;
    break;
  case 0x1bd:
    FUN_00428670();
    break;
  case 0x1be:
    uVar26 = FUN_0041a900(0);
    *(uint *)((int)param_1 + 0x16b8) =
         *(uint *)((int)param_1 + 0x16b8) ^
         ((int)uVar26 << 0x1b ^ *(uint *)((int)param_1 + 0x16b8)) & 0x8000000;
    uVar26 = FUN_0041a900(1);
    *(uint *)((int)param_1 + 0x16b8) = *(uint *)((int)param_1 + 0x16b8) & 0xefffffff;
    *(int *)((int)param_1 + 0x16bc) = (int)uVar26;
    *(undefined4 *)((int)param_1 + 0x16c0) = *(undefined4 *)((int)param_1 + 0x22c);
    break;
  case 0x1bf:
    fVar23 = (float10)FUN_0041a950(0.0);
    DAT_004b2ed0 = (float)fVar23;
    break;
  case 0x1c0:
    if (DAT_004b0ca8 == 0) {
      uVar26 = FUN_0041a900(0);
      local_310 = (float *)uVar26;
      local_2f8 = (void *)(float)(int)local_310;
    }
    else if (DAT_004b0ca8 == 1) {
      uVar26 = FUN_0041a900(1);
      local_310 = (float *)uVar26;
      local_2f8 = (void *)(float)(int)local_310;
    }
    else if (DAT_004b0ca8 == 2) {
      uVar26 = FUN_0041a900(2);
      local_310 = (float *)uVar26;
      local_2f8 = (void *)(float)(int)local_310;
    }
    else {
      uVar26 = FUN_0041a900(3);
      local_310 = (float *)uVar26;
      local_2f8 = (void *)(float)(int)local_310;
    }
    pfVar11 = *(float **)(*(int *)((int)param_1 + 0x174c) + 4);
    pfVar18 = (float *)(*pfVar11 - (float)local_2f8);
    goto LAB_00419629;
  case 0x1c1:
    uVar26 = FUN_0041a900(0);
    *(uint *)((int)param_1 + 0x16b8) =
         *(uint *)((int)param_1 + 0x16b8) ^
         ((int)uVar26 << 0x1e ^ *(uint *)((int)param_1 + 0x16b8)) & 0x40000000;
    break;
  case 0x1c2:
    uVar26 = FUN_0041a900(0);
    *(int *)((int)param_1 + 0x234) = (int)uVar26;
    break;
  case 0x1c3:
    uVar26 = FUN_0041a900(0);
    FUN_00414dc0((int)uVar26);
    break;
  case 0x1c4:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    *(int *)((int)param_1 + 0x238) = (int)uVar26;
    break;
  case 0x1c5:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    *(int *)((int)param_1 + 0x168c) = (int)uVar26;
    break;
  case 0x1c6:
    FUN_00421740();
    break;
  case 0x1c7:
    uVar26 = FUN_0041a900(1);
    uVar12 = FUN_00412500((int)uVar26);
    puVar13 = (undefined4 *)FUN_0041a910();
    *puVar13 = uVar12;
    break;
  case 0x1c8:
    uVar26 = FUN_0041a900(2);
    iVar10 = FUN_00412530((int)uVar26);
    puVar13 = (undefined4 *)FUN_0041a960(0);
    *puVar13 = *(undefined4 *)(iVar10 + 0x1074);
    pfVar11 = (float *)FUN_0041a960(1);
    pfVar18 = *(float **)(iVar10 + 0x1078);
    goto LAB_00419629;
  case 500:
    uVar26 = FUN_0041a900(0);
    iVar10 = (int)uVar26;
    _memset((void *)((int)param_1 + iVar10 * 0x214 + 0x48c),0,0x214);
    *(undefined2 *)((int)param_1 + iVar10 * 0x214 + 0x684) = 1;
    *(undefined4 *)((int)param_1 + iVar10 * 0x214 + 0x49c) = 0;
    *(undefined2 *)((int)param_1 + iVar10 * 0x214 + 0x686) = 1;
    *(undefined4 *)((int)param_1 + iVar10 * 0x214 + 0x4a4) = 0x40000000;
    *(undefined4 *)((int)param_1 + iVar10 * 0x214 + 0x690) = 0x16;
    *(undefined4 *)((int)param_1 + iVar10 * 0x214 + 0x694) = 0x28;
    *(undefined4 *)((int)param_1 + iVar10 * 0x214 + 0x68c) = 0x83;
    *(undefined4 *)((int)param_1 + iVar10 * 0xc + 0x152c) = 0;
    *(undefined4 *)((int)param_1 + (iVar10 * 3 + 0x54c) * 4) = 0;
    *(undefined4 *)((int)param_1 + iVar10 * 0xc + 0x158c) = 0;
    *(undefined4 *)((int)param_1 + (iVar10 * 3 + 0x564) * 4) = 0;
    *(undefined4 *)((int)param_1 + iVar10 * 0xc + 0x1594) = 0;
    break;
  case 0x1f5:
    uVar26 = FUN_0041a900(0);
    iVar10 = (int)uVar26;
    if (*(float *)((int)param_1 + iVar10 * 0xc + 0x1594) <= 0.9) {
      fVar15 = *(float *)((int)param_1 + 0x34) + *(float *)((int)param_1 + iVar10 * 0xc + 0x152c);
      fVar2 = *(float *)((int)param_1 + iVar10 * 0xc + 0x1530) + *(float *)((int)param_1 + 0x38);
      local_308 = (double)CONCAT44(fVar2,fVar15);
      local_300 = *(float *)((int)param_1 + iVar10 * 0xc + 0x1534) + *(float *)((int)param_1 + 0x3c)
      ;
      *(float *)((int)param_1 + iVar10 * 0x214 + 0x490) = fVar15;
      *(float *)((int)param_1 + iVar10 * 0x214 + 0x494) = fVar2;
      *(float *)((int)param_1 + iVar10 * 0x214 + 0x498) = local_300;
    }
    else {
      fVar15 = *(float *)((int)param_1 + iVar10 * 0xc + 0x158c) +
               *(float *)((int)param_1 + iVar10 * 0xc + 0x152c);
      fVar2 = *(float *)((int)param_1 + iVar10 * 0xc + 0x1590) +
              *(float *)((int)param_1 + iVar10 * 0xc + 0x1530);
      local_308 = (double)CONCAT44(fVar2,fVar15);
      local_300 = *(float *)((int)param_1 + iVar10 * 0xc + 0x1594) +
                  *(float *)((int)param_1 + iVar10 * 0xc + 0x1534);
      *(float *)((int)param_1 + iVar10 * 0x214 + 0x490) = fVar15;
      *(float *)((int)param_1 + iVar10 * 0x214 + 0x494) = fVar2;
      *(undefined4 *)((int)param_1 + iVar10 * 0x214 + 0x498) = 0;
    }
    *(undefined4 *)(DAT_004b43c8 + 0x60) = *(undefined4 *)((int)param_1 + 0x16c8);
    FUN_0040b5e0();
    *(undefined4 *)(DAT_004b43c8 + 0x60) = 0;
    break;
  case 0x1f6:
    uVar26 = FUN_0041a900(0);
    uVar24 = FUN_0041a900(1);
    *(short *)((int)param_1 + (int)uVar26 * 0x214 + 0x48c) = (short)uVar24;
    uVar24 = FUN_0041a900(2);
    *(short *)((int)param_1 + (int)uVar26 * 0x214 + 0x48e) = (short)uVar24;
    break;
  case 0x1f7:
    uVar26 = FUN_0041a900(0);
    fVar23 = FUN_00468ec0(1.4013e-45);
    *(float *)((int)param_1 + (int)uVar26 * 0xc + 0x152c) = (float)fVar23;
    fVar23 = FUN_00468ec0(2.8026e-45);
    *(float *)((int)param_1 + ((int)uVar26 * 3 + 0x54c) * 4) = (float)fVar23;
    break;
  case 0x1f8:
    uVar26 = FUN_0041a900(0);
    fVar23 = FUN_00468ec0(1.4013e-45);
    *(float *)((int)param_1 + (int)uVar26 * 0x214 + 0x49c) = (float)fVar23;
    fVar23 = FUN_00468ec0(2.8026e-45);
    *(float *)((int)param_1 + (int)uVar26 * 0x214 + 0x4a0) = (float)fVar23;
    break;
  case 0x1f9:
    uVar26 = FUN_0041a900(0);
    fVar23 = FUN_00468ec0(1.4013e-45);
    *(float *)((int)param_1 + (int)uVar26 * 0x214 + 0x4a4) = (float)fVar23;
    fVar23 = FUN_00468ec0(2.8026e-45);
    *(float *)((int)param_1 + (int)uVar26 * 0x214 + 0x4a8) = (float)fVar23;
    break;
  case 0x1fa:
    uVar26 = FUN_0041a900(0);
    pvVar14 = (void *)((int)uVar26 * 0x214 + (int)param_1);
LAB_004180c5:
    uVar26 = FUN_0041a900(1);
    uVar4 = (undefined2)uVar26;
    uVar12 = 2;
    goto LAB_004180d4;
  case 0x1fb:
    uVar26 = FUN_0041a900(0);
    uVar24 = FUN_0041a900(1);
    *(short *)((int)uVar26 * 0x214 + 0x688 + (int)param_1) = (short)uVar24;
    break;
  case 0x1fc:
    uVar26 = FUN_0041a900(0);
    uVar24 = FUN_0041a900(1);
    *(int *)((int)param_1 + (int)uVar26 * 0x214 + 0x690) = (int)uVar24;
    uVar24 = FUN_0041a900(2);
    *(int *)((int)param_1 + (int)uVar26 * 0x214 + 0x694) = (int)uVar24;
    break;
  case 0x1fd:
    uVar26 = FUN_0041a900(0);
    uVar24 = FUN_0041a900(1);
    local_310 = (float *)((int)uVar26 * 0x214);
    pvVar14 = (void *)((int)((int)param_1 + (int)uVar24 * 0x18) + (int)local_310);
    uVar26 = FUN_0041a900(2);
    *(int *)((int)pvVar14 + 0x4c4) = (int)uVar26;
    uVar26 = FUN_0041a900(3);
    *(int *)((int)pvVar14 + 0x4c0) = (int)uVar26;
    uVar26 = FUN_0041a900(4);
    *(int *)((int)pvVar14 + 0x4b8) = (int)uVar26;
    uVar26 = FUN_0041a900(5);
    *(int *)((int)pvVar14 + 0x4bc) = (int)uVar26;
    fVar23 = (float10)FUN_0041a950(8.40779e-45);
    *(float *)((int)((int)param_1 + ((int)uVar24 * 3 + 0x96) * 8) + (int)local_310) = (float)fVar23;
    fVar23 = (float10)FUN_0041a950(9.80909e-45);
    *(float *)((int)pvVar14 + 0x4b4) = (float)fVar23;
    break;
  case 0x1fe:
    FUN_0040cf60((uint)pvVar14,param_2,1);
    FUN_00428750();
    break;
  case 0x1ff:
    uVar26 = FUN_0041a900(0);
    local_310 = (float *)uVar26;
    uVar24 = FUN_0041a900(1);
    iVar10 = (int)uVar24;
    puVar13 = (undefined4 *)(iVar10 * 0x214 + 0x48c + (int)param_1);
    puVar7 = (undefined4 *)((int)(float *)uVar26 * 0x214 + 0x48c + (int)param_1);
    for (iVar17 = 0x85; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar7 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)((int)param_1 + (int)local_310 * 0xc + 0x152c) =
         *(undefined4 *)((int)param_1 + iVar10 * 0xc + 0x152c);
    *(undefined4 *)((int)param_1 + (int)local_310 * 0xc + 0x1530) =
         *(undefined4 *)((int)param_1 + iVar10 * 0xc + 0x1530);
    *(undefined4 *)((int)param_1 + (int)local_310 * 0xc + 0x1534) =
         *(undefined4 *)((int)param_1 + iVar10 * 0xc + 0x1534);
    puVar7 = (undefined4 *)((int)param_1 + iVar10 * 0xc + 0x158c);
    puVar13 = (undefined4 *)((int)param_1 + (int)local_310 * 0xc + 0x158c);
    goto LAB_004174d7;
  case 0x200:
    fVar23 = (float10)FUN_0041a950(0.0);
    local_31c = (float *)(float)fVar23;
    FUN_0040caa0(extraout_ECX_35,extraout_EDX_00,(float)local_31c,1,0);
    FUN_004286f0(local_31c,1,1);
    break;
  case 0x201:
    fVar23 = (float10)FUN_0041a950(0.0);
    local_31c = (float *)(float)fVar23;
    FUN_0040caa0(extraout_ECX_36,extraout_EDX_01,(float)local_31c,0,0);
    FUN_004286f0(local_31c,0,1);
    break;
  case 0x202:
    uVar26 = FUN_0041a900(0);
    pvVar14 = (void *)((int)uVar26 * 0x214 + (int)param_1);
    if (0x1ff < DAT_004b0ccc) {
      fVar23 = (float10)FUN_0041a950(7.00649e-45);
      *(float *)((int)pvVar14 + 0x4a4) = (float)fVar23;
      fVar23 = (float10)FUN_0041a950(8.40779e-45);
      *(float *)((int)pvVar14 + 0x4a8) = (float)fVar23;
      break;
    }
    bVar20 = SBORROW4(DAT_004b0ccc,-0x200);
    iVar10 = DAT_004b0ccc + 0x200;
LAB_00418264:
    if (bVar20 != iVar10 < 0) {
      fVar23 = (float10)FUN_0041a950(1.4013e-45);
      *(float *)((int)pvVar14 + 0x4a4) = (float)fVar23;
      fVar23 = (float10)FUN_0041a950(2.8026e-45);
      *(float *)((int)pvVar14 + 0x4a8) = (float)fVar23;
      break;
    }
    fVar23 = (float10)FUN_0041a950(4.2039e-45);
    fVar15 = 5.60519e-45;
    goto LAB_00418275;
  case 0x203:
    uVar26 = FUN_0041a900(0);
    pvVar14 = (void *)((int)uVar26 * 0x214 + (int)param_1);
    if (DAT_004b0ccc < 600) {
      if (DAT_004b0ccc < 200) {
        if (DAT_004b0ccc < -200) {
          bVar20 = SBORROW4(DAT_004b0ccc,-600);
          iVar10 = DAT_004b0ccc + 600;
          goto LAB_00418264;
        }
        fVar23 = (float10)FUN_0041a950(7.00649e-45);
        fVar15 = 8.40779e-45;
      }
      else {
        fVar23 = (float10)FUN_0041a950(9.80909e-45);
        fVar15 = 1.12104e-44;
      }
    }
    else {
      fVar23 = (float10)FUN_0041a950(1.26117e-44);
      fVar15 = 1.4013e-44;
    }
LAB_00418275:
    *(float *)((int)pvVar14 + 0x4a4) = (float)fVar23;
    fVar23 = (float10)FUN_0041a950(fVar15);
    *(float *)((int)pvVar14 + 0x4a8) = (float)fVar23;
    break;
  case 0x204:
    uVar26 = FUN_0041a900(0);
    fVar23 = (float10)FUN_0041a950(1.4013e-45);
    local_2ec = (float *)(float)fVar23;
    fVar23 = (float10)FUN_0041a950(2.8026e-45);
    local_2e0 = (float)fVar23;
    fVar23 = (float10)FUN_0041a950(4.2039e-45);
    local_310 = (float *)(float)fVar23;
    fVar23 = (float10)FUN_0041a950(5.60519e-45);
    local_2d8 = (float)fVar23;
    *(float *)((int)param_1 + (int)uVar26 * 0x214 + 0x4a4) =
         ((float)local_310 - (float)local_2ec) * ((float)DAT_004b0ccc + 1024.0) * 0.00048828125 +
         (float)local_2ec;
    *(float *)((int)param_1 + (int)uVar26 * 0x214 + 0x4a8) =
         (local_2d8 - local_2e0) * ((float)DAT_004b0ccc + 1024.0) * 0.00048828125 + local_2e0;
    break;
  case 0x205:
    uVar26 = FUN_0041a900(0);
    iVar10 = (int)uVar26;
    if (DAT_004b0ccc < 0x200) {
      bVar20 = SBORROW4(DAT_004b0ccc,-0x200);
      iVar17 = DAT_004b0ccc + 0x200;
LAB_0041841b:
      pvVar14 = (void *)(iVar10 * 0x214 + (int)param_1);
      if (bVar20 != iVar17 < 0) goto LAB_004180c5;
      uVar26 = FUN_0041a900(3);
      uVar4 = (undefined2)uVar26;
      uVar12 = 4;
    }
    else {
LAB_004183f0:
      pvVar14 = (void *)(iVar10 * 0x214 + (int)param_1);
      uVar26 = FUN_0041a900(5);
      uVar4 = (undefined2)uVar26;
      uVar12 = 6;
    }
    goto LAB_004180d4;
  case 0x206:
    uVar26 = FUN_0041a900(0);
    iVar10 = (int)uVar26;
    if (DAT_004b0ccc < 600) {
      if (DAT_004b0ccc < 200) {
        if (DAT_004b0ccc < -200) {
          bVar20 = SBORROW4(DAT_004b0ccc,-600);
          iVar17 = DAT_004b0ccc + 600;
          goto LAB_0041841b;
        }
        goto LAB_004183f0;
      }
      pvVar14 = (void *)(iVar10 * 0x214 + (int)param_1);
      uVar26 = FUN_0041a900(7);
      uVar4 = (undefined2)uVar26;
      uVar12 = 8;
    }
    else {
      pvVar14 = (void *)(iVar10 * 0x214 + (int)param_1);
      uVar26 = FUN_0041a900(9);
      uVar4 = (undefined2)uVar26;
      uVar12 = 10;
    }
LAB_004180d4:
    *(undefined2 *)((int)pvVar14 + 0x684) = uVar4;
    uVar26 = FUN_0041a900(uVar12);
    *(short *)((int)pvVar14 + 0x686) = (short)uVar26;
    break;
  case 0x207:
    uVar26 = FUN_0041a900(0);
    uVar24 = FUN_0041a900(1);
    uVar25 = FUN_0041a900(2);
    local_2ec = (float *)uVar25;
    uVar25 = FUN_0041a900(3);
    local_310 = (float *)uVar25;
    uVar25 = FUN_0041a900(4);
    iVar17 = (int)uVar26 * 0x214;
    iVar10 = ((int)local_310 - (int)uVar24) * (DAT_004b0ccc + 0x400);
    *(short *)(iVar17 + 0x684 + (int)param_1) =
         (short)((int)(iVar10 + (iVar10 >> 0x1f & 0x7ffU)) >> 0xb) + (short)uVar24;
    iVar10 = ((int)uVar25 - (int)local_2ec) * (DAT_004b0ccc + 0x400);
    *(short *)((int)param_1 + iVar17 + 0x686) =
         (short)((int)(iVar10 + (iVar10 >> 0x1f & 0x7ffU)) >> 0xb) + (short)local_2ec;
    break;
  case 0x208:
    local_308 = (double)*(float *)(DAT_004b4514 + 0x97c);
    local_2d0 = (double)*(float *)(DAT_004b4514 + 0x980);
    fVar23 = (float10)FUN_0041a950(1.4013e-45);
    pfVar11 = (float *)(float)((float10)local_308 - fVar23);
    local_310 = pfVar11;
    fVar23 = (float10)FUN_0041a950(2.8026e-45);
    local_310 = (float *)(float)((float10)local_2d0 - fVar23);
    fVar23 = FUN_004088c0(extraout_ECX_39,extraout_DL,local_310,pfVar11);
    local_310 = (float *)(float)fVar23;
    pfVar11 = (float *)FUN_0041a960(0);
    pfVar18 = local_310;
LAB_00419629:
    *pfVar11 = (float)pfVar18;
    break;
  case 0x209:
    uVar26 = FUN_0041a900(0);
    if (DAT_004b0ca8 == 0) {
      fVar15 = 1.4013e-45;
    }
    else if (DAT_004b0ca8 == 1) {
      fVar15 = 2.8026e-45;
    }
    else {
      fVar15 = 4.2039e-45;
      if (DAT_004b0ca8 != 2) {
        fVar15 = 5.60519e-45;
      }
    }
    fVar23 = FUN_00468ec0(fVar15);
    iVar10 = (int)uVar26 * 0x214;
    local_2f8 = (void *)(float)fVar23;
    *(void **)(iVar10 + 0x4a4 + (int)param_1) = local_2f8;
    if (DAT_004b0ca8 == 0) {
      fVar15 = 7.00649e-45;
    }
    else if (DAT_004b0ca8 == 1) {
      fVar15 = 8.40779e-45;
    }
    else {
      fVar15 = 9.80909e-45;
      if (DAT_004b0ca8 != 2) {
        fVar15 = 1.12104e-44;
      }
    }
    fVar23 = FUN_00468ec0(fVar15);
    local_2f8 = (void *)(float)fVar23;
    *(void **)((int)param_1 + iVar10 + 0x4a8) = local_2f8;
    break;
  case 0x20a:
    uVar26 = FUN_0041a900(0);
    if (DAT_004b0ca8 == 0) {
      uVar12 = 1;
    }
    else if (DAT_004b0ca8 == 1) {
      uVar12 = 2;
    }
    else {
      uVar12 = 3;
      if (DAT_004b0ca8 != 2) {
        uVar12 = 4;
      }
    }
    uVar24 = FUN_0041a900(uVar12);
    *(short *)((int)param_1 + (int)uVar26 * 0x214 + 0x684) = (short)uVar24;
    if (DAT_004b0ca8 == 0) {
      uVar12 = 5;
    }
    else if (DAT_004b0ca8 == 1) {
      uVar12 = 6;
    }
    else {
      uVar12 = 7;
      if (DAT_004b0ca8 != 2) {
        uVar12 = 8;
      }
    }
    uVar24 = FUN_0041a900(uVar12);
    *(short *)((int)param_1 + (int)uVar26 * 0x214 + 0x686) = (short)uVar24;
    break;
  case 0x20b:
    uVar26 = FUN_0041a900(0);
    fVar23 = FUN_00468ec0(1.4013e-45);
    local_2ec = (float *)(float)fVar23;
    fVar23 = FUN_00468ec0(2.8026e-45);
    local_310 = (float *)(float)fVar23;
    FUN_0041c580(&local_308,(float)local_2ec,(float)local_310);
    *(float *)((int)param_1 + (int)uVar26 * 0xc + 0x152c) = (float)local_308;
  local_308__u_alias = (local_308__u *)&local_308;
    *(float *)((int)param_1 + ((int)uVar26 * 3 + 0x54c) * 4) = local_308__u_alias->_4_4_;
    break;
  case 0x20c:
    uVar26 = FUN_0041a900(0);
    fVar23 = FUN_00468ec0(1.4013e-45);
    *(float *)((int)uVar26 * 0x214 + 0x4ac + (int)param_1) = (float)fVar23;
    break;
  case 0x20d:
    uVar26 = FUN_0041a900(0);
    iVar10 = (int)uVar26;
    fVar23 = FUN_00468ec0(1.4013e-45);
    *(float *)((int)param_1 + iVar10 * 0xc + 0x158c) = (float)fVar23;
    fVar23 = FUN_00468ec0(2.8026e-45);
    *(float *)((int)param_1 + (iVar10 * 3 + 0x564) * 4) = (float)fVar23;
    fVar15 = *(float *)((int)param_1 + iVar10 * 0xc + 0x158c);
    if (fVar15 < -990.0 == NAN(fVar15)) {
      *(undefined4 *)((int)param_1 + iVar10 * 0xc + 0x1594) = 0x3f800000;
    }
    else {
      *(undefined4 *)((int)param_1 + iVar10 * 0xc + 0x1594) = 0;
    }
    break;
  case 0x20e:
    if (*(int *)((int)param_1 + 0x1750) != 0) {
      FUN_00402f20();
    }
    *(undefined4 *)((int)param_1 + 0x1750) = 0;
    fVar23 = (float10)FUN_0041a950(0.0);
    *(float *)((int)param_1 + 0x1754) = (float)fVar23;
    *(undefined4 *)((int)param_1 + 0x1758) = 0x41800000;
    uVar26 = FUN_0041a900(1);
    *(int *)((int)param_1 + 0x175c) = (int)uVar26;
    FUN_004061b0(0.0);
    FUN_004061b0(0.0);
    if (0.0 < *(float *)((int)param_1 + 0x1754) != NAN(*(float *)((int)param_1 + 0x1754))) {
      local_310 = (float *)operator_new(0x18);
      uStack_c = 0;
      if (local_310 == (float *)0x0) {
        *(undefined4 *)((int)param_1 + 0x1750) = 0;
      }
      else {
        uVar12 = FUN_0040ff10(0x11);
        *(undefined4 *)((int)param_1 + 0x1750) = uVar12;
      }
    }
    break;
  case 0x20f:
    uVar26 = FUN_0041a900(0);
    FUN_004055d0(extraout_ECX_40,(int)uVar26);
    break;
  case 0x210:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    *(uint *)(DAT_004b43dc + 0x3c) =
         *(uint *)(DAT_004b43dc + 0x3c) ^ (*(uint *)(DAT_004b43dc + 0x3c) ^ (uint)uVar26) & 1;
    break;
  case 0x211:
    uVar26 = FUN_0041a900(0);
    *(undefined4 *)((int)param_1 + 0x1768) = *(undefined4 *)(&DAT_004af0fc + (int)uVar26 * 4);
    break;
  case 0x212:
    uVar26 = FUN_0041a900(0);
    *(undefined4 *)((int)param_1 + 0x176c) = *(undefined4 *)(&DAT_004af118 + (int)uVar26 * 4);
    break;
  case 0x213:
    uVar26 = FUN_0041a900(0);
    *(undefined4 *)((int)param_1 + 6000) = *(undefined4 *)(&DAT_004af120 + (int)uVar26 * 4);
    break;
  case 0x214:
    fVar23 = (float10)FUN_0041a950(0.0);
    local_31c = (float *)(float)fVar23;
    FUN_0040caa0(extraout_ECX_37,extraout_EDX_02,(float)local_31c,1,1);
    FUN_004286f0(local_31c,1,1);
    break;
  case 0x215:
    fVar23 = (float10)FUN_0041a950(0.0);
    local_31c = (float *)(float)fVar23;
    FUN_0040caa0(extraout_ECX_38,extraout_EDX_03,(float)local_31c,0,1);
    FUN_004286f0(local_31c,0,1);
    break;
  case 0x216:
    uVar26 = FUN_0041a900(0);
    (**(code **)(&DAT_004af0fc + (int)uVar26 * 4))();
    break;
  case 0x217:
    uVar26 = FUN_00468e20(pvVar14,*(int *)(iVar10 + 4),0);
    FUN_0040e730(&DAT_004b0c40,(int)uVar26);
    FUN_0043e250((undefined4 *)((int)param_1 + 0x34),0xffffffff);
    break;
  case 600:
    uVar26 = FUN_0041a900(0);
    iVar10 = (int)uVar26;
    fVar23 = (float10)FUN_0041a950(1.4013e-45);
    *(float *)((int)param_1 + iVar10 * 0x214 + 0x490) = (float)fVar23;
    fVar23 = (float10)FUN_0041a950(2.8026e-45);
    *(float *)((int)param_1 + iVar10 * 0x214 + 0x494) = (float)fVar23;
    fVar23 = (float10)FUN_0041a950(4.2039e-45);
    *(float *)((int)param_1 + iVar10 * 0x214 + 0x498) = (float)fVar23;
    fVar23 = (float10)FUN_0041a950(5.60519e-45);
    *(float *)((int)param_1 + iVar10 * 0x214 + 0x660) = (float)fVar23;
    break;
  case 0x259:
    uVar26 = FUN_0041a900(0);
    iVar10 = (int)uVar26;
    uVar26 = FUN_0041a900(1);
    *(int *)((int)param_1 + iVar10 * 0x214 + 0x670) = (int)uVar26;
    uVar26 = FUN_0041a900(2);
    *(int *)((int)param_1 + iVar10 * 0x214 + 0x674) = (int)uVar26;
    uVar26 = FUN_0041a900(3);
    *(int *)((int)param_1 + iVar10 * 0x214 + 0x678) = (int)uVar26;
    uVar26 = FUN_0041a900(4);
    *(int *)((int)param_1 + iVar10 * 0x214 + 0x67c) = (int)uVar26;
    uVar26 = FUN_0041a900(5);
    *(int *)((int)param_1 + iVar10 * 0x214 + 0x680) = (int)uVar26;
    break;
  case 0x25a:
    _memset(&local_2a8,0,0x1e8);
    uVar26 = FUN_0041a900(0);
    iVar10 = (int)uVar26;
    pfVar16 = (float *)(iVar10 * 0x214 + (int)param_1);
    pfVar11 = pfVar16 + 300;
    pfVar18 = local_280 + 2;
    for (iVar17 = 0x6c; iVar17 != 0; iVar17 = iVar17 + -1) {
      *pfVar18 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar18 = pfVar18 + 1;
    }
    fVar15 = *(float *)((int)param_1 + iVar10 * 0xc + 0x152c);
    if (*(float *)((int)param_1 + iVar10 * 0xc + 0x1594) <= 0.9) {
      local_308 = (double)CONCAT44(*(float *)((int)param_1 + iVar10 * 0xc + 0x1530) +
                                   *(float *)((int)param_1 + 0x38),
                                   fVar15 + *(float *)((int)param_1 + 0x34));
      local_300 = *(float *)((int)param_1 + iVar10 * 0xc + 0x1534) + *(float *)((int)param_1 + 0x3c)
      ;
      local_2a0 = local_300;
    }
    else {
      local_308 = (double)CONCAT44(*(float *)((int)param_1 + iVar10 * 0xc + 0x1530) +
                                   *(float *)((int)param_1 + iVar10 * 0xc + 0x1590),
                                   fVar15 + *(float *)((int)param_1 + iVar10 * 0xc + 0x158c));
      local_300 = *(float *)((int)param_1 + iVar10 * 0xc + 0x1534) +
                  *(float *)((int)param_1 + iVar10 * 0xc + 0x1594);
      local_2a0 = 0.0;
    }
  local_308__u_alias = (local_308__u *)&local_308;
    local_2a4 = local_308__u_alias->_4_4_;
    local_2a8 = (float)local_308;
    local_284 = pfVar16[0x123];
    local_310 = pfVar16;
    fVar23 = FUN_004646e0(pfVar16[0x127]);
    local_c8 = pfVar16[0x1a4];
    local_29c = (float)fVar23;
    local_288 = pfVar16[0x129];
    local_c4 = pfVar16[0x1a5];
    local_280[1] = (float)((uint)local_280[1] | 1);
    local_294 = pfVar16[0x124];
    local_298 = pfVar16[0x125];
    local_290 = pfVar16[0x126];
    local_28c = pfVar16[0x198];
    local_280[0] = pfVar16[299];
    FUN_00428450(0);
    break;
  case 0x25b:
    FUN_004128e0();
    uVar26 = FUN_0041a900(0);
    iVar10 = (int)uVar26;
    pfVar16 = (float *)(iVar10 * 0x214 + (int)param_1);
    pfVar11 = pfVar16 + 300;
    pfVar18 = local_250;
    for (iVar17 = 0x6c; iVar17 != 0; iVar17 = iVar17 + -1) {
      *pfVar18 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar18 = pfVar18 + 1;
    }
    fVar15 = *(float *)((int)param_1 + iVar10 * 0xc + 0x152c);
    if (*(float *)((int)param_1 + iVar10 * 0xc + 0x1594) <= 0.9) {
      local_308 = (double)CONCAT44(*(float *)((int)param_1 + iVar10 * 0xc + 0x1530) +
                                   *(float *)((int)param_1 + 0x38),
                                   fVar15 + *(float *)((int)param_1 + 0x34));
      local_300 = *(float *)((int)param_1 + iVar10 * 0xc + 0x1534) + *(float *)((int)param_1 + 0x3c)
      ;
      local_2a0 = local_300;
    }
    else {
      local_308 = (double)CONCAT44(*(float *)((int)param_1 + iVar10 * 0xc + 0x1530) +
                                   *(float *)((int)param_1 + iVar10 * 0xc + 0x1590),
                                   fVar15 + *(float *)((int)param_1 + iVar10 * 0xc + 0x158c));
      local_300 = *(float *)((int)param_1 + iVar10 * 0xc + 0x1534) +
                  *(float *)((int)param_1 + iVar10 * 0xc + 0x1594);
      local_2a0 = 0.0;
    }
  local_308__u_alias = (local_308__u *)&local_308;
    local_2a4 = local_308__u_alias->_4_4_;
    local_256 = *(undefined2 *)((int)pfVar16 + 0x48e);
    local_2a8 = (float)local_308;
    local_258 = *(undefined2 *)(pfVar16 + 0x123);
    local_310 = pfVar16;
    fVar23 = FUN_004646e0(pfVar16[0x127]);
    local_280[3] = pfVar16[0x19d];
    local_290 = (float)fVar23;
    local_280[1] = pfVar16[0x129];
    local_280[2] = pfVar16[0x19c];
    local_280[4] = pfVar16[0x19e];
    local_284 = pfVar16[0x124];
    local_288 = pfVar16[0x125];
    local_280[5] = pfVar16[0x19f];
    local_280[0] = pfVar16[0x198];
    local_268 = pfVar16[0x1a4];
    local_25c = pfVar16[299];
    local_254 = (uint)pfVar16[0x1a0] | 2;
    local_264 = pfVar16[0x1a5];
    uVar26 = FUN_0041a900(1);
    local_260 = (undefined4)uVar26;
    FUN_00428450(1);
    break;
  case 0x25c:
    uVar26 = FUN_0041a900(0);
    iVar10 = FUN_00412960((int)uVar26);
    if (iVar10 != 0) {
      fVar23 = (float10)FUN_0041a950(1.4013e-45);
  local_308__u_alias = (local_308__u *)&local_308;
      local_308 = (double)CONCAT44(local_308__u_alias->_4_4_,(float)fVar23);
      fVar23 = (float10)FUN_0041a950(2.8026e-45);
      local_308 = (double)CONCAT44((float)fVar23,(float)local_308);
      local_300 = 0.0;
      *(float *)(iVar10 + 0x50) = (float)local_308;
      *(float *)(iVar10 + 0x54) = (float)fVar23;
      *(undefined4 *)(iVar10 + 0x58) = 0;
    }
    break;
  case 0x25d:
    uVar26 = FUN_0041a900(0);
    iVar10 = FUN_00412960((int)uVar26);
    if (iVar10 != 0) {
      fVar23 = (float10)FUN_0041a950(1.4013e-45);
  local_308__u_alias = (local_308__u *)&local_308;
      local_308 = (double)CONCAT44(local_308__u_alias->_4_4_,(float)fVar23);
      fVar23 = (float10)FUN_0041a950(2.8026e-45);
      local_308 = (double)CONCAT44((float)fVar23,(float)local_308);
      local_300 = 0.0;
      FUN_00412900(iVar10);
    }
    break;
  case 0x25e:
    uVar26 = FUN_0041a900(0);
    iVar10 = FUN_00412960((int)uVar26);
    if (iVar10 != 0) {
      fVar23 = (float10)FUN_0041a950(1.4013e-45);
      *(float *)(iVar10 + 0x74) = (float)fVar23;
    }
    break;
  case 0x25f:
    uVar26 = FUN_0041a900(0);
    iVar10 = FUN_00412960((int)uVar26);
    if (iVar10 != 0) {
      fVar23 = (float10)FUN_0041a950(1.4013e-45);
      *(float *)(iVar10 + 0x70) = (float)fVar23;
    }
    break;
  case 0x260:
    uVar26 = FUN_0041a900(0);
    iVar10 = FUN_00412960((int)uVar26);
    if (iVar10 != 0) {
      fVar23 = (float10)FUN_0041a950(1.4013e-45);
      *(float *)(iVar10 + 0x68) = (float)fVar23;
    }
    break;
  case 0x261:
    uVar26 = FUN_0041a900(0);
    iVar10 = FUN_00412960((int)uVar26);
    if (iVar10 != 0) {
      fVar23 = (float10)FUN_0041a950(1.4013e-45);
      *(float *)(iVar10 + 0x470) = (float)fVar23;
    }
    break;
  case 0x262:
    uVar26 = FUN_0041a900(0);
    piVar9 = (int *)FUN_00412960((int)uVar26);
    while (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x14))(0,0,uVar5);
      piVar9[0x20] = 0;
      uVar26 = FUN_0041a900(0);
      piVar9 = (int *)FUN_00412960((int)uVar26);
    }
    break;
  case 0x263:
    _memset(&local_2a8,0,0x1e0);
    uVar26 = FUN_0041a900(0);
    iVar10 = (int)uVar26;
    pfVar16 = (float *)(iVar10 * 0x214 + (int)param_1);
    pfVar11 = pfVar16 + 300;
    pfVar18 = local_280;
    for (iVar17 = 0x6c; iVar17 != 0; iVar17 = iVar17 + -1) {
      *pfVar18 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar18 = pfVar18 + 1;
    }
    fVar15 = *(float *)((int)param_1 + iVar10 * 0xc + 0x152c);
    if (*(float *)((int)param_1 + iVar10 * 0xc + 0x1594) <= 0.9) {
      local_308 = (double)CONCAT44(*(float *)((int)param_1 + iVar10 * 0xc + 0x1530) +
                                   *(float *)((int)param_1 + 0x38),
                                   fVar15 + *(float *)((int)param_1 + 0x34));
      local_300 = *(float *)((int)param_1 + iVar10 * 0xc + 0x1534) + *(float *)((int)param_1 + 0x3c)
      ;
      local_2a0 = local_300;
    }
    else {
      local_308 = (double)CONCAT44(*(float *)((int)param_1 + iVar10 * 0xc + 0x1530) +
                                   *(float *)((int)param_1 + iVar10 * 0xc + 0x1590),
                                   fVar15 + *(float *)((int)param_1 + iVar10 * 0xc + 0x158c));
      local_300 = *(float *)((int)param_1 + iVar10 * 0xc + 0x1534) +
                  *(float *)((int)param_1 + iVar10 * 0xc + 0x1594);
      local_2a0 = 0.0;
    }
  local_308__u_alias = (local_308__u *)&local_308;
    local_2a4 = local_308__u_alias->_4_4_;
    local_2a8 = (float)local_308;
    local_290 = pfVar16[0x123];
    local_310 = pfVar16;
    fVar23 = FUN_004646e0(pfVar16[0x127]);
    local_28c = pfVar16[0x19c];
    local_29c = (float)fVar23;
    local_294 = pfVar16[0x129];
    local_d0 = pfVar16[0x1a4];
    local_cc = pfVar16[0x1a5];
    local_298 = pfVar16[0x198];
    local_284 = (float)((uint)local_284 | 1);
    local_288 = pfVar16[299];
    FUN_00428450(2);
  }
switchD_00417c29_caseD_5:
  *unaff_FS_OFFSET = local_14;
  ___security_check_cookie_4(local_1c ^ (uint)&local_31c);
  return;
switchD_00415546_caseD_19d:
  FUN_004067e0(0);
  goto switchD_00417c29_caseD_5;
switchD_00415546_caseD_10e:
  iVar10 = (int)((int)pfVar11[4] + 4 + ((int)pfVar11[4] + 4 >> 0x1f & 3U)) >> 2;
  _memset(&local_a0,0,0x50);
  fVar23 = FUN_0041a9b0(1,pfVar11[iVar10 + 4]);
  local_a0 = (float)(fVar23 + (float10)_DAT_004ceaec);
  fVar23 = FUN_0041a9b0(2,pfVar11[iVar10 + 5]);
  local_9c = (float)(fVar23 + (float10)_DAT_004ceaf0);
  fVar23 = FUN_0041a9b0(3,pfVar11[iVar10 + 6]);
  local_98 = (float)fVar23;
  uVar26 = FUN_0041a970(param_1,4);
  local_8c = (undefined4)uVar26;
  uVar26 = FUN_0041a970(param_1,5);
  local_94 = (undefined4)uVar26;
  uVar26 = FUN_0041a970(param_1,6);
  local_90 = (undefined4)uVar26;
  puVar13 = (undefined4 *)((int)param_1 + 0x23c);
  pbVar19 = local_80;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pbVar19 = *puVar13;
    puVar13 = puVar13 + 1;
    pbVar19 = pbVar19 + 4;
  }
  local_84 = local_84 | 1;
  FUN_00412990((byte *)(local_314 + 5),&local_a0);
  goto switchD_00417c29_caseD_5;
switchD_00415546_caseD_105:
  iVar10 = (int)((int)pfVar11[4] + 4 + ((int)pfVar11[4] + 4 >> 0x1f & 3U)) >> 2;
  _memset(&local_a0,0,0x50);
  fVar23 = FUN_0041a9b0(1,pfVar11[iVar10 + 4]);
  local_a0 = (float)fVar23;
  fVar23 = FUN_0041a9b0(2,pfVar11[iVar10 + 5]);
  local_9c = (float)fVar23;
  uVar26 = FUN_0041a970(param_1,3);
  local_8c = (undefined4)uVar26;
  uVar26 = FUN_0041a970(param_1,4);
  local_94 = (undefined4)uVar26;
  uVar26 = FUN_0041a970(param_1,5);
  local_90 = (undefined4)uVar26;
  puVar13 = (undefined4 *)((int)param_1 + 0x23c);
  pbVar19 = local_80;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pbVar19 = *puVar13;
    puVar13 = puVar13 + 1;
    pbVar19 = pbVar19 + 4;
  }
  local_88 = 1;
  FUN_00412990((byte *)(local_314 + 5),&local_a0);
  goto switchD_00417c29_caseD_5;
switchD_00415546_caseD_104:
  iVar10 = (int)((int)pfVar11[4] + 4 + ((int)pfVar11[4] + 4 >> 0x1f & 3U)) >> 2;
  _memset(&local_a0,0,0x50);
  local_31c = *(float **)((int)param_1 + 0x34);
  fVar23 = FUN_0041a9b0(1,pfVar11[iVar10 + 4]);
  local_a0 = (float)(fVar23 + (float10)(float)local_31c);
  local_31c = *(float **)((int)param_1 + 0x38);
  fVar23 = FUN_0041a9b0(2,pfVar11[iVar10 + 5]);
  local_9c = (float)(fVar23 + (float10)(float)local_31c);
  uVar26 = FUN_0041a970(param_1,3);
  local_8c = (undefined4)uVar26;
  uVar26 = FUN_0041a970(param_1,4);
  local_94 = (undefined4)uVar26;
  uVar26 = FUN_0041a970(param_1,5);
  local_90 = (undefined4)uVar26;
  puVar13 = (undefined4 *)((int)param_1 + 0x23c);
  pbVar19 = local_80;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pbVar19 = *puVar13;
    puVar13 = puVar13 + 1;
    pbVar19 = pbVar19 + 4;
  }
  local_88 = 1;
  goto LAB_004156cc;
switchD_00415546_caseD_101:
  iVar10 = (int)((int)pfVar11[4] + 4 + ((int)pfVar11[4] + 4 >> 0x1f & 3U)) >> 2;
  _memset(&local_a0,0,0x50);
  fVar23 = FUN_0041a9b0(1,pfVar11[iVar10 + 4]);
  local_a0 = (float)fVar23;
  fVar23 = FUN_0041a9b0(2,pfVar11[iVar10 + 5]);
  local_9c = (float)fVar23;
  uVar26 = FUN_0041a970(param_1,3);
  local_8c = (undefined4)uVar26;
  uVar26 = FUN_0041a970(param_1,4);
  local_94 = (undefined4)uVar26;
  uVar26 = FUN_0041a970(param_1,5);
  local_90 = (undefined4)uVar26;
  puVar13 = (undefined4 *)((int)param_1 + 0x23c);
  pbVar19 = local_80;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pbVar19 = *puVar13;
    puVar13 = puVar13 + 1;
    pbVar19 = pbVar19 + 4;
  }
  FUN_00412990((byte *)(local_314 + 5),&local_a0);
  goto switchD_00417c29_caseD_5;
switchD_00415546_caseD_100:
  iVar10 = (int)((int)pfVar11[4] + 4 + ((int)pfVar11[4] + 4 >> 0x1f & 3U)) >> 2;
  _memset(&local_a0,0,0x50);
  pfVar11 = local_314;
  local_31c = *(float **)((int)param_1 + 0x34);
  if ((*(uint *)((int)param_1 + 0x16b8) & 0x2000000) == 0) {
    fVar23 = FUN_0041a9b0(1,local_314[iVar10 + 4]);
    local_a0 = (float)(fVar23 + (float10)(float)local_31c);
    local_31c = *(float **)((int)param_1 + 0x38);
    fVar23 = FUN_0041a9b0(2,pfVar11[iVar10 + 5]);
    local_9c = (float)(fVar23 + (float10)(float)local_31c);
  }
  else {
    fVar23 = FUN_0041a9b0(1,local_314[iVar10 + 4]);
  local_308__u_alias = (local_308__u *)&local_308;
    local_308 = (double)CONCAT44(local_308__u_alias->_4_4_,(float)(fVar23 + (float10)(float)local_31c));
    local_31c = *(float **)((int)param_1 + 0x38);
    fVar23 = FUN_0041a9b0(2,pfVar11[iVar10 + 5]);
    local_308 = (double)CONCAT44((float)(fVar23 + (float10)(float)local_31c),(float)local_308);
    local_300 = *(float *)((int)param_1 + 0x3c);
    FUN_00402410();
    D3DXVec3Project(&local_a0,&local_308,&DAT_004cebb8,&DAT_004ceb78,&DAT_004ceb38,&DAT_004b0e88);
    local_a0 = local_a0 - 224.0;
    local_9c = local_9c - 16.0;
    local_98 = 0.0;
    param_1 = local_2f8;
  }
  uVar26 = FUN_0041a970(param_1,3);
  local_8c = (undefined4)uVar26;
  uVar26 = FUN_0041a970(param_1,4);
  local_94 = (undefined4)uVar26;
  uVar26 = FUN_0041a970(param_1,5);
  local_90 = (undefined4)uVar26;
  puVar13 = (undefined4 *)((int)param_1 + 0x23c);
  pbVar19 = local_80;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pbVar19 = *puVar13;
    puVar13 = puVar13 + 1;
    pbVar19 = pbVar19 + 4;
  }
LAB_004156cc:
  FUN_00412990((byte *)(local_314 + 5),&local_a0);
  goto switchD_00417c29_caseD_5;
}


