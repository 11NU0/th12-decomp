/* undefined8 __fastcall FUN_00432040(void * param_1) @ 00432040  128 bytes */
#include "th12.h"

undefined8 __fastcall FUN_00432040(void *param_1)

{
  int iVar1;
  int unaff_EDI;
  ulonglong uVar2;
  
  switch(*(undefined4 *)((int)unaff_EDI + 4)) {
  case 0:
    if (((((byte)DAT_004b0ce0 & 0x20) == 0) &&
        ((((DAT_004d48c4 & 0x100) != 0 || (((byte)DAT_004cee78 & 0x10) != 0)) &&
         (iVar1 = FUN_004358c0(), iVar1 != 0)))) && (0x1d < *(int *)((int)DAT_004b44e8 + 0x14))) {
      FUN_00432720();
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    FUN_004329a0(param_1,unaff_EDI);
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    FUN_00433bb0(param_1,unaff_EDI);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    FUN_00434900(param_1,unaff_EDI);
  }
  FUN_00464a80();
  uVar2 = FUN_00464a80();
  return CONCAT44((int)(uVar2 >> 0x20),1);
}


