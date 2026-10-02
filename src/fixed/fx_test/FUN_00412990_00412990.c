/* int __stdcall FUN_00412990(byte * param_1, undefined4 * param_2) @ 00412990  504 bytes */

#include "th12.h"

int __stdcall FUN_00412990(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar2 = DAT_004b43dc;
  pvVar3 = operator_new(0x27b8);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00413230(param_1);
  }
  *(undefined4 *)(iVar4 + 0x10a8) = *param_2;
  *(undefined4 *)(iVar4 + 0x10ac) = param_2[1];
  *(undefined4 *)(iVar4 + 0x10b0) = param_2[2];
  *(undefined4 *)(iVar4 + 0x2644) = param_2[3];
  *(undefined4 *)(iVar4 + 0x2648) = param_2[5];
  *(undefined4 *)(iVar4 + 0x264c) = param_2[5];
  *(undefined4 *)(iVar4 + 0x2660) = param_2[4];
  *(uint *)(iVar4 + 0x26f8) =
       *(uint *)(iVar4 + 0x26f8) ^ (param_2[6] << 0x12 ^ *(uint *)(iVar4 + 0x26f8)) & 0x40000;
  *(char *)(iVar4 + 0x1024) = '\x01' << ((byte)DAT_004b0ca8 & 0x1f);
  puVar6 = param_2 + 8;
  puVar7 = (undefined4 *)(iVar4 + 0x127c);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((*(uint *)(iVar4 + 0x26e0) & 1) == 0) {
    *(undefined4 *)(iVar4 + 0x26d8) = 0;
    *(undefined4 *)(iVar4 + 0x26d4) = 0;
    *(undefined4 *)(iVar4 + 0x26d0) = 0xfff0bdc1;
    *(undefined4 **)(iVar4 + 0x26dc) = &DAT_004b2ed0;
    *(uint *)(iVar4 + 0x26e0) = *(uint *)(iVar4 + 0x26e0) | 1;
  }
  *(undefined4 *)(iVar4 + 0x26d4) = 2;
  *(undefined4 *)(iVar4 + 0x26d8) = 0x40000000;
  *(undefined4 *)(iVar4 + 0x26d0) = 1;
  iVar5 = param_2[7];
  *(undefined4 *)(iVar4 + 0x1274) = 0;
  *(uint *)(iVar4 + 0x26f8) =
       *(uint *)(iVar4 + 0x26f8) ^ (iVar5 << 0x19 ^ *(uint *)(iVar4 + 0x26f8)) & 0x2000000;
  if (999 < (int)param_2[5]) {
    *(uint *)(iVar4 + 0x26f8) = *(uint *)(iVar4 + 0x26f8) | 0x20000000;
  }
  FUN_00413840((undefined4 *)(iVar4 + 0x1040));
  *(undefined4 *)(iVar4 + 0x27b4) = *(undefined4 *)(iVar2 + 0x74);
  *(uint *)(iVar4 + 0x26b8) = (*(uint *)(iVar2 + 0x74) & 1) + 3;
  *(undefined4 *)(iVar4 + 0x26bc) = 0x54;
  if (*(int *)(iVar4 + 0x1264) == 1) {
    switch(*(undefined4 *)(iVar4 + 0x1268)) {
    case 0:
    case 0x36:
      *(undefined4 *)(iVar4 + 0x26bc) = 0x54;
      break;
    case 5:
    case 0x37:
      *(undefined4 *)(iVar4 + 0x26bc) = 0x51;
      break;
    case 10:
    case 0x38:
      *(undefined4 *)(iVar4 + 0x26bc) = 0x57;
      break;
    case 0xf:
    case 0x39:
      *(undefined4 *)(iVar4 + 0x26bc) = 0x5a;
    }
  }
  *(undefined4 *)(iVar4 + 0x26c0) = 0;
  iVar5 = iVar4 + 0x12c0;
  if (*(int *)(iVar2 + 0x68) == 0) {
    *(int *)(iVar2 + 0x68) = iVar5;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x6c);
    if (*(int *)(iVar1 + 4) != 0) {
      *(int *)(iVar4 + 0x12c4) = *(int *)(iVar1 + 4);
      *(int *)(*(int *)(iVar1 + 4) + 8) = iVar5;
    }
    *(int *)(iVar1 + 4) = iVar5;
    *(int *)(iVar4 + 0x12c8) = iVar1;
  }
  *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + 1;
  *(int *)(iVar2 + 0x6c) = iVar5;
  *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x74);
  iVar5 = *(int *)(iVar2 + 0x74) + 1;
  *(int *)(iVar2 + 0x74) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(iVar2 + 0x74) = 1;
  }
  return iVar4;
}


