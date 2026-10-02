/* undefined4 __stdcall FUN_004046c0(int param_1, int param_2) @ 004046c0  728 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_004046c0(int param_1,int param_2)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  int unaff_EBX;
  short *unaff_ESI;
  short *psVar7;
  int iVar8;
  undefined4 uVar9;
  short *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  psVar7 = *(short **)((int)param_1 + 0x18);
  local_18 = 1;
  DAT_004cee34 = &DAT_004ced1c;
  local_1c = psVar7;
  FUN_00430a70();
  (**(code **)(*DAT_004ce8f0 + 0xbc))(DAT_004ce8f0,DAT_004cee34 + 0x33);
  _DAT_004cee38 = 2;
  *(undefined *)((int)DAT_004ce8cc + 0x4b5644) = 1;
  if (-1 < *psVar7) {
    do {
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x14) + *psVar7 * 4);
      if (*(char *)((int)iVar8 + 2) == param_2) {
        local_1c = *(short **)((int)psVar7 + 2);
        local_18 = *(undefined4 *)((int)psVar7 + 4);
        uStack_14 = *(undefined4 *)((int)psVar7 + 6);
        iVar5 = FUN_00403f10(iVar8,(float *)&local_1c,*(float *)((int)param_1 + 0x276c));
        if (iVar5 == 0) {
          *(byte *)((int)iVar8 + 3) = *(byte *)((int)iVar8 + 3) | 2;
          iVar5 = iVar8 + 0x1c;
          sVar4 = *(short *)((int)iVar8 + 0x1c);
          while (-1 < sVar4) {
            iVar8 = *(short *)((int)iVar5 + 6) * 0x4b4 + *(int *)((int)param_1 + 0x1c8);
            if (sVar4 == 0) {
              this = *(void **)((int)iVar8 + 0x47c);
              if (0x1ffffff < ((uint)this & 0xf800000)) {
                *(float *)((int)iVar8 + 0x430) = *(float *)((int)iVar5 + 8) + *(float *)((int)psVar7 + 2);
                *(float *)((int)iVar8 + 0x434) = *(float *)((int)iVar5 + 0xc) + *(float *)((int)psVar7 + 4);
                *(float *)((int)iVar8 + 0x438) = *(float *)((int)iVar5 + 0x10) + *(float *)((int)psVar7 + 6);
                if (NANP(*(float *)((int)iVar5 + 0x14)) == (*(float *)((int)iVar5 + 0x14) == 0.0)) {
                  fVar2 = *(float *)((int)iVar5 + 0x14);
                  fVar3 = *(float *)(*(int *)((int)iVar8 + 0x3f4) + 0x38);
                  this = (void *)((uint)this | 8);
                  *(void **)((int)iVar8 + 0x47c) = this;
                  *(float *)((int)iVar8 + 0x40) = fVar2 / fVar3;
                }
                if (NANP(*(float *)((int)iVar5 + 0x18)) == (*(float *)((int)iVar5 + 0x18) == 0.0)) {
                  fVar2 = *(float *)((int)iVar5 + 0x18);
                  this = *(void **)((int)iVar8 + 0x3f4);
                  fVar3 = *(float *)((int)this + 0x34);
                  *(uint *)((int)iVar8 + 0x47c) = *(uint *)((int)iVar8 + 0x47c) | 8;
                  *(float *)((int)iVar8 + 0x44) = fVar2 / fVar3;
                }
              }
              if ((*(uint *)((int)iVar8 + 0x47c) & 0xf800000) == 0x4000000) {
                if (DAT_004cf278 != 1) {
                  FUN_0045a3c0();
                  DAT_004cf278 = 1;
                  uVar9 = 1;
LAB_00404892:
                  (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x1c,uVar9);
                  this = extraout_ECX;
                  psVar7 = unaff_ESI;
                }
              }
              else if (DAT_004cf278 != 0) {
                FUN_0045a3c0();
                DAT_004cf278 = 0;
                uVar9 = 0;
                goto LAB_00404892;
              }
              uVar6 = *(uint *)((int)iVar8 + 0x47c) >> 0xc & 1;
              if ((uVar6 == 0) || (unaff_EBX == 0)) {
                if ((uVar6 == 0) && (unaff_EBX == 0)) {
                  FUN_0045a3c0();
                  (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0xe,1);
                  unaff_EBX = 1;
                  this = extraout_ECX_01;
                  psVar7 = unaff_ESI;
                }
              }
              else {
                FUN_0045a3c0();
                (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0xe,0);
                unaff_EBX = 0;
                this = extraout_ECX_00;
                psVar7 = unaff_ESI;
              }
              FUN_0045c900(this,DAT_004ce8cc);
              *(int *)((int)param_1 + 0x35b8) = *(int *)((int)param_1 + 0x35b8) + 1;
            }
            psVar1 = (short *)(iVar5 + *(short *)((int)iVar5 + 2));
            iVar5 = iVar5 + *(short *)((int)iVar5 + 2);
            sVar4 = *psVar1;
          }
          psVar7[1] = psVar7[1] | 1;
          *(int *)((int)param_1 + 0x35b0) = *(int *)((int)param_1 + 0x35b0) + 1;
        }
        else {
          *(int *)((int)param_1 + 0x35b4) = *(int *)((int)param_1 + 0x35b4) + 1;
          psVar7[1] = psVar7[1] & 0xfffe;
        }
      }
      psVar7 = psVar7 + 8;
      unaff_ESI = psVar7;
    } while (-1 < *psVar7);
    if (unaff_EBX == 0) {
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0xe,1);
    }
  }
  return 0;
}


