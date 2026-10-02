/* undefined __fastcall FUN_00453120(undefined4 * param_1, HWND param_2) @ 00453120  791 bytes */

#include "th12.h"

void __fastcall FUN_00453120(undefined4 *param_1,HWND param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&pvStack_4c;
  iVar2 = 0;
  puVar3 = param_1 + 0x662;
  do {
    puVar3[1] = 0xffffffff;
    piVar4 = &DAT_004ae5a0;
    do {
      if (*piVar4 == iVar2) break;
      piVar4 = piVar4 + 5;
    } while (piVar4 != (int *)0x0);
    puVar3[3] = iVar2;
    puVar3[2] = piVar4;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 6;
  } while (iVar2 < 0x3c);
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  piVar4 = (int *)operator_new(4);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = 0;
  }
  param_1[4] = piVar4;
  piVar1 = (int *)*piVar4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar4 = 0;
  }
  iVar2 = DirectSoundCreate8(0,piVar4,0);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(int *)*piVar4 + 0x18))((int *)*piVar4,param_2,2);
    if (-1 < iVar2) {
      FUN_00465690(piVar4);
      *param_1 = *(undefined4 *)param_1[4];
      uStack_1c = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      uStack_48 = 0x20001;
      uStack_38 = 0;
      puStack_18 = &uStack_48;
      puVar3 = param_1 + 2;
      uStack_3c = 0x100004;
      param_1[6] = 0;
      uStack_28 = 0x24;
      uStack_24 = 0x8008;
      uStack_20 = 0x8000;
      uStack_44 = 0xac44;
      uStack_40 = 0x2b110;
      iVar2 = (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,&uStack_28,puVar3,0);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*(int *)*puVar3 + 0x2c))
                          ((int *)*puVar3,0,0x8000,&pvStack_4c,&uStack_2c,&uStack_34,&uStack_30,0);
        if (-1 < iVar2) {
          _memset(pvStack_4c,0,0x8000);
          (**(code **)(*(int *)*puVar3 + 0x4c))
                    ((int *)*puVar3,pvStack_4c,uStack_2c,uStack_34,uStack_30);
          (**(code **)(*(int *)*puVar3 + 0x30))((int *)*puVar3,0,0,1);
          param_1[0x14a5] = 100;
          param_1[0x14a6] = 100;
          SetTimer(param_2,0,0xfa,(TIMERPROC)0x0);
          param_1[3] = param_2;
          piVar4 = &DAT_004ae5a4;
          while (DAT_004d4770 != 2) {
            iVar2 = FUN_00454580((&PTR_s_se_plst00_wav_004aea50)[*piVar4]);
            if (iVar2 != 0) {
              FUN_00464220(&DAT_004b0ec8,&DAT_004a2e34);
              ___security_check_cookie_4(local_4 ^ (uint)&pvStack_4c);
              return;
            }
            piVar4 = piVar4 + 5;
            if (0x4aea53 < (int)piVar4) {
              FUN_00464220(&DAT_004b0ec8,&DAT_004a2e6c);
              ___security_check_cookie_4(local_4 ^ (uint)&pvStack_4c);
              return;
            }
          }
        }
      }
      goto LAB_004533e9;
    }
  }
  FUN_00464220(&DAT_004b0ec8,&DAT_004a2e04);
  piVar4 = (int *)param_1[4];
  if (piVar4 != (int *)0x0) {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar4 = 0;
    }
    FUN_0046ca4f(piVar4);
    param_1[4] = 0;
  }
LAB_004533e9:
  ___security_check_cookie_4(local_4 ^ (uint)&pvStack_4c);
  return;
}


