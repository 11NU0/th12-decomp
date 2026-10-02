/* undefined __stdcall FUN_0044ffb0(void) @ 0044ffb0  100 bytes */
#include "th12.h"

void FUN_0044ffb0(void)

{
  SystemParametersInfoA(0x10,0,&DAT_004cf41c,0);
  SystemParametersInfoA(0x53,0,&DAT_004cf420,0);
  SystemParametersInfoA(0x54,0,&DAT_004cf424,0);
  SystemParametersInfoA(0x11,0,(PVOID)0x0,2);
  SystemParametersInfoA(0x55,0,(PVOID)0x0,2);
  SystemParametersInfoA(0x56,0,(PVOID)0x0,2);
  QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_004cf408);
  QueryPerformanceCounter((LARGE_INTEGER *)&DAT_004cf410);
  return;
}


