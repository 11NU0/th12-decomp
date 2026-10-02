/* undefined __stdcall FUN_00452a60(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) @ 00452a60  1133 bytes */
#include "th12.h"

void __stdcall FUN_00452a60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  
  switch(param_2) {
  case 0:
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
      pcRam00000008 = (code *)((void *)0x00451ed0);
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[2] = ((void *)0x00451ed0);
    }
    goto LAB_00452c07;
  case 1:
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
      pcRam00000008 = FUN_004526e0;
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[2] = FUN_004526e0;
    }
    goto LAB_00452e4f;
  case 2:
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
      pcRam00000008 = (code *)((void *)0x004523e0);
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[2] = ((void *)0x004523e0);
    }
    goto LAB_00452b78;
  case 3:
    *(undefined4 *)((int)param_1 + 0x18) = 0xff;
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
    }
    puVar1[2] = ((void *)0x00451ed0);
LAB_00452b78:
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[8] = param_1;
    puVar1[1] = puVar1[1] | 3;
    FUN_00462380();
    *(undefined4 **)((int)param_1 + 8) = puVar1;
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
      pcRam00000008 = FUN_00452470;
    }
    else {
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[2] = FUN_00452470;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
    }
    puVar1[1] = puVar1[1] | 3;
    puVar1[2] = FUN_004525d0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[8] = param_1;
    FUN_00462380();
    *(undefined4 **)((int)param_1 + 8) = puVar1;
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
      pcRam00000008 = FUN_00452680;
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[2] = FUN_00452680;
    }
    break;
  case 5:
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
    }
    puVar1[2] = ((void *)0x004523e0);
LAB_00452c07:
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[8] = param_1;
    puVar1[1] = puVar1[1] | 3;
    FUN_00462380();
    *(undefined4 **)((int)param_1 + 8) = puVar1;
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
      pcRam00000008 = FUN_00452350;
    }
    else {
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[2] = FUN_00452350;
    }
    break;
  case 6:
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
    }
    puVar1[1] = puVar1[1] | 3;
    puVar1[2] = ((void *)0x004524c0);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[8] = param_1;
    FUN_00462380();
    *(undefined4 **)((int)param_1 + 8) = puVar1;
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
      pcRam00000008 = FUN_00452540;
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[2] = FUN_00452540;
    }
    break;
  case 7:
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
    }
    puVar1[1] = puVar1[1] | 3;
    puVar1[2] = ((void *)0x004524c0);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[8] = param_1;
    FUN_00462380();
    *(undefined4 **)((int)param_1 + 8) = puVar1;
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
    }
    puVar1[2] = ((void *)0x00452580);
    break;
  case 8:
    puVar1 = (undefined4 *)operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = 0;
      puVar1[5] = puVar1;
      puVar1[6] = 0;
      puVar1[7] = 0;
    }
    puVar1[2] = ((void *)0x004527f0);
LAB_00452e4f:
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[8] = param_1;
    puVar1[1] = puVar1[1] | 3;
    FUN_00462380();
    *(undefined4 **)((int)param_1 + 8) = puVar1;
  default:
    goto switchD_00452a77_caseD_9;
  }
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  puVar1[1] = puVar1[1] | 3;
  FUN_00462420();
  *(undefined4 **)((int)param_1 + 0xc) = puVar1;
switchD_00452a77_caseD_9:
  *(code **)(*(int *)((int)param_1 + 8) + 0x10) = FUN_00452960;
  if ((*(uint *)((int)param_1 + 0x40) & 1) == 0) {
    *(undefined4 *)((int)param_1 + 0x38) = 0;
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    *(undefined4 *)((int)param_1 + 0x30) = 0xfff0bdc1;
    *(undefined4 **)((int)param_1 + 0x3c) = &DAT_004b2ed0;
    *(uint *)((int)param_1 + 0x40) = *(uint *)((int)param_1 + 0x40) | 1;
  }
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x10) = param_2;
  *(undefined4 *)((int)param_1 + 0x1c) = param_3;
  *(undefined4 *)((int)param_1 + 0x20) = param_4;
  *(undefined4 *)((int)param_1 + 0x24) = param_5;
  *(undefined4 *)((int)param_1 + 0x28) = param_6;
  return;
}


