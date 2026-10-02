/* uint __fastcall _siglookup(undefined4 param_1, int param_2, uint param_3) @ 004829c6  55 bytes */
#include "th12.h"

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2008 Release */

uint __fastcall _siglookup(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3;
  do {
    if (*(int *)((int)uVar1 + 4) == param_2) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_004adb9c * 0xc + param_3);
  if ((DAT_004adb9c * 0xc + param_3 <= uVar1) || (*(int *)((int)uVar1 + 4) != param_2)) {
    uVar1 = 0;
  }
  return uVar1;
}


