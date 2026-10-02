/* undefined __fastcall FUN_0044cba0(undefined4 param_1, int param_2) @ 0044cba0  134 bytes */
#include "th12.h"

void __fastcall FUN_0044cba0(undefined4 param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = (&DAT_004b4540)[in_EAX * 3];
  if ((&DAT_004b4544)[iVar1 * 3] == in_EAX) {
    (&DAT_004b4544)[iVar1 * 3] = param_2;
  }
  else {
    (&DAT_004b4548)[iVar1 * 3] = param_2;
  }
  (&DAT_004b4540)[param_2 * 3] = (&DAT_004b4540)[in_EAX * 3];
  (&DAT_004b4544)[param_2 * 3] = (&DAT_004b4544)[in_EAX * 3];
  (&DAT_004b4548)[param_2 * 3] = (&DAT_004b4548)[in_EAX * 3];
  (&DAT_004b4540)[(&DAT_004b4544)[param_2 * 3] * 3] = param_2;
  (&DAT_004b4540)[(&DAT_004b4548)[param_2 * 3] * 3] = param_2;
  (&DAT_004b4540)[in_EAX * 3] = 0;
  return;
}


