/* undefined __stdcall FUN_0043cf90(void) @ 0043cf90  132 bytes */

#include "th12.h"

void __stdcall FUN_0043cf90(void)

{
  byte *pbVar1;
  int *unaff_EBX;
  int iVar2;
  size_t local_4;
  
  _memset(unaff_EBX,0,0x1edfc);
  pbVar1 = FUN_00463c10(&local_4,1);
  *unaff_EBX = (int)pbVar1;
  FUN_0043ceb0();
  iVar2 = 0;
  do {
    FUN_0043ce00();
    iVar2 = iVar2 + 0x45f4;
  } while ((uint)(iVar2 / 0x45f4) < 7);
  FUN_0043d140(unaff_EBX);
  return;
}


