/* undefined __fastcall FUN_0044cb00(int param_1) @ 0044cb00  79 bytes */
#include "th12.h"

void __fastcall FUN_0044cb00(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if ((&DAT_004b4540)[param_1 * 3] != 0) {
    iVar1 = (&DAT_004b4548)[param_1 * 3];
    if (iVar1 == 0) {
      iVar1 = (&DAT_004b4544)[param_1 * 3];
    }
    else if ((&DAT_004b4544)[param_1 * 3] != 0) {
      iVar1 = FUN_0044cc30();
      FUN_0044cb00(iVar1);
      FUN_0044cba0(extraout_ECX,iVar1);
      return;
    }
    FUN_0044cb50(param_1,iVar1);
  }
  return;
}


