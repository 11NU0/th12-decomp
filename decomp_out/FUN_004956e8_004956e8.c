/* uint __cdecl FUN_004956e8(undefined4 param_1, uint param_2) @ 004956e8  22 bytes */
#include "th12.h"

uint __cdecl FUN_004956e8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}


