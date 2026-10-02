/* undefined4 __fastcall FUN_0040cf60(uint param_1, int * param_2, int param_3) @ 0040cf60  717 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0040cf60(uint param_1,int *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  void *this;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  void *pvVar12;
  int *piVar13;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar14;
  uint *puVar15;
  int local_48;
  
  iVar11 = DAT_004b43c8;
  puVar15 = (uint *)(DAT_004b43c8 + 100);
  if ((((*(byte *)(DAT_004b43cc + 0x7c) & 1) == 0) || (*(int *)(DAT_004b43cc + 0x78) < 0x60)) ||
     (99 < *(int *)(DAT_004b43cc + 0x78))) {
    local_48 = 2000;
    fVar5 = *(float *)(DAT_004b43c8 + 0x50) * 0.5;
    fVar6 = *(float *)(DAT_004b43c8 + 0x54) * 0.5;
    fVar2 = *(float *)(DAT_004b43c8 + 0x44);
    fVar3 = *(float *)(DAT_004b43c8 + 0x48);
    fVar9 = *(float *)(DAT_004b43c8 + 0x44) + fVar5;
    fVar10 = fVar6 + *(float *)(DAT_004b43c8 + 0x48);
    do {
      if ((*(short *)((int)puVar15 + 0x532) != 0) && (*(short *)((int)puVar15 + 0x532) != 3)) {
        pfVar1 = (float *)(puVar15 + 0x12f);
        fVar8 = *pfVar1 - (float)puVar15[0x137] * 0.5;
        fVar7 = (float)puVar15[0x130] - (float)puVar15[0x138] * 0.5;
        if (((fVar2 - fVar5 <= *pfVar1 + (float)puVar15[0x137] * 0.5) &&
            ((fVar9 < fVar8 == (NAN(fVar9) || NAN(fVar8)) &&
             (fVar3 - fVar6 <= (float)puVar15[0x138] * 0.5 + (float)puVar15[0x130])))) &&
           (fVar10 < fVar7 == (NAN(fVar10) || NAN(fVar7)))) {
          *puVar15 = *puVar15 | 8;
          if (param_3 != 0) {
            FUN_004273f0(param_1,param_2,9,pfVar1,-1.5707964,0.6);
          }
          this = *(void **)(&DAT_004debdc + iVar11);
          if ((DAT_004cee78 & 0x8000) != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
            DAT_004cf221 = DAT_004cf221 + '\x01';
          }
          piVar13 = (int *)((int)this + 0x130);
          *piVar13 = *piVar13 + 1;
          pvVar12 = FUN_004621c0();
          *(uint *)((int)pvVar12 + 0x480) = *(uint *)((int)pvVar12 + 0x480) | 1;
          *(undefined4 *)((int)pvVar12 + 0x20) = 0x17;
          if (pfVar1 == (float *)0x0) {
            *(undefined4 *)((int)pvVar12 + 0x430) = 0;
            *(undefined4 *)((int)pvVar12 + 0x434) = 0;
            *(undefined4 *)((int)pvVar12 + 0x438) = 0;
          }
          else {
            *(float *)((int)pvVar12 + 0x430) = *pfVar1 + 32.0 + 192.0;
            *(float *)((int)pvVar12 + 0x434) = (float)puVar15[0x130] + 16.0;
            *(uint *)((int)pvVar12 + 0x438) = puVar15[0x131];
          }
          FUN_00454d10(this,pvVar12,0x60);
          piVar13 = (int *)FUN_00461250();
          iVar4 = *piVar13;
          uVar14 = extraout_ECX;
          if ((DAT_004cee78 & 0x8000) != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
            DAT_004cf221 = DAT_004cf221 + -1;
            uVar14 = extraout_ECX_00;
          }
          param_2 = FUN_00461920(uVar14,DAT_004ce8cc,iVar4);
          param_1 = puVar15[0xff];
          if (param_1 != 0) {
            if (16.0 < *(float *)(param_1 + 0x38)) {
              if (32.0 < *(float *)(param_1 + 0x38)) {
                param_1 = *(uint *)(&DAT_004b0c30 + *(short *)((int)puVar15 + 0x9f6) * 4);
              }
              else {
                param_1 = *(uint *)(&DAT_004b0c10 + *(short *)((int)puVar15 + 0x9f6) * 4);
              }
            }
            else {
              param_1 = *(uint *)(&DAT_004b0bd0 + *(short *)((int)puVar15 + 0x9f6) * 4);
            }
            param_2[0xef] = param_1;
          }
          puVar15[0x14f] = 0;
        }
      }
      puVar15 = puVar15 + 0x27e;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  return 0;
}


