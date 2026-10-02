/* undefined4 __stdcall FUN_00431d70(void) @ 00431d70  264 bytes */
#include "th12.h"

undefined4 FUN_00431d70(void)

{
  undefined4 *puVar1;
  int unaff_EDI;
  
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
  puVar1[2] = &LAB_00432700;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = unaff_EDI;
  puVar1[1] = puVar1[1] & 0xfffffffd | 1;
  FUN_00462380();
  *(undefined4 **)(unaff_EDI + 8) = puVar1;
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
  puVar1[2] = &LAB_00432710;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = unaff_EDI;
  puVar1[1] = puVar1[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)(unaff_EDI + 0xc) = puVar1;
  if ((*(uint *)(unaff_EDI + 0x20) & 1) == 0) {
    *(undefined4 *)(unaff_EDI + 0x18) = 0;
    *(undefined4 *)(unaff_EDI + 0x14) = 0;
    *(undefined4 *)(unaff_EDI + 0x10) = 0xfff0bdc1;
    *(undefined4 **)(unaff_EDI + 0x1c) = &DAT_004b2ed0;
    *(uint *)(unaff_EDI + 0x20) = *(uint *)(unaff_EDI + 0x20) | 1;
  }
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x10) = 0xffffffff;
  if ((*(uint *)(unaff_EDI + 0x34) & 1) == 0) {
    *(undefined4 *)(unaff_EDI + 0x2c) = 0;
    *(undefined4 *)(unaff_EDI + 0x28) = 0;
    *(undefined4 *)(unaff_EDI + 0x24) = 0xfff0bdc1;
    *(undefined4 **)(unaff_EDI + 0x30) = &DAT_004b2ed0;
    *(uint *)(unaff_EDI + 0x34) = *(uint *)(unaff_EDI + 0x34) | 1;
  }
  *(undefined4 *)(unaff_EDI + 0x24) = 0xffffffff;
  *(undefined4 *)(unaff_EDI + 0x2c) = 0;
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  return 0;
}


