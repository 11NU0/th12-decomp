/* undefined8 __thiscall FUN_0043f760(void * this, void * param_1) @ 0043f760  1118 bytes */
#include "th12.h"

undefined8 __fastcall FUN_0043f760(void *this,void *param_1)

{
  uint *puVar1;
  char cVar2;
  float *pfVar3;
  char *pcVar4;
  void *pvVar5;
  int *piVar6;
  void *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  undefined4 extraout_ECX_05;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  void *this_00;
  void *this_01;
  void *this_02;
  undefined4 extraout_ECX_08;
  void *extraout_ECX_09;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (*(int *)((int)param_1 + 0x1c) == 1) {
    DAT_004b0ce4 = DAT_004b0ce4 + 1;
    if (DAT_004d48b8 == 0) {
      if (DAT_004b0ce4 < 0x708) goto LAB_0043f882;
      pcVar4 = (&PTR_s_demo_demo2_rpy_004b33a4)[DAT_004b0ce8];
      DAT_004b0ce0 = DAT_004b0ce0 & 0xffffffbf | 0x20;
      iVar7 = (int)&DAT_004b43e8 - (int)pcVar4;
      do {
        cVar2 = *pcVar4;
        pcVar4[iVar7] = cVar2;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      pvVar5 = FUN_0043b6f0(&DAT_004b43e8);
      iVar7 = DAT_004b0ce8 + 1;
      iVar8 = (int)((ulonglong)((longlong)iVar7 * 0x55555555) >> 0x20) - iVar7;
      DAT_004b0ce8 = iVar7 + ((iVar8 >> 1) - (iVar8 >> 0x1f)) * 3;
      DAT_004b0cb0 = 0;
      piVar6 = (int *)((int)pvVar5 + 0xb8);
      do {
        if (*piVar6 != 0) break;
        DAT_004b0cb0 = DAT_004b0cb0 + 1;
        piVar6 = piVar6 + 9;
      } while (DAT_004b0cb0 < 8);
      DAT_004cee40 = 0xd;
      iVar7 = *(int *)((int)pvVar5 + 0x1c);
      DAT_004b0c90 = *(undefined4 *)((int)iVar7 + 0x5c);
      DAT_004b452c = ((char *)&DAT_004aebf0 + DAT_004b0cb0 * 0x40);
      DAT_004b0c94 = *(undefined4 *)((int)iVar7 + 0x60);
      DAT_004b0cac = DAT_004b0ca8;
      DAT_004b0ca8 = *(int *)((int)iVar7 + 100);
      DAT_004b0cb4 = DAT_004b0cb0;
      FUN_0043b450((int)pvVar5);
      FUN_0046ca4f(pvVar5);
      DAT_004ce8b0 = 1;
      this = extraout_ECX;
    }
    DAT_004b0ce4 = 0;
  }
LAB_0043f882:
  if (((*(byte *)((int)param_1 + 0x5c18) & 1) != 0) &&
     (*(int *)((int)param_1 + 0x5c14) = *(int *)((int)param_1 + 0x5c14) + 1,
     4 < *(int *)((int)param_1 + 0x5c14))) {
    FUN_004300d0(0,"bgm/th12_01.wav");
    if ((DAT_004ceae8 & 0x10) != 0) {
      FUN_00454960(4,0);
    }
    FUN_00454960(2,0);
    this = DAT_004b451c;
    *(undefined *)((int)DAT_004b451c + 0x1e9da) = 1;
    *(uint *)((int)param_1 + 0x5c18) = *(uint *)((int)param_1 + 0x5c18) & 0xfffffffe;
    *(undefined4 *)((int)param_1 + 0x5c14) = 0;
  }
  iVar7 = DAT_004ce8cc;
  switch(*(undefined4 *)((int)param_1 + 0x1c)) {
  case 0:
    FUN_00461be0(this,*(int *)(&DAT_004b50d4 + DAT_004ce8cc));
    FUN_00461be0(extraout_ECX_00,*(int *)(&DAT_004b50d8 + iVar7));
    FUN_00461be0(extraout_ECX_01,*(int *)(&DAT_004b50c8 + iVar7));
    FUN_00461be0(extraout_ECX_02,*(int *)(&DAT_004b50c0 + iVar7));
    FUN_00411b00(extraout_ECX_03);
    iVar7 = DAT_004ce8b0;
    if (DAT_004ce8b0 != 3) {
      if ((DAT_004b0ce0 & 0x20) == 0) {
        *(uint *)((int)param_1 + 0x5c18) = *(uint *)((int)param_1 + 0x5c18) | 1;
        *(undefined4 *)((int)param_1 + 0x5c14) = 0;
      }
      else {
        *(uint *)((int)param_1 + 0x5c18) = *(uint *)((int)param_1 + 0x5c18) & 0xfffffffe;
        DAT_004b0ca8 = DAT_004b0cac;
      }
      DAT_004b0ce0 = DAT_004b0ce0 & 0xffffffdf;
      if (iVar7 == 0) {
        *(uint *)((int)param_1 + 0x5c18) = *(uint *)((int)param_1 + 0x5c18) | 2;
        FUN_0043eee0(extraout_ECX_04,1);
        DAT_004ce8b0 = 1;
        this = extraout_ECX_07;
      }
      else {
        *(uint *)((int)param_1 + 0x5c18) = *(uint *)((int)param_1 + 0x5c18) & 0xfffffffd;
        if (iVar7 == 1) {
          if (DAT_004b0ca8 == 4) {
            iVar7 = *(int *)((int)param_1 + 0x30);
            if (iVar7 != 0) {
              if (iVar7 < 2) {
                *(int *)((int)param_1 + 0x28) = iVar7 + -1;
                FUN_0043eee0(extraout_ECX_04,1);
                puVar1 = (uint *)(*(int *)((int)param_1 + 0x10) + 4);
                *puVar1 = *puVar1 | 2;
                FUN_0043fde0(this_00,(int)param_1);
              }
              else {
                *(undefined4 *)((int)param_1 + 0x28) = 1;
                FUN_0043eee0(extraout_ECX_04,1);
                puVar1 = (uint *)(*(int *)((int)param_1 + 0x10) + 4);
                *puVar1 = *puVar1 | 2;
                FUN_0043fde0(this_01,(int)param_1);
              }
              break;
            }
            *(undefined4 *)((int)param_1 + 0x28) = 1;
          }
          FUN_0043eee0(extraout_ECX_04,1);
          puVar1 = (uint *)(*(int *)((int)param_1 + 0x10) + 4);
          *puVar1 = *puVar1 | 2;
          FUN_0043fde0(this_02,(int)param_1);
          break;
        }
        this = extraout_ECX_04;
        if (iVar7 == 2) {
          piVar6 = (int *)((int)param_1 + 0x28);
          *(undefined4 *)((int)param_1 + 0x30) = 10;
          iVar7 = *(int *)((int)param_1 + 0x30);
          if (iVar7 == 0) {
            *piVar6 = 3;
          }
          else if (iVar7 < 4) {
            *piVar6 = iVar7 + -1;
          }
          else {
            *piVar6 = 3;
          }
          FUN_00464900();
          FUN_0043eee0(extraout_ECX_08,0xb);
          puVar1 = (uint *)(*(int *)((int)param_1 + 0x10) + 4);
          *puVar1 = *puVar1 | 2;
          DAT_004ce8b0 = 1;
          this = extraout_ECX_09;
          goto switchD_0043f901_caseD_b;
        }
      }
      goto switchD_0043f901_caseD_1;
    }
    piVar6 = (int *)((int)param_1 + 0x28);
    *(undefined4 *)((int)param_1 + 0x30) = 10;
    iVar7 = *(int *)((int)param_1 + 0x30);
    if (iVar7 == 0) {
      *piVar6 = 0;
    }
    else if (iVar7 < 1) {
      *piVar6 = iVar7 + -1;
    }
    else {
      *piVar6 = 0;
    }
    FUN_00464900();
    FUN_0043eee0(extraout_ECX_05,0xe);
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x10) + 4);
    *puVar1 = *puVar1 | 2;
    DAT_004ce8b0 = 1;
    this = extraout_ECX_06;
  case 0xe:
    FUN_004480c0(this);
    break;
  case 1:
switchD_0043f901_caseD_1:
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x10) + 4);
    *puVar1 = *puVar1 | 2;
    FUN_0043fde0(this,(int)param_1);
    break;
  case 2:
    DAT_004cee40 = ~(DAT_004cee78 >> 0xd) & 1 | 2;
  case 9:
  case 0xc:
    FUN_00430240();
    break;
  case 3:
    FUN_004411d0(this);
    break;
  case 4:
    FUN_004435b0(this);
    break;
  case 5:
    FUN_00444c80(param_1);
    break;
  case 6:
    FUN_004452d0(this,param_1);
    break;
  case 7:
    FUN_00445a40(this,(int)param_1);
    break;
  case 8:
    FUN_00445fc0(this);
    break;
  case 10:
    FUN_004470c0(this,(int)param_1);
    break;
  case 0xb:
switchD_0043f901_caseD_b:
    FUN_004466a0(this,param_1);
    break;
  case 0xd:
    FUN_00449360(this,param_1);
    break;
  case 0xf:
    FUN_004489e0(param_1);
  }
  iVar7 = *(int *)((int)param_1 + 0x2b8);
  pfVar3 = *(float **)((int)param_1 + 0x2c0);
  *(int *)((int)param_1 + 0x2b4) = iVar7;
  if ((0.99 < *pfVar3) && (*pfVar3 < 1.01)) {
    *(int *)((int)param_1 + 0x2b8) = iVar7 + 1;
    *(float *)((int)param_1 + 700) = *(float *)((int)param_1 + 700) + 1.0;
    return CONCAT44(iVar7 + 1,1);
  }
  *(float *)((int)param_1 + 700) = *pfVar3 + *(float *)((int)param_1 + 700);
  uVar9 = FUN_004931e0(pfVar3,iVar7);
  *(int *)((int)param_1 + 0x2b8) = (int)uVar9;
  return CONCAT44((int)(uVar9 >> 0x20),1);
}


