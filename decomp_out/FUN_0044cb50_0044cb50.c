/* undefined __fastcall FUN_0044cb50(undefined4 param_1, int param_2) @ 0044cb50  80 bytes */
#include "th12.h"

void __fastcall FUN_0044cb50(undefined4 param_1,int param_2)

{
  int iVar1;
  int unaff_ESI;
  
  (&DAT_004b4540)[param_2 * 3] = (&DAT_004b4540)[unaff_ESI * 3];
  iVar1 = (&DAT_004b4540)[unaff_ESI * 3];
  if ((&DAT_004b4548)[iVar1 * 3] == unaff_ESI) {
    (&DAT_004b4548)[iVar1 * 3] = param_2;
    (&DAT_004b4540)[unaff_ESI * 3] = 0;
    return;
  }
  (&DAT_004b4544)[iVar1 * 3] = param_2;
  (&DAT_004b4540)[unaff_ESI * 3] = 0;
  return;
}


