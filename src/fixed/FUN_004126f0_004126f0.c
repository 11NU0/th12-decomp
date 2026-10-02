/* undefined __fastcall FUN_004126f0(int param_1, undefined4 param_2, undefined4 param_3) @ 004126f0  26 bytes */
#include "th12.h"

void __fastcall FUN_004126f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_004b43e4;
  *(undefined4 *)(DAT_004b43e4 + 0x6cf8 + param_1 * 8) = param_3;
  *(undefined4 *)(iVar1 + 0x6cfc + param_1 * 8) = param_2;
  return;
}


