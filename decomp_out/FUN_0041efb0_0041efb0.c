/* undefined4 __fastcall FUN_0041efb0(void * param_1) @ 0041efb0  142 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0041efb0(void *param_1)

{
  uint uVar1;
  void *extraout_ECX;
  int iVar2;
  
  iVar2 = 8;
  do {
    FUN_0045c900(param_1,DAT_004ce8cc);
    iVar2 = iVar2 + -1;
    param_1 = extraout_ECX;
  } while (iVar2 != 0);
  iVar2 = 8;
  do {
    FUN_0045c900(DAT_004ce8cc,DAT_004ce8cc);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((((DAT_004b43dc != 0) && (*(int *)(DAT_004b43dc + 0x1c) != 0)) &&
      (uVar1 = *(uint *)(*(int *)(DAT_004b43dc + 0x1c) + 0x26f8), (~(uVar1 >> 5) & 1) != 0)) &&
     ((~uVar1 & 1) != 0)) {
    FUN_0045c900(DAT_004ce8cc,DAT_004ce8cc);
  }
  return 1;
}


