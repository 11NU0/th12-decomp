/* uint __fastcall FUN_00459a40(uint param_1) @ 00459a40  25 bytes */
#include "th12.h"

uint __fastcall FUN_00459a40(uint param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = (in_EAX & 0xff) * (param_1 & 0xff) >> 7;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  return uVar1;
}


