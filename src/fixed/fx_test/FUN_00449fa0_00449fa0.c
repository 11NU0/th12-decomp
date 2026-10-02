/* undefined4 __stdcall FUN_00449fa0(void) @ 00449fa0  314 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00449fa0(void)

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
  puVar1[2] = &LAB_0044a860;
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
  puVar1[2] = FUN_0044a870;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = unaff_EDI;
  puVar1[1] = puVar1[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)(unaff_EDI + 0xc) = puVar1;
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
  puVar1[2] = FUN_0044a880;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = unaff_EDI;
  puVar1[1] = puVar1[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)(unaff_EDI + 0x24) = puVar1;
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
  return 0;
}


