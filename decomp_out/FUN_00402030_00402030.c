/* undefined4 __stdcall FUN_00402030(float param_1) @ 00402030  101 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402030(float param_1)

{
  FUN_0045a3c0();
  FUN_00401790(param_1,1);
  FUN_0045a3c0();
  DAT_004cee34 = &DAT_004cec04;
  FUN_00430a70();
  (**(code **)(*DAT_004ce8f0 + 0xbc))(DAT_004ce8f0,DAT_004cee34 + 0xcc);
  _DAT_004cee38 = 1;
  return 1;
}


