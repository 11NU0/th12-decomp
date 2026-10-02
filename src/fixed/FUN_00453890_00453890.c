/* undefined4 __fastcall FUN_00453890(void * param_1) @ 00453890  69 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00453890(void *param_1)

{
  undefined extraout_DL;
  
  if (DAT_004d4754 == 0) {
    return 0xffffffff;
  }
  FUN_00453670(param_1,0x4cf4e8);
  FUN_00466bc0(*(int *)((int)DAT_004d4754 + 0xc),extraout_DL,0);
  FUN_00454b00();
  return 0;
}


