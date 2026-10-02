/* undefined4 __stdcall FUN_00409530(void) @ 00409530  248 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00409530(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  
  iVar1 = FUN_0045fe60(6);
  *(int *)(&DAT_004debdc + unaff_EDI) = iVar1;
  if (iVar1 == 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_0049f6a8);
    return 0xffffffff;
  }
  *(int *)(unaff_EDI + 0x10) = unaff_EDI + 100;
  *(undefined2 *)(&DAT_004de716 + unaff_EDI) = 5;
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
  puVar2[2] = &LAB_0040a1f0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = unaff_EDI;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462380();
  *(undefined4 **)(unaff_EDI + 8) = puVar2;
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
  puVar2[2] = &LAB_0040a220;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = unaff_EDI;
  puVar2[1] = puVar2[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)(unaff_EDI + 0xc) = puVar2;
  return 0;
}


