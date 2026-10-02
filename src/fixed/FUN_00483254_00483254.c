/* undefined4 * __cdecl FUN_00483254(undefined4 * param_1, undefined4 param_2) @ 00483254  22 bytes */
#include "th12.h"

undefined4 * __cdecl FUN_00483254(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 2;
  }
  return param_1;
}


