/* undefined4 __stdcall FUN_00402a40(int param_1) @ 00402a40  630 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00402a40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x35d4) = DAT_004b0cb0;
  DAT_004b43c0 = param_1;
  iVar1 = FUN_004044f0(param_1);
  if (iVar1 != 0) {
    FUN_00464300(&DAT_0049f4d8);
    return 0xffffffff;
  }
  puVar2 = &DAT_004ced1c;
  puVar3 = (undefined4 *)(param_1 + 0x360c);
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x360c) = 0;
  *(undefined4 *)(param_1 + 0x3610) = 0;
  *(undefined4 *)(param_1 + 0x3614) = 0xc4160000;
  *(undefined4 *)(param_1 + 0x3618) = 0;
  *(undefined4 *)(param_1 + 0x361c) = 0x43960000;
  *(undefined4 *)(param_1 + 0x3620) = 0x44160000;
  *(undefined4 *)(param_1 + 0x3624) = 0;
  *(undefined4 *)(param_1 + 0x3628) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x362c) = 0;
  *(undefined4 *)(param_1 + 0x276c) = 0x4b12a310;
  *(undefined4 *)(param_1 + 0x3648) = 0;
  *(undefined4 *)(param_1 + 0x364c) = 0;
  *(undefined4 *)(param_1 + 0x3650) = 0;
  puVar2 = (undefined4 *)operator_new(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2[1] & 0xfffffffe;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = 0;
    puVar2[5] = puVar2;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  puVar2[2] = FUN_00403ec0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = param_1;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462380();
  *(undefined4 **)(param_1 + 8) = puVar2;
  puVar2 = (undefined4 *)operator_new(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2[1] & 0xfffffffe;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = 0;
    puVar2[5] = puVar2;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  puVar2[2] = &LAB_00403ed0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = param_1;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)(param_1 + 0xc) = puVar2;
  puVar2 = (undefined4 *)operator_new(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2[1] & 0xfffffffe;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = 0;
    puVar2[5] = puVar2;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  puVar2[2] = &LAB_00403ee0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = param_1;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)(param_1 + 0x3600) = puVar2;
  *(undefined4 *)(param_1 + 0x35d8) = 0;
  if ((*(uint *)(param_1 + 0x48) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0xfff0bdc1;
    *(undefined4 **)(param_1 + 0x44) = &DAT_004b2ed0;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 1;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(uint *)(param_1 + 0x35bc) = *(uint *)(param_1 + 0x35bc) | 1;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return 0;
}


