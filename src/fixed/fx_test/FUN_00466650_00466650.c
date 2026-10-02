/* undefined4 * __fastcall FUN_00466650(undefined4 param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4) @ 00466650  48 bytes */

#include "th12.h"

undefined4 * __fastcall
__fastcall FUN_00466650(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_EAX;
  
  FUN_00465d40(&param_3,param_1,in_EAX);
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_004a3b24;
  param_2[0x1c] = param_4;
  return param_2;
}


