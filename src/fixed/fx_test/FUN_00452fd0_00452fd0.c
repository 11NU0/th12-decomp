/* undefined4 __stdcall FUN_00452fd0(undefined4 param_1) @ 00452fd0  66 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00452fd0(undefined4 param_1)

{
  _memset(&DAT_004cf4e8,0,0x52a0);
  DAT_004d4774 = param_1;
  DAT_004d4764 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_004530e0,
                              &DAT_004cf4e8,0,(LPDWORD)&DAT_004d476c);
  return 0;
}


