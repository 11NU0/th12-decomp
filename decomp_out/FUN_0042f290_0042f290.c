/* undefined4 __stdcall FUN_0042f290(void) @ 0042f290  141 bytes */
#include "th12.h"

undefined4 FUN_0042f290(void)

{
  undefined4 uStack_1c;
  int iStack_18;
  
  if (DAT_004cea94 != 0) {
    iStack_18 = 0x42f2a8;
    FUN_0045a3c0();
    iStack_18 = DAT_004cea94;
    uStack_1c = 0;
    (**(code **)(*DAT_004ce8f0 + 0x94))(DAT_004ce8f0);
    uStack_1c = DAT_004cede8;
    iStack_18 = DAT_004cedec;
    (**(code **)(*DAT_004ce8f0 + 0xac))(DAT_004ce8f0,1,&uStack_1c,3,DAT_004cf2a8,0x3f800000,0);
  }
  return 1;
}


